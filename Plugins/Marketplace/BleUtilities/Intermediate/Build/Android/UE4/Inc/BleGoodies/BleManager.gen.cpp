// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Private/Android/BleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleManager() {}
// Cross Module References
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManager_NoRegister();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BleGoodies();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister();
// End Cross Module References
	void UBleManager::StaticRegisterNativesUBleManager()
	{
	}
	UClass* Z_Construct_UClass_UBleManager_NoRegister()
	{
		return UBleManager::StaticClass();
	}
	struct Z_Construct_UClass_UBleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Android/BleManager.h" },
		{ "ModuleRelativePath", "Private/Android/BleManager.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBleManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBleManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UBleManager, IBleManagerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBleManager_Statics::ClassParams = {
		&UBleManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBleManager, 664355019);
	template<> BLEGOODIES_API UClass* StaticClass<UBleManager>()
	{
		return UBleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBleManager(Z_Construct_UClass_UBleManager, &UBleManager::StaticClass, TEXT("/Script/BleGoodies"), TEXT("UBleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
