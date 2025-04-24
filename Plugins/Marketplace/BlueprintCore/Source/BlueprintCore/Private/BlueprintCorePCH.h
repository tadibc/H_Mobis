/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/
#include <Engine/Engine.h>

#if WITH_EDITOR
#include <AssetRegistryModule.h>
#include <AssetToolsModule.h>
#include <Subsystems/AssetEditorSubsystem.h>
#include <AssetTypeActions/AssetTypeActions_Blueprint.h>
#include <FileHelpers.h>
#include <Editor.h>
#include <ContentBrowserModule.h>
#include <IContentBrowserSingleton.h>
#include <DetailLayoutBuilder.h>
#include <IDetailCustomization.h>
#include <IDetailsView.h>
#include <K2Node_CallFunction.h>
#include <K2Node_Event.h>
#include <K2Node_CustomEvent.h>
#include <K2Node_FunctionEntry.h>
#include <Kismet2/BlueprintEditorUtils.h>
#include <Kismet2/KismetEditorUtilities.h>
#include <KismetCompilerModule.h>
#include <EditorStyleSet.h>
#include <Misc/EngineVersionComparison.h>
#endif
#include <Framework/Application/SlateApplication.h>
#include <Framework/Notifications/NotificationManager.h>
#include <Engine/DataAsset.h>
#include <Misc/MessageDialog.h>

#include <Styling/SlateStyleRegistry.h>
#include <Styling/CoreStyle.h>
#include <Styling/SlateTypes.h>

#include <Interfaces/IPluginManager.h>

#include <Widgets/Notifications/SNotificationList.h>
#include <Widgets/Input/SButton.h>
#include <Widgets/Notifications/SNotificationList.h>
#include <Widgets/SCompoundWidget.h>


