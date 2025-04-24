/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreModule.h"
#include "BlueprintCoreSettings.h"
#include "BlueprintCoreHelpers.h"
#include "BlueprintCoreLogging.h"
#include "BlueprintCorePCH.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"
DEFINE_LOG_CATEGORY(LogBlueprintCore);

TArray<TWeakObjectPtr<UBlueprintCoreKey>> FBlueprintCoreModule::s_LoadedKeyFiles;
FOnBlueprintCoreKeyFileAdded FBlueprintCoreModule::s_OnBlueprintCoreKeyFileAdded;
FOnBlueprintCoreError FBlueprintCoreModule::s_OnBlueprintCoreError;
FOnBlueprintCorePopupMessage FBlueprintCoreModule::s_OnBlueprintCorePopupMessage;
FOnBlueprintCoreSaveRequested FBlueprintCoreModule::s_OnBlueprintCoreSaveRequested;
FString FBlueprintCoreModule::s_PluginVersion;

void FBlueprintCoreModule::StartupModule()
{
	const TSharedPtr<IPlugin> PluginPtr = IPluginManager::Get().FindPlugin("BlueprintCore");

	if (PluginPtr)
	{
		s_PluginVersion = PluginPtr->GetDescriptor().VersionName;
	}
	
	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));
	UE_LOG(LogTemp, Log, TEXT("Using BlueprintCore Version: %s"), *s_PluginVersion);
	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));

	auto InitializeTickerDelegate = FTickerDelegate::CreateLambda([this](float)
	{
		if (GEngine && GEngine->IsInitialized())
		{
			UBlueprintCoreSettings::Get();
			return false;
		}

		return true;
	});

#if UE_VERSION_NEWER_THAN(4,27,2)
	FTSTicker::GetCoreTicker().AddTicker(InitializeTickerDelegate, 0.1f);
#else
	FTicker::GetCoreTicker().AddTicker(InitializeTickerDelegate, 0.1f);
#endif

#if WITH_EDITOR

	LogVerbose("Searching for Key Files..");

	const auto FindKeysTickerDelegate = FTickerDelegate::CreateLambda([this](float)
	{
		if (GEngine && GEngine->IsInitialized())
		{
			const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
			QUICK_SCOPE_CYCLE_COUNTER(FBlueprintCoreModule_FindBlueprintCoreKeyFiles);

			const IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
			TArray<FAssetData> Assets;
			AssetRegistry.GetAssetsByClass(UBlueprintCoreKey::StaticClass()->GetFName(), Assets, true);
			
			for (auto Element : Assets)
			{
				if (UBlueprintCoreKey* KeyFile = Cast<UBlueprintCoreKey>(Element.GetAsset()))
				{
					if (!s_LoadedKeyFiles.FindByPredicate([KeyFile](const TWeakObjectPtr<UBlueprintCoreKey>& other)
					{
						return other.IsValid() && other->GetKeyGuid() == KeyFile->GetKeyGuid();
					}))
					{
						s_LoadedKeyFiles.AddUnique(KeyFile);
						
						s_OnBlueprintCoreKeyFileAdded.Broadcast(KeyFile);
						
						LogVerbose("Found Key File: (%s)", *Element.ObjectPath.ToString());
					};
				}
			}
		}
		return true;
	});

#if UE_VERSION_NEWER_THAN(4,27,2)
	FTSTicker::GetCoreTicker().AddTicker(FindKeysTickerDelegate, 3.0f);
#else
	FTicker::GetCoreTicker().AddTicker(FindKeysTickerDelegate, 3.0f);

#endif
#endif
}

void FBlueprintCoreModule::ShutdownModule()
{
	for (auto Element : s_LoadedKeyFiles)
	{
		Element.Reset();
		Element = nullptr;
	}

	s_LoadedKeyFiles.Empty();
}

IMPLEMENT_MODULE(FBlueprintCoreModule, BlueprintCore)


TArray<TWeakObjectPtr<UBlueprintCoreKey>> FBlueprintCoreModule::GetLoadedKeyFiles()
{
	QUICK_SCOPE_CYCLE_COUNTER(FBlueprintCoreModule_GetLoadedKeyFiles);
	
	TArray<TWeakObjectPtr<UBlueprintCoreKey>> Array;

	for (auto Element : s_LoadedKeyFiles)
	{
		if (Element.IsValid())
			Array.Add(Element);
	}
	
	return Array;
}

#undef LOCTEXT_NAMESPACE
