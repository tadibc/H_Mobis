// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileHelper/Public/ScreenshotUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotUtility() {}
// Cross Module References
	FILEHELPER_API UFunction* Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FileHelper();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FILEHELPER_API UClass* Z_Construct_UClass_UScreenshotUtility_NoRegister();
	FILEHELPER_API UClass* Z_Construct_UClass_UScreenshotUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics
	{
		struct _Script_FileHelper_eventOutputPin_Parms
		{
			UTexture2D* Screenshot;
			FString Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Screenshot;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::NewProp_Screenshot = { "Screenshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileHelper_eventOutputPin_Parms, Screenshot), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileHelper_eventOutputPin_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::NewProp_Screenshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenshotUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileHelper, nullptr, "OutputPin__DelegateSignature", nullptr, nullptr, sizeof(_Script_FileHelper_eventOutputPin_Parms), Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UScreenshotUtility::exec_Completed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->_Completed(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshotUtility::execTakeScreenshot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_PrefixTimestamp);
		P_GET_UBOOL(Z_Param_ShowUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScreenshotUtility**)Z_Param__Result=UScreenshotUtility::TakeScreenshot(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_PrefixTimestamp,Z_Param_ShowUI);
		P_NATIVE_END;
	}
	void UScreenshotUtility::StaticRegisterNativesUScreenshotUtility()
	{
		UClass* Class = UScreenshotUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "_Completed", &UScreenshotUtility::exec_Completed },
			{ "TakeScreenshot", &UScreenshotUtility::execTakeScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenshotUtility__Completed_Statics
	{
		struct ScreenshotUtility_event_Completed_Parms
		{
			FString Path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenshotUtility_event_Completed_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenshotUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshotUtility, nullptr, "_Completed", nullptr, nullptr, sizeof(ScreenshotUtility_event_Completed_Parms), Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshotUtility__Completed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshotUtility__Completed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics
	{
		struct ScreenshotUtility_eventTakeScreenshot_Parms
		{
			UObject* WorldContextObject;
			FString Filename;
			bool PrefixTimestamp;
			bool ShowUI;
			UScreenshotUtility* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_PrefixTimestamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrefixTimestamp;
		static void NewProp_ShowUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowUI;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenshotUtility_eventTakeScreenshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenshotUtility_eventTakeScreenshot_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_PrefixTimestamp_SetBit(void* Obj)
	{
		((ScreenshotUtility_eventTakeScreenshot_Parms*)Obj)->PrefixTimestamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_PrefixTimestamp = { "PrefixTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreenshotUtility_eventTakeScreenshot_Parms), &Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_PrefixTimestamp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_ShowUI_SetBit(void* Obj)
	{
		((ScreenshotUtility_eventTakeScreenshot_Parms*)Obj)->ShowUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_ShowUI = { "ShowUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreenshotUtility_eventTakeScreenshot_Parms), &Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_ShowUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenshotUtility_eventTakeScreenshot_Parms, ReturnValue), Z_Construct_UClass_UScreenshotUtility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_PrefixTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_ShowUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Image" },
		{ "CPP_Default_PrefixTimestamp", "true" },
		{ "CPP_Default_ShowUI", "false" },
		{ "ModuleRelativePath", "Public/ScreenshotUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshotUtility, nullptr, "TakeScreenshot", nullptr, nullptr, sizeof(ScreenshotUtility_eventTakeScreenshot_Parms), Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenshotUtility_NoRegister()
	{
		return UScreenshotUtility::StaticClass();
	}
	struct Z_Construct_UClass_UScreenshotUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenshotUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FileHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenshotUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenshotUtility__Completed, "_Completed" }, // 3697581327
		{ &Z_Construct_UFunction_UScreenshotUtility_TakeScreenshot, "TakeScreenshot" }, // 3829644510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshotUtility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScreenshotUtility.h" },
		{ "ModuleRelativePath", "Public/ScreenshotUtility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenshotUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenshotUtility, Completed), Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Completed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenshotUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenshotUtility, Failed), Z_Construct_UDelegateFunction_FileHelper_OutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Failed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenshotUtility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Completed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshotUtility_Statics::NewProp_Failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenshotUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshotUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenshotUtility_Statics::ClassParams = {
		&UScreenshotUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreenshotUtility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotUtility_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenshotUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenshotUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenshotUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenshotUtility, 1757839547);
	template<> FILEHELPER_API UClass* StaticClass<UScreenshotUtility>()
	{
		return UScreenshotUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenshotUtility(Z_Construct_UClass_UScreenshotUtility, &UScreenshotUtility::StaticClass, TEXT("/Script/FileHelper"), TEXT("UScreenshotUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenshotUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
