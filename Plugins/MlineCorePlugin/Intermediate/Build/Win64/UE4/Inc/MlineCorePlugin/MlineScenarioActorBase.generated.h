// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FActorStepContext;
class AMlineScenarioManagerBase;
#ifdef MLINECOREPLUGIN_MlineScenarioActorBase_generated_h
#error "MlineScenarioActorBase.generated.h already included, missing '#pragma once' in MlineScenarioActorBase.h"
#endif
#define MLINECOREPLUGIN_MlineScenarioActorBase_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_SPARSE_DATA
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_RPC_WRAPPERS \
	virtual void NextStep_Implementation(FActorStepContext context); \
	virtual void FinalizeStep_Implementation(FActorStepContext context); \
	virtual void EndStep_Implementation(FActorStepContext context); \
	virtual void StartStep_Implementation(FActorStepContext context); \
	virtual void InitializeStep_Implementation(FActorStepContext context); \
 \
	DECLARE_FUNCTION(execNextStep); \
	DECLARE_FUNCTION(execFinalizeStep); \
	DECLARE_FUNCTION(execEndStep); \
	DECLARE_FUNCTION(execStartStep); \
	DECLARE_FUNCTION(execInitializeStep);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NextStep_Implementation(FActorStepContext context); \
	virtual void FinalizeStep_Implementation(FActorStepContext context); \
	virtual void EndStep_Implementation(FActorStepContext context); \
	virtual void StartStep_Implementation(FActorStepContext context); \
	virtual void InitializeStep_Implementation(FActorStepContext context); \
 \
	DECLARE_FUNCTION(execNextStep); \
	DECLARE_FUNCTION(execFinalizeStep); \
	DECLARE_FUNCTION(execEndStep); \
	DECLARE_FUNCTION(execStartStep); \
	DECLARE_FUNCTION(execInitializeStep);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_EVENT_PARMS \
	struct MlineScenarioActorBase_eventEndStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActorBase_eventFinalizeStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActorBase_eventInitializeStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActorBase_eventNextStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActorBase_eventStartInteraction_Parms \
	{ \
		AMlineScenarioManagerBase* manager; \
	}; \
	struct MlineScenarioActorBase_eventStartStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActorBase_eventStepEnded_Parms \
	{ \
		FActorStepContext context; \
	};


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMlineScenarioActorBase(); \
	friend struct Z_Construct_UClass_AMlineScenarioActorBase_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioActorBase, AMlineEventActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioActorBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		interactionScene=NETFIELD_REP_START, \
		interactionStep, \
		controlledManager, \
		bIsInteractionEnd, \
		NETFIELD_REP_END=bIsInteractionEnd	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMlineScenarioActorBase(); \
	friend struct Z_Construct_UClass_AMlineScenarioActorBase_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioActorBase, AMlineEventActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioActorBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		interactionScene=NETFIELD_REP_START, \
		interactionStep, \
		controlledManager, \
		bIsInteractionEnd, \
		NETFIELD_REP_END=bIsInteractionEnd	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMlineScenarioActorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMlineScenarioActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioActorBase(AMlineScenarioActorBase&&); \
	NO_API AMlineScenarioActorBase(const AMlineScenarioActorBase&); \
public:


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioActorBase(AMlineScenarioActorBase&&); \
	NO_API AMlineScenarioActorBase(const AMlineScenarioActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMlineScenarioActorBase)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_10_PROLOG \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_EVENT_PARMS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_RPC_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_INCLASS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class AMlineScenarioActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
