// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioImporterLibrary() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms
		{
			bool bSucceeded;
		};
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the result of the RAW data transcoded from file */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the result of the RAW data transcoded from file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnRAWDataTranscodeFromFileResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms
		{
			bool bSucceeded;
			TArray<uint8> RAWData;
		};
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_Inner = { "RAWData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData = { "RAWData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms, RAWData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the result of the RAW data transcoded from buffer */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the result of the RAW data transcoded from buffer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnRAWDataTranscodeFromBufferResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms
		{
			bool bSucceeded;
		};
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the result of the audio export to file */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the result of the audio export to file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioExportToFileResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms
		{
			bool bSucceeded;
			TArray<uint8> AudioData;
		};
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the result of the audio export to buffer */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the result of the audio export to buffer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioExportToBufferResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms
		{
			URuntimeAudioImporterLibrary* Importer;
			UImportedSoundWave* ImportedSoundWave;
			ETranscodingStatus Status;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Importer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Importer = { "Importer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, Importer), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, Status), Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Importer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_ImportedSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the audio importer result */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the audio importer result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioImporterResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms
		{
			int32 Percentage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms, Percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the audio importer progress */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the audio importer progress" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioImporterProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execConvertSecondsToString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URuntimeAudioImporterLibrary::ConvertSecondsToString(Z_Param_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execGetAudioFormatAdvanced)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAudioFormat*)Z_Param__Result=URuntimeAudioImporterLibrary::GetAudioFormatAdvanced(Z_Param_Out_AudioData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execGetAudioFormat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAudioFormat*)Z_Param__Result=URuntimeAudioImporterLibrary::GetAudioFormat(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execExportSoundWaveToBuffer)
	{
		P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWave);
		P_GET_ENUM(EAudioFormat,Z_Param_AudioFormat);
		P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeAudioImporterLibrary::ExportSoundWaveToBuffer(Z_Param_ImportedSoundWave,EAudioFormat(Z_Param_AudioFormat),Z_Param_Quality,FOnAudioExportToBufferResult(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execExportSoundWaveToFile)
	{
		P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWave);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_GET_ENUM(EAudioFormat,Z_Param_AudioFormat);
		P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeAudioImporterLibrary::ExportSoundWaveToFile(Z_Param_ImportedSoundWave,Z_Param_SavePath,EAudioFormat(Z_Param_AudioFormat),Z_Param_Quality,FOnAudioExportToFileResult(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execTranscodeRAWDataFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePathFrom);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormatFrom);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePathTo);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormatTo);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeAudioImporterLibrary::TranscodeRAWDataFromFile(Z_Param_FilePathFrom,ERAWAudioFormat(Z_Param_RAWFormatFrom),Z_Param_FilePathTo,ERAWAudioFormat(Z_Param_RAWFormatTo),FOnRAWDataTranscodeFromFileResult(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execTranscodeRAWDataFromBuffer)
	{
		P_GET_TARRAY(uint8,Z_Param_RAWDataFrom);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormatFrom);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormatTo);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeAudioImporterLibrary::TranscodeRAWDataFromBuffer(Z_Param_RAWDataFrom,ERAWAudioFormat(Z_Param_RAWFormatFrom),ERAWAudioFormat(Z_Param_RAWFormatTo),FOnRAWDataTranscodeFromBufferResult(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromRAWBuffer)
	{
		P_GET_TARRAY(uint8,Z_Param_RAWBuffer);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormat);
		P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromRAWBuffer(Z_Param_RAWBuffer,ERAWAudioFormat(Z_Param_RAWFormat),Z_Param_SampleRate,Z_Param_NumOfChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromRAWFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormat);
		P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromRAWFile(Z_Param_FilePath,ERAWAudioFormat(Z_Param_RAWFormat),Z_Param_SampleRate,Z_Param_NumOfChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromBuffer)
	{
		P_GET_TARRAY(uint8,Z_Param_AudioData);
		P_GET_ENUM(EAudioFormat,Z_Param_AudioFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromBuffer(Z_Param_AudioData,EAudioFormat(Z_Param_AudioFormat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromPreImportedSound)
	{
		P_GET_OBJECT(UPreImportedSoundAsset,Z_Param_PreImportedSoundAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromPreImportedSound(Z_Param_PreImportedSoundAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_ENUM(EAudioFormat,Z_Param_AudioFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromFile(Z_Param_FilePath,EAudioFormat(Z_Param_AudioFormat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execCreateRuntimeAudioImporter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeAudioImporterLibrary**)Z_Param__Result=URuntimeAudioImporterLibrary::CreateRuntimeAudioImporter();
		P_NATIVE_END;
	}
	void URuntimeAudioImporterLibrary::StaticRegisterNativesURuntimeAudioImporterLibrary()
	{
		UClass* Class = URuntimeAudioImporterLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertSecondsToString", &URuntimeAudioImporterLibrary::execConvertSecondsToString },
			{ "CreateRuntimeAudioImporter", &URuntimeAudioImporterLibrary::execCreateRuntimeAudioImporter },
			{ "ExportSoundWaveToBuffer", &URuntimeAudioImporterLibrary::execExportSoundWaveToBuffer },
			{ "ExportSoundWaveToFile", &URuntimeAudioImporterLibrary::execExportSoundWaveToFile },
			{ "GetAudioFormat", &URuntimeAudioImporterLibrary::execGetAudioFormat },
			{ "GetAudioFormatAdvanced", &URuntimeAudioImporterLibrary::execGetAudioFormatAdvanced },
			{ "ImportAudioFromBuffer", &URuntimeAudioImporterLibrary::execImportAudioFromBuffer },
			{ "ImportAudioFromFile", &URuntimeAudioImporterLibrary::execImportAudioFromFile },
			{ "ImportAudioFromPreImportedSound", &URuntimeAudioImporterLibrary::execImportAudioFromPreImportedSound },
			{ "ImportAudioFromRAWBuffer", &URuntimeAudioImporterLibrary::execImportAudioFromRAWBuffer },
			{ "ImportAudioFromRAWFile", &URuntimeAudioImporterLibrary::execImportAudioFromRAWFile },
			{ "TranscodeRAWDataFromBuffer", &URuntimeAudioImporterLibrary::execTranscodeRAWDataFromBuffer },
			{ "TranscodeRAWDataFromFile", &URuntimeAudioImporterLibrary::execTranscodeRAWDataFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics
	{
		struct RuntimeAudioImporterLibrary_eventConvertSecondsToString_Parms
		{
			int32 Seconds;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventConvertSecondsToString_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventConvertSecondsToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Utilities" },
		{ "Comment", "/**\n\x09 * Convert seconds to string (hh:mm:ss or mm:ss depending on the number of seconds)\n\x09 *\n\x09 * @return hh:mm:ss or mm:ss string representation\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Convert seconds to string (hh:mm:ss or mm:ss depending on the number of seconds)\n\n@return hh:mm:ss or mm:ss string representation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ConvertSecondsToString", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventConvertSecondsToString_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics
	{
		struct RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms
		{
			URuntimeAudioImporterLibrary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms, ReturnValue), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/**\n\x09 * Instantiates a RuntimeAudioImporter object\n\x09 *\n\x09 * @return The RuntimeAudioImporter object. Bind to it's OnProgress and OnResult delegates\n\x09 */" },
		{ "Keywords", "Create, Audio, Runtime, MP3, FLAC, WAV, OGG, Vorbis" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Instantiates a RuntimeAudioImporter object\n\n@return The RuntimeAudioImporter object. Bind to it's OnProgress and OnResult delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "CreateRuntimeAudioImporter", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics
	{
		struct RuntimeAudioImporterLibrary_eventExportSoundWaveToBuffer_Parms
		{
			UImportedSoundWave* ImportedSoundWave;
			EAudioFormat AudioFormat;
			uint8 Quality;
			FScriptDelegate Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToBuffer_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToBuffer_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToBuffer_Parms, Quality), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_ImportedSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Export" },
		{ "Comment", "/**\n\x09 * Export the imported sound wave to buffer\n\x09 *\n\x09 * @param ImportedSoundWave Reference to the imported sound wave\n\x09 * @param AudioFormat Required format to export Please note that some formats are not supported\n\x09 * @param Quality The quality of the encoded audio data. From 0 to 100\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Export the imported sound wave to buffer\n\n@param ImportedSoundWave Reference to the imported sound wave\n@param AudioFormat Required format to export Please note that some formats are not supported\n@param Quality The quality of the encoded audio data. From 0 to 100\n@param Result Delegate broadcasting the result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ExportSoundWaveToBuffer", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventExportSoundWaveToBuffer_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms
		{
			UImportedSoundWave* ImportedSoundWave;
			FString SavePath;
			EAudioFormat AudioFormat;
			uint8 Quality;
			FScriptDelegate Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms, SavePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_SavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_SavePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms, Quality), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_ImportedSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_AudioFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_AudioFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Export" },
		{ "Comment", "/**\n\x09 * Export the imported sound wave to file\n\x09 *\n\x09 * @param ImportedSoundWave Reference to the imported sound wave\n\x09 * @param AudioFormat Required format to export Please note that some formats are not supported\n\x09 * @param SavePath Path to save the file\n\x09 * @param Quality The quality of the encoded audio data. From 0 to 100\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Export the imported sound wave to file\n\n@param ImportedSoundWave Reference to the imported sound wave\n@param AudioFormat Required format to export Please note that some formats are not supported\n@param SavePath Path to save the file\n@param Quality The quality of the encoded audio data. From 0 to 100\n@param Result Delegate broadcasting the result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ExportSoundWaveToFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventExportSoundWaveToFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics
	{
		struct RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms
		{
			FString FilePath;
			EAudioFormat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms, ReturnValue), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Utilities" },
		{ "Comment", "/**\n\x09 * Get audio format by extension\n\x09 *\n\x09 * @param FilePath File path where to find the format (by extension)\n\x09 * @return The found audio format (e.g. mp3. flac, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Get audio format by extension\n\n@param FilePath File path where to find the format (by extension)\n@return The found audio format (e.g. mp3. flac, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "GetAudioFormat", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics
	{
		struct RuntimeAudioImporterLibrary_eventGetAudioFormatAdvanced_Parms
		{
			TArray<uint8> AudioData;
			EAudioFormat ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventGetAudioFormatAdvanced_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventGetAudioFormatAdvanced_Parms, ReturnValue), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_AudioData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Utilities" },
		{ "Comment", "/**\n\x09 * Determine audio format based on audio data. A more advanced way to get the format\n\x09 *\n\x09 * @param AudioData Audio data array\n\x09 * @return The found audio format (e.g. mp3. flac, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Determine audio format based on audio data. A more advanced way to get the format\n\n@param AudioData Audio data array\n@return The found audio format (e.g. mp3. flac, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "GetAudioFormatAdvanced", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventGetAudioFormatAdvanced_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms
		{
			TArray<uint8> AudioData;
			EAudioFormat AudioFormat;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from buffer\n\x09 *\n\x09 * @param AudioData Audio data array\n\x09 * @param AudioFormat Audio format\n\x09 */" },
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from buffer\n\n@param AudioData Audio data array\n@param AudioFormat Audio format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromBuffer", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms
		{
			FString FilePath;
			EAudioFormat AudioFormat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from file\n\x09 *\n\x09 * @param FilePath Path to the audio file to import\n\x09 * @param AudioFormat Audio format\n\x09 */" },
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from file\n\n@param FilePath Path to the audio file to import\n@param AudioFormat Audio format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms
		{
			UPreImportedSoundAsset* PreImportedSoundAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreImportedSoundAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::NewProp_PreImportedSoundAsset = { "PreImportedSoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms, PreImportedSoundAsset), Z_Construct_UClass_UPreImportedSoundAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::NewProp_PreImportedSoundAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio file from the pre-imported sound asset\n\x09 *\n\x09 * @param PreImportedSoundAsset PreImportedSoundAsset object reference\n\x09 */" },
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio file from the pre-imported sound asset\n\n@param PreImportedSoundAsset PreImportedSoundAsset object reference" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromPreImportedSound", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms
		{
			TArray<uint8> RAWBuffer;
			ERAWAudioFormat RAWFormat;
			int32 SampleRate;
			int32 NumOfChannels;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_Inner = { "RAWBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_MetaData[] = {
		{ "DisplayName", "RAW Buffer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer = { "RAWBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, RAWBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, SampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, NumOfChannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from RAW buffer. Audio data must not have headers and must be uncompressed\n\x09 *\n\x09 * @param RAWBuffer RAW audio buffer\n\x09 * @param RAWFormat RAW audio format\n\x09 * @param SampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
		{ "CPP_Default_NumOfChannels", "1" },
		{ "CPP_Default_SampleRate", "44100" },
		{ "DisplayName", "Import Audio From RAW Buffer" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from RAW buffer. Audio data must not have headers and must be uncompressed\n\n@param RAWBuffer RAW audio buffer\n@param RAWFormat RAW audio format\n@param SampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromRAWBuffer", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms
		{
			FString FilePath;
			ERAWAudioFormat RAWFormat;
			int32 SampleRate;
			int32 NumOfChannels;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, SampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, NumOfChannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from RAW file. Audio data must not have headers and must be uncompressed\n\x09 *\n\x09 * @param FilePath Path to the audio file to import\n\x09 * @param RAWFormat RAW audio format\n\x09 * @param SampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
		{ "CPP_Default_NumOfChannels", "1" },
		{ "CPP_Default_SampleRate", "44100" },
		{ "DisplayName", "Import Audio From RAW File" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from RAW file. Audio data must not have headers and must be uncompressed\n\n@param FilePath Path to the audio file to import\n@param RAWFormat RAW audio format\n@param SampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromRAWFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics
	{
		struct RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms
		{
			TArray<uint8> RAWDataFrom;
			ERAWAudioFormat RAWFormatFrom;
			ERAWAudioFormat RAWFormatTo;
			FScriptDelegate Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWDataFrom_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWDataFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWDataFrom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormatFrom_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormatFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormatFrom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormatTo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormatTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormatTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_Inner = { "RAWDataFrom", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_MetaData[] = {
		{ "DisplayName", "RAW Data From" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom = { "RAWDataFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, RAWDataFrom), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_MetaData[] = {
		{ "DisplayName", "RAW Format From" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom = { "RAWFormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, RAWFormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_MetaData[] = {
		{ "DisplayName", "RAW Format To" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo = { "RAWFormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, RAWFormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Transcode" },
		{ "Comment", "/**\n\x09 * Transcoding one RAW Data format to another from buffer\n\x09 *\n\x09 * @param RAWDataFrom RAW data for transcoding\n\x09 * @param RAWFormatFrom Original format\n\x09 * @param RAWFormatTo Required format\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
		{ "DisplayName", "Transcode RAW Data From Buffer" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Transcoding one RAW Data format to another from buffer\n\n@param RAWDataFrom RAW data for transcoding\n@param RAWFormatFrom Original format\n@param RAWFormatTo Required format\n@param Result Delegate broadcasting the result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "TranscodeRAWDataFromBuffer", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms
		{
			FString FilePathFrom;
			ERAWAudioFormat RAWFormatFrom;
			FString FilePathTo;
			ERAWAudioFormat RAWFormatTo;
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathFrom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormatFrom_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormatFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormatFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathTo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormatTo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormatTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormatTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom = { "FilePathFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, FilePathFrom), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_MetaData[] = {
		{ "DisplayName", "RAW Format From" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom = { "RAWFormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, RAWFormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo = { "FilePathTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, FilePathTo), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_MetaData[] = {
		{ "DisplayName", "RAW Format To" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo = { "RAWFormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, RAWFormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Transcode" },
		{ "Comment", "/**\n\x09 * Transcoding one RAW Data format to another from file. Suitable for use in C++\n\x09 *\n\x09 * @param FilePathFrom Path to file with RAW data for transcoding\n\x09 * @param RAWFormatFrom Original format\n\x09 * @param FilePathTo File path for saving RAW data\n\x09 * @param RAWFormatTo Required format\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
		{ "DisplayName", "Transcode RAW Data From File" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Transcoding one RAW Data format to another from file. Suitable for use in C++\n\n@param FilePathFrom Path to file with RAW data for transcoding\n@param RAWFormatFrom Original format\n@param FilePathTo File path for saving RAW data\n@param RAWFormatTo Required format\n@param Result Delegate broadcasting the result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "TranscodeRAWDataFromFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister()
	{
		return URuntimeAudioImporterLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertSecondsToString, "ConvertSecondsToString" }, // 3993104021
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter, "CreateRuntimeAudioImporter" }, // 1833472106
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer, "ExportSoundWaveToBuffer" }, // 1112274397
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ExportSoundWaveToFile, "ExportSoundWaveToFile" }, // 1768512030
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat, "GetAudioFormat" }, // 783535807
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormatAdvanced, "GetAudioFormatAdvanced" }, // 3522336628
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer, "ImportAudioFromBuffer" }, // 415107902
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile, "ImportAudioFromFile" }, // 120533910
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound, "ImportAudioFromPreImportedSound" }, // 2342834054
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer, "ImportAudioFromRAWBuffer" }, // 2716348446
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile, "ImportAudioFromRAWFile" }, // 2424733493
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer, "TranscodeRAWDataFromBuffer" }, // 1001054064
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile, "TranscodeRAWDataFromFile" }, // 1120972007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/**\n * Runtime Audio Importer library\n * Various functions related to transcoding audio data, such as importing audio files, manually encoding / decoding audio data and more\n */" },
		{ "IncludePath", "RuntimeAudioImporterLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Runtime Audio Importer library\nVarious functions related to transcoding audio data, such as importing audio files, manually encoding / decoding audio data and more" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress_MetaData[] = {
		{ "Category", "Runtime Audio Importer|Delegates" },
		{ "Comment", "/** Bind to know when audio import is on progress */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Bind to know when audio import is on progress" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeAudioImporterLibrary, OnProgress), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult_MetaData[] = {
		{ "Category", "Runtime Audio Importer|Delegates" },
		{ "Comment", "/** Bind to know when audio import is complete (even if it fails) */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Bind to know when audio import is complete (even if it fails)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeAudioImporterLibrary, OnResult), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioImporterLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::ClassParams = {
		&URuntimeAudioImporterLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeAudioImporterLibrary, 2823000964);
	template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeAudioImporterLibrary>()
	{
		return URuntimeAudioImporterLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeAudioImporterLibrary(Z_Construct_UClass_URuntimeAudioImporterLibrary, &URuntimeAudioImporterLibrary::StaticClass, TEXT("/Script/RuntimeAudioImporter"), TEXT("URuntimeAudioImporterLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioImporterLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
