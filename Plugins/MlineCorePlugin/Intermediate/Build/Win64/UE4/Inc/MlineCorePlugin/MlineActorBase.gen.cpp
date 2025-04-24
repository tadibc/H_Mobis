// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineActorBase() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActorBase_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface_NoRegister();
// End Cross Module References
	void AMlineActorBase::StaticRegisterNativesAMlineActorBase()
	{
	}
	UClass* Z_Construct_UClass_AMlineActorBase_NoRegister()
	{
		return AMlineActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AMlineActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineActorBase.h" },
		{ "ModuleRelativePath", "Public/MlineActorBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMlineActorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGrabActorInterface_NoRegister, (int32)VTABLE_OFFSET(AMlineActorBase, IGrabActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineActorBase_Statics::ClassParams = {
		&AMlineActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineActorBase, 1653895762);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineActorBase>()
	{
		return AMlineActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineActorBase(Z_Construct_UClass_AMlineActorBase, &AMlineActorBase::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
