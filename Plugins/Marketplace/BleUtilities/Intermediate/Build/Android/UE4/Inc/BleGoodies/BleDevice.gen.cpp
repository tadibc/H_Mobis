// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Private/Android/BleDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleDevice() {}
// Cross Module References
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleDevice_NoRegister();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleDevice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BleGoodies();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister();
// End Cross Module References
	void UBleDevice::StaticRegisterNativesUBleDevice()
	{
	}
	UClass* Z_Construct_UClass_UBleDevice_NoRegister()
	{
		return UBleDevice::StaticClass();
	}
	struct Z_Construct_UClass_UBleDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBleDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBleDevice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Android/BleDevice.h" },
		{ "ModuleRelativePath", "Private/Android/BleDevice.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBleDevice_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBleDeviceInterface_NoRegister, (int32)VTABLE_OFFSET(UBleDevice, IBleDeviceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBleDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleDevice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBleDevice_Statics::ClassParams = {
		&UBleDevice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBleDevice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBleDevice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBleDevice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBleDevice, 2474342415);
	template<> BLEGOODIES_API UClass* StaticClass<UBleDevice>()
	{
		return UBleDevice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBleDevice(Z_Construct_UClass_UBleDevice, &UBleDevice::StaticClass, TEXT("/Script/BleGoodies"), TEXT("UBleDevice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBleDevice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
