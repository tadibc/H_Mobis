// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Private/IOS/BleDevice.h"
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
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManager_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "IncludePath", "IOS/BleDevice.h" },
		{ "ModuleRelativePath", "Private/IOS/BleDevice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "Private/IOS/BleDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBleDevice, Manager), Z_Construct_UClass_UBleManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBleDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager,
	};
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
		Z_Construct_UClass_UBleDevice_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UBleDevice, 2562885778);
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
