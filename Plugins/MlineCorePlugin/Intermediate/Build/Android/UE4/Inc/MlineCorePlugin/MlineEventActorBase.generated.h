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
#ifdef MLINECOREPLUGIN_MlineEventActorBase_generated_h
#error "MlineEventActorBase.generated.h already included, missing '#pragma once' in MlineEventActorBase.h"
#endif
#define MLINECOREPLUGIN_MlineEventActorBase_generated_h

#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_SPARSE_DATA
#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_RPC_WRAPPERS \
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


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_EVENT_PARMS \
	struct MlineEventActorBase_eventSetIsGuideArrow_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActorBase_eventSetIsHighLight_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActorBase_eventSetIsInteractionTime_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActorBase_eventSetIsVisible_Parms \
	{ \
		bool data; \
	}; \
	struct MlineEventActorBase_eventSetNewTransform_Parms \
	{ \
		FTransform data; \
	}; \
	struct MlineEventActorBase_eventSetTransformOverride_Parms \
	{ \
		bool data; \
	};


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_CALLBACK_WRAPPERS
#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMlineEventActorBase(); \
	friend struct Z_Construct_UClass_AMlineEventActorBase_Statics; \
public: \
	DECLARE_CLASS(AMlineEventActorBase, AMlineActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineEventActorBase) \
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


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAMlineEventActorBase(); \
	friend struct Z_Construct_UClass_AMlineEventActorBase_Statics; \
public: \
	DECLARE_CLASS(AMlineEventActorBase, AMlineActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineEventActorBase) \
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


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMlineEventActorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMlineEventActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineEventActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineEventActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineEventActorBase(AMlineEventActorBase&&); \
	NO_API AMlineEventActorBase(const AMlineEventActorBase&); \
public:


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineEventActorBase(AMlineEventActorBase&&); \
	NO_API AMlineEventActorBase(const AMlineEventActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineEventActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineEventActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMlineEventActorBase)


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isVisible() { return STRUCT_OFFSET(AMlineEventActorBase, isVisible); } \
	FORCEINLINE static uint32 __PPO__isInteractionTime() { return STRUCT_OFFSET(AMlineEventActorBase, isInteractionTime); } \
	FORCEINLINE static uint32 __PPO__isHighLight() { return STRUCT_OFFSET(AMlineEventActorBase, isHighLight); } \
	FORCEINLINE static uint32 __PPO__isGuideArrow() { return STRUCT_OFFSET(AMlineEventActorBase, isGuideArrow); } \
	FORCEINLINE static uint32 __PPO__newTransform() { return STRUCT_OFFSET(AMlineEventActorBase, newTransform); } \
	FORCEINLINE static uint32 __PPO__isTransformOverride() { return STRUCT_OFFSET(AMlineEventActorBase, isTransformOverride); } \
	FORCEINLINE static uint32 __PPO__isVisible_OLD() { return STRUCT_OFFSET(AMlineEventActorBase, isVisible_OLD); } \
	FORCEINLINE static uint32 __PPO__isInteractionTime_OLD() { return STRUCT_OFFSET(AMlineEventActorBase, isInteractionTime_OLD); } \
	FORCEINLINE static uint32 __PPO__isHighLight_OLD() { return STRUCT_OFFSET(AMlineEventActorBase, isHighLight_OLD); } \
	FORCEINLINE static uint32 __PPO__isGuideArrow_OLD() { return STRUCT_OFFSET(AMlineEventActorBase, isGuideArrow_OLD); } \
	FORCEINLINE static uint32 __PPO__Transform_OLD() { return STRUCT_OFFSET(AMlineEventActorBase, Transform_OLD); } \
	FORCEINLINE static uint32 __PPO__guideArrow() { return STRUCT_OFFSET(AMlineEventActorBase, guideArrow); } \
	FORCEINLINE static uint32 __PPO__blinkMaterialInstance() { return STRUCT_OFFSET(AMlineEventActorBase, blinkMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__isHighlightActivate_cpp() { return STRUCT_OFFSET(AMlineEventActorBase, isHighlightActivate_cpp); } \
	FORCEINLINE static uint32 __PPO__isGuideArrowActivate_cpp() { return STRUCT_OFFSET(AMlineEventActorBase, isGuideArrowActivate_cpp); }


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_27_PROLOG \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_EVENT_PARMS


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_PRIVATE_PROPERTY_OFFSET \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_SPARSE_DATA \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_RPC_WRAPPERS \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_CALLBACK_WRAPPERS \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_INCLASS \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_PRIVATE_PROPERTY_OFFSET \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_SPARSE_DATA \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_CALLBACK_WRAPPERS \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_INCLASS_NO_PURE_DECLS \
	KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class AMlineEventActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KDHC_1st_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineEventActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
