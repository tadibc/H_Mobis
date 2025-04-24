// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/Feedback/TactalFeedbackFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTactalFeedbackFile() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UTactalFeedbackFile_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UTactalFeedbackFile();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
// End Cross Module References
	void UTactalFeedbackFile::StaticRegisterNativesUTactalFeedbackFile()
	{
	}
	UClass* Z_Construct_UClass_UTactalFeedbackFile_NoRegister()
	{
		return UTactalFeedbackFile::StaticClass();
	}
	struct Z_Construct_UClass_UTactalFeedbackFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTactalFeedbackFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFeedbackFile,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTactalFeedbackFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Feedback/TactalFeedbackFile.h" },
		{ "ModuleRelativePath", "Public/Feedback/TactalFeedbackFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTactalFeedbackFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTactalFeedbackFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTactalFeedbackFile_Statics::ClassParams = {
		&UTactalFeedbackFile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTactalFeedbackFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTactalFeedbackFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTactalFeedbackFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTactalFeedbackFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTactalFeedbackFile, 1697232309);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UTactalFeedbackFile>()
	{
		return UTactalFeedbackFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTactalFeedbackFile(Z_Construct_UClass_UTactalFeedbackFile, &UTactalFeedbackFile::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UTactalFeedbackFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTactalFeedbackFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
