// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleGoodies_init() {}
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BleGoodies()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BleGoodies",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAB390BFC,
				0xA526C9F0,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
