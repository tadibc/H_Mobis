// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UObject;
class UScreenshotUtility;
#ifdef FILEHELPER_ScreenshotUtility_generated_h
#error "ScreenshotUtility.generated.h already included, missing '#pragma once' in ScreenshotUtility.h"
#endif
#define FILEHELPER_ScreenshotUtility_generated_h

#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_10_DELEGATE \
struct _Script_FileHelper_eventOutputPin_Parms \
{ \
	UTexture2D* Screenshot; \
	FString Path; \
}; \
static inline void FOutputPin_DelegateWrapper(const FMulticastScriptDelegate& OutputPin, UTexture2D* Screenshot, const FString& Path) \
{ \
	_Script_FileHelper_eventOutputPin_Parms Parms; \
	Parms.Screenshot=Screenshot; \
	Parms.Path=Path; \
	OutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_SPARSE_DATA
#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exec_Completed); \
	DECLARE_FUNCTION(execTakeScreenshot);


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exec_Completed); \
	DECLARE_FUNCTION(execTakeScreenshot);


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenshotUtility(); \
	friend struct Z_Construct_UClass_UScreenshotUtility_Statics; \
public: \
	DECLARE_CLASS(UScreenshotUtility, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileHelper"), NO_API) \
	DECLARE_SERIALIZER(UScreenshotUtility)


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUScreenshotUtility(); \
	friend struct Z_Construct_UClass_UScreenshotUtility_Statics; \
public: \
	DECLARE_CLASS(UScreenshotUtility, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileHelper"), NO_API) \
	DECLARE_SERIALIZER(UScreenshotUtility)


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenshotUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenshotUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshotUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshotUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenshotUtility(UScreenshotUtility&&); \
	NO_API UScreenshotUtility(const UScreenshotUtility&); \
public:


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenshotUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenshotUtility(UScreenshotUtility&&); \
	NO_API UScreenshotUtility(const UScreenshotUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshotUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshotUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenshotUtility)


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_15_PROLOG
#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_SPARSE_DATA \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_RPC_WRAPPERS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_INCLASS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_SPARSE_DATA \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILEHELPER_API UClass* StaticClass<class UScreenshotUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FileHelper_Source_FileHelper_Public_ScreenshotUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
