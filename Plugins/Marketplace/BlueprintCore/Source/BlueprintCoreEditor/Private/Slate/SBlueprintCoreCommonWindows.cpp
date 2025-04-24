/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "Slate/SBlueprintCoreCommonWindows.h"

#include "BlueprintCoreEditorModule.h"
#include "BlueprintCoreStyle.h"
#include "BlueprintCoreTypes.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

void SBlueprintCoreTitle::Construct(const FArguments& InArgs)
{
	m_Title = InArgs._Title.Get();
	IconBrush = InArgs._IconBrush.Get();

	if (IconBrush.GetImageType() == ESlateBrushImageType::Type::NoImage)
	{
		IconBrush = *FBlueprintCoreStyle::Get().GetBrush("BlueprintCore.BlueprintIcon");
	}

	const auto BackgroundBrush = FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder");
	TitleFontBrush.Size = TitleFontSize;
	NormalFontBrush.Size = NormalFontSize;

	ChildSlot
	[
		SNew(SBorder).VAlign(EVerticalAlignment::VAlign_Top).BorderImage(BackgroundBrush)
		.Padding(6.f)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.HAlign(EHorizontalAlignment::HAlign_Left)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.AutoWidth()
			.Padding(1.f)
			[
				SNew(SBox)
				.WidthOverride(14.f)
				.HeightOverride(14.f)
				[
					SNew(SImage).Image(&IconBrush)
				]
			]
			+SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Padding(2.0f, 0.0f, 0.0f, 0.0f)
			[
				SNew(STextBlock)
	            .Font(TitleFontBrush)
	            .Text(m_Title)
			]
		]
	];
}

#undef LOCTEXT_NAMESPACE
