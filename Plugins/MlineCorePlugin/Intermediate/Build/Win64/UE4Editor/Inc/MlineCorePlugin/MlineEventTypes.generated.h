// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLINECOREPLUGIN_MlineEventTypes_generated_h
#error "MlineEventTypes.generated.h already included, missing '#pragma once' in MlineEventTypes.h"
#endif
#define MLINECOREPLUGIN_MlineEventTypes_generated_h

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineCustomEvent_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FMlineEventBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineCustomEvent>();

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineEventUI_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FMlineEventBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineEventUI>();

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineEventAnimation_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FMlineEventBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineEventAnimation>();

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FMlineEventBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineEventNiagaraEffect>();

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FMlineEventBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineEventParticleEffect>();

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineEventSound_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FMlineEventBase Super;


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineEventSound>();

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMlineEventBase_Statics; \
	MLINECOREPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<struct FMlineEventBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventTypes_h


#define FOREACH_ENUM_EEVENTFLAG(op) \
	op(EEventFlag::None) \
	op(EEventFlag::Audio) \
	op(EEventFlag::ParticleEffect) \
	op(EEventFlag::NiagaraEffect) \
	op(EEventFlag::Animaition) \
	op(EEventFlag::UI) \
	op(EEventFlag::CustomEvent) 

enum class EEventFlag : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EEventFlag>();

#define FOREACH_ENUM_EANIMATIONENDTYPE(op) \
	op(EAnimationEndType::Keep) \
	op(EAnimationEndType::Return) 

enum class EAnimationEndType : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EAnimationEndType>();

#define FOREACH_ENUM_EEFFECTTYPE(op) \
	op(EEffectType::ParticleSystem) \
	op(EEffectType::NiagaraSystem) 

enum class EEffectType : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EEffectType>();

#define FOREACH_ENUM_EACTOREVENTTYPE(op) \
	op(EActorEventType::None) \
	op(EActorEventType::Audio) \
	op(EActorEventType::Effect) \
	op(EActorEventType::Animaition) \
	op(EActorEventType::UI) \
	op(EActorEventType::CustomEvent) 

enum class EActorEventType : uint8;
template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EActorEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
