/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"

class UBlueprintCoreBlueprint;

class SBlueprintInformationWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SBlueprintInformationWindow) {}
    SLATE_ATTRIBUTE(UBlueprintCoreBlueprint*, BlueprintAsset)
    SLATE_END_ARGS()
public:
	virtual ~SBlueprintInformationWindow() {}
public:
	void Construct(const FArguments& InArgs);
private:
	UBlueprintCoreBlueprint* m_BlueprintAsset;
};