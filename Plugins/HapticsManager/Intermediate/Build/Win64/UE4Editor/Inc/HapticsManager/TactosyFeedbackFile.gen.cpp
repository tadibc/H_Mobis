// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/Feedback/TactosyFeedbackFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTactosyFeedbackFile() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UTactosyFeedbackFile_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UTactosyFeedbackFile();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
// End Cross Module References
	void UTactosyFeedbackFile::StaticRegisterNativesUTactosyFeedbackFile()
	{
	}
	UClass* Z_Construct_UClass_UTactosyFeedbackFile_NoRegister()
	{
		return UTactosyFeedbackFile::StaticClass();
	}
	struct Z_Construct_UClass_UTactosyFeedbackFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTactosyFeedbackFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFeedbackFile,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTactosyFeedbackFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Feedback/TactosyFeedbackFile.h" },
		{ "ModuleRelativePath", "Public/Feedback/TactosyFeedbackFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTactosyFeedbackFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTactosyFeedbackFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTactosyFeedbackFile_Statics::ClassParams = {
		&UTactosyFeedbackFile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTactosyFeedbackFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTactosyFeedbackFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTactosyFeedbackFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTactosyFeedbackFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTactosyFeedbackFile, 1128118391);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UTactosyFeedbackFile>()
	{
		return UTactosyFeedbackFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTactosyFeedbackFile(Z_Construct_UClass_UTactosyFeedbackFile, &UTactosyFeedbackFile::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UTactosyFeedbackFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTactosyFeedbackFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
