/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"

class BLUEPRINTCORE_API FBlueprintCoreHelpers
{
public:
	static void CreateErrorMessage(FString message);
	static void CreatePopupMessage(FString message);
	static void HandleSaving(UPackage* package, bool bPromptSaving = true);
};