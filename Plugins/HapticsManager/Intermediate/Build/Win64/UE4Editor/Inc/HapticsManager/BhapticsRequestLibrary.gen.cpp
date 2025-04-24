// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/BhapticsRequestLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBhapticsRequestLibrary() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UBhapticsRequestLibrary_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UBhapticsRequestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRotationOption();
	HAPTICSMANAGER_API UEnum* Z_Construct_UEnum_HapticsManager_EPosition();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FDotPoint();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FScaleOption();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FPathPoint();
// End Cross Module References
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execCustomProjectToVest)
	{
		P_GET_STRUCT(FVector,Z_Param_ContactLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PlayerComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FVector,Z_Param_UpVector);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotationOption*)Z_Param__Result=UBhapticsRequestLibrary::CustomProjectToVest(Z_Param_ContactLocation,Z_Param_PlayerComponent,Z_Param_HalfHeight,Z_Param_UpVector,Z_Param_ForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execProjectToVestLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_ContactLocation);
		P_GET_STRUCT(FVector,Z_Param_PlayerLocation);
		P_GET_STRUCT(FRotator,Z_Param_PlayerRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotationOption*)Z_Param__Result=UBhapticsRequestLibrary::ProjectToVestLocation(Z_Param_ContactLocation,Z_Param_PlayerLocation,Z_Param_PlayerRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execProjectToVest)
	{
		P_GET_STRUCT(FVector,Z_Param_ContactLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PlayerComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotationOption*)Z_Param__Result=UBhapticsRequestLibrary::ProjectToVest(Z_Param_ContactLocation,Z_Param_PlayerComponent,Z_Param_HalfHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execGetResponseStatus)
	{
		P_GET_ENUM(EPosition,Z_Param_Pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UBhapticsRequestLibrary::GetResponseStatus(EPosition(Z_Param_Pos));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execToggleHapticFeedback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::ToggleHapticFeedback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execDisableHapticFeedback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::DisableHapticFeedback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execEnableHapticFeedback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::EnableHapticFeedback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execTurnOffRegisteredFeedbackFile)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::TurnOffRegisteredFeedbackFile(Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execTurnOffRegisteredFeedback)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::TurnOffRegisteredFeedback(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execTurnOffAllFeedback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::TurnOffAllFeedback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execIsDeviceConnected)
	{
		P_GET_ENUM(EPosition,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBhapticsRequestLibrary::IsDeviceConnected(EPosition(Z_Param_device));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execIsRegisteredFilePlaying)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBhapticsRequestLibrary::IsRegisteredFilePlaying(Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execIsRegisteredPlaying)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBhapticsRequestLibrary::IsRegisteredPlaying(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execIsAnythingPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBhapticsRequestLibrary::IsAnythingPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_ENUM(EPosition,Z_Param_PositionEnum);
		P_GET_TARRAY(FPathPoint,Z_Param_PathPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_DurationInMilliSecs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitPath(Z_Param_key,EPosition(Z_Param_PositionEnum),Z_Param_PathPoints,Z_Param_DurationInMilliSecs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitDots)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_ENUM(EPosition,Z_Param_PositionEnum);
		P_GET_TARRAY(FDotPoint,Z_Param_DotPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_DurationInMilliSecs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitDots(Z_Param_key,EPosition(Z_Param_PositionEnum),Z_Param_DotPoints,Z_Param_DurationInMilliSecs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_ENUM(EPosition,Z_Param_PositionEnum);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InputBytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_DurationInMilliSecs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitBytes(Z_Param_key,EPosition(Z_Param_PositionEnum),Z_Param_Out_InputBytes,Z_Param_DurationInMilliSecs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execRegisterFeedbackFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::RegisterFeedbackFile(Z_Param_Key,Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitFeedbackReflected)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_GET_STRUCT(FScaleOption,Z_Param_ScaleOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitFeedbackReflected(Z_Param_Feedback,Z_Param_ScaleOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitFeedbackWithScaleOption)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_GET_STRUCT(FScaleOption,Z_Param_ScaleOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitFeedbackWithScaleOption(Z_Param_Feedback,Z_Param_ScaleOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitFeedbackWithOptions)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FRotationOption,Z_Param_RotationOption);
		P_GET_STRUCT(FScaleOption,Z_Param_ScaleOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitFeedbackWithOptions(Z_Param_Feedback,Z_Param_Key,Z_Param_RotationOption,Z_Param_ScaleOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitFeedbackWithIntensityDuration)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_GET_PROPERTY(FStrProperty,Z_Param_AltKey);
		P_GET_STRUCT(FRotationOption,Z_Param_RotationOption);
		P_GET_STRUCT(FScaleOption,Z_Param_ScaleOption);
		P_GET_UBOOL(Z_Param_UseAltKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitFeedbackWithIntensityDuration(Z_Param_Feedback,Z_Param_AltKey,Z_Param_RotationOption,Z_Param_ScaleOption,Z_Param_UseAltKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitFeedbackWithTransform)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_GET_PROPERTY(FStrProperty,Z_Param_AltKey);
		P_GET_STRUCT(FRotationOption,Z_Param_Option);
		P_GET_UBOOL(Z_Param_UseAltKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitFeedbackWithTransform(Z_Param_Feedback,Z_Param_AltKey,Z_Param_Option,Z_Param_UseAltKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execSubmitFeedback)
	{
		P_GET_OBJECT(UFeedbackFile,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::SubmitFeedback(Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBhapticsRequestLibrary::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBhapticsRequestLibrary::Initialize();
		P_NATIVE_END;
	}
	void UBhapticsRequestLibrary::StaticRegisterNativesUBhapticsRequestLibrary()
	{
		UClass* Class = UBhapticsRequestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomProjectToVest", &UBhapticsRequestLibrary::execCustomProjectToVest },
			{ "DisableHapticFeedback", &UBhapticsRequestLibrary::execDisableHapticFeedback },
			{ "EnableHapticFeedback", &UBhapticsRequestLibrary::execEnableHapticFeedback },
			{ "GetResponseStatus", &UBhapticsRequestLibrary::execGetResponseStatus },
			{ "Initialize", &UBhapticsRequestLibrary::execInitialize },
			{ "IsAnythingPlaying", &UBhapticsRequestLibrary::execIsAnythingPlaying },
			{ "IsDeviceConnected", &UBhapticsRequestLibrary::execIsDeviceConnected },
			{ "IsRegisteredFilePlaying", &UBhapticsRequestLibrary::execIsRegisteredFilePlaying },
			{ "IsRegisteredPlaying", &UBhapticsRequestLibrary::execIsRegisteredPlaying },
			{ "ProjectToVest", &UBhapticsRequestLibrary::execProjectToVest },
			{ "ProjectToVestLocation", &UBhapticsRequestLibrary::execProjectToVestLocation },
			{ "RegisterFeedbackFile", &UBhapticsRequestLibrary::execRegisterFeedbackFile },
			{ "SubmitBytes", &UBhapticsRequestLibrary::execSubmitBytes },
			{ "SubmitDots", &UBhapticsRequestLibrary::execSubmitDots },
			{ "SubmitFeedback", &UBhapticsRequestLibrary::execSubmitFeedback },
			{ "SubmitFeedbackReflected", &UBhapticsRequestLibrary::execSubmitFeedbackReflected },
			{ "SubmitFeedbackWithIntensityDuration", &UBhapticsRequestLibrary::execSubmitFeedbackWithIntensityDuration },
			{ "SubmitFeedbackWithOptions", &UBhapticsRequestLibrary::execSubmitFeedbackWithOptions },
			{ "SubmitFeedbackWithScaleOption", &UBhapticsRequestLibrary::execSubmitFeedbackWithScaleOption },
			{ "SubmitFeedbackWithTransform", &UBhapticsRequestLibrary::execSubmitFeedbackWithTransform },
			{ "SubmitPath", &UBhapticsRequestLibrary::execSubmitPath },
			{ "ToggleHapticFeedback", &UBhapticsRequestLibrary::execToggleHapticFeedback },
			{ "TurnOffAllFeedback", &UBhapticsRequestLibrary::execTurnOffAllFeedback },
			{ "TurnOffRegisteredFeedback", &UBhapticsRequestLibrary::execTurnOffRegisteredFeedback },
			{ "TurnOffRegisteredFeedbackFile", &UBhapticsRequestLibrary::execTurnOffRegisteredFeedbackFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics
	{
		struct BhapticsRequestLibrary_eventCustomProjectToVest_Parms
		{
			FVector ContactLocation;
			UPrimitiveComponent* PlayerComponent;
			float HalfHeight;
			FVector UpVector;
			FVector ForwardVector;
			FRotationOption ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_ContactLocation = { "ContactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventCustomProjectToVest_Parms, ContactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_PlayerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_PlayerComponent = { "PlayerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventCustomProjectToVest_Parms, PlayerComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_PlayerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_PlayerComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventCustomProjectToVest_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventCustomProjectToVest_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventCustomProjectToVest_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventCustomProjectToVest_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotationOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_ContactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_PlayerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "bHaptics" },
		{ "Comment", "//Helper function to compute rotation for a given collision.\n//Performs the same function as Project To Vest, but allows the Forward and Up vectors to be changed.\n" },
		{ "CPP_Default_ForwardVector", "" },
		{ "CPP_Default_HalfHeight", "50.000000" },
		{ "CPP_Default_UpVector", "" },
		{ "DisplayName", "Custom Project To Vest" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Helper function to compute rotation for a given collision.\nPerforms the same function as Project To Vest, but allows the Forward and Up vectors to be changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "CustomProjectToVest", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventCustomProjectToVest_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Disable haptic feedback\n" },
		{ "DisplayName", "Disable Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Disable haptic feedback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "DisableHapticFeedback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Enable haptic feedback\n" },
		{ "DisplayName", "Enable Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Enable haptic feedback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "EnableHapticFeedback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics
	{
		struct BhapticsRequestLibrary_eventGetResponseStatus_Parms
		{
			EPosition Pos;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Pos_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Pos;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_Pos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventGetResponseStatus_Parms, Pos), Z_Construct_UEnum_HapticsManager_EPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventGetResponseStatus_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_Pos_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Toggle haptic feedback on/off\n" },
		{ "DisplayName", "Get Status" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Toggle haptic feedback on/off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "GetResponseStatus", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventGetResponseStatus_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "DisplayName", "Initialize bHaptics" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics
	{
		struct BhapticsRequestLibrary_eventIsAnythingPlaying_Parms
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
	void Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BhapticsRequestLibrary_eventIsAnythingPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BhapticsRequestLibrary_eventIsAnythingPlaying_Parms), &Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Check if there is any haptic feedback currently playing on any device.\n" },
		{ "DisplayName", "Is Any Feedback Currently Playing" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Check if there is any haptic feedback currently playing on any device." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "IsAnythingPlaying", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventIsAnythingPlaying_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics
	{
		struct BhapticsRequestLibrary_eventIsDeviceConnected_Parms
		{
			EPosition device;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_device_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_device;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventIsDeviceConnected_Parms, device), Z_Construct_UEnum_HapticsManager_EPosition, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BhapticsRequestLibrary_eventIsDeviceConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BhapticsRequestLibrary_eventIsDeviceConnected_Parms), &Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_device_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Is the given haptic device connected\n" },
		{ "DisplayName", "Is Device Connected" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Is the given haptic device connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "IsDeviceConnected", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventIsDeviceConnected_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics
	{
		struct BhapticsRequestLibrary_eventIsRegisteredFilePlaying_Parms
		{
			UFeedbackFile* Feedback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventIsRegisteredFilePlaying_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BhapticsRequestLibrary_eventIsRegisteredFilePlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BhapticsRequestLibrary_eventIsRegisteredFilePlaying_Parms), &Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Is the specified haptic feedback pattern currently playing.\n" },
		{ "DisplayName", "Is Feedback File Currently Playing" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Is the specified haptic feedback pattern currently playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "IsRegisteredFilePlaying", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventIsRegisteredFilePlaying_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics
	{
		struct BhapticsRequestLibrary_eventIsRegisteredPlaying_Parms
		{
			FString Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventIsRegisteredPlaying_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BhapticsRequestLibrary_eventIsRegisteredPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BhapticsRequestLibrary_eventIsRegisteredPlaying_Parms), &Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Is the specified haptic feedback pattern currently playing using the AltKey value.\n" },
		{ "DisplayName", "Is Feedback Currently Playing" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Is the specified haptic feedback pattern currently playing using the AltKey value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "IsRegisteredPlaying", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventIsRegisteredPlaying_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics
	{
		struct BhapticsRequestLibrary_eventProjectToVest_Parms
		{
			FVector ContactLocation;
			UPrimitiveComponent* PlayerComponent;
			float HalfHeight;
			FRotationOption ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_ContactLocation = { "ContactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVest_Parms, ContactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_PlayerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_PlayerComponent = { "PlayerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVest_Parms, PlayerComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_PlayerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_PlayerComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVest_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVest_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotationOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_ContactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_PlayerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Helper function to compute rotation for a given collision.\n//Compute's the horizontal angle and vertical offset and returns a RotationOption for use with a haptic feedback file.\n//Assumes the origin of the component is in the center, and that the ForwardVector is the front of the vest.\n" },
		{ "CPP_Default_HalfHeight", "50.000000" },
		{ "DisplayName", "Project To Vest With Player Collision Object" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Helper function to compute rotation for a given collision.\nCompute's the horizontal angle and vertical offset and returns a RotationOption for use with a haptic feedback file.\nAssumes the origin of the component is in the center, and that the ForwardVector is the front of the vest." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "ProjectToVest", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventProjectToVest_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics
	{
		struct BhapticsRequestLibrary_eventProjectToVestLocation_Parms
		{
			FVector ContactLocation;
			FVector PlayerLocation;
			FRotator PlayerRotation;
			FRotationOption ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_ContactLocation = { "ContactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVestLocation_Parms, ContactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVestLocation_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVestLocation_Parms, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventProjectToVestLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotationOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_ContactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_PlayerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "DisplayName", "Project To Vest With Player Location/Position" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "ProjectToVestLocation", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventProjectToVestLocation_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics
	{
		struct BhapticsRequestLibrary_eventRegisterFeedbackFile_Parms
		{
			FString Key;
			UFeedbackFile* Feedback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventRegisterFeedbackFile_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventRegisterFeedbackFile_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Register a given haptic feedback file under the specified key.\n" },
		{ "DisplayName", "Register Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Register a given haptic feedback file under the specified key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "RegisterFeedbackFile", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventRegisterFeedbackFile_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitBytes_Parms
		{
			FString key;
			EPosition PositionEnum;
			TArray<uint8> InputBytes;
			int32 DurationInMilliSecs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionEnum_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PositionEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputBytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationInMilliSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitBytes_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_PositionEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_PositionEnum = { "PositionEnum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitBytes_Parms, PositionEnum), Z_Construct_UEnum_HapticsManager_EPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes_Inner = { "InputBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes = { "InputBytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitBytes_Parms, InputBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_DurationInMilliSecs = { "DurationInMilliSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitBytes_Parms, DurationInMilliSecs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_PositionEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_PositionEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_InputBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::NewProp_DurationInMilliSecs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Submit a haptic feeback pattern to the given device using a byte array.\n" },
		{ "DisplayName", "Submit Using Bytes" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Submit a haptic feeback pattern to the given device using a byte array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitBytes", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitBytes_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitDots_Parms
		{
			FString key;
			EPosition PositionEnum;
			TArray<FDotPoint> DotPoints;
			int32 DurationInMilliSecs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionEnum_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PositionEnum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DotPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DotPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationInMilliSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitDots_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_PositionEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_PositionEnum = { "PositionEnum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitDots_Parms, PositionEnum), Z_Construct_UEnum_HapticsManager_EPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints_Inner = { "DotPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDotPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints = { "DotPoints", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitDots_Parms, DotPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DurationInMilliSecs = { "DurationInMilliSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitDots_Parms, DurationInMilliSecs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_PositionEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_PositionEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DotPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::NewProp_DurationInMilliSecs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Submit a haptic feeback pattern to the given device using the DotPoint structure.\n" },
		{ "DisplayName", "Submit Using Dots" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Submit a haptic feeback pattern to the given device using the DotPoint structure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitDots", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitDots_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitFeedback_Parms
		{
			UFeedbackFile* Feedback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedback_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "DisplayName", "Submit Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitFeedback", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitFeedback_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitFeedbackReflected_Parms
		{
			UFeedbackFile* Feedback;
			FScaleOption ScaleOption;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackReflected_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::NewProp_ScaleOption = { "ScaleOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackReflected_Parms, ScaleOption), Z_Construct_UScriptStruct_FScaleOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::NewProp_ScaleOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "DisplayName", "Submit Feedback Reflected - Works with Arm, Hand and Foot" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitFeedbackReflected", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitFeedbackReflected_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms
		{
			UFeedbackFile* Feedback;
			FString AltKey;
			FRotationOption RotationOption;
			FScaleOption ScaleOption;
			bool UseAltKey;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AltKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOption;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleOption;
		static void NewProp_UseAltKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAltKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_AltKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_AltKey = { "AltKey", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms, AltKey), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_AltKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_AltKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_RotationOption = { "RotationOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms, RotationOption), Z_Construct_UScriptStruct_FRotationOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_ScaleOption = { "ScaleOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms, ScaleOption), Z_Construct_UScriptStruct_FScaleOption, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_UseAltKey_SetBit(void* Obj)
	{
		((BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms*)Obj)->UseAltKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_UseAltKey = { "UseAltKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms), &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_UseAltKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_AltKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_RotationOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_ScaleOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::NewProp_UseAltKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AltKey" },
		{ "Category", "bHaptics" },
		{ "Comment", "// Deprecated\n" },
		{ "CPP_Default_UseAltKey", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Now managed through `Submit Feedback wih Options`." },
		{ "DisplayName", "Submit Feedback with Scaled Intensity and Duration" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitFeedbackWithIntensityDuration", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitFeedbackWithIntensityDuration_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitFeedbackWithOptions_Parms
		{
			UFeedbackFile* Feedback;
			FString Key;
			FRotationOption RotationOption;
			FScaleOption ScaleOption;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOption;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithOptions_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithOptions_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_RotationOption = { "RotationOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithOptions_Parms, RotationOption), Z_Construct_UScriptStruct_FRotationOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_ScaleOption = { "ScaleOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithOptions_Parms, ScaleOption), Z_Construct_UScriptStruct_FScaleOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_RotationOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::NewProp_ScaleOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "DisplayName", "Submit Feedback with Options" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitFeedbackWithOptions", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitFeedbackWithOptions_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitFeedbackWithScaleOption_Parms
		{
			UFeedbackFile* Feedback;
			FScaleOption ScaleOption;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithScaleOption_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::NewProp_ScaleOption = { "ScaleOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithScaleOption_Parms, ScaleOption), Z_Construct_UScriptStruct_FScaleOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::NewProp_ScaleOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "DisplayName", "Submit Feedback with Scale Option" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitFeedbackWithScaleOption", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitFeedbackWithScaleOption_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms
		{
			UFeedbackFile* Feedback;
			FString AltKey;
			FRotationOption Option;
			bool UseAltKey;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AltKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Option;
		static void NewProp_UseAltKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAltKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_AltKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_AltKey = { "AltKey", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms, AltKey), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_AltKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_AltKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms, Option), Z_Construct_UScriptStruct_FRotationOption, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_UseAltKey_SetBit(void* Obj)
	{
		((BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms*)Obj)->UseAltKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_UseAltKey = { "UseAltKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms), &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_UseAltKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_AltKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::NewProp_UseAltKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AltKey" },
		{ "Category", "bHaptics" },
		{ "Comment", "// Deprecated\n" },
		{ "CPP_Default_UseAltKey", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Now managed through  `Submit Feedback wih Options`.." },
		{ "DisplayName", "Submit Feedback with Transform" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitFeedbackWithTransform", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitFeedbackWithTransform_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics
	{
		struct BhapticsRequestLibrary_eventSubmitPath_Parms
		{
			FString key;
			EPosition PositionEnum;
			TArray<FPathPoint> PathPoints;
			int32 DurationInMilliSecs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionEnum_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PositionEnum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationInMilliSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitPath_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PositionEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PositionEnum = { "PositionEnum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitPath_Parms, PositionEnum), Z_Construct_UEnum_HapticsManager_EPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPathPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitPath_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_DurationInMilliSecs = { "DurationInMilliSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventSubmitPath_Parms, DurationInMilliSecs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PositionEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PositionEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::NewProp_DurationInMilliSecs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Submit a haptic feeback pattern to the given device using the PathPoint structure.\n" },
		{ "DisplayName", "Submit Using Paths" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Submit a haptic feeback pattern to the given device using the PathPoint structure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "SubmitPath", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventSubmitPath_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Toggle haptic feedback on/off\n" },
		{ "DisplayName", "Toggle Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Toggle haptic feedback on/off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "ToggleHapticFeedback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Turn off all currently playing haptic feedback patterns\n" },
		{ "DisplayName", "Turn Off All Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Turn off all currently playing haptic feedback patterns" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "TurnOffAllFeedback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics
	{
		struct BhapticsRequestLibrary_eventTurnOffRegisteredFeedback_Parms
		{
			FString Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventTurnOffRegisteredFeedback_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Turn off the specified haptic feedback pattern if it is playing;\n" },
		{ "DisplayName", "Turn Off Feedback" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Turn off the specified haptic feedback pattern if it is playing;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "TurnOffRegisteredFeedback", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventTurnOffRegisteredFeedback_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics
	{
		struct BhapticsRequestLibrary_eventTurnOffRegisteredFeedbackFile_Parms
		{
			UFeedbackFile* Feedback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BhapticsRequestLibrary_eventTurnOffRegisteredFeedbackFile_Parms, Feedback), Z_Construct_UClass_UFeedbackFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//Turn off the specified haptic feedback pattern if it is playing;\n" },
		{ "DisplayName", "Turn Off Feedback File" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
		{ "ToolTip", "Turn off the specified haptic feedback pattern if it is playing;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBhapticsRequestLibrary, nullptr, "TurnOffRegisteredFeedbackFile", nullptr, nullptr, sizeof(BhapticsRequestLibrary_eventTurnOffRegisteredFeedbackFile_Parms), Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBhapticsRequestLibrary_NoRegister()
	{
		return UBhapticsRequestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBhapticsRequestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBhapticsRequestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBhapticsRequestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_CustomProjectToVest, "CustomProjectToVest" }, // 110979349
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_DisableHapticFeedback, "DisableHapticFeedback" }, // 2498142941
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_EnableHapticFeedback, "EnableHapticFeedback" }, // 1342588327
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_GetResponseStatus, "GetResponseStatus" }, // 1942971229
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_Initialize, "Initialize" }, // 486857579
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_IsAnythingPlaying, "IsAnythingPlaying" }, // 374926227
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_IsDeviceConnected, "IsDeviceConnected" }, // 3351579618
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredFilePlaying, "IsRegisteredFilePlaying" }, // 644261235
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_IsRegisteredPlaying, "IsRegisteredPlaying" }, // 768699769
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVest, "ProjectToVest" }, // 2388504884
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_ProjectToVestLocation, "ProjectToVestLocation" }, // 2223197258
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_RegisterFeedbackFile, "RegisterFeedbackFile" }, // 258365158
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitBytes, "SubmitBytes" }, // 530856566
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitDots, "SubmitDots" }, // 226212769
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedback, "SubmitFeedback" }, // 3154788708
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackReflected, "SubmitFeedbackReflected" }, // 112253840
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration, "SubmitFeedbackWithIntensityDuration" }, // 1859257276
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithOptions, "SubmitFeedbackWithOptions" }, // 1739244092
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption, "SubmitFeedbackWithScaleOption" }, // 2123525540
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitFeedbackWithTransform, "SubmitFeedbackWithTransform" }, // 2123874743
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_SubmitPath, "SubmitPath" }, // 1574076816
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_ToggleHapticFeedback, "ToggleHapticFeedback" }, // 683076613
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffAllFeedback, "TurnOffAllFeedback" }, // 270684489
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedback, "TurnOffRegisteredFeedback" }, // 2909663688
		{ &Z_Construct_UFunction_UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile, "TurnOffRegisteredFeedbackFile" }, // 2357423977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBhapticsRequestLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BhapticsRequestLibrary.h" },
		{ "ModuleRelativePath", "Public/BhapticsRequestLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBhapticsRequestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBhapticsRequestLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBhapticsRequestLibrary_Statics::ClassParams = {
		&UBhapticsRequestLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBhapticsRequestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBhapticsRequestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBhapticsRequestLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBhapticsRequestLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBhapticsRequestLibrary, 1841686288);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UBhapticsRequestLibrary>()
	{
		return UBhapticsRequestLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBhapticsRequestLibrary(Z_Construct_UClass_UBhapticsRequestLibrary, &UBhapticsRequestLibrary::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UBhapticsRequestLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBhapticsRequestLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
