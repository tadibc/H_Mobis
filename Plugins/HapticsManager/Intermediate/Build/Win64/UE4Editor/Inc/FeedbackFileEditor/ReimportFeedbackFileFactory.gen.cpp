// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbackFileEditor/Private/Factories/ReimportFeedbackFileFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportFeedbackFileFactory() {}
// Cross Module References
	FEEDBACKFILEEDITOR_API UClass* Z_Construct_UClass_UReimportFeedbackFileFactory_NoRegister();
	FEEDBACKFILEEDITOR_API UClass* Z_Construct_UClass_UReimportFeedbackFileFactory();
	FEEDBACKFILEEDITOR_API UClass* Z_Construct_UClass_UFeedbackFileFactory();
	UPackage* Z_Construct_UPackage__Script_FeedbackFileEditor();
// End Cross Module References
	void UReimportFeedbackFileFactory::StaticRegisterNativesUReimportFeedbackFileFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportFeedbackFileFactory_NoRegister()
	{
		return UReimportFeedbackFileFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportFeedbackFileFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFeedbackFileFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedbackFileEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportFeedbackFileFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/ReimportFeedbackFileFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportFeedbackFileFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::ClassParams = {
		&UReimportFeedbackFileFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportFeedbackFileFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportFeedbackFileFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportFeedbackFileFactory, 4210500470);
	template<> FEEDBACKFILEEDITOR_API UClass* StaticClass<UReimportFeedbackFileFactory>()
	{
		return UReimportFeedbackFileFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportFeedbackFileFactory(Z_Construct_UClass_UReimportFeedbackFileFactory, &UReimportFeedbackFileFactory::StaticClass, TEXT("/Script/FeedbackFileEditor"), TEXT("UReimportFeedbackFileFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportFeedbackFileFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
