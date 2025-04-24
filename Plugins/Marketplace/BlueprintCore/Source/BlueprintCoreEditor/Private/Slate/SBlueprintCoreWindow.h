/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
//#include "BlueprintCoreTypes.h"

class UBlueprintCoreBlueprint;

class SBlueprintCoreWindow : public SCompoundWidget
{
public:
SLATE_BEGIN_ARGS(SBlueprintCoreWindow) {}
SLATE_ATTRIBUTE(UBlueprintCoreBlueprint*, BlueprintAsset)
SLATE_END_ARGS()
public:
	~SBlueprintCoreWindow();
public:
	void Construct(const FArguments& InArgs);
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
private:
	TSharedPtr<class SBlueprintSecurityWindow> m_BlueprintSecurityWindow; 
	UBlueprintCoreBlueprint* m_BlueprintAsset;
};