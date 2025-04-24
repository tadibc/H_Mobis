/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "Slate/SBlueprintCoreWindow.h"
#include "Slate/SBlueprintCoreBlueprintSettings.h"
#include "Slate/SBlueprintCoreBlueprintInformation.h"
#include "Slate/SBlueprintCoreBlueprintSecurity.h"
#include "BlueprintCoreBlueprint.h"
#include "BlueprintCoreEditorModule.h"
#include "BlueprintCoreTypes.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

void SBlueprintCoreWindow::Construct(const FArguments& InArgs)
{
	m_BlueprintAsset = InArgs._BlueprintAsset.Get();
	NormalFontBrush.Size = NormalFontSize;

	ChildSlot
	[
		SNew(SSplitter)
            .Orientation(EOrientation::Orient_Vertical)
            .Style(FEditorStyle::Get(), "SplitterDark")
            .PhysicalSplitterHandleSize(3.f)
		+ SSplitter::Slot()
		  .Value(.25f)
		  .SizeRule(SSplitter::ESizeRule::SizeToContent)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			  .VAlign(EVerticalAlignment::VAlign_Top)
			  .AutoHeight()
			[
				SNew(SSplitter)
	            .Orientation(EOrientation::Orient_Horizontal)
	            .Style(FEditorStyle::Get(), "SplitterDark")
	            .PhysicalSplitterHandleSize(3.f)
				+ SSplitter::Slot()
				[
					SAssignNew(m_BlueprintSecurityWindow, SBlueprintSecurityWindow).BlueprintAsset(m_BlueprintAsset)
				]

				+ SSplitter::Slot()
				[
					SNew(SBlueprintInformationWindow).BlueprintAsset(m_BlueprintAsset)
				]
			]
		]

		+ SSplitter::Slot()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SBlueprintSettingsWindow).BlueprintAsset(m_BlueprintAsset)
			]
		]
		+ SSplitter::Slot()
		.SizeRule(SSplitter::ESizeRule::SizeToContent)
		[
			SNew(SBorder)
			.BorderImage(FEditorStyle::GetNoBrush())
			.Padding(3.f)
			[
				SNew(STextBlock)
				.Text(FText::FromString(FString::Printf(TEXT("BlueprintCore v.%s"), *FBlueprintCoreModule::s_PluginVersion)))
			]
		]
	];
}

void SBlueprintCoreWindow::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
}

SBlueprintCoreWindow::~SBlueprintCoreWindow()
{
}

#undef LOCTEXT_NAMESPACE
