// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Public/Interface/BleManagerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleManagerInterface() {}
// Cross Module References
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BleGoodies();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics
	{
		struct _Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms
		{
			FString DeviceName;
			TArray<uint8> Data;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms, DeviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleOnAdvertisementDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms), Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics
	{
		struct _Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms
		{
			TScriptInterface<IBleDeviceInterface> Device;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms, Device), Z_Construct_UClass_UBleDeviceInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleOnDeviceFoundDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms), Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execIsScanning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsScanning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execStopScan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopScan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execScanForAdvertisements)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NameFilters);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnAdvertisement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScanForAdvertisements(Z_Param_Out_NameFilters,FBleOnAdvertisementDelegate(Z_Param_Out_OnAdvertisement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execScanForDevices)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ServiceUUIDs);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDeviceFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScanForDevices(Z_Param_Out_ServiceUUIDs,FBleOnDeviceFoundDelegate(Z_Param_Out_OnDeviceFound));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execSetBluetoothState)
	{
		P_GET_UBOOL(Z_Param_bState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBluetoothState(Z_Param_bState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execIsBluetoothEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBluetoothEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleManagerInterface::execIsBleSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBleSupported();
		P_NATIVE_END;
	}
	void UBleManagerInterface::StaticRegisterNativesUBleManagerInterface()
	{
		UClass* Class = UBleManagerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsBleSupported", &IBleManagerInterface::execIsBleSupported },
			{ "IsBluetoothEnabled", &IBleManagerInterface::execIsBluetoothEnabled },
			{ "IsScanning", &IBleManagerInterface::execIsScanning },
			{ "ScanForAdvertisements", &IBleManagerInterface::execScanForAdvertisements },
			{ "ScanForDevices", &IBleManagerInterface::execScanForDevices },
			{ "SetBluetoothState", &IBleManagerInterface::execSetBluetoothState },
			{ "StopScan", &IBleManagerInterface::execStopScan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics
	{
		struct BleManagerInterface_eventIsBleSupported_Parms
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
	void Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BleManagerInterface_eventIsBleSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleManagerInterface_eventIsBleSupported_Parms), &Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if Bluetooth Low Energy is supported\n\x09*\n\x09* @return - True if BLE is supported, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Check if Bluetooth Low Energy is supported\n\n@return - True if BLE is supported, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "IsBleSupported", nullptr, nullptr, sizeof(BleManagerInterface_eventIsBleSupported_Parms), Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_IsBleSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics
	{
		struct BleManagerInterface_eventIsBluetoothEnabled_Parms
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
	void Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BleManagerInterface_eventIsBluetoothEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleManagerInterface_eventIsBluetoothEnabled_Parms), &Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if Bluetooth is enabled\n\x09*\n\x09* @return - True if Bluetooth is enabled, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Check if Bluetooth is enabled\n\n@return - True if Bluetooth is enabled, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "IsBluetoothEnabled", nullptr, nullptr, sizeof(BleManagerInterface_eventIsBluetoothEnabled_Parms), Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics
	{
		struct BleManagerInterface_eventIsScanning_Parms
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
	void Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BleManagerInterface_eventIsScanning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleManagerInterface_eventIsScanning_Parms), &Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if scan is in progress\n\x09*\n\x09* @return - True if the subsystem is currently scanning for devices/advertisements\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Check if scan is in progress\n\n@return - True if the subsystem is currently scanning for devices/advertisements" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "IsScanning", nullptr, nullptr, sizeof(BleManagerInterface_eventIsScanning_Parms), Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_IsScanning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics
	{
		struct BleManagerInterface_eventScanForAdvertisements_Parms
		{
			TArray<FString> NameFilters;
			FScriptDelegate OnAdvertisement;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameFilters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAdvertisement_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnAdvertisement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_Inner = { "NameFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters = { "NameFilters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForAdvertisements_Parms, NameFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement = { "OnAdvertisement", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForAdvertisements_Parms, OnAdvertisement), Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NameFilters" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Start listening for advertisements\n\x09*\n\x09* @param NameFilters - An array of device names to listen to for advertisements\n\x09* @param OnAdvertisement - Called when an advertisement is picked up\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Start listening for advertisements\n\n@param NameFilters - An array of device names to listen to for advertisements\n@param OnAdvertisement - Called when an advertisement is picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "ScanForAdvertisements", nullptr, nullptr, sizeof(BleManagerInterface_eventScanForAdvertisements_Parms), Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics
	{
		struct BleManagerInterface_eventScanForDevices_Parms
		{
			TArray<FString> ServiceUUIDs;
			FScriptDelegate OnDeviceFound;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceUUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServiceUUIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeviceFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDeviceFound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_Inner = { "ServiceUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs = { "ServiceUUIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForDevices_Parms, ServiceUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound = { "OnDeviceFound", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForDevices_Parms, OnDeviceFound), Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ServiceUUIDs" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Start searching for nearby BLE devices\n\x09*\n\x09* @param ServiceUUIDs - An array of service UUIDs to filter devices\n\x09* @param OnDeviceFound - Called when a new device is found\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Start searching for nearby BLE devices\n\n@param ServiceUUIDs - An array of service UUIDs to filter devices\n@param OnDeviceFound - Called when a new device is found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "ScanForDevices", nullptr, nullptr, sizeof(BleManagerInterface_eventScanForDevices_Parms), Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_ScanForDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics
	{
		struct BleManagerInterface_eventSetBluetoothState_Parms
		{
			bool bState;
		};
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((BleManagerInterface_eventSetBluetoothState_Parms*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleManagerInterface_eventSetBluetoothState_Parms), &Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Enable/disable Bluetooth (Android only)\n\x09*\n\x09* @param bState - New Bluetooth state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Enable/disable Bluetooth (Android only)\n\n@param bState - New Bluetooth state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "SetBluetoothState", nullptr, nullptr, sizeof(BleManagerInterface_eventSetBluetoothState_Parms), Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Stop searching for nearby BLE devices\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Stop searching for nearby BLE devices" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "StopScan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleManagerInterface_StopScan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister()
	{
		return UBleManagerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBleManagerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBleManagerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBleManagerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleManagerInterface_IsBleSupported, "IsBleSupported" }, // 328991256
		{ &Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled, "IsBluetoothEnabled" }, // 957455515
		{ &Z_Construct_UFunction_UBleManagerInterface_IsScanning, "IsScanning" }, // 1329456757
		{ &Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements, "ScanForAdvertisements" }, // 238919637
		{ &Z_Construct_UFunction_UBleManagerInterface_ScanForDevices, "ScanForDevices" }, // 4081079775
		{ &Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState, "SetBluetoothState" }, // 1503954183
		{ &Z_Construct_UFunction_UBleManagerInterface_StopScan, "StopScan" }, // 290355615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBleManagerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBleManagerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBleManagerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBleManagerInterface_Statics::ClassParams = {
		&UBleManagerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBleManagerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBleManagerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBleManagerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBleManagerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBleManagerInterface, 1229373835);
	template<> BLEGOODIES_API UClass* StaticClass<UBleManagerInterface>()
	{
		return UBleManagerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBleManagerInterface(Z_Construct_UClass_UBleManagerInterface, &UBleManagerInterface::StaticClass, TEXT("/Script/BleGoodies"), TEXT("UBleManagerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBleManagerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
