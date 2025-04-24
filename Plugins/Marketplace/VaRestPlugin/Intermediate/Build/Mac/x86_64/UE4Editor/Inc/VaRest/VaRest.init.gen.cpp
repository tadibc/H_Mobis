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
void EmptyLinkFunctionForGeneratedCodeVaRest_init() {}
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VaRest()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/VaRest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6F5E3A5B,
				0xB0C1275A,
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
