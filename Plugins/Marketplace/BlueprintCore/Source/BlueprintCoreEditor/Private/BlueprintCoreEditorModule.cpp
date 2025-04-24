/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreEditorModule.h"

#include <BlueprintCoreBlueprint.h>
#include <BlueprintCoreTypes.h>
#include <BlueprintCoreEditorTypes.h>

#include "AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "FileHelpers.h"
#include "IAssetTools.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Slate/SBlueprintCoreWindow.h"
#include "Slate/BlueprintCoreStyle.h"
#include "Widgets/Notifications/SNotificationList.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreEditorModule"

IBlueprintCoreCompiler* FBlueprintCoreEditorModule::s_Compiler = nullptr;

void FBlueprintCoreEditorModule::StartupModule()
{
	FBlueprintCoreStyle::Initialize();
	FBlueprintCoreStyle::ReloadTextures();

	FContentBrowserModule* ContentBrowserModule = FModuleManager::GetModulePtr<FContentBrowserModule>(TEXT("ContentBrowser"));
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	UAssetEditorSubsystem* AssetEditorSubsystem = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();

	s_Compiler = new IBlueprintCoreCompiler();
	IBlueprintCoreCompiler* Compiler = s_Compiler;
	KismetCompilerModule.GetCompilers().AddUnique(static_cast<IBlueprintCompiler*>(Compiler));

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	m_AssetTypeActions = MakeShareable(new FAssetTypeActions_BlueprintBlueprintCore);
	AssetTools.RegisterAssetTypeActions(m_AssetTypeActions.ToSharedRef());

	RegisterContentBrowserAssetExtender(ContentBrowserModule);

	if (AssetEditorSubsystem)
	{
		AssetEditorSubsystem->OnAssetEditorOpened().AddLambda([this, AssetEditorSubsystem](UObject* asset)
			{
				if (UBlueprintCoreBlueprint* BlueprintAsset = Cast<UBlueprintCoreBlueprint>(
					asset))
				{
					if (BlueprintAsset && !BlueprintAsset->IsUnlocked())
					{
						AssetEditorSubsystem->CloseAllEditorsForAsset(asset);

						FBlueprintCoreHelpers::CreateErrorMessage("This blueprint is locked, key file not found in project");
						return;
					}

					if (!BlueprintAsset->OnCompiled().IsBoundToObject(this))
					{
						BlueprintAsset->OnCompiled().AddRaw(this, &FBlueprintCoreEditorModule::OnBlueprintCompiled);
					}
				}
			}
		);

		AssetEditorSubsystem->OnAssetEditorRequestedOpen().AddLambda([this, AssetEditorSubsystem](UObject* asset)
		{
			if (UBlueprintCoreBlueprint* BlueprintAsset = Cast<UBlueprintCoreBlueprint>(
				asset))
			{
				if (BlueprintAsset && !BlueprintAsset->IsUnlocked())
				{
					AssetEditorSubsystem->CloseAllEditorsForAsset(asset);

					FBlueprintCoreHelpers::CreateErrorMessage("This blueprint is locked, key file not found in project");
					return;
				}
			}
		});
	}

	m_OnInMemoryAssetCreated = AssetRegistryModule.Get().OnInMemoryAssetCreated().AddLambda([this](UObject* obj)
	{
		if (obj)
		{
			if (UBlueprintCoreKey* KeyFile = Cast<UBlueprintCoreKey>(obj))
			{
				KeyFile->GenerateUniqueKeyId();
				FBlueprintCoreHelpers::HandleSaving(KeyFile->GetOutermost(), false);
				GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(obj);
			}
		}
	});

	FKismetEditorUtilities::RegisterOnBlueprintCreatedCallback(this, UObject::StaticClass(), FKismetEditorUtilities::FOnBlueprintCreated::CreateLambda([this](UBlueprint* blueprint)
	{
		if (UBlueprintCoreBlueprint* Blueprint = Cast<UBlueprintCoreBlueprint>(blueprint))
		{
			Blueprint->ApplyDefaultFlags(UBlueprintCoreSettings::Get()->GetDefaultFlags());
		}
	}));

	FBlueprintCoreModule::s_OnBlueprintCoreError.AddLambda([](const FString& message)
	{
		FNotificationInfo Info(FText::FromString(message));
		Info.ExpireDuration = 5.0f;
		Info.bUseSuccessFailIcons = true;

		TSharedPtr<SNotificationItem> SaveMessagePtr = FSlateNotificationManager::Get().AddNotification(Info);
		SaveMessagePtr->SetCompletionState(SNotificationItem::CS_Fail);
	});

	FBlueprintCoreModule::s_OnBlueprintCorePopupMessage.AddLambda([](const FString& message)
	{
		FNotificationInfo Info(FText::FromString(message));
		Info.ExpireDuration = 5.0f;
		Info.bUseSuccessFailIcons = true;

		TSharedPtr<SNotificationItem> SaveMessagePtr = FSlateNotificationManager::Get().AddNotification(Info);
		SaveMessagePtr->SetCompletionState(SNotificationItem::CS_None);
	});


	FBlueprintCoreModule::s_OnBlueprintCoreSaveRequested.AddLambda([](UPackage* package, bool bPromptSaving)
	{
		if (bPromptSaving)
		{
			bPromptSaving = UBlueprintCoreSettings::Get()->bPromptSaving;
		}

		if (package)
		{
			TArray<UPackage*> PackagesToSave;
			PackagesToSave.Add(package);
			FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave, false, bPromptSaving);
		}
	});
	
}

void FBlueprintCoreEditorModule::ShutdownModule()
{
	FContentBrowserModule* ContentBrowserModule = FModuleManager::GetModulePtr<FContentBrowserModule>(TEXT("ContentBrowser"));
	UnregisterContentBrowserAssetExtender(ContentBrowserModule);
	FKismetEditorUtilities::UnregisterAutoBlueprintNodeCreation(this);
}

IMPLEMENT_MODULE(FBlueprintCoreEditorModule, BlueprintCoreEditor)

void FBlueprintCoreEditorModule::RegisterContentBrowserAssetExtender(FContentBrowserModule* contentBrowserModule)
{
	if (contentBrowserModule)
	{
		const auto ExtendContentBrowserAssetSelectionMenu =
			FContentBrowserMenuExtender_SelectedAssets::CreateLambda(
				[&](const TArray<FAssetData>& SelectedAssets)-> TSharedRef<FExtender>
				{
					TSharedRef<FExtender> Extender(new FExtender());

					Extender->AddMenuExtension(
						"GetAssetActions",
						EExtensionHook::After,
						nullptr,
						FMenuExtensionDelegate::CreateStatic(&FBlueprintCoreMenuExtensions::CreateAssetContextMenu,
															SelectedAssets)
					);

					return Extender;
				});

		TArray<FContentBrowserMenuExtender_SelectedAssets>& CBAssetMenuExtenderDelegates = contentBrowserModule->
			GetAllAssetViewContextMenuExtenders();
		m_ContentBrowserAssetExtenderDelegateHandle = CBAssetMenuExtenderDelegates[CBAssetMenuExtenderDelegates.Add(
			ExtendContentBrowserAssetSelectionMenu)].GetHandle();
	}
}

void FBlueprintCoreEditorModule::UnregisterContentBrowserAssetExtender(FContentBrowserModule* contentBrowserModule)
{
	if (contentBrowserModule)
	{
		TArray<FContentBrowserMenuExtender_SelectedAssets>& CBAssetMenuExtenderDelegates = contentBrowserModule->
			GetAllAssetViewContextMenuExtenders();
		CBAssetMenuExtenderDelegates.RemoveAll([&](const FContentBrowserMenuExtender_SelectedAssets& Delegate)
		{
			return Delegate.GetHandle() == m_ContentBrowserAssetExtenderDelegateHandle;
		});
	}
}

void FBlueprintCoreEditorModule::OnBlueprintCompiled(UBlueprint* blueprint)
{
	if (UBlueprintCoreBlueprint* Blueprint = Cast<UBlueprintCoreBlueprint>(blueprint))
	{
		const FString Username = FPlatformProcess::UserName();
	}
}

void FBlueprintCoreMenuExtensions::CreateAssetContextMenu(FMenuBuilder& menuBuilder, TArray<FAssetData> objects)
{
	if (objects.Num() == 1)
	{
		UObject* CurrentObject = objects[0].GetAsset();

		if (UBlueprintCoreBlueprint* BlueprintAsset = Cast<UBlueprintCoreBlueprint>(CurrentObject))
		{
			UBlueprintCoreSettings* Settings = UBlueprintCoreSettings::Get();

			menuBuilder.AddMenuEntry(
				LOCTEXT("BlueprintCoreManageBlueprintText", "Manage Blueprint"),
				LOCTEXT("BlueprintCoreManageBlueprintTooltipText", "Open the BlueprintCore window"),
				FSlateIcon(FBlueprintCoreStyle::Get().GetStyleSetName(), "BlueprintCore.BlueprintIcon"),
				FExecuteAction::CreateLambda([BlueprintAsset, Settings]()
				{
					TArray<TSharedRef<SWindow>> OutWindows;
					FSlateApplication::Get().GetAllVisibleWindowsOrdered(OutWindows);

					for (auto& Element : OutWindows)
					{
						if (Element->GetTitle().EqualTo(FText::FromString("Manage Blueprint")))
						{
							FSlateApplication::Get().RequestDestroyWindow(Element);
						}
					}
					
					TSharedPtr<SWindow> BlueprintCoreWindow = SNew(SWindow)
											.Title(LOCTEXT("BlueprintCoreManageBlueprintText", "Manage Blueprint"))
											.SupportsMaximize(false)
											.SupportsMinimize(false)
											.MinHeight(550.f)
											.Style(&FBlueprintCoreStyle::Get().GetWidgetStyle<FWindowStyle>("BlueprintCore.Window"))
											.MinWidth(600.f);

					BlueprintCoreWindow->SetContent(SNew(SBlueprintCoreWindow).BlueprintAsset(BlueprintAsset));
					FSlateApplication::Get().AddWindowAsNativeChild(BlueprintCoreWindow.ToSharedRef(), FGlobalTabmanager::Get()->GetRootWindow().ToSharedRef());
					

					FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

				})
			);
		}
	}
}

#undef LOCTEXT_NAMESPACE
