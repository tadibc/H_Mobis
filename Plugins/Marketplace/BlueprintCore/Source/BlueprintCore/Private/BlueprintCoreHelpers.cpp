/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreHelpers.h"
#include "BlueprintCoreModule.h"
#include "BlueprintCorePCH.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

void FBlueprintCoreHelpers::CreateErrorMessage(FString message)
{
	FBlueprintCoreModule::s_OnBlueprintCoreError.Broadcast(message);
}

void FBlueprintCoreHelpers::CreatePopupMessage(FString message)
{
	FBlueprintCoreModule::s_OnBlueprintCorePopupMessage.Broadcast(message);
}

void FBlueprintCoreHelpers::HandleSaving(UPackage* package, bool bPromptSaving)
{
	FBlueprintCoreModule::s_OnBlueprintCoreSaveRequested.Broadcast(package, bPromptSaving);
}

#undef LOCTEXT_NAMESPACE
