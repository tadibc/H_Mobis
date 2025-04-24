// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DTAES_DTAesLib_generated_h
#error "DTAesLib.generated.h already included, missing '#pragma once' in DTAesLib.h"
#endif
#define DTAES_DTAesLib_generated_h

#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_SPARSE_DATA
#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAESDecryptData); \
	DECLARE_FUNCTION(execAESEncryptData); \
	DECLARE_FUNCTION(execAESDecrypt); \
	DECLARE_FUNCTION(execAESEncrypt);


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAESDecryptData); \
	DECLARE_FUNCTION(execAESEncryptData); \
	DECLARE_FUNCTION(execAESDecrypt); \
	DECLARE_FUNCTION(execAESEncrypt);


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTAesLib(); \
	friend struct Z_Construct_UClass_UDTAesLib_Statics; \
public: \
	DECLARE_CLASS(UDTAesLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DTAes"), NO_API) \
	DECLARE_SERIALIZER(UDTAesLib)


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDTAesLib(); \
	friend struct Z_Construct_UClass_UDTAesLib_Statics; \
public: \
	DECLARE_CLASS(UDTAesLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DTAes"), NO_API) \
	DECLARE_SERIALIZER(UDTAesLib)


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTAesLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTAesLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTAesLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTAesLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDTAesLib(UDTAesLib&&); \
	NO_API UDTAesLib(const UDTAesLib&); \
public:


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTAesLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDTAesLib(UDTAesLib&&); \
	NO_API UDTAesLib(const UDTAesLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTAesLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTAesLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTAesLib)


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_13_PROLOG
#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_RPC_WRAPPERS \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_INCLASS \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DTAES_API UClass* StaticClass<class UDTAesLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_Marketplace_DTAes_Source_DTAes_Public_DTAesLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
