// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESceneEvent : uint8;
#ifdef MLINECOREPLUGIN_MlineScenarioManagerController_generated_h
#error "MlineScenarioManagerController.generated.h already included, missing '#pragma once' in MlineScenarioManagerController.h"
#endif
#define MLINECOREPLUGIN_MlineScenarioManagerController_generated_h

#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_SPARSE_DATA
#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_RPC_WRAPPERS \
	virtual void InitEndedEventFlag_Implementation(); \
	virtual void SetEndedEventFlag_Implementation(ESceneEvent eventFlag); \
 \
	DECLARE_FUNCTION(execInitEndedEventFlag); \
	DECLARE_FUNCTION(execSetEndedEventFlag);


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitEndedEventFlag_Implementation(); \
	virtual void SetEndedEventFlag_Implementation(ESceneEvent eventFlag); \
 \
	DECLARE_FUNCTION(execInitEndedEventFlag); \
	DECLARE_FUNCTION(execSetEndedEventFlag);


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_EVENT_PARMS \
	struct MlineScenarioManagerController_eventSetEndedEventFlag_Parms \
	{ \
		ESceneEvent eventFlag; \
	};


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_CALLBACK_WRAPPERS
#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMlineScenarioManagerController(); \
	friend struct Z_Construct_UClass_AMlineScenarioManagerController_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioManagerController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioManagerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		playerType=NETFIELD_REP_START, \
		EndedEventFlag, \
		ScenarioManager, \
		NETFIELD_REP_END=ScenarioManager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMlineScenarioManagerController(); \
	friend struct Z_Construct_UClass_AMlineScenarioManagerController_Statics; \
public: \
	DECLARE_CLASS(AMlineScenarioManagerController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(AMlineScenarioManagerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		playerType=NETFIELD_REP_START, \
		EndedEventFlag, \
		ScenarioManager, \
		NETFIELD_REP_END=ScenarioManager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMlineScenarioManagerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMlineScenarioManagerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioManagerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioManagerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioManagerController(AMlineScenarioManagerController&&); \
	NO_API AMlineScenarioManagerController(const AMlineScenarioManagerController&); \
public:


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMlineScenarioManagerController(AMlineScenarioManagerController&&); \
	NO_API AMlineScenarioManagerController(const AMlineScenarioManagerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMlineScenarioManagerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMlineScenarioManagerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMlineScenarioManagerController)


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_10_PROLOG \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_EVENT_PARMS


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_SPARSE_DATA \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_RPC_WRAPPERS \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_CALLBACK_WRAPPERS \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_INCLASS \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_SPARSE_DATA \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_CALLBACK_WRAPPERS \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class AMlineScenarioManagerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineScenarioManagerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
