// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CreateServerPlugin/Public/ServerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerFunctionLibrary() {}
// Cross Module References
	CREATESERVERPLUGIN_API UClass* Z_Construct_UClass_UServerFunctionLibrary_NoRegister();
	CREATESERVERPLUGIN_API UClass* Z_Construct_UClass_UServerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CreateServerPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UServerFunctionLibrary::execIsServerActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UServerFunctionLibrary::IsServerActor(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFunctionLibrary::execGetIPAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UServerFunctionLibrary::GetIPAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFunctionLibrary::execDedicatedShutDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UServerFunctionLibrary::DedicatedShutDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFunctionLibrary::execGetPort)
	{
		P_GET_OBJECT(AGameModeBase,Z_Param_CurrentGameMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UServerFunctionLibrary::GetPort(Z_Param_CurrentGameMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFunctionLibrary::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UServerFunctionLibrary::IsEditor();
		P_NATIVE_END;
	}
	void UServerFunctionLibrary::StaticRegisterNativesUServerFunctionLibrary()
	{
		UClass* Class = UServerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DedicatedShutDown", &UServerFunctionLibrary::execDedicatedShutDown },
			{ "GetIPAddress", &UServerFunctionLibrary::execGetIPAddress },
			{ "GetPort", &UServerFunctionLibrary::execGetPort },
			{ "IsEditor", &UServerFunctionLibrary::execIsEditor },
			{ "IsServerActor", &UServerFunctionLibrary::execIsServerActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "GD_FunctionLibrary" },
		{ "ModuleRelativePath", "Public/ServerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFunctionLibrary, nullptr, "DedicatedShutDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics
	{
		struct ServerFunctionLibrary_eventGetIPAddress_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFunctionLibrary_eventGetIPAddress_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "DY_FunctionLibrary" },
		{ "ModuleRelativePath", "Public/ServerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFunctionLibrary, nullptr, "GetIPAddress", nullptr, nullptr, sizeof(ServerFunctionLibrary_eventGetIPAddress_Parms), Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics
	{
		struct ServerFunctionLibrary_eventGetPort_Parms
		{
			AGameModeBase* CurrentGameMode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_CurrentGameMode = { "CurrentGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFunctionLibrary_eventGetPort_Parms, CurrentGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFunctionLibrary_eventGetPort_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_CurrentGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "GD_FunctionLibrary" },
		{ "ModuleRelativePath", "Public/ServerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFunctionLibrary, nullptr, "GetPort", nullptr, nullptr, sizeof(ServerFunctionLibrary_eventGetPort_Parms), Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFunctionLibrary_GetPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFunctionLibrary_GetPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics
	{
		struct ServerFunctionLibrary_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ServerFunctionLibrary_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerFunctionLibrary_eventIsEditor_Parms), &Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GD_FunctionLibrary" },
		{ "ModuleRelativePath", "Public/ServerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFunctionLibrary, nullptr, "IsEditor", nullptr, nullptr, sizeof(ServerFunctionLibrary_eventIsEditor_Parms), Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFunctionLibrary_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFunctionLibrary_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics
	{
		struct ServerFunctionLibrary_eventIsServerActor_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFunctionLibrary_eventIsServerActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ServerFunctionLibrary_eventIsServerActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerFunctionLibrary_eventIsServerActor_Parms), &Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DY_FunctionLibrary" },
		{ "ModuleRelativePath", "Public/ServerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFunctionLibrary, nullptr, "IsServerActor", nullptr, nullptr, sizeof(ServerFunctionLibrary_eventIsServerActor_Parms), Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerFunctionLibrary_NoRegister()
	{
		return UServerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UServerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CreateServerPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerFunctionLibrary_DedicatedShutDown, "DedicatedShutDown" }, // 3928298228
		{ &Z_Construct_UFunction_UServerFunctionLibrary_GetIPAddress, "GetIPAddress" }, // 68992302
		{ &Z_Construct_UFunction_UServerFunctionLibrary_GetPort, "GetPort" }, // 2027170741
		{ &Z_Construct_UFunction_UServerFunctionLibrary_IsEditor, "IsEditor" }, // 4190261876
		{ &Z_Construct_UFunction_UServerFunctionLibrary_IsServerActor, "IsServerActor" }, // 3478402010
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ServerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ServerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerFunctionLibrary_Statics::ClassParams = {
		&UServerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UServerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerFunctionLibrary, 87119580);
	template<> CREATESERVERPLUGIN_API UClass* StaticClass<UServerFunctionLibrary>()
	{
		return UServerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerFunctionLibrary(Z_Construct_UClass_UServerFunctionLibrary, &UServerFunctionLibrary::StaticClass, TEXT("/Script/CreateServerPlugin"), TEXT("UServerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
