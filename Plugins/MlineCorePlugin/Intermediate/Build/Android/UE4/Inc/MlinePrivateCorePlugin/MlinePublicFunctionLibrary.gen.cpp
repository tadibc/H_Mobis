// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlinePrivateCorePlugin/Public/MlinePublicFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlinePublicFunctionLibrary() {}
// Cross Module References
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UMlinePublicFunctionLibrary_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UMlinePublicFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMlinePublicFunctionLibrary::execSetAutonomousProxy)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_UBOOL(Z_Param_bInAutonomousProxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMlinePublicFunctionLibrary::SetAutonomousProxy(Z_Param_actor,Z_Param_bInAutonomousProxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlinePublicFunctionLibrary::execGetIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMlinePublicFunctionLibrary::GetIsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMlinePublicFunctionLibrary::execCallFunctionByName)
	{
		P_GET_OBJECT(UObject,Z_Param_object);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMlinePublicFunctionLibrary::CallFunctionByName(Z_Param_object,Z_Param_FunctionData);
		P_NATIVE_END;
	}
	void UMlinePublicFunctionLibrary::StaticRegisterNativesUMlinePublicFunctionLibrary()
	{
		UClass* Class = UMlinePublicFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallFunctionByName", &UMlinePublicFunctionLibrary::execCallFunctionByName },
			{ "GetIsEditor", &UMlinePublicFunctionLibrary::execGetIsEditor },
			{ "SetAutonomousProxy", &UMlinePublicFunctionLibrary::execSetAutonomousProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics
	{
		struct MlinePublicFunctionLibrary_eventCallFunctionByName_Parms
		{
			UObject* object;
			FString FunctionData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlinePublicFunctionLibrary_eventCallFunctionByName_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::NewProp_FunctionData = { "FunctionData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlinePublicFunctionLibrary_eventCallFunctionByName_Parms, FunctionData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::NewProp_object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::NewProp_FunctionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlinePublic" },
		{ "ModuleRelativePath", "Public/MlinePublicFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlinePublicFunctionLibrary, nullptr, "CallFunctionByName", nullptr, nullptr, sizeof(MlinePublicFunctionLibrary_eventCallFunctionByName_Parms), Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics
	{
		struct MlinePublicFunctionLibrary_eventGetIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlinePublicFunctionLibrary_eventGetIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlinePublicFunctionLibrary_eventGetIsEditor_Parms), &Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlinePublic" },
		{ "ModuleRelativePath", "Public/MlinePublicFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlinePublicFunctionLibrary, nullptr, "GetIsEditor", nullptr, nullptr, sizeof(MlinePublicFunctionLibrary_eventGetIsEditor_Parms), Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics
	{
		struct MlinePublicFunctionLibrary_eventSetAutonomousProxy_Parms
		{
			AActor* actor;
			bool bInAutonomousProxy;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAutonomousProxy_MetaData[];
#endif
		static void NewProp_bInAutonomousProxy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAutonomousProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlinePublicFunctionLibrary_eventSetAutonomousProxy_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy_SetBit(void* Obj)
	{
		((MlinePublicFunctionLibrary_eventSetAutonomousProxy_Parms*)Obj)->bInAutonomousProxy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy = { "bInAutonomousProxy", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlinePublicFunctionLibrary_eventSetAutonomousProxy_Parms), &Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::NewProp_bInAutonomousProxy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlinePublic" },
		{ "ModuleRelativePath", "Public/MlinePublicFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlinePublicFunctionLibrary, nullptr, "SetAutonomousProxy", nullptr, nullptr, sizeof(MlinePublicFunctionLibrary_eventSetAutonomousProxy_Parms), Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMlinePublicFunctionLibrary_NoRegister()
	{
		return UMlinePublicFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMlinePublicFunctionLibrary_CallFunctionByName, "CallFunctionByName" }, // 636554593
		{ &Z_Construct_UFunction_UMlinePublicFunctionLibrary_GetIsEditor, "GetIsEditor" }, // 1425282733
		{ &Z_Construct_UFunction_UMlinePublicFunctionLibrary_SetAutonomousProxy, "SetAutonomousProxy" }, // 2478722592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///DECLARE_LOG_CATEGORY_EXTERN(LogMlinePublicFunction, Log, All);\n" },
		{ "IncludePath", "MlinePublicFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MlinePublicFunctionLibrary.h" },
		{ "ToolTip", "//DECLARE_LOG_CATEGORY_EXTERN(LogMlinePublicFunction, Log, All);" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMlinePublicFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::ClassParams = {
		&UMlinePublicFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMlinePublicFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMlinePublicFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMlinePublicFunctionLibrary, 2992466541);
	template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<UMlinePublicFunctionLibrary>()
	{
		return UMlinePublicFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMlinePublicFunctionLibrary(Z_Construct_UClass_UMlinePublicFunctionLibrary, &UMlinePublicFunctionLibrary::StaticClass, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("UMlinePublicFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMlinePublicFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
