// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlinePrivateCorePlugin/Public/MlineActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineActorBase() {}
// Cross Module References
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActorBase_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bisGrabbed_MetaData[];
#endif
		static void NewProp_bisGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bisGrabbed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabbedHands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabbedHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_grabbedHands;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineActorBase.h" },
		{ "ModuleRelativePath", "Public/MlineActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed_MetaData[] = {
		{ "Category", "Grab" },
		{ "ModuleRelativePath", "Public/MlineActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed_SetBit(void* Obj)
	{
		((AMlineActorBase*)Obj)->bisGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed = { "bisGrabbed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineActorBase), &Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands_Inner = { "grabbedHands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands_MetaData[] = {
		{ "Category", "Grab" },
		{ "ModuleRelativePath", "Public/MlineActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands = { "grabbedHands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineActorBase, grabbedHands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActorBase_Statics::NewProp_bisGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActorBase_Statics::NewProp_grabbedHands,
	};
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
		Z_Construct_UClass_AMlineActorBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActorBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMlineActorBase, 630663807);
	template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<AMlineActorBase>()
	{
		return AMlineActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineActorBase(Z_Construct_UClass_AMlineActorBase, &AMlineActorBase::StaticClass, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("AMlineActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
