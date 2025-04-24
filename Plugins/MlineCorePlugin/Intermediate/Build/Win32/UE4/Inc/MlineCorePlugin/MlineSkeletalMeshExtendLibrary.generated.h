// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPoseableMeshComponent;
 enum class EBone : uint8;
enum class EOculusHandType : uint8;
struct FTransform;
class USkeletalMeshComponent;
#ifdef MLINECOREPLUGIN_MlineSkeletalMeshExtendLibrary_generated_h
#error "MlineSkeletalMeshExtendLibrary.generated.h already included, missing '#pragma once' in MlineSkeletalMeshExtendLibrary.h"
#endif
#define MLINECOREPLUGIN_MlineSkeletalMeshExtendLibrary_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_SPARSE_DATA
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRefBonePoseByName2); \
	DECLARE_FUNCTION(execGetRefBonePoseByName2); \
	DECLARE_FUNCTION(execGetRefBonePose2); \
	DECLARE_FUNCTION(execSetRefBonePoseByName); \
	DECLARE_FUNCTION(execGetRefBonePoseByName); \
	DECLARE_FUNCTION(execGetRefBonePose);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRefBonePoseByName2); \
	DECLARE_FUNCTION(execGetRefBonePoseByName2); \
	DECLARE_FUNCTION(execGetRefBonePose2); \
	DECLARE_FUNCTION(execSetRefBonePoseByName); \
	DECLARE_FUNCTION(execGetRefBonePoseByName); \
	DECLARE_FUNCTION(execGetRefBonePose);


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMlineSkeletalMeshExtendLibrary(); \
	friend struct Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics; \
public: \
	DECLARE_CLASS(UMlineSkeletalMeshExtendLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(UMlineSkeletalMeshExtendLibrary)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMlineSkeletalMeshExtendLibrary(); \
	friend struct Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics; \
public: \
	DECLARE_CLASS(UMlineSkeletalMeshExtendLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MlineCorePlugin"), NO_API) \
	DECLARE_SERIALIZER(UMlineSkeletalMeshExtendLibrary)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMlineSkeletalMeshExtendLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMlineSkeletalMeshExtendLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMlineSkeletalMeshExtendLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMlineSkeletalMeshExtendLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMlineSkeletalMeshExtendLibrary(UMlineSkeletalMeshExtendLibrary&&); \
	NO_API UMlineSkeletalMeshExtendLibrary(const UMlineSkeletalMeshExtendLibrary&); \
public:


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMlineSkeletalMeshExtendLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMlineSkeletalMeshExtendLibrary(UMlineSkeletalMeshExtendLibrary&&); \
	NO_API UMlineSkeletalMeshExtendLibrary(const UMlineSkeletalMeshExtendLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMlineSkeletalMeshExtendLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMlineSkeletalMeshExtendLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMlineSkeletalMeshExtendLibrary)


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_15_PROLOG
#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_RPC_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_INCLASS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINECOREPLUGIN_API UClass* StaticClass<class UMlineSkeletalMeshExtendLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlineCorePlugin_Public_MlineSkeletalMeshExtendLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
