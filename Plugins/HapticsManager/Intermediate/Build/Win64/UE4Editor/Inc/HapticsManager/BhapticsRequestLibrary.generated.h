// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
struct FRotationOption;
struct FRotator;
enum class EPosition : uint8;
class UFeedbackFile;
struct FPathPoint;
struct FDotPoint;
struct FScaleOption;
#ifdef HAPTICSMANAGER_BhapticsRequestLibrary_generated_h
#error "BhapticsRequestLibrary.generated.h already included, missing '#pragma once' in BhapticsRequestLibrary.h"
#endif
#define HAPTICSMANAGER_BhapticsRequestLibrary_generated_h

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_SPARSE_DATA
#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomProjectToVest); \
	DECLARE_FUNCTION(execProjectToVestLocation); \
	DECLARE_FUNCTION(execProjectToVest); \
	DECLARE_FUNCTION(execGetResponseStatus); \
	DECLARE_FUNCTION(execToggleHapticFeedback); \
	DECLARE_FUNCTION(execDisableHapticFeedback); \
	DECLARE_FUNCTION(execEnableHapticFeedback); \
	DECLARE_FUNCTION(execTurnOffRegisteredFeedbackFile); \
	DECLARE_FUNCTION(execTurnOffRegisteredFeedback); \
	DECLARE_FUNCTION(execTurnOffAllFeedback); \
	DECLARE_FUNCTION(execIsDeviceConnected); \
	DECLARE_FUNCTION(execIsRegisteredFilePlaying); \
	DECLARE_FUNCTION(execIsRegisteredPlaying); \
	DECLARE_FUNCTION(execIsAnythingPlaying); \
	DECLARE_FUNCTION(execSubmitPath); \
	DECLARE_FUNCTION(execSubmitDots); \
	DECLARE_FUNCTION(execSubmitBytes); \
	DECLARE_FUNCTION(execRegisterFeedbackFile); \
	DECLARE_FUNCTION(execSubmitFeedbackReflected); \
	DECLARE_FUNCTION(execSubmitFeedbackWithScaleOption); \
	DECLARE_FUNCTION(execSubmitFeedbackWithOptions); \
	DECLARE_FUNCTION(execSubmitFeedbackWithIntensityDuration); \
	DECLARE_FUNCTION(execSubmitFeedbackWithTransform); \
	DECLARE_FUNCTION(execSubmitFeedback); \
	DECLARE_FUNCTION(execInitialize);


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomProjectToVest); \
	DECLARE_FUNCTION(execProjectToVestLocation); \
	DECLARE_FUNCTION(execProjectToVest); \
	DECLARE_FUNCTION(execGetResponseStatus); \
	DECLARE_FUNCTION(execToggleHapticFeedback); \
	DECLARE_FUNCTION(execDisableHapticFeedback); \
	DECLARE_FUNCTION(execEnableHapticFeedback); \
	DECLARE_FUNCTION(execTurnOffRegisteredFeedbackFile); \
	DECLARE_FUNCTION(execTurnOffRegisteredFeedback); \
	DECLARE_FUNCTION(execTurnOffAllFeedback); \
	DECLARE_FUNCTION(execIsDeviceConnected); \
	DECLARE_FUNCTION(execIsRegisteredFilePlaying); \
	DECLARE_FUNCTION(execIsRegisteredPlaying); \
	DECLARE_FUNCTION(execIsAnythingPlaying); \
	DECLARE_FUNCTION(execSubmitPath); \
	DECLARE_FUNCTION(execSubmitDots); \
	DECLARE_FUNCTION(execSubmitBytes); \
	DECLARE_FUNCTION(execRegisterFeedbackFile); \
	DECLARE_FUNCTION(execSubmitFeedbackReflected); \
	DECLARE_FUNCTION(execSubmitFeedbackWithScaleOption); \
	DECLARE_FUNCTION(execSubmitFeedbackWithOptions); \
	DECLARE_FUNCTION(execSubmitFeedbackWithIntensityDuration); \
	DECLARE_FUNCTION(execSubmitFeedbackWithTransform); \
	DECLARE_FUNCTION(execSubmitFeedback); \
	DECLARE_FUNCTION(execInitialize);


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBhapticsRequestLibrary(); \
	friend struct Z_Construct_UClass_UBhapticsRequestLibrary_Statics; \
public: \
	DECLARE_CLASS(UBhapticsRequestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HapticsManager"), NO_API) \
	DECLARE_SERIALIZER(UBhapticsRequestLibrary)


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBhapticsRequestLibrary(); \
	friend struct Z_Construct_UClass_UBhapticsRequestLibrary_Statics; \
public: \
	DECLARE_CLASS(UBhapticsRequestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HapticsManager"), NO_API) \
	DECLARE_SERIALIZER(UBhapticsRequestLibrary)


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBhapticsRequestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBhapticsRequestLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBhapticsRequestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBhapticsRequestLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBhapticsRequestLibrary(UBhapticsRequestLibrary&&); \
	NO_API UBhapticsRequestLibrary(const UBhapticsRequestLibrary&); \
public:


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBhapticsRequestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBhapticsRequestLibrary(UBhapticsRequestLibrary&&); \
	NO_API UBhapticsRequestLibrary(const UBhapticsRequestLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBhapticsRequestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBhapticsRequestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBhapticsRequestLibrary)


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_14_PROLOG
#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_SPARSE_DATA \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_RPC_WRAPPERS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_INCLASS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_SPARSE_DATA \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAPTICSMANAGER_API UClass* StaticClass<class UBhapticsRequestLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_BhapticsRequestLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
