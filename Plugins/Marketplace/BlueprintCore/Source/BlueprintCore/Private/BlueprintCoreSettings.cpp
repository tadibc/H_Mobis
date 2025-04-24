/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreSettings.h"
#include "BlueprintCoreTypes.h"
#include "BlueprintCoreModule.h"
#include "BlueprintCorePCH.h"

bool UBlueprintCoreSettings::bInitialized = false;
UBlueprintCoreSettings* UBlueprintCoreSettings::DefaultSettings = nullptr;

UBlueprintCoreSettings::UBlueprintCoreSettings()
	: bCreateCoreBlueprints(false)
	, bPromptSaving(true)
	, BlueprintColor(FColor::Black)
	, IconLockedColor(FColor::Red)
	, IconUnlockedColor(FColor::White)
	, bReadOnly(false)
	, bAllowRenaming(true)
	, bSupportsGlobalVariables(true)
	, bSupportsLocalVariables(true)
	, bSupportsFunctions(true)
	, bSupportsMacros(true)
	, bSupportsDelegates(true)
	, bSupportsEventGraphs(true)
	, bSupportsAnimLayers(true)
	, bGraphAllowDeletion(true)
{
}

#if WITH_EDITOR
void UBlueprintCoreSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

FName UBlueprintCoreSettings::GetCategoryName() const
{
	return NAME_Game;
}
#endif
