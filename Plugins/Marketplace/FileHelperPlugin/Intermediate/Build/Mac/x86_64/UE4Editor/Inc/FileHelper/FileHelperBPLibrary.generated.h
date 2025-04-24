// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptStruct;
class UDataTable;
class UTexture2D;
struct FCustomNodeStat;
struct FProjectPath;
struct FEnginePath;
class UStruct;
#ifdef FILEHELPER_FileHelperBPLibrary_generated_h
#error "FileHelperBPLibrary.generated.h already included, missing '#pragma once' in FileHelperBPLibrary.h"
#endif
#define FILEHELPER_FileHelperBPLibrary_generated_h

#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnginePath_Statics; \
	FILEHELPER_API static class UScriptStruct* StaticStruct();


template<> FILEHELPER_API UScriptStruct* StaticStruct<struct FEnginePath>();

#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectPath_Statics; \
	FILEHELPER_API static class UScriptStruct* StaticStruct();


template<> FILEHELPER_API UScriptStruct* StaticStruct<struct FProjectPath>();

#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomNodeStat_Statics; \
	FILEHELPER_API static class UScriptStruct* StaticStruct();


template<> FILEHELPER_API UScriptStruct* StaticStruct<struct FCustomNodeStat>();

#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_SPARSE_DATA
#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveConfig); \
	DECLARE_FUNCTION(execJSONToDataTable); \
	DECLARE_FUNCTION(execCSVToDataTable); \
	DECLARE_FUNCTION(execDataTableToJSON); \
	DECLARE_FUNCTION(execDatatableToCSV); \
	DECLARE_FUNCTION(execLoadScreenshot); \
	DECLARE_FUNCTION(execTakeScreenShot); \
	DECLARE_FUNCTION(execGetPathParts); \
	DECLARE_FUNCTION(execRenameFile); \
	DECLARE_FUNCTION(execMoveFile); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execRemoveFile); \
	DECLARE_FUNCTION(execNodeStats); \
	DECLARE_FUNCTION(execMoveDirectory); \
	DECLARE_FUNCTION(execCopyDirectory); \
	DECLARE_FUNCTION(execRemoveDirectory); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execListDirectory); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetReadOnlyFlag); \
	DECLARE_FUNCTION(execSetReadOnlyFlag); \
	DECLARE_FUNCTION(execValidateFilename); \
	DECLARE_FUNCTION(execIsValidFilename); \
	DECLARE_FUNCTION(execIsDirectory); \
	DECLARE_FUNCTION(execIsFile); \
	DECLARE_FUNCTION(execCSVToString); \
	DECLARE_FUNCTION(execStringToCSV); \
	DECLARE_FUNCTION(execReadCSV); \
	DECLARE_FUNCTION(execSaveCSV); \
	DECLARE_FUNCTION(execBytesFromBase64); \
	DECLARE_FUNCTION(execBytesToBase64); \
	DECLARE_FUNCTION(execStringFromBase64); \
	DECLARE_FUNCTION(execStringToBase64); \
	DECLARE_FUNCTION(execSaveByte); \
	DECLARE_FUNCTION(execReadByte); \
	DECLARE_FUNCTION(execSaveLine); \
	DECLARE_FUNCTION(execReadLine); \
	DECLARE_FUNCTION(execSaveText); \
	DECLARE_FUNCTION(execReadText); \
	DECLARE_FUNCTION(execGetProjectDirectories); \
	DECLARE_FUNCTION(execGetEngineDirectories);


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveConfig); \
	DECLARE_FUNCTION(execJSONToDataTable); \
	DECLARE_FUNCTION(execCSVToDataTable); \
	DECLARE_FUNCTION(execDataTableToJSON); \
	DECLARE_FUNCTION(execDatatableToCSV); \
	DECLARE_FUNCTION(execLoadScreenshot); \
	DECLARE_FUNCTION(execTakeScreenShot); \
	DECLARE_FUNCTION(execGetPathParts); \
	DECLARE_FUNCTION(execRenameFile); \
	DECLARE_FUNCTION(execMoveFile); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execRemoveFile); \
	DECLARE_FUNCTION(execNodeStats); \
	DECLARE_FUNCTION(execMoveDirectory); \
	DECLARE_FUNCTION(execCopyDirectory); \
	DECLARE_FUNCTION(execRemoveDirectory); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execListDirectory); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetReadOnlyFlag); \
	DECLARE_FUNCTION(execSetReadOnlyFlag); \
	DECLARE_FUNCTION(execValidateFilename); \
	DECLARE_FUNCTION(execIsValidFilename); \
	DECLARE_FUNCTION(execIsDirectory); \
	DECLARE_FUNCTION(execIsFile); \
	DECLARE_FUNCTION(execCSVToString); \
	DECLARE_FUNCTION(execStringToCSV); \
	DECLARE_FUNCTION(execReadCSV); \
	DECLARE_FUNCTION(execSaveCSV); \
	DECLARE_FUNCTION(execBytesFromBase64); \
	DECLARE_FUNCTION(execBytesToBase64); \
	DECLARE_FUNCTION(execStringFromBase64); \
	DECLARE_FUNCTION(execStringToBase64); \
	DECLARE_FUNCTION(execSaveByte); \
	DECLARE_FUNCTION(execReadByte); \
	DECLARE_FUNCTION(execSaveLine); \
	DECLARE_FUNCTION(execReadLine); \
	DECLARE_FUNCTION(execSaveText); \
	DECLARE_FUNCTION(execReadText); \
	DECLARE_FUNCTION(execGetProjectDirectories); \
	DECLARE_FUNCTION(execGetEngineDirectories);


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileHelperBPLibrary(); \
	friend struct Z_Construct_UClass_UFileHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileHelper"), NO_API) \
	DECLARE_SERIALIZER(UFileHelperBPLibrary)


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUFileHelperBPLibrary(); \
	friend struct Z_Construct_UClass_UFileHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileHelper"), NO_API) \
	DECLARE_SERIALIZER(UFileHelperBPLibrary)


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileHelperBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileHelperBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileHelperBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileHelperBPLibrary(UFileHelperBPLibrary&&); \
	NO_API UFileHelperBPLibrary(const UFileHelperBPLibrary&); \
public:


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileHelperBPLibrary(UFileHelperBPLibrary&&); \
	NO_API UFileHelperBPLibrary(const UFileHelperBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileHelperBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileHelperBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileHelperBPLibrary)


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_105_PROLOG
#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_SPARSE_DATA \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_RPC_WRAPPERS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_INCLASS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_SPARSE_DATA \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h_108_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FileHelperBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILEHELPER_API UClass* StaticClass<class UFileHelperBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FileHelper_Source_FileHelper_Public_FileHelperBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
