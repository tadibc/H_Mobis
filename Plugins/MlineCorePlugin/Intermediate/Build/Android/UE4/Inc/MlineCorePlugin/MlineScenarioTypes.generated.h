// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLINECOREPLUGIN_MlineScenarioTypes_generated_h
#error "MlineScenarioTypes.generated.h already included, missing '#pragma once' in MlineScenarioTypes.h"
#endif
#define MLINECOREPLUGIN_MlineScenarioTypes_generated_h

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultStepContext_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FStepContextBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FDefaultStepContext>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorStepContext_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FStepContextBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FActorStepContext>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStepContextBase_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FStepContextBase>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSceneEventData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FSceneEventData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStepEventData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FStepEventData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoadLevelData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FScenarioEventDataBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FLoadLevelData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FScenarioEventDataBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FInteractionData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFadeData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FScenarioEventDataBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FFadeData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoveData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FScenarioEventDataBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMoveData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrationData_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FScenarioEventDataBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FNarrationData>();

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FScenarioEventDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioTypes_h


#define FOREACH_ENUM_EPLAYERTYPE(op) \
	op(EPlayerType::User) \
	op(EPlayerType::Admin) 

enum class EPlayerType : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EPlayerType>();

#define FOREACH_ENUM_ELEVELLOADTYPEEUNM(op) \
	op(ELevelLoadTypeEunm::OpenLevel) \
	op(ELevelLoadTypeEunm::LoadLevel) \
	op(ELevelLoadTypeEunm::UnLoadLevel) 

enum class ELevelLoadTypeEunm : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<ELevelLoadTypeEunm>();

#define FOREACH_ENUM_EINTERACTIONCOUNTTYPEEUNM(op) \
	op(EInteractionCountTypeEunm::All_Interaction) \
	op(EInteractionCountTypeEunm::Count_Interaction) 

enum class EInteractionCountTypeEunm : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EInteractionCountTypeEunm>();

#define FOREACH_ENUM_EFADETYPEEUNM(op) \
	op(EFadeTypeEunm::FadeOut) \
	op(EFadeTypeEunm::FadeIn) 

enum class EFadeTypeEunm : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EFadeTypeEunm>();

#define FOREACH_ENUM_EMOVETARGETEUNM(op) \
	op(EMoveTargetEunm::Player) \
	op(EMoveTargetEunm::Actor) \
	op(EMoveTargetEunm::All) 

enum class EMoveTargetEunm : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EMoveTargetEunm>();

#define FOREACH_ENUM_EMOVETYPEEUNM(op) \
	op(EMoveTypeEunm::Teleport) \
	op(EMoveTypeEunm::SplineMove) 

enum class EMoveTypeEunm : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EMoveTypeEunm>();

#define FOREACH_ENUM_ESTEPSTATE(op) \
	op(EStepState::Initialize) \
	op(EStepState::Start) \
	op(EStepState::Stay) \
	op(EStepState::End) \
	op(EStepState::Finalize) \
	op(EStepState::Next) 

enum class EStepState : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EStepState>();

#define FOREACH_ENUM_ESCENARIOSTATE(op) \
	op(EScenarioState::Stop) \
	op(EScenarioState::Play) \
	op(EScenarioState::Pause) \
	op(EScenarioState::Rewind) \
	op(EScenarioState::FastForword) 

enum class EScenarioState : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EScenarioState>();

#define FOREACH_ENUM_ESCENEEVENT(op) \
	op(ESceneEvent::None) \
	op(ESceneEvent::Narration) \
	op(ESceneEvent::Move) \
	op(ESceneEvent::Fade) \
	op(ESceneEvent::Interaction) \
	op(ESceneEvent::LoadLevel) 

enum class ESceneEvent : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<ESceneEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
