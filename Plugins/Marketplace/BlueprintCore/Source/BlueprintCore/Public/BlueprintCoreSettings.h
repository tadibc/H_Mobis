/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"

#include "BlueprintCoreModule.h"
#include "BlueprintCoreTypes.h"
#include "Engine/DeveloperSettings.h"
#include <Misc/EngineVersionComparison.h>
#include "BlueprintCoreSettings.generated.h"

class UBlueprintCoreKey;

UCLASS(config = Engine, defaultconfig, meta = (DisplayName = "BlueprintCore Plugin"))
class BLUEPRINTCORE_API UBlueprintCoreSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UBlueprintCoreSettings();
public:
	static UBlueprintCoreSettings* Get()
	{
		if (!bInitialized)
		{
			DefaultSettings = DuplicateObject(GetMutableDefault<UBlueprintCoreSettings>(), nullptr);
			DefaultSettings->AddToRoot();
			bInitialized = true;
		}

		return DefaultSettings;
	}

	static void Destroy()
	{
		if (bInitialized)
		{
			if (UObjectInitialized() && DefaultSettings)
			{
				DefaultSettings->RemoveFromRoot();
#if UE_VERSION_NEWER_THAN(4,27,2)
				DefaultSettings->MarkAsGarbage();
#else
				DefaultSettings->MarkPendingKill();
#endif
			}

			DefaultSettings = nullptr;
			bInitialized = false;
		}
	}
	uint32 GetDefaultFlags()
	{
		uint32 Flags = 0;
        Flags |= bReadOnly << 1;
        Flags |= bAllowRenaming << 2;
        Flags |= bSupportsGlobalVariables << 3;
        Flags |= bSupportsLocalVariables << 4;
        Flags |= bSupportsFunctions << 5;
        Flags |= bSupportsMacros << 6;
        Flags |= bSupportsDelegates << 7;
        Flags |= bSupportsEventGraphs << 8;
        Flags |= bSupportsAnimLayers << 9;
        Flags |= bGraphAllowDeletion << 10;

		return Flags;
	}
private:
	static bool bInitialized;
	static UBlueprintCoreSettings* DefaultSettings;
public:
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool bCreateCoreBlueprints;
	// Prompt the user to save blueprints on modification, if false saving will be done automatically and in silent mode. 
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool bPromptSaving;
	/** True if the Manage Blueprint window should always be on top of all other windows */
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings")
		FColor BlueprintColor;
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings")
		FColor IconLockedColor;
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings")
		FColor IconUnlockedColor;
	//UPROPERTY(config, BlueprintReadOnly, VisibleAnywhere, Category = "Settings", meta = (AllowedClasses = "BlueprintCoreKey"))
		TArray<FSoftObjectPath> KeyFiles;
	// Make the blueprint Read-Only
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bReadOnly : 1;
	// Allow renaming of blueprint nodes */
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bAllowRenaming : 1;
	// This blueprint supports global variables
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsGlobalVariables : 1;
	// This blueprint supports global variables
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsLocalVariables : 1;
	// This blueprint supports functions
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsFunctions : 1;
	// This blueprint supports macros
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsMacros : 1;
	// This blueprint supports delegates
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsDelegates : 1;
	// This blueprint supports event graphs
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsEventGraphs : 1;
	// This blueprint supports animation layers
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bSupportsAnimLayers : 1;
	// Allow deletion of blueprint graphs */
	UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Settings|Default Values")
		uint8 bGraphAllowDeletion : 1;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FName GetCategoryName() const override;
#endif
};
