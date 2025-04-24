// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Public/Interface/BleDeviceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleDeviceInterface() {}
// Cross Module References
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BleGoodies();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms, ServiceUUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms, CharacteristicUUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleCharacteristicErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics
	{
		struct _Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
			TArray<uint8> Data;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms, ServiceUUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms, CharacteristicUUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleCharacteristicDataDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics
	{
		struct _Script_BleGoodies_eventBleCharacteristicDelegate_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDelegate_Parms, ServiceUUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDelegate_Parms, CharacteristicUUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleCharacteristicDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BleGoodies_eventBleCharacteristicDelegate_Parms), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_BleGoodies_eventBleErrorDelegate_Parms
		{
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_BleGoodies_eventBleErrorDelegate_Parms), Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicErrorEvent)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToCharacteristicErrorEvent(FBleCharacteristicErrorDelegate(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicUnsubscribeEvent)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnUnsubscribe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToCharacteristicUnsubscribeEvent(FBleCharacteristicDelegate(Z_Param_Out_OnUnsubscribe));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicNotificationEvent)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToCharacteristicNotificationEvent(FBleCharacteristicDataDelegate(Z_Param_Out_OnNotification));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicWriteEvent)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnWrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToCharacteristicWriteEvent(FBleCharacteristicDelegate(Z_Param_Out_OnWrite));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicReadEvent)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToCharacteristicReadEvent(FBleCharacteristicDataDelegate(Z_Param_Out_OnRead));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execUnsubscribeFromCharacteristic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
		P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeFromCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execSubscribeToCharacteristic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
		P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
		P_GET_UBOOL(Z_Param_bIsIndicationCharacteristic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID,Z_Param_bIsIndicationCharacteristic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execWriteCharacteristic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
		P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execReadCharacteristic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
		P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execIsServiceAvailable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsServiceAvailable(Z_Param_ServiceUUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execGetServices)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilterUUIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetServices(Z_Param_Out_FilterUUIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execGetDeviceId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeviceId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnect);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnectError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(FBleDelegate(Z_Param_Out_OnDisconnect),FBleErrorDelegate(Z_Param_Out_OnDisconnectError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBleDeviceInterface::execConnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnect);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnectError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(FBleDelegate(Z_Param_Out_OnConnect),FBleErrorDelegate(Z_Param_Out_OnConnectError));
		P_NATIVE_END;
	}
	void UBleDeviceInterface::StaticRegisterNativesUBleDeviceInterface()
	{
		UClass* Class = UBleDeviceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToCharacteristicErrorEvent", &IBleDeviceInterface::execBindToCharacteristicErrorEvent },
			{ "BindToCharacteristicNotificationEvent", &IBleDeviceInterface::execBindToCharacteristicNotificationEvent },
			{ "BindToCharacteristicReadEvent", &IBleDeviceInterface::execBindToCharacteristicReadEvent },
			{ "BindToCharacteristicUnsubscribeEvent", &IBleDeviceInterface::execBindToCharacteristicUnsubscribeEvent },
			{ "BindToCharacteristicWriteEvent", &IBleDeviceInterface::execBindToCharacteristicWriteEvent },
			{ "Connect", &IBleDeviceInterface::execConnect },
			{ "Disconnect", &IBleDeviceInterface::execDisconnect },
			{ "GetDeviceId", &IBleDeviceInterface::execGetDeviceId },
			{ "GetDeviceName", &IBleDeviceInterface::execGetDeviceName },
			{ "GetServices", &IBleDeviceInterface::execGetServices },
			{ "IsConnected", &IBleDeviceInterface::execIsConnected },
			{ "IsServiceAvailable", &IBleDeviceInterface::execIsServiceAvailable },
			{ "ReadCharacteristic", &IBleDeviceInterface::execReadCharacteristic },
			{ "SubscribeToCharacteristic", &IBleDeviceInterface::execSubscribeToCharacteristic },
			{ "UnsubscribeFromCharacteristic", &IBleDeviceInterface::execUnsubscribeFromCharacteristic },
			{ "WriteCharacteristic", &IBleDeviceInterface::execWriteCharacteristic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics
	{
		struct BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms
		{
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms, OnError), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic operation error events\n\x09*\n\x09* @param OnError - Called when any error occurs during read/write/subscribe\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic operation error events\n\n@param OnError - Called when any error occurs during read/write/subscribe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicErrorEvent", nullptr, nullptr, sizeof(BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics
	{
		struct BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms
		{
			FScriptDelegate OnNotification;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification = { "OnNotification", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms, OnNotification), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to subscribed characteristic notification events\n\x09*\n\x09* @param OnNotification - Called when a characteristic notification is received\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to subscribed characteristic notification events\n\n@param OnNotification - Called when a characteristic notification is received" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicNotificationEvent", nullptr, nullptr, sizeof(BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics
	{
		struct BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms
		{
			FScriptDelegate OnRead;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRead_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnRead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead = { "OnRead", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms, OnRead), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic read events\n\x09*\n\x09* @param OnRead - Called when a characteristic was read\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic read events\n\n@param OnRead - Called when a characteristic was read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicReadEvent", nullptr, nullptr, sizeof(BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics
	{
		struct BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms
		{
			FScriptDelegate OnUnsubscribe;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnsubscribe_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUnsubscribe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe = { "OnUnsubscribe", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms, OnUnsubscribe), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic unsubscribe events\n\x09*\n\x09* @param OnUnsubscribe - Called when unsubscribing from a characteristic\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic unsubscribe events\n\n@param OnUnsubscribe - Called when unsubscribing from a characteristic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicUnsubscribeEvent", nullptr, nullptr, sizeof(BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics
	{
		struct BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms
		{
			FScriptDelegate OnWrite;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnWrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite = { "OnWrite", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms, OnWrite), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic write events\n\x09*\n\x09* @param OnWrite - Called when a characteristic was written to\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic write events\n\n@param OnWrite - Called when a characteristic was written to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicWriteEvent", nullptr, nullptr, sizeof(BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics
	{
		struct BleDeviceInterface_eventConnect_Parms
		{
			FScriptDelegate OnConnect;
			FScriptDelegate OnConnectError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnConnectError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect = { "OnConnect", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventConnect_Parms, OnConnect), Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError = { "OnConnectError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventConnect_Parms, OnConnectError), Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnConnectError" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Connect to to a BLE device\n\x09*\n\x09* @param OnConnect - Called on successful connection\n\x09* @param OnConnectError - Called in case an error occurs during connection\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Connect to to a BLE device\n\n@param OnConnect - Called on successful connection\n@param OnConnectError - Called in case an error occurs during connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "Connect", nullptr, nullptr, sizeof(BleDeviceInterface_eventConnect_Parms), Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics
	{
		struct BleDeviceInterface_eventDisconnect_Parms
		{
			FScriptDelegate OnDisconnect;
			FScriptDelegate OnDisconnectError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnectError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect = { "OnDisconnect", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventDisconnect_Parms, OnDisconnect), Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError = { "OnDisconnectError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventDisconnect_Parms, OnDisconnectError), Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnDisconnectError" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Disconnect from a BLE device\n\x09*\n\x09* @param OnDisconnect - Called on successful disconnection\n\x09* @param OnDisconnectError - Called in case an error occurs during disconnection\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Disconnect from a BLE device\n\n@param OnDisconnect - Called on successful disconnection\n@param OnDisconnectError - Called in case an error occurs during disconnection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "Disconnect", nullptr, nullptr, sizeof(BleDeviceInterface_eventDisconnect_Parms), Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics
	{
		struct BleDeviceInterface_eventGetDeviceId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetDeviceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Get device id\n\x09*\n\x09* @return - Device id\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Get device id\n\n@return - Device id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "GetDeviceId", nullptr, nullptr, sizeof(BleDeviceInterface_eventGetDeviceId_Parms), Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics
	{
		struct BleDeviceInterface_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Get device name\n\x09*\n\x09* @return - Device name\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Get device name\n\n@return - Device name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(BleDeviceInterface_eventGetDeviceName_Parms), Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics
	{
		struct BleDeviceInterface_eventGetServices_Parms
		{
			TArray<FString> FilterUUIDs;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilterUUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterUUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilterUUIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_Inner = { "FilterUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs = { "FilterUUIDs", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetServices_Parms, FilterUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetServices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FilterUUIDs" },
		{ "AutoCreateRefTerm", "FilterUUIDs" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Get device service UUIDs\n\x09*\n\x09* @param FilterUUIDs - Array of UUIDs, the resulting list will only contain services that are specified here\n\x09* @return - An array of available service UUIDs\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Get device service UUIDs\n\n@param FilterUUIDs - Array of UUIDs, the resulting list will only contain services that are specified here\n@return - An array of available service UUIDs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "GetServices", nullptr, nullptr, sizeof(BleDeviceInterface_eventGetServices_Parms), Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_GetServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics
	{
		struct BleDeviceInterface_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BleDeviceInterface_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleDeviceInterface_eventIsConnected_Parms), &Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if this device is connected to\n\x09*\n\x09* @return - True if device is connected, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Check if this device is connected to\n\n@return - True if device is connected, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "IsConnected", nullptr, nullptr, sizeof(BleDeviceInterface_eventIsConnected_Parms), Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics
	{
		struct BleDeviceInterface_eventIsServiceAvailable_Parms
		{
			FString ServiceUUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventIsServiceAvailable_Parms, ServiceUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID_MetaData)) };
	void Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BleDeviceInterface_eventIsServiceAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleDeviceInterface_eventIsServiceAvailable_Parms), &Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if a service is available on the device\n\x09*\n\x09* @return - True if services is available on the device, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Check if a service is available on the device\n\n@return - True if services is available on the device, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "IsServiceAvailable", nullptr, nullptr, sizeof(BleDeviceInterface_eventIsServiceAvailable_Parms), Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics
	{
		struct BleDeviceInterface_eventReadCharacteristic_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventReadCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventReadCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Read service characteristic value\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to read from\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Read service characteristic value\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to read from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "ReadCharacteristic", nullptr, nullptr, sizeof(BleDeviceInterface_eventReadCharacteristic_Parms), Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics
	{
		struct BleDeviceInterface_eventSubscribeToCharacteristic_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
			bool bIsIndicationCharacteristic;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
		static void NewProp_bIsIndicationCharacteristic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIndicationCharacteristic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventSubscribeToCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventSubscribeToCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData)) };
	void Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic_SetBit(void* Obj)
	{
		((BleDeviceInterface_eventSubscribeToCharacteristic_Parms*)Obj)->bIsIndicationCharacteristic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic = { "bIsIndicationCharacteristic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleDeviceInterface_eventSubscribeToCharacteristic_Parms), &Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Subscribe to a service characteristic to receive notifications\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to subscribe to\n\x09* @param IsIndicationCharacteristic - Specify if this characteristic is indicative (Android only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Subscribe to a service characteristic to receive notifications\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to subscribe to\n@param IsIndicationCharacteristic - Specify if this characteristic is indicative (Android only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "SubscribeToCharacteristic", nullptr, nullptr, sizeof(BleDeviceInterface_eventSubscribeToCharacteristic_Parms), Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics
	{
		struct BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Stop receiving service characteristic notifications\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to unsubscribe from\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Stop receiving service characteristic notifications\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to unsubscribe from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "UnsubscribeFromCharacteristic", nullptr, nullptr, sizeof(BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms), Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics
	{
		struct BleDeviceInterface_eventWriteCharacteristic_Parms
		{
			FString ServiceUUID;
			FString CharacteristicUUID;
			TArray<uint8> Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventWriteCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventWriteCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleDeviceInterface_eventWriteCharacteristic_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Write service characteristic value\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to write to\n\x09* @param Data - Array of bytes tp write\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Write service characteristic value\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to write to\n@param Data - Array of bytes tp write" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "WriteCharacteristic", nullptr, nullptr, sizeof(BleDeviceInterface_eventWriteCharacteristic_Parms), Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister()
	{
		return UBleDeviceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBleDeviceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBleDeviceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBleDeviceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent, "BindToCharacteristicErrorEvent" }, // 118403671
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent, "BindToCharacteristicNotificationEvent" }, // 3769652920
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent, "BindToCharacteristicReadEvent" }, // 3519671248
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent, "BindToCharacteristicUnsubscribeEvent" }, // 2950168088
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent, "BindToCharacteristicWriteEvent" }, // 432127833
		{ &Z_Construct_UFunction_UBleDeviceInterface_Connect, "Connect" }, // 3806250779
		{ &Z_Construct_UFunction_UBleDeviceInterface_Disconnect, "Disconnect" }, // 2919956516
		{ &Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId, "GetDeviceId" }, // 828426555
		{ &Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName, "GetDeviceName" }, // 528210333
		{ &Z_Construct_UFunction_UBleDeviceInterface_GetServices, "GetServices" }, // 2339665688
		{ &Z_Construct_UFunction_UBleDeviceInterface_IsConnected, "IsConnected" }, // 436475632
		{ &Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable, "IsServiceAvailable" }, // 1959112134
		{ &Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic, "ReadCharacteristic" }, // 361542949
		{ &Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic, "SubscribeToCharacteristic" }, // 4101176750
		{ &Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic, "UnsubscribeFromCharacteristic" }, // 266188933
		{ &Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic, "WriteCharacteristic" }, // 3093344484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBleDeviceInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBleDeviceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBleDeviceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBleDeviceInterface_Statics::ClassParams = {
		&UBleDeviceInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBleDeviceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBleDeviceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBleDeviceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBleDeviceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBleDeviceInterface, 3854704317);
	template<> BLEGOODIES_API UClass* StaticClass<UBleDeviceInterface>()
	{
		return UBleDeviceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBleDeviceInterface(Z_Construct_UClass_UBleDeviceInterface, &UBleDeviceInterface::StaticClass, TEXT("/Script/BleGoodies"), TEXT("UBleDeviceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBleDeviceInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
