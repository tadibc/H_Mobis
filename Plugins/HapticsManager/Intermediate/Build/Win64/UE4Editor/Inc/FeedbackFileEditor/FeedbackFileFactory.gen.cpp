// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbackFileEditor/Private/Factories/FeedbackFileFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackFileFactory() {}
// Cross Module References
	FEEDBACKFILEEDITOR_API UClass* Z_Construct_UClass_UFeedbackFileFactory_NoRegister();
	FEEDBACKFILEEDITOR_API UClass* Z_Construct_UClass_UFeedbackFileFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FeedbackFileEditor();
// End Cross Module References
	void UFeedbackFileFactory::StaticRegisterNativesUFeedbackFileFactory()
	{
	}
	UClass* Z_Construct_UClass_UFeedbackFileFactory_NoRegister()
	{
		return UFeedbackFileFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFeedbackFileFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedbackFileFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedbackFileEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFileFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FeedbackFileFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/FeedbackFileFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedbackFileFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbackFileFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFeedbackFileFactory_Statics::ClassParams = {
		&UFeedbackFileFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFeedbackFileFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFileFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeedbackFileFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFeedbackFileFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFeedbackFileFactory, 2699645970);
	template<> FEEDBACKFILEEDITOR_API UClass* StaticClass<UFeedbackFileFactory>()
	{
		return UFeedbackFileFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFeedbackFileFactory(Z_Construct_UClass_UFeedbackFileFactory, &UFeedbackFileFactory::StaticClass, TEXT("/Script/FeedbackFileEditor"), TEXT("UFeedbackFileFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbackFileFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
