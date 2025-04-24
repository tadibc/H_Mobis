// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLINECOREPLUGIN_MlineHandGrabTypes_generated_h
#error "MlineHandGrabTypes.generated.h already included, missing '#pragma once' in MlineHandGrabTypes.h"
#endif
#define MLINECOREPLUGIN_MlineHandGrabTypes_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineHandGrabTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrabbingRule_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FGrabbingRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineHandGrabTypes_h


#define FOREACH_ENUM_FINGERUNSELECTMODE(op) \
	op(FingerUnselectMode::AllReleased) \
	op(FingerUnselectMode::AnyReleased) 

enum class FingerUnselectMode : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<FingerUnselectMode>();

#define FOREACH_ENUM_FINGERREQUIREMENT(op) \
	op(FingerRequirement::Ignored) \
	op(FingerRequirement::Optional) \
	op(FingerRequirement::Required) 

enum class FingerRequirement : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<FingerRequirement>();

#define FOREACH_ENUM_EGRABTYPEFLAG(op) \
	op(EGrabTypeFlag::None) \
	op(EGrabTypeFlag::Pinch) \
	op(EGrabTypeFlag::Palm) 

enum class EGrabTypeFlag : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EGrabTypeFlag>();

#define FOREACH_ENUM_EGRABFLAG(op) \
	op(EGrabFlag::None) \
	op(EGrabFlag::Thumb) \
	op(EGrabFlag::Index) \
	op(EGrabFlag::Middle) \
	op(EGrabFlag::Ring) \
	op(EGrabFlag::Pinky) 

enum class EGrabFlag : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EGrabFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
