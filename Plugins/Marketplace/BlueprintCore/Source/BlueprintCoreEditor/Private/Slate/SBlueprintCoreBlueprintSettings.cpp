/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "Slate/SBlueprintCoreBlueprintSettings.h"
#include "Slate/SBlueprintCoreCommonWindows.h"
#include "BlueprintCoreBlueprint.h"
#include "BlueprintCoreEditorModule.h"
#include "BlueprintCoreTypes.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

TSharedRef<IDetailCustomization> FBlueprintCoreBlueprintSettingsCustomization::MakeInstance()
{
	return MakeShareable(new FBlueprintCoreBlueprintSettingsCustomization());
}

void FBlueprintCoreBlueprintSettingsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	DetailBuilder.HideCategory(FName("BlueprintOptions"));
	DetailBuilder.HideCategory(FName("Thumbnail"));
	DetailBuilder.HideCategory(FName("ClassOptions"));
}

void SBlueprintSettingsWindow::Construct(const FArguments& InArgs)
{
	m_BlueprintAsset = InArgs._BlueprintAsset.Get();
	NormalFontBrush.Size = NormalFontSize;

	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs(
        /*bUpdateFromSelection=*/ false,
        /*bLockable=*/ false,
        /*bAllowSearch=*/ false,
        FDetailsViewArgs::HideNameArea,
        /*bHideSelectionTip=*/ true,
        /*InNotifyHook=*/ nullptr,
        /*InSearchInitialKeyFocus=*/ false,
        /*InViewIdentifier=*/ NAME_None);

	const FOnGetDetailCustomizationInstance Details = FOnGetDetailCustomizationInstance::CreateStatic(&FBlueprintCoreBlueprintSettingsCustomization::MakeInstance);
	
	DetailsViewArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Automatic;
	DetailsViewArgs.bShowOptions = false;
	DetailsViewArgs.bAllowMultipleTopLevelObjects = true;
	DetailsView = PropertyModule.CreateDetailView(DetailsViewArgs);
	DetailsView->RegisterInstancedCustomPropertyLayout(UBlueprintCoreBlueprint::StaticClass(), Details);
	DetailsView->SetObject(m_BlueprintAsset, true);
	
	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBlueprintCoreTitle).Title(LOCTEXT("BlueprintCoreTitleBlueprintSettings", "Blueprint Settings"))
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			DetailsView->AsShared()
		]
	];
}

#undef LOCTEXT_NAMESPACE
