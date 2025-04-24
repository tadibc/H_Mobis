// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FActorStepContext;
class AMlineScenarioManager;
#ifdef MLINECOREPLUGIN_MlineScenarioActor_generated_h
#error "MlineScenarioActor.generated.h already included, missing '#pragma once' in MlineScenarioActor.h"
#endif
#define MLINECOREPLUGIN_MlineScenarioActor_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_SPARSE_DATA
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_RPC_WRAPPERS \
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


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_EVENT_PARMS \
	struct MlineScenarioActor_eventEndStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActor_eventFinalizeStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActor_eventInitializeStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActor_eventNextStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActor_eventStartInteraction_Parms \
	{ \
		AMlineScenarioManager* manager; \
	}; \
	struct MlineScenarioActor_eventStartStep_Parms \
	{ \
		FActorStepContext context; \
	}; \
	struct MlineScenarioActor_eventStepEnded_Parms \
	{ \
		FActorStepContext context; \
	};


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMlineScenarioActor(); \
	friend struct Z_Construct_UClass_AMlineScenarioActor_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioActor, AMlineEventActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		interactionScene=NETFIELD_REP_START, \
		interactionStep, \
		controlledManager, \
		bIsInteractionEnd, \
		NETFIELD_REP_END=bIsInteractionEnd	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMlineScenarioActor(); \
	friend struct Z_Construct_UClass_AMlineScenarioActor_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioActor, AMlineEventActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		interactionScene=NETFIELD_REP_START, \
		interactionStep, \
		controlledManager, \
		bIsInteractionEnd, \
		NETFIELD_REP_END=bIsInteractionEnd	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMlineScenarioActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMlineScenarioActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioActor(AMlineScenarioActor&&); \
	NO_API AMlineScenarioActor(const AMlineScenarioActor&); \
public:


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioActor(AMlineScenarioActor&&); \
	NO_API AMlineScenarioActor(const AMlineScenarioActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMlineScenarioActor)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_10_PROLOG \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_EVENT_PARMS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_RPC_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_INCLASS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class AMlineScenarioActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
