// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/Feedback/HandFeedbackFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandFeedbackFile() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UHandFeedbackFile_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UHandFeedbackFile();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
// End Cross Module References
	void UHandFeedbackFile::StaticRegisterNativesUHandFeedbackFile()
	{
	}
	UClass* Z_Construct_UClass_UHandFeedbackFile_NoRegister()
	{
		return UHandFeedbackFile::StaticClass();
	}
	struct Z_Construct_UClass_UHandFeedbackFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandFeedbackFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFeedbackFile,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandFeedbackFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Feedback/HandFeedbackFile.h" },
		{ "ModuleRelativePath", "Public/Feedback/HandFeedbackFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandFeedbackFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandFeedbackFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHandFeedbackFile_Statics::ClassParams = {
		&UHandFeedbackFile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHandFeedbackFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandFeedbackFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandFeedbackFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHandFeedbackFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHandFeedbackFile, 388430810);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UHandFeedbackFile>()
	{
		return UHandFeedbackFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHandFeedbackFile(Z_Construct_UClass_UHandFeedbackFile, &UHandFeedbackFile::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UHandFeedbackFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandFeedbackFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
