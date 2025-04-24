/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "Slate/BlueprintCoreStyle.h"

#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

TSharedPtr<FSlateStyleSet> FBlueprintCoreStyle::StyleInstance = NULL;

void FBlueprintCoreStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FBlueprintCoreStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FBlueprintCoreStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("BlueprintCoreStyle"));
	return StyleSetName;
}

TSharedRef<FSlateStyleSet> FBlueprintCoreStyle::Create()
{
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("BlueprintCoreStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("BlueprintCore")->GetBaseDir() / TEXT("Resources"));

	FWindowStyle WindowStyle = const_cast<FWindowStyle&>(FCoreStyle::Get().GetWidgetStyle<FWindowStyle>("Window"));
	FSlateColor WindowBackgroundColor(FLinearColor::White);
	FSlateBrush WindowBackgroundMain(IMAGE_BRUSH("Common/NoiseBackground", FVector2D(74, 74), FLinearColor::White, ESlateBrushTileType::Both));
	FSlateBrush WindowBackgroundChild(IMAGE_BRUSH("Common/NoiseBackground", FVector2D(64, 64), FLinearColor::White, ESlateBrushTileType::Both));
	WindowStyle
	.SetBackgroundColor(WindowBackgroundColor)
    .SetBackgroundBrush(*FEditorStyle::GetBrush("Menu.Background"))
    .SetChildBackgroundBrush(*FEditorStyle::GetBrush("Menu.Background"));
	
	Style->Set("BlueprintCore.BlueprintIcon", new IMAGE_BRUSH(TEXT("BlueprintIcon"), FVector2D(50.0f, 50.0f)));
	Style->Set("BlueprintCore.LockedIcon", new IMAGE_BRUSH(TEXT("LockedIcon"), FVector2D(16.0f, 16.0f)));
	Style->Set("BlueprintCore.UnlockedIcon", new IMAGE_BRUSH(TEXT("UnlockedIcon"), FVector2D(16.0f, 16.0f)));
	Style->Set("BlueprintCore.DetailsIcon", new IMAGE_BRUSH(TEXT("DetailsIcon"), FVector2D(16.0f, 16.0f)));
	Style->Set("BlueprintCore.BlueprintSecuritySettings", new IMAGE_BRUSH(TEXT("BlueprintSecuritySettings"), FVector2D(16.0f, 16.0f)));
	Style->Set("BlueprintCore.DeleteIcon", new IMAGE_BRUSH(TEXT("DeleteIcon"), FVector2D(16.0f, 16.0f)));
	Style->Set("BlueprintCore.Window", WindowStyle);

	return Style;
}

#undef IMAGE_BRUSH

void FBlueprintCoreStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FBlueprintCoreStyle::Get()
{
	return *StyleInstance;
}
