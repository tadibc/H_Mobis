// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/Feedback/TactotFeedbackFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTactotFeedbackFile() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UTactotFeedbackFile_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UTactotFeedbackFile();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
// End Cross Module References
	void UTactotFeedbackFile::StaticRegisterNativesUTactotFeedbackFile()
	{
	}
	UClass* Z_Construct_UClass_UTactotFeedbackFile_NoRegister()
	{
		return UTactotFeedbackFile::StaticClass();
	}
	struct Z_Construct_UClass_UTactotFeedbackFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTactotFeedbackFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFeedbackFile,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTactotFeedbackFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Feedback/TactotFeedbackFile.h" },
		{ "ModuleRelativePath", "Public/Feedback/TactotFeedbackFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTactotFeedbackFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTactotFeedbackFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTactotFeedbackFile_Statics::ClassParams = {
		&UTactotFeedbackFile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTactotFeedbackFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTactotFeedbackFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTactotFeedbackFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTactotFeedbackFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTactotFeedbackFile, 2744363310);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UTactotFeedbackFile>()
	{
		return UTactotFeedbackFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTactotFeedbackFile(Z_Construct_UClass_UTactotFeedbackFile, &UTactotFeedbackFile::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UTactotFeedbackFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTactotFeedbackFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
