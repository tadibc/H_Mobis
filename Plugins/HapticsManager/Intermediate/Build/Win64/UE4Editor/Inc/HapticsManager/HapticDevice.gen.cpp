// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/HapticDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticDevice() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UHapticDevice_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UHapticDevice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FDevice();
// End Cross Module References
	DEFINE_FUNCTION(UHapticDevice::execTogglePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHapticDevice::execChangePosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePosition(Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHapticDevice::execPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHapticDevice::execSetDeviceData)
	{
		P_GET_STRUCT(FDevice,Z_Param_LinkedDevice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeviceData(Z_Param_LinkedDevice);
		P_NATIVE_END;
	}
	void UHapticDevice::StaticRegisterNativesUHapticDevice()
	{
		UClass* Class = UHapticDevice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePosition", &UHapticDevice::execChangePosition },
			{ "Ping", &UHapticDevice::execPing },
			{ "SetDeviceData", &UHapticDevice::execSetDeviceData },
			{ "TogglePosition", &UHapticDevice::execTogglePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics
	{
		struct HapticDevice_eventChangePosition_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticDevice_eventChangePosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Haptics" },
		{ "Comment", "//Set the Position for the Device (ie. Left/Right)\n" },
		{ "DisplayName", "ChangePosition" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
		{ "ToolTip", "Set the Position for the Device (ie. Left/Right)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHapticDevice, nullptr, "ChangePosition", nullptr, nullptr, sizeof(HapticDevice_eventChangePosition_Parms), Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHapticDevice_ChangePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHapticDevice_ChangePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHapticDevice_Ping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHapticDevice_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Haptics" },
		{ "Comment", "//Ping the Haptic Device\n" },
		{ "DisplayName", "Ping" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
		{ "ToolTip", "Ping the Haptic Device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHapticDevice_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHapticDevice, nullptr, "Ping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHapticDevice_Ping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHapticDevice_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHapticDevice_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHapticDevice_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics
	{
		struct HapticDevice_eventSetDeviceData_Parms
		{
			FDevice LinkedDevice;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkedDevice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::NewProp_LinkedDevice = { "LinkedDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticDevice_eventSetDeviceData_Parms, LinkedDevice), Z_Construct_UScriptStruct_FDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::NewProp_LinkedDevice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Haptics" },
		{ "Comment", "//Set the data of the Haptic Device to use\n" },
		{ "DisplayName", "SetDeviceData" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
		{ "ToolTip", "Set the data of the Haptic Device to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHapticDevice, nullptr, "SetDeviceData", nullptr, nullptr, sizeof(HapticDevice_eventSetDeviceData_Parms), Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHapticDevice_SetDeviceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHapticDevice_SetDeviceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHapticDevice_TogglePosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHapticDevice_TogglePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Haptics" },
		{ "Comment", "//Toggle the Position of the Device\n" },
		{ "DisplayName", "TogglePosition" },
		{ "Keywords", "Haptics" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
		{ "ToolTip", "Toggle the Position of the Device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHapticDevice_TogglePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHapticDevice, nullptr, "TogglePosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHapticDevice_TogglePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHapticDevice_TogglePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHapticDevice_TogglePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHapticDevice_TogglePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHapticDevice_NoRegister()
	{
		return UHapticDevice::StaticClass();
	}
	struct Z_Construct_UClass_UHapticDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DidUpdateDevice_MetaData[];
#endif
		static void NewProp_DidUpdateDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DidUpdateDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDarkMode_MetaData[];
#endif
		static void NewProp_IsDarkMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDarkMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHapticDevice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHapticDevice_ChangePosition, "ChangePosition" }, // 2269212544
		{ &Z_Construct_UFunction_UHapticDevice_Ping, "Ping" }, // 2842955503
		{ &Z_Construct_UFunction_UHapticDevice_SetDeviceData, "SetDeviceData" }, // 3434713170
		{ &Z_Construct_UFunction_UHapticDevice_TogglePosition, "TogglePosition" }, // 2825287491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticDevice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HapticDevice.h" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticDevice_Statics::NewProp_DeviceData_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHapticDevice_Statics::NewProp_DeviceData = { "DeviceData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHapticDevice, DeviceData), Z_Construct_UScriptStruct_FDevice, METADATA_PARAMS(Z_Construct_UClass_UHapticDevice_Statics::NewProp_DeviceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticDevice_Statics::NewProp_DeviceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
	};
#endif
	void Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice_SetBit(void* Obj)
	{
		((UHapticDevice*)Obj)->DidUpdateDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice = { "DidUpdateDevice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHapticDevice), &Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ExposeOnSpawn", "FALSE" },
		{ "ModuleRelativePath", "Public/HapticDevice.h" },
	};
#endif
	void Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode_SetBit(void* Obj)
	{
		((UHapticDevice*)Obj)->IsDarkMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode = { "IsDarkMode", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHapticDevice), &Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticDevice_Statics::NewProp_DeviceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticDevice_Statics::NewProp_DidUpdateDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticDevice_Statics::NewProp_IsDarkMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticDevice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticDevice_Statics::ClassParams = {
		&UHapticDevice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHapticDevice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHapticDevice_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticDevice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticDevice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticDevice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticDevice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticDevice, 1780490686);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UHapticDevice>()
	{
		return UHapticDevice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticDevice(Z_Construct_UClass_UHapticDevice, &UHapticDevice::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UHapticDevice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticDevice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
