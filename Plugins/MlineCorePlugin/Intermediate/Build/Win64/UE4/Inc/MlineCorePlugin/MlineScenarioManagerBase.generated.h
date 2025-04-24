// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDefaultStepContext;
struct FFadeData;
struct FInteractionData;
struct FLoadLevelData;
struct FMoveData;
struct FNarrationData;
class AMlineScenarioActorBase;
#ifdef MLINECOREPLUGIN_MlineScenarioManagerBase_generated_h
#error "MlineScenarioManagerBase.generated.h already included, missing '#pragma once' in MlineScenarioManagerBase.h"
#endif
#define MLINECOREPLUGIN_MlineScenarioManagerBase_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_SPARSE_DATA
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_RPC_WRAPPERS \
	virtual void NextStep_Implementation(FDefaultStepContext context); \
	virtual void FinalizeStep_Implementation(FDefaultStepContext context); \
	virtual void EndStep_Implementation(FDefaultStepContext context); \
	virtual void StayStep_Implementation(FDefaultStepContext context); \
	virtual void StartStep_Implementation(FDefaultStepContext context); \
	virtual void InitializeStep_Implementation(FDefaultStepContext context); \
	virtual void ShiftStep_Implementation(int32 scene, int32 step); \
 \
	DECLARE_FUNCTION(execCallScenarioEvent); \
	DECLARE_FUNCTION(execNextStep); \
	DECLARE_FUNCTION(execFinalizeStep); \
	DECLARE_FUNCTION(execEndStep); \
	DECLARE_FUNCTION(execStayStep); \
	DECLARE_FUNCTION(execStartStep); \
	DECLARE_FUNCTION(execInitializeStep); \
	DECLARE_FUNCTION(execJumpStep); \
	DECLARE_FUNCTION(execShiftStepByName); \
	DECLARE_FUNCTION(execShiftStep); \
	DECLARE_FUNCTION(execStepEnd); \
	DECLARE_FUNCTION(execPrev); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execScenarioStart); \
	DECLARE_FUNCTION(execSetEventActors_cpp);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NextStep_Implementation(FDefaultStepContext context); \
	virtual void FinalizeStep_Implementation(FDefaultStepContext context); \
	virtual void EndStep_Implementation(FDefaultStepContext context); \
	virtual void StayStep_Implementation(FDefaultStepContext context); \
	virtual void StartStep_Implementation(FDefaultStepContext context); \
	virtual void InitializeStep_Implementation(FDefaultStepContext context); \
	virtual void ShiftStep_Implementation(int32 scene, int32 step); \
 \
	DECLARE_FUNCTION(execCallScenarioEvent); \
	DECLARE_FUNCTION(execNextStep); \
	DECLARE_FUNCTION(execFinalizeStep); \
	DECLARE_FUNCTION(execEndStep); \
	DECLARE_FUNCTION(execStayStep); \
	DECLARE_FUNCTION(execStartStep); \
	DECLARE_FUNCTION(execInitializeStep); \
	DECLARE_FUNCTION(execJumpStep); \
	DECLARE_FUNCTION(execShiftStepByName); \
	DECLARE_FUNCTION(execShiftStep); \
	DECLARE_FUNCTION(execStepEnd); \
	DECLARE_FUNCTION(execPrev); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execScenarioStart); \
	DECLARE_FUNCTION(execSetEventActors_cpp);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_EVENT_PARMS \
	struct MlineScenarioManagerBase_eventCallFade_Parms \
	{ \
		FFadeData data; \
	}; \
	struct MlineScenarioManagerBase_eventCallInteraction_Parms \
	{ \
		FInteractionData data; \
	}; \
	struct MlineScenarioManagerBase_eventCallLocaLevel_Parms \
	{ \
		FLoadLevelData data; \
	}; \
	struct MlineScenarioManagerBase_eventCallMove_Parms \
	{ \
		FMoveData data; \
	}; \
	struct MlineScenarioManagerBase_eventCallNarration_Parms \
	{ \
		FNarrationData data; \
	}; \
	struct MlineScenarioManagerBase_eventEndInteraction_Parms \
	{ \
		int32 Scene; \
		int32 Step; \
		AMlineScenarioActorBase* endActor; \
	}; \
	struct MlineScenarioManagerBase_eventEndStep_Parms \
	{ \
		FDefaultStepContext context; \
	}; \
	struct MlineScenarioManagerBase_eventFinalizeStep_Parms \
	{ \
		FDefaultStepContext context; \
	}; \
	struct MlineScenarioManagerBase_eventInitializeStep_Parms \
	{ \
		FDefaultStepContext context; \
	}; \
	struct MlineScenarioManagerBase_eventNextStep_Parms \
	{ \
		FDefaultStepContext context; \
	}; \
	struct MlineScenarioManagerBase_eventShiftStep_Parms \
	{ \
		int32 scene; \
		int32 step; \
	}; \
	struct MlineScenarioManagerBase_eventStartStep_Parms \
	{ \
		FDefaultStepContext context; \
	}; \
	struct MlineScenarioManagerBase_eventStayStep_Parms \
	{ \
		FDefaultStepContext context; \
	};


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_CALLBACK_WRAPPERS
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMlineScenarioManagerBase(); \
	friend struct Z_Construct_UClass_AMlineScenarioManagerBase_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioManagerBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentScene_cpp=NETFIELD_REP_START, \
		currentStep_cpp, \
		ScenarioState, \
		StepState, \
		EndedEventFlag, \
		NETFIELD_REP_END=EndedEventFlag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMlineScenarioManagerBase(); \
	friend struct Z_Construct_UClass_AMlineScenarioManagerBase_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioManagerBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentScene_cpp=NETFIELD_REP_START, \
		currentStep_cpp, \
		ScenarioState, \
		StepState, \
		EndedEventFlag, \
		NETFIELD_REP_END=EndedEventFlag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMlineScenarioManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMlineScenarioManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioManagerBase(AMlineScenarioManagerBase&&); \
	NO_API AMlineScenarioManagerBase(const AMlineScenarioManagerBase&); \
public:


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioManagerBase(AMlineScenarioManagerBase&&); \
	NO_API AMlineScenarioManagerBase(const AMlineScenarioManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMlineScenarioManagerBase)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventChecker() { return STRUCT_OFFSET(AMlineScenarioManagerBase, EventChecker); }


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_9_PROLOG \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_EVENT_PARMS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_RPC_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_INCLASS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class AMlineScenarioManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
