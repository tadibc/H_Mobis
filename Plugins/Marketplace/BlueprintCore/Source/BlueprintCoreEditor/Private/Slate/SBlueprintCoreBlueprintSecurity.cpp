/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "Slate/SBlueprintCoreBlueprintSecurity.h"
#include "Slate/SBlueprintCoreCommonWindows.h"
#include "BlueprintCoreBlueprint.h"
#include "BlueprintCoreEditorModule.h"
#include "BlueprintCoreHelpers.h"
#include "BlueprintCoreStyle.h"
#include "BlueprintCoreTypes.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

SBlueprintSecurityWindow::~SBlueprintSecurityWindow()
{
	FBlueprintCoreModule::s_OnBlueprintCoreKeyFileAdded.Remove(m_HandleNewKeyFiles);
}

void SBlueprintSecurityWindow::Construct(const FArguments& InArgs)
{
	m_BlueprintAsset = InArgs._BlueprintAsset.Get();
	NormalFontBrush.Size = NormalFontSize;

	m_HandleNewKeyFiles = FBlueprintCoreModule::s_OnBlueprintCoreKeyFileAdded.AddLambda([this](UBlueprintCoreKey* keyFile)
	{
		Array.Empty();
		Array = FBlueprintCoreModule::GetLoadedKeyFiles();
	});

	Array.Empty();
	Array = FBlueprintCoreModule::GetLoadedKeyFiles();

	for (auto Element : Array)
	{
		if (Element.IsValid() && Element->GetKeyHash() == m_BlueprintAsset->KeyFileHash)
		{
			m_SelectedKeyFile = Element;
			break;
		}
	}

	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBlueprintCoreTitle)
			.Title(LOCTEXT("BlueprintCoreTitleSettings", "Security Settings"))
			.IconBrush(*FBlueprintCoreStyle::Get().GetBrush("BlueprintCore.BlueprintSecuritySettings"))
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBorder).VAlign(EVerticalAlignment::VAlign_Top).BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
	                    .Font(NormalFontBrush)
	                    .Text(LOCTEXT("BlueprintCoreHasKeyFileName", "Key Filename"))
					]
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
	                    .Font(NormalFontBrush)
	                    .Text_Lambda([this]
						                {
							                return (m_BlueprintAsset) ? FText::FromString(m_BlueprintAsset->KeyFileName) : FText::GetEmpty();
						                })
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(TextPadding)
					[
						SNew(STextBlock)
	                            .Font(NormalFontBrush)
	                            .Text(LOCTEXT("BlueprintCoreUnlocked", "Unlocked"))
					]
					+ SHorizontalBox::Slot()
					[
						SNew(STextBlock)
	                            .Font(NormalFontBrush)
	                            .Text_Lambda([this]
						                {
							                if (m_BlueprintAsset && m_BlueprintAsset->IsUnlocked())
							                {
								                return FText(LOCTEXT("BlueprintCoreUnlockedTrue", "True"));
							                }
							                else
							                {
								                return FText(LOCTEXT("BlueprintCoreUnlockedFalse", "False"));
							                }
						                })
                            .ColorAndOpacity_Lambda([this]
						                {
							                bool bUnlocked = false;

							                if (m_BlueprintAsset)
							                {
								                bUnlocked = m_BlueprintAsset->IsUnlocked();
							                }

							                return bUnlocked ? FLinearColor::Green : FLinearColor::Red;
						                })
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SBorder).VAlign(EVerticalAlignment::VAlign_Top).BorderImage(FEditorStyle::GetBrush("Menu.Background"))
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						  .Padding(TextPadding)
						  .VAlign(EVerticalAlignment::VAlign_Center)
						[
							SNew(STextBlock)
						.Font(NormalFontBrush)
						.Text(LOCTEXT("BlueprintCoreSecurityLevelText", "Key File"))
						]
						+ SHorizontalBox::Slot()
						.Padding(TextPadding)
						[
							SAssignNew(m_SelectKeyFileBox, SComboBox<TWeakObjectPtr<class UBlueprintCoreKey>>)
						.IsEnabled_Lambda([this]()
                          {
                              return (m_BlueprintAsset && m_BlueprintAsset->IsUnlocked());
                          })
						.OptionsSource(&Array)
						.InitiallySelectedItem(m_SelectedKeyFile.Get() ? m_SelectedKeyFile : nullptr)
						.OnGenerateWidget_Lambda([this](TWeakObjectPtr<class UBlueprintCoreKey> obj)
                          {
                              return SNew(STextBlock).Text(obj.IsValid() ? FText::FromString(*obj->GetName()) : FText::GetEmpty());
                          })
						.OnSelectionChanged_Lambda([this](TWeakObjectPtr<class UBlueprintCoreKey> obj, ESelectInfo::Type)
                          {
                              if (m_BlueprintAsset->UpdateKeyFile(obj))
                              {
                                  m_SelectedKeyFile = obj;
                              }
                          })
						.Content()
							[
								SNew(STextBlock)
								.Font(NormalFontBrush)
								.Text_Lambda([this]
								                {
									                return FText::FromString(m_SelectedKeyFile.IsValid() ? m_SelectedKeyFile->GetName() : "Select keyfile");
								                })
							]
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(EVerticalAlignment::VAlign_Center)
						.HAlign(EHorizontalAlignment::HAlign_Center)
						[
							SNew(SButton)
							.OnClicked_Lambda([this]()
							             {
								             if (m_BlueprintAsset && m_BlueprintAsset->IsUnlocked())
								             {
									             if (m_BlueprintAsset->ClearKeyFile())
									             {
										             FBlueprintCoreHelpers::CreatePopupMessage("Key file cleared");
										             m_SelectedKeyFile = nullptr;
										             m_SelectKeyFileBox->ClearSelection();
									             }
									             else
									             {
										             FBlueprintCoreHelpers::CreateErrorMessage("Failed clearing key file");
									             }
								             }
								             return FReply::Handled();
							             })
							.IsEnabled_Lambda([this]
							             {
								             return (m_BlueprintAsset && m_BlueprintAsset->IsUnlocked() && m_BlueprintAsset->HasKeyFile());
							             })
							[
								SNew(SBox)
								.VAlign(EVerticalAlignment::VAlign_Center)
								.HAlign(EHorizontalAlignment::HAlign_Center)
								.WidthOverride(14.f)
								.HeightOverride(14.f)
								[
									SNew(SImage)
									.Image(FBlueprintCoreStyle::Get().GetBrush("BlueprintCore.DeleteIcon"))
									.ToolTipText(LOCTEXT("BlueprintCoreDeleteKeyFileTooltip", "Clear Key File"))
								]
							]
						]
					]
				]

			]
		]
	];
}

#undef LOCTEXT_NAMESPACE
