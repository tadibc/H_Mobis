// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAPTICSMANAGER_HapticStructures_generated_h
#error "HapticStructures.generated.h already included, missing '#pragma once' in HapticStructures.h"
#endif
#define HAPTICSMANAGER_HapticStructures_generated_h

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerRequest_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FPlayerRequest>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerResponse_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FPlayerResponse>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmitRequest_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FSubmitRequest>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHapticFrame_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FHapticFrame>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegisterRequest_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FRegisterRequest>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDevice_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FDevice>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScaleOption_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FScaleOption>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotationOption_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FRotationOption>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHapticFeedback_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FHapticFeedback>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathPoint_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FPathPoint>();

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDotPoint_Statics; \
	HAPTICSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<struct FDotPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticStructures_h


#define FOREACH_ENUM_EFEEDBACKMODE(op) \
	op(EFeedbackMode::PATH_MODE) \
	op(EFeedbackMode::DOT_MODE) 

enum class EFeedbackMode : uint8;
template<> HAPTICSMANAGER_API UEnum* StaticEnum<EFeedbackMode>();

#define FOREACH_ENUM_EPOSITION(op) \
	op(EPosition::VestFront) \
	op(EPosition::VestBack) \
	op(EPosition::GloveL) \
	op(EPosition::GloveR) \
	op(EPosition::Head) \
	op(EPosition::ForearmL) \
	op(EPosition::ForearmR) \
	op(EPosition::HandL) \
	op(EPosition::HandR) \
	op(EPosition::FootL) \
	op(EPosition::FootR) \
	op(EPosition::Left) \
	op(EPosition::Right) \
	op(EPosition::Default) 

enum class EPosition : uint8;
template<> HAPTICSMANAGER_API UEnum* StaticEnum<EPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
