/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"

#include "ContentBrowserModule.h"
#include "KismetCompilerModule.h"

static FSlateFontInfo NormalFontBrush = FEditorStyle::GetFontStyle("PropertyWindow.NormalFont");
static FSlateFontInfo TitleFontBrush = FEditorStyle::GetFontStyle("PropertyWindow.BoldFont");
static int NormalFontSize = 9;
static int TitleFontSize = 12;
static float TextPadding = 2.f;

class FBlueprintCoreEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	void RegisterContentBrowserAssetExtender(FContentBrowserModule* contentBrowserModule);
	void UnregisterContentBrowserAssetExtender(FContentBrowserModule* contentBrowserModule);
	void OnBlueprintCompiled(UBlueprint*);
private:
	FDelegateHandle m_ContentBrowserAssetExtenderDelegateHandle;
	FDelegateHandle m_OnInMemoryAssetCreated;
	TSharedPtr<FUICommandList> m_BlueprintCoreCommands;
	TSharedPtr<class IAssetTypeActions> m_AssetTypeActions;
	static class IBlueprintCoreCompiler* s_Compiler;
};

class FBlueprintCoreMenuExtensions
{
public:
	static void CreateAssetContextMenu(FMenuBuilder& menuBuilder, TArray<FAssetData> objects);
};