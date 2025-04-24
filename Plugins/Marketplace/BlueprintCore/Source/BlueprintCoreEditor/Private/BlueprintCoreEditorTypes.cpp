/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreEditorTypes.h"
#include "BlueprintCoreBlueprint.h"
#include "Slate/BlueprintCoreStyle.h"
#include "Styling/SlateIconFinder.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

bool IBlueprintCoreCompiler::GetBlueprintTypesForClass(UClass* ParentClass, UClass*& OutBlueprintClass,
                                                       UClass*& OutBlueprintGeneratedClass) const
{
	if (ParentClass->GetClass() == UBlueprintCoreBlueprintGeneratedClass::StaticClass() || UBlueprintCoreSettings::Get()->bCreateCoreBlueprints)
	{
		if (ParentClass != UUserWidget::StaticClass() && !ParentClass->IsChildOf(UUserWidget::StaticClass()))
		{
			OutBlueprintClass = UBlueprintCoreBlueprint::StaticClass();
			OutBlueprintGeneratedClass = UBlueprintCoreBlueprintGeneratedClass::StaticClass();
			return true;
		}
	}

	return false;
}

UClass* FAssetTypeActions_BlueprintBlueprintCore::GetSupportedClass() const
{
	return UBlueprintCoreBlueprint::StaticClass();
}

FColor FAssetTypeActions_BlueprintBlueprintCore::GetTypeColor() const
{
	return UBlueprintCoreSettings::Get()->BlueprintColor;
}

void FAssetTypeActions_BlueprintBlueprintCore::OpenAssetEditor(const TArray<UObject*>& InObjects,
                                                               TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (UObject* Object : InObjects)
	{
		if (UBlueprint* Blueprint = Cast<UBlueprint>(Object))
		{
			TArray<UObject*> Objects;
			Objects.Add(Object);

			if (UBlueprintCoreBlueprint* BlueprintCore = Cast<UBlueprintCoreBlueprint>(Object))
			{
				if (BlueprintCore->IsUnlocked())
				{
					FAssetTypeActions_Blueprint::OpenAssetEditor(Objects, EditWithinLevelEditor);
				}
			}
			else
			{
				FAssetTypeActions_Blueprint::OpenAssetEditor(Objects, EditWithinLevelEditor);
			}
		}
		else
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FailedToLoadBlueprint", "Blueprint could not be loaded because it derives from an invalid class.  Check to make sure the parent class for this blueprint hasn't been removed!"));
		}
	}
}

TSharedPtr<SWidget> FAssetTypeActions_BlueprintBlueprintCore::GetThumbnailOverlay(const FAssetData& AssetData) const
{
	bool bIsLocked = false;
	const FSlateBrush* LockedIcon = FBlueprintCoreStyle::Get().GetBrush("BlueprintCore.LockedIcon");
	const FSlateBrush* UnlockedIcon = FBlueprintCoreStyle::Get().GetBrush("BlueprintCore.UnlockedIcon");

	const auto Settings = UBlueprintCoreSettings::Get();

	FSlateColor LockedColor = FLinearColor(Settings->IconLockedColor);
	FSlateColor UnlockedColor = FLinearColor(Settings->IconUnlockedColor);

	if (UObject* Object = AssetData.GetAsset())
	{
		if (UBlueprintCoreBlueprint* Blueprint = Cast<UBlueprintCoreBlueprint>(Object))
		{
			bIsLocked = !Blueprint->IsUnlocked();
		}
	}

	return SNew(SBorder)
		.BorderImage(FEditorStyle::GetNoBrush())
		.Visibility(EVisibility::HitTestInvisible)
		.Padding(FMargin(0.0f, 0.0f, 3.0f, 3.0f))
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Bottom)
		[
			SNew(SImage)
			.Image(bIsLocked ? LockedIcon : UnlockedIcon)
			.ColorAndOpacity_Lambda([bIsLocked, LockedColor, UnlockedColor]()
			{
				return (bIsLocked ? LockedColor : UnlockedColor);
			})
		];
}

#undef LOCTEXT_NAMESPACE
