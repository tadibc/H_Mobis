// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/Sound/StreamingSoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamingSoundWave() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UStreamingSoundWave_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UStreamingSoundWave();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat();
// End Cross Module References
	DEFINE_FUNCTION(UStreamingSoundWave::execSetStopSoundOnPlaybackFinish)
	{
		P_GET_UBOOL(Z_Param_bStop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopSoundOnPlaybackFinish(Z_Param_bStop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamingSoundWave::execAppendAudioDataFromRAW)
	{
		P_GET_TARRAY(uint8,Z_Param_RAWData);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_RAWFormat);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendAudioDataFromRAW(Z_Param_RAWData,ERAWAudioFormat(Z_Param_RAWFormat),Z_Param_InSampleRate,Z_Param_NumOfChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamingSoundWave::execAppendAudioDataFromEncoded)
	{
		P_GET_TARRAY(uint8,Z_Param_AudioData);
		P_GET_ENUM(EAudioFormat,Z_Param_AudioFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendAudioDataFromEncoded(Z_Param_AudioData,EAudioFormat(Z_Param_AudioFormat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamingSoundWave::execCreateStreamingSoundWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamingSoundWave**)Z_Param__Result=UStreamingSoundWave::CreateStreamingSoundWave();
		P_NATIVE_END;
	}
	void UStreamingSoundWave::StaticRegisterNativesUStreamingSoundWave()
	{
		UClass* Class = UStreamingSoundWave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendAudioDataFromEncoded", &UStreamingSoundWave::execAppendAudioDataFromEncoded },
			{ "AppendAudioDataFromRAW", &UStreamingSoundWave::execAppendAudioDataFromRAW },
			{ "CreateStreamingSoundWave", &UStreamingSoundWave::execCreateStreamingSoundWave },
			{ "SetStopSoundOnPlaybackFinish", &UStreamingSoundWave::execSetStopSoundOnPlaybackFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics
	{
		struct StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Append" },
		{ "Comment", "/**\n\x09 * Append audio data to the end of existing data from encoded audio data\n\x09 *\n\x09 * @param AudioData Audio data array\n\x09 * @param AudioFormat Audio format\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
		{ "ToolTip", "Append audio data to the end of existing data from encoded audio data\n\n@param AudioData Audio data array\n@param AudioFormat Audio format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "AppendAudioDataFromEncoded", nullptr, nullptr, sizeof(StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms), Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics
	{
		struct StreamingSoundWave_eventAppendAudioDataFromRAW_Parms
		{
			TArray<uint8> RAWData;
			ERAWAudioFormat RAWFormat;
			int32 InSampleRate;
			int32 NumOfChannels;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_Inner = { "RAWData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_MetaData[] = {
		{ "DisplayName", "RAW Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData = { "RAWData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, RAWData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate_MetaData[] = {
		{ "DisplayName", "Sample Rate" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate = { "InSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, InSampleRate), METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, NumOfChannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_NumOfChannels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Append" },
		{ "Comment", "/**\n\x09 * Append audio data to the end of existing data from RAW audio data\n\x09 *\n\x09 * @param RAWData RAW audio buffer\n\x09 * @param RAWFormat RAW audio format\n\x09 * @param InSampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
		{ "CPP_Default_InSampleRate", "44100" },
		{ "CPP_Default_NumOfChannels", "1" },
		{ "DisplayName", "Append Audio Data From RAW" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
		{ "ToolTip", "Append audio data to the end of existing data from RAW audio data\n\n@param RAWData RAW audio buffer\n@param RAWFormat RAW audio format\n@param InSampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "AppendAudioDataFromRAW", nullptr, nullptr, sizeof(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms), Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics
	{
		struct StreamingSoundWave_eventCreateStreamingSoundWave_Parms
		{
			UStreamingSoundWave* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamingSoundWave_eventCreateStreamingSoundWave_Parms, ReturnValue), Z_Construct_UClass_UStreamingSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Main" },
		{ "Comment", "/**\n\x09 * Create a new instance of the streaming sound wave\n\x09 *\n\x09 * @return Created streaming sound wave\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
		{ "ToolTip", "Create a new instance of the streaming sound wave\n\n@return Created streaming sound wave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "CreateStreamingSoundWave", nullptr, nullptr, sizeof(StreamingSoundWave_eventCreateStreamingSoundWave_Parms), Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics
	{
		struct StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms
		{
			bool bStop;
		};
		static void NewProp_bStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop_SetBit(void* Obj)
	{
		((StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms*)Obj)->bStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms), &Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Streaming Sound Wave|Import" },
		{ "Comment", "/**\n\x09 * Set whether the sound should stop after playback is complete or not (play \"blank sound\"). False by default\n\x09 * Setting it to True also makes the sound wave eligible for garbage collection after it has finished playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
		{ "ToolTip", "Set whether the sound should stop after playback is complete or not (play \"blank sound\"). False by default\nSetting it to True also makes the sound wave eligible for garbage collection after it has finished playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "SetStopSoundOnPlaybackFinish", nullptr, nullptr, sizeof(StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms), Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreamingSoundWave_NoRegister()
	{
		return UStreamingSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UStreamingSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamingSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportedSoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamingSoundWave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded, "AppendAudioDataFromEncoded" }, // 2285153364
		{ &Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW, "AppendAudioDataFromRAW" }, // 1529324534
		{ &Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave, "CreateStreamingSoundWave" }, // 2989832335
		{ &Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish, "SetStopSoundOnPlaybackFinish" }, // 643018443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Streaming Sound Wave" },
		{ "Comment", "/**\n * Streaming sound wave. Can append audio data dynamically, including during playback\n * It will live indefinitely, even if the sound wave has finished playing, until SetStopSoundOnPlaybackFinish is called.\n * Audio data is always accumulated, clear memory manually via ReleaseMemory if necessary.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/StreamingSoundWave.h" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Streaming sound wave. Can append audio data dynamically, including during playback\nIt will live indefinitely, even if the sound wave has finished playing, until SetStopSoundOnPlaybackFinish is called.\nAudio data is always accumulated, clear memory manually via ReleaseMemory if necessary." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamingSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingSoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamingSoundWave_Statics::ClassParams = {
		&UStreamingSoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamingSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamingSoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamingSoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamingSoundWave, 2363327138);
	template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UStreamingSoundWave>()
	{
		return UStreamingSoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamingSoundWave(Z_Construct_UClass_UStreamingSoundWave, &UStreamingSoundWave::StaticClass, TEXT("/Script/RuntimeAudioImporter"), TEXT("UStreamingSoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingSoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
