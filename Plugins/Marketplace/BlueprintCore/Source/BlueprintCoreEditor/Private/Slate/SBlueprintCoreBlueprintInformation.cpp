/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "Slate/SBlueprintCoreBlueprintInformation.h"
#include "Slate/SBlueprintCoreCommonWindows.h"
#include "BlueprintCoreBlueprint.h"
#include "BlueprintCoreEditorModule.h"
#include "BlueprintCoreStyle.h"
#include "BlueprintCoreTypes.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

void SBlueprintInformationWindow::Construct(const FArguments& InArgs)
{
	m_BlueprintAsset = InArgs._BlueprintAsset.Get();
	NormalFontBrush.Size = NormalFontSize;

	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBlueprintCoreTitle)
			.Title(LOCTEXT("BlueprintCoreTitleBlueprintInfo", "Blueprint Information"))
			.IconBrush(*FBlueprintCoreStyle::Get().GetBrush("BlueprintCore.DetailsIcon"))
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBorder).VAlign(EVerticalAlignment::VAlign_Top).BorderImage(
				FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
		                        .Font(NormalFontBrush)
		                        .Text(LOCTEXT("BlueprintCoreBlueprintName", "Name"))
					]
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
						.Font(NormalFontBrush)
                        .Text(FText::Format(
							                LOCTEXT("BlueprintCoreBlueprintName", "{0}"),
							                FText::FromString(m_BlueprintAsset->GetName())))
					]
				]
				+ SVerticalBox::Slot()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
                        .Font(NormalFontBrush)
                        .Text(LOCTEXT("BlueprintCoreBlueprintSystemVersionText", "System Version"))
					]
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
                        .Font(NormalFontBrush)
                        .Text(FText::Format(
							                LOCTEXT("BlueprintCoreBlueprintSystemVersion", "{0}"),
							                m_BlueprintAsset->BlueprintSystemVersion))
					]
				]
				+ SVerticalBox::Slot()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
                        .Font(NormalFontBrush)
                        .Text(LOCTEXT("BlueprintCoreBlueprintStatusText", "Status"))
					]
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
                        .Font(NormalFontBrush)
                        .Text_Lambda([this]
                        {
	                        return FText::Format(LOCTEXT("BlueprintCoreBlueprintStatus", "{0}"),FText::FromString(_ToString(m_BlueprintAsset->Status)));
                        })
                        .ColorAndOpacity_Lambda([this]
                        {
                        	return (m_BlueprintAsset && m_BlueprintAsset->IsPossiblyDirty()) ? FLinearColor::Yellow : FLinearColor::White;
                        })
					]
				]
				+ SVerticalBox::Slot()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
                            .Font(NormalFontBrush)
                            .Text(LOCTEXT("BlueprintCoreBlueprintTypeText", "Type"))
					]
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
                            .Font(NormalFontBrush)
                            .Text(FText::Format(
							                LOCTEXT("BlueprintCoreBlueprintType", "{0}"),
							                FText::FromString(_ToString(m_BlueprintAsset->BlueprintType))))
					]
				]
			]
		]

	];
}

#undef LOCTEXT_NAMESPACE
