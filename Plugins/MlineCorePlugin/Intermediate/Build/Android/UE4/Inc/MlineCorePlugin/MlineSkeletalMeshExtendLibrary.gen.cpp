// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineSkeletalMeshExtendLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineSkeletalMeshExtendLibrary() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EBone();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType();
// End Cross Module References
	DEFINE_FUNCTION(UMlineSkeletalMeshExtendLibrary::execSetRefBonePoseByName2)
	{
		P_GET_OBJECT(UPoseableMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_TMAP(FName,EBone,Z_Param_boneMap);
		P_GET_ENUM(EOculusHandType,Z_Param_skeletonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMlineSkeletalMeshExtendLibrary::SetRefBonePoseByName2(Z_Param_skeletalMeshComponent,Z_Param_boneMap,EOculusHandType(Z_Param_skeletonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlineSkeletalMeshExtendLibrary::execGetRefBonePoseByName2)
	{
		P_GET_OBJECT(UPoseableMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_TARRAY(FName,Z_Param_boneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UMlineSkeletalMeshExtendLibrary::GetRefBonePoseByName2(Z_Param_skeletalMeshComponent,Z_Param_boneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlineSkeletalMeshExtendLibrary::execGetRefBonePose2)
	{
		P_GET_OBJECT(UPoseableMeshComponent,Z_Param_skeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UMlineSkeletalMeshExtendLibrary::GetRefBonePose2(Z_Param_skeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlineSkeletalMeshExtendLibrary::execSetRefBonePoseByName)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_TMAP(FName,EBone,Z_Param_boneMap);
		P_GET_ENUM(EOculusHandType,Z_Param_skeletonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMlineSkeletalMeshExtendLibrary::SetRefBonePoseByName(Z_Param_skeletalMeshComponent,Z_Param_boneMap,EOculusHandType(Z_Param_skeletonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlineSkeletalMeshExtendLibrary::execGetRefBonePoseByName)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_TARRAY(FName,Z_Param_boneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UMlineSkeletalMeshExtendLibrary::GetRefBonePoseByName(Z_Param_skeletalMeshComponent,Z_Param_boneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlineSkeletalMeshExtendLibrary::execGetRefBonePose)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UMlineSkeletalMeshExtendLibrary::GetRefBonePose(Z_Param_skeletalMeshComponent);
		P_NATIVE_END;
	}
	void UMlineSkeletalMeshExtendLibrary::StaticRegisterNativesUMlineSkeletalMeshExtendLibrary()
	{
		UClass* Class = UMlineSkeletalMeshExtendLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRefBonePose", &UMlineSkeletalMeshExtendLibrary::execGetRefBonePose },
			{ "GetRefBonePose2", &UMlineSkeletalMeshExtendLibrary::execGetRefBonePose2 },
			{ "GetRefBonePoseByName", &UMlineSkeletalMeshExtendLibrary::execGetRefBonePoseByName },
			{ "GetRefBonePoseByName2", &UMlineSkeletalMeshExtendLibrary::execGetRefBonePoseByName2 },
			{ "SetRefBonePoseByName", &UMlineSkeletalMeshExtendLibrary::execSetRefBonePoseByName },
			{ "SetRefBonePoseByName2", &UMlineSkeletalMeshExtendLibrary::execSetRefBonePoseByName2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics
	{
		struct MlineSkeletalMeshExtendLibrary_eventGetRefBonePose_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePose_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePose_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component|SkeletalMesh" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, nullptr, "GetRefBonePose", nullptr, nullptr, sizeof(MlineSkeletalMeshExtendLibrary_eventGetRefBonePose_Parms), Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics
	{
		struct MlineSkeletalMeshExtendLibrary_eventGetRefBonePose2_Parms
		{
			UPoseableMeshComponent* skeletalMeshComponent;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePose2_Parms, skeletalMeshComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePose2_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component|SkeletalMesh" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, nullptr, "GetRefBonePose2", nullptr, nullptr, sizeof(MlineSkeletalMeshExtendLibrary_eventGetRefBonePose2_Parms), Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics
	{
		struct MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			TArray<FName> boneNames;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boneNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_boneNames_Inner = { "boneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_boneNames = { "boneNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName_Parms, boneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_boneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_boneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component|SkeletalMesh" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, nullptr, "GetRefBonePoseByName", nullptr, nullptr, sizeof(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName_Parms), Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics
	{
		struct MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName2_Parms
		{
			UPoseableMeshComponent* skeletalMeshComponent;
			TArray<FName> boneNames;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boneNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName2_Parms, skeletalMeshComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_boneNames_Inner = { "boneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_boneNames = { "boneNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName2_Parms, boneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName2_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_boneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_boneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component|SkeletalMesh" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, nullptr, "GetRefBonePoseByName2", nullptr, nullptr, sizeof(MlineSkeletalMeshExtendLibrary_eventGetRefBonePoseByName2_Parms), Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics
	{
		struct MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			TMap<FName,EBone> boneMap;
			EOculusHandType skeletonType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_boneMap_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_boneMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_boneMap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_skeletonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_skeletonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap_ValueProp = { "boneMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap_Key_KeyProp = { "boneMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap = { "boneMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName_Parms, boneMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletonType = { "skeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName_Parms, skeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_boneMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::NewProp_skeletonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component|SkeletalMesh" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, nullptr, "SetRefBonePoseByName", nullptr, nullptr, sizeof(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName_Parms), Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics
	{
		struct MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName2_Parms
		{
			UPoseableMeshComponent* skeletalMeshComponent;
			TMap<FName,EBone> boneMap;
			EOculusHandType skeletonType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_boneMap_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_boneMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_boneMap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_skeletonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_skeletonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName2_Parms, skeletalMeshComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap_ValueProp = { "boneMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap_Key_KeyProp = { "boneMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap = { "boneMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName2_Parms, boneMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletonType = { "skeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName2_Parms, skeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_boneMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::NewProp_skeletonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component|SkeletalMesh" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, nullptr, "SetRefBonePoseByName2", nullptr, nullptr, sizeof(MlineSkeletalMeshExtendLibrary_eventSetRefBonePoseByName2_Parms), Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_NoRegister()
	{
		return UMlineSkeletalMeshExtendLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose, "GetRefBonePose" }, // 3596862922
		{ &Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePose2, "GetRefBonePose2" }, // 3016561883
		{ &Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName, "GetRefBonePoseByName" }, // 2683250855
		{ &Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_GetRefBonePoseByName2, "GetRefBonePoseByName2" }, // 4075209774
		{ &Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName, "SetRefBonePoseByName" }, // 1504109569
		{ &Z_Construct_UFunction_UMlineSkeletalMeshExtendLibrary_SetRefBonePoseByName2, "SetRefBonePoseByName2" }, // 3836175013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MlineSkeletalMeshExtendLibrary.h" },
		{ "ModuleRelativePath", "Public/MlineSkeletalMeshExtendLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMlineSkeletalMeshExtendLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::ClassParams = {
		&UMlineSkeletalMeshExtendLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMlineSkeletalMeshExtendLibrary, 2029317906);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<UMlineSkeletalMeshExtendLibrary>()
	{
		return UMlineSkeletalMeshExtendLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMlineSkeletalMeshExtendLibrary(Z_Construct_UClass_UMlineSkeletalMeshExtendLibrary, &UMlineSkeletalMeshExtendLibrary::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("UMlineSkeletalMeshExtendLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMlineSkeletalMeshExtendLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
