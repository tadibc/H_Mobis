/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"

#include "DetailLayoutBuilder.h"
#include "IDetailCustomization.h"

class UBlueprintCoreBlueprint;
class IDetailCustomization;
class IDetailsView;

class FBlueprintCoreBlueprintSettingsCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
};

class SBlueprintSettingsWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SBlueprintSettingsWindow) {}
    SLATE_ATTRIBUTE(UBlueprintCoreBlueprint*, BlueprintAsset)
    SLATE_END_ARGS()
public:
	virtual ~SBlueprintSettingsWindow() {}
public:
	void Construct(const FArguments& InArgs);
private:
	UBlueprintCoreBlueprint* m_BlueprintAsset;
	TSharedPtr<IDetailsView> DetailsView;
};