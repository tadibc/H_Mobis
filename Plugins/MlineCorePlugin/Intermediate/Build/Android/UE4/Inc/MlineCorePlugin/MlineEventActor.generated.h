// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMlineEventNiagaraEffect;
struct FMlineEventParticleEffect;
struct FMlineEventAnimation;
struct FMlineEventSound;
struct FMlineEventUI;
struct FTransform;
#ifdef MLINECOREPLUGIN_MlineEventActor_generated_h
#error "MlineEventActor.generated.h already included, missing '#pragma once' in MlineEventActor.h"
#endif
#define MLINECOREPLUGIN_MlineEventActor_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_SPARSE_DATA
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_RPC_WRAPPERS \
	virtual void SetTransformOverride_Implementation(bool data); \
	virtual void SetNewTransform_Implementation(FTransform data); \
	virtual void SetIsGuideArrow_Implementation(bool data); \
	virtual void SetIsHighLight_Implementation(bool data); \
	virtual void SetIsInteractionTime_Implementation(bool data); \
	virtual void SetIsVisible_Implementation(bool data); \
 \
	DECLARE_FUNCTION(execBlinkMaterialSetting_cpp); \
	DECLARE_FUNCTION(execEndBlink_cpp); \
	DECLARE_FUNCTION(execStartBlink_cpp); \
	DECLARE_FUNCTION(execNiagaraEvent_cpp); \
	DECLARE_FUNCTION(execParticleEvent_cpp); \
	DECLARE_FUNCTION(execAnimationEvent_cpp); \
	DECLARE_FUNCTION(execSoundEvent_cpp); \
	DECLARE_FUNCTION(execUIEvent_cpp); \
	DECLARE_FUNCTION(execGuideArrowEvent_cpp); \
	DECLARE_FUNCTION(execHighLightEvent_cpp); \
	DECLARE_FUNCTION(execTransformEvent_cpp); \
	DECLARE_FUNCTION(execVisibleEvent_cpp); \
	DECLARE_FUNCTION(execDeactiveEvent); \
	DECLARE_FUNCTION(execActiveEvent); \
	DECLARE_FUNCTION(execOnRep_newTransform); \
	DECLARE_FUNCTION(execOnRep_isGuideArrow); \
	DECLARE_FUNCTION(execOnRep_isHighLight); \
	DECLARE_FUNCTION(execOnRep_isInteractionTime); \
	DECLARE_FUNCTION(execOnRep_isVisible); \
	DECLARE_FUNCTION(execSetTransformOverride); \
	DECLARE_FUNCTION(execSetNewTransform); \
	DECLARE_FUNCTION(execSetIsGuideArrow); \
	DECLARE_FUNCTION(execSetIsHighLight); \
	DECLARE_FUNCTION(execSetIsInteractionTime); \
	DECLARE_FUNCTION(execSetIsVisible); \
	DECLARE_FUNCTION(execGetTransformOverride); \
	DECLARE_FUNCTION(execGetNewTransform); \
	DECLARE_FUNCTION(execGetIsGuideArrow); \
	DECLARE_FUNCTION(execGetIsHighLight); \
	DECLARE_FUNCTION(execGetIsInteractionTime); \
	DECLARE_FUNCTION(execGetIsVisible);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTransformOverride_Implementation(bool data); \
	virtual void SetNewTransform_Implementation(FTransform data); \
	virtual void SetIsGuideArrow_Implementation(bool data); \
	virtual void SetIsHighLight_Implementation(bool data); \
	virtual void SetIsInteractionTime_Implementation(bool data); \
	virtual void SetIsVisible_Implementation(bool data); \
 \
	DECLARE_FUNCTION(execBlinkMaterialSetting_cpp); \
	DECLARE_FUNCTION(execEndBlink_cpp); \
	DECLARE_FUNCTION(execStartBlink_cpp); \
	DECLARE_FUNCTION(execNiagaraEvent_cpp); \
	DECLARE_FUNCTION(execParticleEvent_cpp); \
	DECLARE_FUNCTION(execAnimationEvent_cpp); \
	DECLARE_FUNCTION(execSoundEvent_cpp); \
	DECLARE_FUNCTION(execUIEvent_cpp); \
	DECLARE_FUNCTION(execGuideArrowEvent_cpp); \
	DECLARE_FUNCTION(execHighLightEvent_cpp); \
	DECLARE_FUNCTION(execTransformEvent_cpp); \
	DECLARE_FUNCTION(execVisibleEvent_cpp); \
	DECLARE_FUNCTION(execDeactiveEvent); \
	DECLARE_FUNCTION(execActiveEvent); \
	DECLARE_FUNCTION(execOnRep_newTransform); \
	DECLARE_FUNCTION(execOnRep_isGuideArrow); \
	DECLARE_FUNCTION(execOnRep_isHighLight); \
	DECLARE_FUNCTION(execOnRep_isInteractionTime); \
	DECLARE_FUNCTION(execOnRep_isVisible); \
	DECLARE_FUNCTION(execSetTransformOverride); \
	DECLARE_FUNCTION(execSetNewTransform); \
	DECLARE_FUNCTION(execSetIsGuideArrow); \
	DECLARE_FUNCTION(execSetIsHighLight); \
	DECLARE_FUNCTION(execSetIsInteractionTime); \
	DECLARE_FUNCTION(execSetIsVisible); \
	DECLARE_FUNCTION(execGetTransformOverride); \
	DECLARE_FUNCTION(execGetNewTransform); \
	DECLARE_FUNCTION(execGetIsGuideArrow); \
	DECLARE_FUNCTION(execGetIsHighLight); \
	DECLARE_FUNCTION(execGetIsInteractionTime); \
	DECLARE_FUNCTION(execGetIsVisible);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_EVENT_PARMS \
	struct MlineEventActor_eventSetIsGuideArrow_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActor_eventSetIsHighLight_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActor_eventSetIsInteractionTime_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActor_eventSetIsVisible_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActor_eventSetNewTransform_Parms \
	{ \
		FTransform data; \
	}; \
	struct MlineEventActor_eventSetTransformOverride_Parms \
	{ \
		bool data; \
	};


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_CALLBACK_WRAPPERS
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMlineEventActor(); \
	friend struct Z_Construct_UClass_AMlineEventActor_Statics; \
public: \
	DECLARE_CLASS(AMlineEventActor, AMlineActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineEventActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		isVisible=NETFIELD_REP_START, \
		isInteractionTime, \
		isHighLight, \
		isGuideArrow, \
		newTransform, \
		isTransformOverride, \
		NETFIELD_REP_END=isTransformOverride	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAMlineEventActor(); \
	friend struct Z_Construct_UClass_AMlineEventActor_Statics; \
public: \
	DECLARE_CLASS(AMlineEventActor, AMlineActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineEventActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		isVisible=NETFIELD_REP_START, \
		isInteractionTime, \
		isHighLight, \
		isGuideArrow, \
		newTransform, \
		isTransformOverride, \
		NETFIELD_REP_END=isTransformOverride	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMlineEventActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMlineEventActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineEventActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineEventActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineEventActor(AMlineEventActor&&); \
	NO_API AMlineEventActor(const AMlineEventActor&); \
public:


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineEventActor(AMlineEventActor&&); \
	NO_API AMlineEventActor(const AMlineEventActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineEventActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineEventActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMlineEventActor)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isVisible() { return STRUCT_OFFSET(AMlineEventActor, isVisible); } \
	FORCEINLINE static uint32 __PPO__isInteractionTime() { return STRUCT_OFFSET(AMlineEventActor, isInteractionTime); } \
	FORCEINLINE static uint32 __PPO__isHighLight() { return STRUCT_OFFSET(AMlineEventActor, isHighLight); } \
	FORCEINLINE static uint32 __PPO__isGuideArrow() { return STRUCT_OFFSET(AMlineEventActor, isGuideArrow); } \
	FORCEINLINE static uint32 __PPO__newTransform() { return STRUCT_OFFSET(AMlineEventActor, newTransform); } \
	FORCEINLINE static uint32 __PPO__isTransformOverride() { return STRUCT_OFFSET(AMlineEventActor, isTransformOverride); } \
	FORCEINLINE static uint32 __PPO__isVisible_OLD() { return STRUCT_OFFSET(AMlineEventActor, isVisible_OLD); } \
	FORCEINLINE static uint32 __PPO__isInteractionTime_OLD() { return STRUCT_OFFSET(AMlineEventActor, isInteractionTime_OLD); } \
	FORCEINLINE static uint32 __PPO__isHighLight_OLD() { return STRUCT_OFFSET(AMlineEventActor, isHighLight_OLD); } \
	FORCEINLINE static uint32 __PPO__isGuideArrow_OLD() { return STRUCT_OFFSET(AMlineEventActor, isGuideArrow_OLD); } \
	FORCEINLINE static uint32 __PPO__Transform_OLD() { return STRUCT_OFFSET(AMlineEventActor, Transform_OLD); } \
	FORCEINLINE static uint32 __PPO__guideArrow() { return STRUCT_OFFSET(AMlineEventActor, guideArrow); } \
	FORCEINLINE static uint32 __PPO__blinkMaterialInstance() { return STRUCT_OFFSET(AMlineEventActor, blinkMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__isHighlightActivate_cpp() { return STRUCT_OFFSET(AMlineEventActor, isHighlightActivate_cpp); } \
	FORCEINLINE static uint32 __PPO__isGuideArrowActivate_cpp() { return STRUCT_OFFSET(AMlineEventActor, isGuideArrowActivate_cpp); }


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_26_PROLOG \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_EVENT_PARMS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_RPC_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_INCLASS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class AMlineEventActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
