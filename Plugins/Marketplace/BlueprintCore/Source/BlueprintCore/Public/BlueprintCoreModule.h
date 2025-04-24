/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "BlueprintCoreTypes.h"
#include "BlueprintCoreBlueprint.h"

DECLARE_LOG_CATEGORY_EXTERN(LogBlueprintCore, Log, All);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnBlueprintCoreKeyFileAdded, class UBlueprintCoreKey*);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnBlueprintCoreError, const FString&);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnBlueprintCorePopupMessage, const FString&);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnBlueprintCoreSaveRequested, UPackage*, bool /* bPromtSaving */);

class IBlueprintCoreCompiler;
class FContentBrowserModule;

class BLUEPRINTCORE_API FBlueprintCoreModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
public:
	static TArray<TWeakObjectPtr<UBlueprintCoreKey>> GetLoadedKeyFiles();
	static FOnBlueprintCoreKeyFileAdded s_OnBlueprintCoreKeyFileAdded;
	static FOnBlueprintCoreError s_OnBlueprintCoreError;
	static FOnBlueprintCorePopupMessage s_OnBlueprintCorePopupMessage;
	static FOnBlueprintCoreSaveRequested s_OnBlueprintCoreSaveRequested;
	static FString s_PluginVersion;
private:
	static TArray<TWeakObjectPtr<UBlueprintCoreKey>> s_LoadedKeyFiles;

};


