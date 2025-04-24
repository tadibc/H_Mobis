// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/Feedback/FootFeedbackFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootFeedbackFile() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFootFeedbackFile_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFootFeedbackFile();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
// End Cross Module References
	void UFootFeedbackFile::StaticRegisterNativesUFootFeedbackFile()
	{
	}
	UClass* Z_Construct_UClass_UFootFeedbackFile_NoRegister()
	{
		return UFootFeedbackFile::StaticClass();
	}
	struct Z_Construct_UClass_UFootFeedbackFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootFeedbackFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFeedbackFile,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootFeedbackFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Feedback/FootFeedbackFile.h" },
		{ "ModuleRelativePath", "Public/Feedback/FootFeedbackFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootFeedbackFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootFeedbackFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootFeedbackFile_Statics::ClassParams = {
		&UFootFeedbackFile::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootFeedbackFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootFeedbackFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootFeedbackFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootFeedbackFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootFeedbackFile, 2689545957);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UFootFeedbackFile>()
	{
		return UFootFeedbackFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootFeedbackFile(Z_Construct_UClass_UFootFeedbackFile, &UFootFeedbackFile::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UFootFeedbackFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootFeedbackFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
