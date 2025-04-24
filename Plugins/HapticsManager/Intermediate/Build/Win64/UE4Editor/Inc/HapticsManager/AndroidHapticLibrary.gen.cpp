// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/AndroidHapticLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidHapticLibrary() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UAndroidHapticLibrary_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UAndroidHapticLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FDevice();
// End Cross Module References
	DEFINE_FUNCTION(UAndroidHapticLibrary::execAndroidThunkCpp_TogglePosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAndroidHapticLibrary::AndroidThunkCpp_TogglePosition(Z_Param_DeviceAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidHapticLibrary::execAndroidThunkCpp_ChangePosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAndroidHapticLibrary::AndroidThunkCpp_ChangePosition(Z_Param_DeviceAddress,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidHapticLibrary::execAndroidThunkCpp_PingAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAndroidHapticLibrary::AndroidThunkCpp_PingAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidHapticLibrary::execAndroidThunkJava_PingPosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAndroidHapticLibrary::AndroidThunkJava_PingPosition(Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidHapticLibrary::execAndroidThunkCpp_Ping)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAndroidHapticLibrary::AndroidThunkCpp_Ping(Z_Param_DeviceAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidHapticLibrary::execIsDeviceConnceted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAndroidHapticLibrary::IsDeviceConnceted(Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidHapticLibrary::execGetCurrentDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDevice>*)Z_Param__Result=UAndroidHapticLibrary::GetCurrentDevices();
		P_NATIVE_END;
	}
	void UAndroidHapticLibrary::StaticRegisterNativesUAndroidHapticLibrary()
	{
		UClass* Class = UAndroidHapticLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AndroidThunkCpp_ChangePosition", &UAndroidHapticLibrary::execAndroidThunkCpp_ChangePosition },
			{ "AndroidThunkCpp_Ping", &UAndroidHapticLibrary::execAndroidThunkCpp_Ping },
			{ "AndroidThunkCpp_PingAll", &UAndroidHapticLibrary::execAndroidThunkCpp_PingAll },
			{ "AndroidThunkCpp_TogglePosition", &UAndroidHapticLibrary::execAndroidThunkCpp_TogglePosition },
			{ "AndroidThunkJava_PingPosition", &UAndroidHapticLibrary::execAndroidThunkJava_PingPosition },
			{ "GetCurrentDevices", &UAndroidHapticLibrary::execGetCurrentDevices },
			{ "IsDeviceConnceted", &UAndroidHapticLibrary::execIsDeviceConnceted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics
	{
		struct AndroidHapticLibrary_eventAndroidThunkCpp_ChangePosition_Parms
		{
			FString DeviceAddress;
			FString Position;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventAndroidThunkCpp_ChangePosition_Parms, DeviceAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventAndroidThunkCpp_ChangePosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::NewProp_DeviceAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "Comment", "//Set the Position of Device\n" },
		{ "DisplayName", "ChangeDevicePosition" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
		{ "ToolTip", "Set the Position of Device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "AndroidThunkCpp_ChangePosition", nullptr, nullptr, sizeof(AndroidHapticLibrary_eventAndroidThunkCpp_ChangePosition_Parms), Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics
	{
		struct AndroidHapticLibrary_eventAndroidThunkCpp_Ping_Parms
		{
			FString DeviceAddress;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventAndroidThunkCpp_Ping_Parms, DeviceAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::NewProp_DeviceAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "Comment", "//Ping Haptic Device\n" },
		{ "DisplayName", "PingHapticDevice" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
		{ "ToolTip", "Ping Haptic Device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "AndroidThunkCpp_Ping", nullptr, nullptr, sizeof(AndroidHapticLibrary_eventAndroidThunkCpp_Ping_Parms), Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "Comment", "//Ping all Haptic Devices\n" },
		{ "DisplayName", "PingAll" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
		{ "ToolTip", "Ping all Haptic Devices" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "AndroidThunkCpp_PingAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics
	{
		struct AndroidHapticLibrary_eventAndroidThunkCpp_TogglePosition_Parms
		{
			FString DeviceAddress;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventAndroidThunkCpp_TogglePosition_Parms, DeviceAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::NewProp_DeviceAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "Comment", "//Toggle the Position of Device\n" },
		{ "DisplayName", "ToggleDevicePosition" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
		{ "ToolTip", "Toggle the Position of Device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "AndroidThunkCpp_TogglePosition", nullptr, nullptr, sizeof(AndroidHapticLibrary_eventAndroidThunkCpp_TogglePosition_Parms), Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics
	{
		struct AndroidHapticLibrary_eventAndroidThunkJava_PingPosition_Parms
		{
			FString Position;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventAndroidThunkJava_PingPosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "Comment", "//Ping Haptic Device\n" },
		{ "DisplayName", "PingByPosition" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
		{ "ToolTip", "Ping Haptic Device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "AndroidThunkJava_PingPosition", nullptr, nullptr, sizeof(AndroidHapticLibrary_eventAndroidThunkJava_PingPosition_Parms), Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics
	{
		struct AndroidHapticLibrary_eventGetCurrentDevices_Parms
		{
			TArray<FDevice> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventGetCurrentDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "Comment", "//static void UpdateDevices(TArray<FDevice> DeviceList);\n" },
		{ "DisplayName", "GetCurrentDevices" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
		{ "ToolTip", "static void UpdateDevices(TArray<FDevice> DeviceList);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "GetCurrentDevices", nullptr, nullptr, sizeof(AndroidHapticLibrary_eventGetCurrentDevices_Parms), Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics
	{
		struct AndroidHapticLibrary_eventIsDeviceConnceted_Parms
		{
			FString Position;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidHapticLibrary_eventIsDeviceConnceted_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AndroidHapticLibrary_eventIsDeviceConnceted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AndroidHapticLibrary_eventIsDeviceConnceted_Parms), &Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics(Android)" },
		{ "DisplayName", "IsBhapticsDeviceConnceted" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidHapticLibrary, nullptr, "IsDeviceConnceted", nullptr, nullptr, sizeof(AndroidHapticLibrary_eventIsDeviceConnceted_Parms), Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAndroidHapticLibrary_NoRegister()
	{
		return UAndroidHapticLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidHapticLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidHapticLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAndroidHapticLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition, "AndroidThunkCpp_ChangePosition" }, // 4054372775
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_Ping, "AndroidThunkCpp_Ping" }, // 1306313979
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_PingAll, "AndroidThunkCpp_PingAll" }, // 3249208333
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition, "AndroidThunkCpp_TogglePosition" }, // 2742910847
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_AndroidThunkJava_PingPosition, "AndroidThunkJava_PingPosition" }, // 1070561327
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_GetCurrentDevices, "GetCurrentDevices" }, // 1099120041
		{ &Z_Construct_UFunction_UAndroidHapticLibrary_IsDeviceConnceted, "IsDeviceConnceted" }, // 889983649
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidHapticLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidHapticLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidHapticLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidHapticLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidHapticLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidHapticLibrary_Statics::ClassParams = {
		&UAndroidHapticLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidHapticLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidHapticLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidHapticLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidHapticLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidHapticLibrary, 3315830905);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UAndroidHapticLibrary>()
	{
		return UAndroidHapticLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidHapticLibrary(Z_Construct_UClass_UAndroidHapticLibrary, &UAndroidHapticLibrary::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UAndroidHapticLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidHapticLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
