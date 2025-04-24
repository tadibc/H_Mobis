// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/Sound/ImportedSoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportedSoundWave() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FEditableSubtitleCue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnPreparedSoundWaveForMetaSounds_Parms
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
	void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((_Script_RuntimeAudioImporter_eventOnPreparedSoundWaveForMetaSounds_Parms*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnPreparedSoundWaveForMetaSounds_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::NewProp_bSucceeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcasting the result of preparing a sound wave for MetaSounds */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Dynamic delegate broadcasting the result of preparing a sound wave for MetaSounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnPreparedSoundWaveForMetaSounds__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnPreparedSoundWaveForMetaSounds_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms
		{
			TArray<float> PCMData;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PCMData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PCMData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_Inner = { "PCMData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData = { "PCMData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms, PCMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcast PCM data during a generation request */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Dynamic delegate broadcast PCM data during a generation request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnGeneratePCMData__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcast to track the end of audio playback */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Dynamic delegate broadcast to track the end of audio playback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioPlaybackFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetDurationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDurationOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execIsPlaybackFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaybackFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetPlaybackPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetSampleRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSampleRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetDurationConst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDurationConst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetPlaybackTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execRewindPlaybackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RewindPlaybackTime(Z_Param_PlaybackTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execSetPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_InPitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execSetSubtitles)
	{
		P_GET_TARRAY_REF(FEditableSubtitleCue,Z_Param_Out_InSubtitles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitles(Z_Param_Out_InSubtitles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execReleasePlayedAudioData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleasePlayedAudioData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execReleaseMemory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseMemory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execPrepareSoundWaveForMetaSounds)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareSoundWaveForMetaSounds(FOnPreparedSoundWaveForMetaSounds(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void UImportedSoundWave::StaticRegisterNativesUImportedSoundWave()
	{
		UClass* Class = UImportedSoundWave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDuration", &UImportedSoundWave::execGetDuration },
			{ "GetDurationConst", &UImportedSoundWave::execGetDurationConst },
			{ "GetDurationOffset", &UImportedSoundWave::execGetDurationOffset },
			{ "GetPlaybackPercentage", &UImportedSoundWave::execGetPlaybackPercentage },
			{ "GetPlaybackTime", &UImportedSoundWave::execGetPlaybackTime },
			{ "GetSampleRate", &UImportedSoundWave::execGetSampleRate },
			{ "IsPlaybackFinished", &UImportedSoundWave::execIsPlaybackFinished },
			{ "PrepareSoundWaveForMetaSounds", &UImportedSoundWave::execPrepareSoundWaveForMetaSounds },
			{ "ReleaseMemory", &UImportedSoundWave::execReleaseMemory },
			{ "ReleasePlayedAudioData", &UImportedSoundWave::execReleasePlayedAudioData },
			{ "RewindPlaybackTime", &UImportedSoundWave::execRewindPlaybackTime },
			{ "SetLooping", &UImportedSoundWave::execSetLooping },
			{ "SetPitch", &UImportedSoundWave::execSetPitch },
			{ "SetSubtitles", &UImportedSoundWave::execSetSubtitles },
			{ "SetVolume", &UImportedSoundWave::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics
	{
		struct ImportedSoundWave_eventGetDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get sample rate\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Get sample rate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetDuration", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetDuration_Parms), Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics
	{
		struct ImportedSoundWave_eventGetDurationConst_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetDurationConst_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Constant alternative for getting the length of the sound wave, in seconds\n\x09 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)\n\x09 */" },
		{ "DisplayName", "Get Duration" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Constant alternative for getting the length of the sound wave, in seconds\n@note This adds a duration offset (relevant if ReleasePlayedAudioData was used)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetDurationConst", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetDurationConst_Parms), Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetDurationConst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics
	{
		struct ImportedSoundWave_eventGetDurationOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetDurationOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get the duration offset if some played back audio data was removed during playback (eg in ReleasePlayedAudioData)\n\x09 * The sound wave starts playing from this time as from the very beginning\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Get the duration offset if some played back audio data was removed during playback (eg in ReleasePlayedAudioData)\nThe sound wave starts playing from this time as from the very beginning" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetDurationOffset", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetDurationOffset_Parms), Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics
	{
		struct ImportedSoundWave_eventGetPlaybackPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPlaybackPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get the current sound playback percentage, 0-100%\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Get the current sound playback percentage, 0-100%" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPlaybackPercentage", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetPlaybackPercentage_Parms), Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics
	{
		struct ImportedSoundWave_eventGetPlaybackTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get the current sound wave playback time, in seconds\n\x09 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Get the current sound wave playback time, in seconds\n@note This adds a duration offset (relevant if ReleasePlayedAudioData was used)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPlaybackTime", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetPlaybackTime_Parms), Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics
	{
		struct ImportedSoundWave_eventGetSampleRate_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetSampleRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetSampleRate", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetSampleRate_Parms), Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics
	{
		struct ImportedSoundWave_eventIsPlaybackFinished_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImportedSoundWave_eventIsPlaybackFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImportedSoundWave_eventIsPlaybackFinished_Parms), &Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Check if audio playback has finished or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Check if audio playback has finished or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "IsPlaybackFinished", nullptr, nullptr, sizeof(ImportedSoundWave_eventIsPlaybackFinished_Parms), Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics
	{
		struct ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms
		{
			FScriptDelegate Result;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreparedSoundWaveForMetaSounds__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|MetaSounds" },
		{ "Comment", "/**\n\x09 * Prepare this sound wave to be able to set wave parameter for MetaSounds\n\x09 * @param Result Delegate broadcasting the result. Set the wave parameter only after it has been broadcast\n\x09 * @warning This works if bEnableMetaSoundSupport is enabled in RuntimeAudioImporter.Build.cs/RuntimeAudioImporterEditor.Build.cs and only on Unreal Engine version >= 5.2\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Prepare this sound wave to be able to set wave parameter for MetaSounds\n@param Result Delegate broadcasting the result. Set the wave parameter only after it has been broadcast\n@warning This works if bEnableMetaSoundSupport is enabled in RuntimeAudioImporter.Build.cs/RuntimeAudioImporterEditor.Build.cs and only on Unreal Engine version >= 5.2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "PrepareSoundWaveForMetaSounds", nullptr, nullptr, sizeof(ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms), Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Miscellaneous" },
		{ "Comment", "/**\n\x09 * Release sound wave data. Call it manually only if you are sure of it\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Release sound wave data. Call it manually only if you are sure of it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "ReleaseMemory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Miscellaneous" },
		{ "Comment", "/**\n\x09 * Remove previously played audio data. Adds a duration offset from the removed audio data\n\x09 * This re-allocates all audio data memory, so should not be called too frequently\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Remove previously played audio data. Adds a duration offset from the removed audio data\nThis re-allocates all audio data memory, so should not be called too frequently" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "ReleasePlayedAudioData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics
	{
		struct ImportedSoundWave_eventRewindPlaybackTime_Parms
		{
			float PlaybackTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventRewindPlaybackTime_Parms, PlaybackTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImportedSoundWave_eventRewindPlaybackTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImportedSoundWave_eventRewindPlaybackTime_Parms), &Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
		{ "Comment", "/**\n\x09 * Rewind the sound for the specified time\n\x09 *\n\x09 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)\n\x09 * @param PlaybackTime How long to rewind the sound\n\x09 * @return Whether the sound was rewound or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Rewind the sound for the specified time\n\n@note This adds a duration offset (relevant if ReleasePlayedAudioData was used)\n@param PlaybackTime How long to rewind the sound\n@return Whether the sound was rewound or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "RewindPlaybackTime", nullptr, nullptr, sizeof(ImportedSoundWave_eventRewindPlaybackTime_Parms), Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics
	{
		struct ImportedSoundWave_eventSetLooping_Parms
		{
			bool bLoop;
		};
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((ImportedSoundWave_eventSetLooping_Parms*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImportedSoundWave_eventSetLooping_Parms), &Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
		{ "Comment", "/**\n\x09 * Set whether the sound should loop or not\n\x09 *\n\x09 * @param bLoop Whether the sound should loop or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Set whether the sound should loop or not\n\n@param bLoop Whether the sound should loop or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetLooping", nullptr, nullptr, sizeof(ImportedSoundWave_eventSetLooping_Parms), Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics
	{
		struct ImportedSoundWave_eventSetPitch_Parms
		{
			float InPitch;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch_MetaData[] = {
		{ "DisplayName", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch = { "InPitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetPitch_Parms, InPitch), METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
		{ "Comment", "/**\n\x09 * Set sound playback pitch\n\x09 *\n\x09 * @param InPitch Pitch\n\x09 */" },
		{ "CPP_Default_InPitch", "1.000000" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Set sound playback pitch\n\n@param InPitch Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetPitch", nullptr, nullptr, sizeof(ImportedSoundWave_eventSetPitch_Parms), Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics
	{
		struct ImportedSoundWave_eventSetSubtitles_Parms
		{
			TArray<FEditableSubtitleCue> InSubtitles;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSubtitles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InSubtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_Inner = { "InSubtitles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditableSubtitleCue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_MetaData[] = {
		{ "DisplayName", "Subtitles" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles = { "InSubtitles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetSubtitles_Parms, InSubtitles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
		{ "Comment", "/**\n\x09 * Set subtitle cues\n\x09 *\n\x09 * @param InSubtitles Subtitles cues\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Set subtitle cues\n\n@param InSubtitles Subtitles cues" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetSubtitles", nullptr, nullptr, sizeof(ImportedSoundWave_eventSetSubtitles_Parms), Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_SetSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics
	{
		struct ImportedSoundWave_eventSetVolume_Parms
		{
			float InVolume;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume_MetaData[] = {
		{ "DisplayName", "Volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetVolume_Parms, InVolume), METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
		{ "Comment", "/**\n\x09 * Set sound playback volume\n\x09 *\n\x09 * @param InVolume Volume\n\x09 */" },
		{ "CPP_Default_InVolume", "1.000000" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Set sound playback volume\n\n@param InVolume Volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetVolume", nullptr, nullptr, sizeof(ImportedSoundWave_eventSetVolume_Parms), Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister()
	{
		return UImportedSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UImportedSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGeneratePCMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGeneratePCMData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportedSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImportedSoundWave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImportedSoundWave_GetDuration, "GetDuration" }, // 556963655
		{ &Z_Construct_UFunction_UImportedSoundWave_GetDurationConst, "GetDurationConst" }, // 2514908958
		{ &Z_Construct_UFunction_UImportedSoundWave_GetDurationOffset, "GetDurationOffset" }, // 3197488268
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage, "GetPlaybackPercentage" }, // 19312434
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime, "GetPlaybackTime" }, // 3820999830
		{ &Z_Construct_UFunction_UImportedSoundWave_GetSampleRate, "GetSampleRate" }, // 3126711909
		{ &Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished, "IsPlaybackFinished" }, // 937208620
		{ &Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds, "PrepareSoundWaveForMetaSounds" }, // 2176103273
		{ &Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory, "ReleaseMemory" }, // 388931632
		{ &Z_Construct_UFunction_UImportedSoundWave_ReleasePlayedAudioData, "ReleasePlayedAudioData" }, // 451119298
		{ &Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime, "RewindPlaybackTime" }, // 2913749949
		{ &Z_Construct_UFunction_UImportedSoundWave_SetLooping, "SetLooping" }, // 110111559
		{ &Z_Construct_UFunction_UImportedSoundWave_SetPitch, "SetPitch" }, // 3693476088
		{ &Z_Construct_UFunction_UImportedSoundWave_SetSubtitles, "SetSubtitles" }, // 4037712066
		{ &Z_Construct_UFunction_UImportedSoundWave_SetVolume, "SetVolume" }, // 4115190095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Imported Sound Wave" },
		{ "Comment", "/**\n * Imported sound wave. Assumed to be dynamically populated once from the decoded audio data.\n * Audio data preparation takes place in the Runtime Audio Importer library\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/ImportedSoundWave.h" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Imported sound wave. Assumed to be dynamically populated once from the decoded audio data.\nAudio data preparation takes place in the Runtime Audio Importer library" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
		{ "Comment", "/** Bind to this delegate to know when the audio playback is finished */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Bind to this delegate to know when the audio playback is finished" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished = { "OnAudioPlaybackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportedSoundWave, OnAudioPlaybackFinished), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
		{ "Comment", "/** Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data) */" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ToolTip", "Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData = { "OnGeneratePCMData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportedSoundWave, OnGeneratePCMData), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportedSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportedSoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportedSoundWave_Statics::ClassParams = {
		&UImportedSoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportedSoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportedSoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportedSoundWave, 1395161328);
	template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UImportedSoundWave>()
	{
		return UImportedSoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportedSoundWave(Z_Construct_UClass_UImportedSoundWave, &UImportedSoundWave::StaticClass, TEXT("/Script/RuntimeAudioImporter"), TEXT("UImportedSoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportedSoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
