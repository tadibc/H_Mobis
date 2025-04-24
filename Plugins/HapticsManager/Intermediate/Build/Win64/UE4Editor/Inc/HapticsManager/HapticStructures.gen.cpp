// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/HapticStructures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticStructures() {}
// Cross Module References
	HAPTICSMANAGER_API UEnum* Z_Construct_UEnum_HapticsManager_EFeedbackMode();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
	HAPTICSMANAGER_API UEnum* Z_Construct_UEnum_HapticsManager_EPosition();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRequest();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRegisterRequest();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmitRequest();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponse();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FHapticFrame();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FPathPoint();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FDotPoint();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FDevice();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FScaleOption();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRotationOption();
	HAPTICSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedback();
// End Cross Module References
	static UEnum* EFeedbackMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HapticsManager_EFeedbackMode, Z_Construct_UPackage__Script_HapticsManager(), TEXT("EFeedbackMode"));
		}
		return Singleton;
	}
	template<> HAPTICSMANAGER_API UEnum* StaticEnum<EFeedbackMode>()
	{
		return EFeedbackMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFeedbackMode(EFeedbackMode_StaticEnum, TEXT("/Script/HapticsManager"), TEXT("EFeedbackMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HapticsManager_EFeedbackMode_Hash() { return 2376326531U; }
	UEnum* Z_Construct_UEnum_HapticsManager_EFeedbackMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFeedbackMode"), 0, Get_Z_Construct_UEnum_HapticsManager_EFeedbackMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFeedbackMode::PATH_MODE", (int64)EFeedbackMode::PATH_MODE },
				{ "EFeedbackMode::DOT_MODE", (int64)EFeedbackMode::DOT_MODE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DOT_MODE.DisplayName", "DOTMODE" },
				{ "DOT_MODE.Name", "EFeedbackMode::DOT_MODE" },
				{ "ModuleRelativePath", "Public/HapticStructures.h" },
				{ "PATH_MODE.DisplayName", "PATHMODE" },
				{ "PATH_MODE.Name", "EFeedbackMode::PATH_MODE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HapticsManager,
				nullptr,
				"EFeedbackMode",
				"EFeedbackMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HapticsManager_EPosition, Z_Construct_UPackage__Script_HapticsManager(), TEXT("EPosition"));
		}
		return Singleton;
	}
	template<> HAPTICSMANAGER_API UEnum* StaticEnum<EPosition>()
	{
		return EPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPosition(EPosition_StaticEnum, TEXT("/Script/HapticsManager"), TEXT("EPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HapticsManager_EPosition_Hash() { return 992937522U; }
	UEnum* Z_Construct_UEnum_HapticsManager_EPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPosition"), 0, Get_Z_Construct_UEnum_HapticsManager_EPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPosition::VestFront", (int64)EPosition::VestFront },
				{ "EPosition::VestBack", (int64)EPosition::VestBack },
				{ "EPosition::GloveL", (int64)EPosition::GloveL },
				{ "EPosition::GloveR", (int64)EPosition::GloveR },
				{ "EPosition::Head", (int64)EPosition::Head },
				{ "EPosition::ForearmL", (int64)EPosition::ForearmL },
				{ "EPosition::ForearmR", (int64)EPosition::ForearmR },
				{ "EPosition::HandL", (int64)EPosition::HandL },
				{ "EPosition::HandR", (int64)EPosition::HandR },
				{ "EPosition::FootL", (int64)EPosition::FootL },
				{ "EPosition::FootR", (int64)EPosition::FootR },
				{ "EPosition::Left", (int64)EPosition::Left },
				{ "EPosition::Right", (int64)EPosition::Right },
				{ "EPosition::Default", (int64)EPosition::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Hidden", "" },
				{ "Default.Name", "EPosition::Default" },
				{ "FootL.Name", "EPosition::FootL" },
				{ "FootR.Name", "EPosition::FootR" },
				{ "ForearmL.Name", "EPosition::ForearmL" },
				{ "ForearmR.Name", "EPosition::ForearmR" },
				{ "GloveL.Name", "EPosition::GloveL" },
				{ "GloveR.Name", "EPosition::GloveR" },
				{ "HandL.Name", "EPosition::HandL" },
				{ "HandR.Name", "EPosition::HandR" },
				{ "Head.Name", "EPosition::Head" },
				{ "Left.Hidden", "" },
				{ "Left.Name", "EPosition::Left" },
				{ "ModuleRelativePath", "Public/HapticStructures.h" },
				{ "Right.Hidden", "" },
				{ "Right.Name", "EPosition::Right" },
				{ "VestBack.Name", "EPosition::VestBack" },
				{ "VestFront.Name", "EPosition::VestFront" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HapticsManager,
				nullptr,
				"EPosition",
				"EPosition",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPlayerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FPlayerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRequest, Z_Construct_UPackage__Script_HapticsManager(), TEXT("PlayerRequest"), sizeof(FPlayerRequest), Get_Z_Construct_UScriptStruct_FPlayerRequest_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FPlayerRequest>()
{
	return FPlayerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerRequest(FPlayerRequest::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("PlayerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFPlayerRequest
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFPlayerRequest()
	{
		UScriptStruct::DeferCppStructOps<FPlayerRequest>(FName(TEXT("PlayerRequest")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFPlayerRequest;
	struct Z_Construct_UScriptStruct_FPlayerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Register_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Register_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Register;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Submit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Submit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Submit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRequest>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register_Inner = { "Register", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRegisterRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register = { "Register", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRequest, Register), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit_Inner = { "Submit", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubmitRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit = { "Submit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRequest, Submit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Register,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRequest_Statics::NewProp_Submit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"PlayerRequest",
		sizeof(FPlayerRequest),
		alignof(FPlayerRequest),
		Z_Construct_UScriptStruct_FPlayerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerRequest"), sizeof(FPlayerRequest), Get_Z_Construct_UScriptStruct_FPlayerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerRequest_Hash() { return 2997861427U; }
class UScriptStruct* FPlayerResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FPlayerResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerResponse, Z_Construct_UPackage__Script_HapticsManager(), TEXT("PlayerResponse"), sizeof(FPlayerResponse), Get_Z_Construct_UScriptStruct_FPlayerResponse_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FPlayerResponse>()
{
	return FPlayerResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerResponse(FPlayerResponse::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("PlayerResponse"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFPlayerResponse
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFPlayerResponse()
	{
		UScriptStruct::DeferCppStructOps<FPlayerResponse>(FName(TEXT("PlayerResponse")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFPlayerResponse;
	struct Z_Construct_UScriptStruct_FPlayerResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"PlayerResponse",
		sizeof(FPlayerResponse),
		alignof(FPlayerResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerResponse"), sizeof(FPlayerResponse), Get_Z_Construct_UScriptStruct_FPlayerResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerResponse_Hash() { return 2661389681U; }
class UScriptStruct* FSubmitRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FSubmitRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmitRequest, Z_Construct_UPackage__Script_HapticsManager(), TEXT("SubmitRequest"), sizeof(FSubmitRequest), Get_Z_Construct_UScriptStruct_FSubmitRequest_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FSubmitRequest>()
{
	return FSubmitRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmitRequest(FSubmitRequest::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("SubmitRequest"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFSubmitRequest
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFSubmitRequest()
	{
		UScriptStruct::DeferCppStructOps<FSubmitRequest>(FName(TEXT("SubmitRequest")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFSubmitRequest;
	struct Z_Construct_UScriptStruct_FSubmitRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmitRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitRequest, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitRequest, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitRequest, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Frame_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitRequest, Frame), Z_Construct_UScriptStruct_FHapticFrame, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Frame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmitRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitRequest_Statics::NewProp_Frame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmitRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"SubmitRequest",
		sizeof(FSubmitRequest),
		alignof(FSubmitRequest),
		Z_Construct_UScriptStruct_FSubmitRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmitRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmitRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmitRequest"), sizeof(FSubmitRequest), Get_Z_Construct_UScriptStruct_FSubmitRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmitRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmitRequest_Hash() { return 3909438132U; }
class UScriptStruct* FHapticFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FHapticFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticFrame, Z_Construct_UPackage__Script_HapticsManager(), TEXT("HapticFrame"), sizeof(FHapticFrame), Get_Z_Construct_UScriptStruct_FHapticFrame_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FHapticFrame>()
{
	return FHapticFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHapticFrame(FHapticFrame::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("HapticFrame"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFHapticFrame
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFHapticFrame()
	{
		UScriptStruct::DeferCppStructOps<FHapticFrame>(FName(TEXT("HapticFrame")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFHapticFrame;
	struct Z_Construct_UScriptStruct_FHapticFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationMillis_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DurationMillis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DotPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DotPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHapticFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticFrame>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DurationMillis_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DurationMillis = { "DurationMillis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFrame, DurationMillis), METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DurationMillis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DurationMillis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFrame, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPathPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFrame, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints_Inner = { "DotPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDotPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints = { "DotPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFrame, DotPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHapticFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DurationMillis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFrame_Statics::NewProp_DotPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHapticFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"HapticFrame",
		sizeof(FHapticFrame),
		alignof(FHapticFrame),
		Z_Construct_UScriptStruct_FHapticFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHapticFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHapticFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HapticFrame"), sizeof(FHapticFrame), Get_Z_Construct_UScriptStruct_FHapticFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHapticFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHapticFrame_Hash() { return 895663024U; }
class UScriptStruct* FRegisterRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FRegisterRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisterRequest, Z_Construct_UPackage__Script_HapticsManager(), TEXT("RegisterRequest"), sizeof(FRegisterRequest), Get_Z_Construct_UScriptStruct_FRegisterRequest_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FRegisterRequest>()
{
	return FRegisterRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRegisterRequest(FRegisterRequest::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("RegisterRequest"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFRegisterRequest
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFRegisterRequest()
	{
		UScriptStruct::DeferCppStructOps<FRegisterRequest>(FName(TEXT("RegisterRequest")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFRegisterRequest;
	struct Z_Construct_UScriptStruct_FRegisterRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisterRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisterRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterRequest_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterRequest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterRequest, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterRequest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterRequest_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisterRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterRequest_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisterRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"RegisterRequest",
		sizeof(FRegisterRequest),
		alignof(FRegisterRequest),
		Z_Construct_UScriptStruct_FRegisterRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisterRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegisterRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RegisterRequest"), sizeof(FRegisterRequest), Get_Z_Construct_UScriptStruct_FRegisterRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegisterRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegisterRequest_Hash() { return 612082778U; }
class UScriptStruct* FDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDevice, Z_Construct_UPackage__Script_HapticsManager(), TEXT("Device"), sizeof(FDevice), Get_Z_Construct_UScriptStruct_FDevice_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FDevice>()
{
	return FDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDevice(FDevice::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("Device"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFDevice
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFDevice()
	{
		UScriptStruct::DeferCppStructOps<FDevice>(FName(TEXT("Device")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFDevice;
	struct Z_Construct_UScriptStruct_FDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[];
#endif
		static void NewProp_IsConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPaired_MetaData[];
#endif
		static void NewProp_IsPaired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPaired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Battery_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Battery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAudioJackIn_MetaData[];
#endif
		static void NewProp_IsAudioJackIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAudioJackIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDevice, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDevice, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDevice, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected_SetBit(void* Obj)
	{
		((FDevice*)Obj)->IsConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDevice), &Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired_SetBit(void* Obj)
	{
		((FDevice*)Obj)->IsPaired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired = { "IsPaired", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDevice), &Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Battery_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Battery = { "Battery", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDevice, Battery), METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Battery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Battery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn_MetaData[] = {
		{ "Category", "Android|Haptic" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn_SetBit(void* Obj)
	{
		((FDevice*)Obj)->IsAudioJackIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn = { "IsAudioJackIn", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDevice), &Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsPaired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_Battery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDevice_Statics::NewProp_IsAudioJackIn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"Device",
		sizeof(FDevice),
		alignof(FDevice),
		Z_Construct_UScriptStruct_FDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Device"), sizeof(FDevice), Get_Z_Construct_UScriptStruct_FDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDevice_Hash() { return 1816968498U; }
class UScriptStruct* FScaleOption::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FScaleOption_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScaleOption, Z_Construct_UPackage__Script_HapticsManager(), TEXT("ScaleOption"), sizeof(FScaleOption), Get_Z_Construct_UScriptStruct_FScaleOption_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FScaleOption>()
{
	return FScaleOption::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScaleOption(FScaleOption::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("ScaleOption"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFScaleOption
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFScaleOption()
	{
		UScriptStruct::DeferCppStructOps<FScaleOption>(FName(TEXT("ScaleOption")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFScaleOption;
	struct Z_Construct_UScriptStruct_FScaleOption_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScaleOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Stores the scaled values when altering a feedback file's intensity and duration.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Stores the scaled values when altering a feedback file's intensity and duration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScaleOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScaleOption>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Multiplier to scale the intensity of the feedback, where 0.5 halves the intensity\n//and a value of 2.0 doubles it. Cannot be negative.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Multiplier to scale the intensity of the feedback, where 0.5 halves the intensity\nand a value of 2.0 doubles it. Cannot be negative." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScaleOption, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Multiplier to scale the duration of the feedback, where 0.5 halves the duration\n//and a value of 2.0 doubles it. Cannot be negative.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Multiplier to scale the duration of the feedback, where 0.5 halves the duration\nand a value of 2.0 doubles it. Cannot be negative." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScaleOption, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScaleOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleOption_Statics::NewProp_Duration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScaleOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"ScaleOption",
		sizeof(FScaleOption),
		alignof(FScaleOption),
		Z_Construct_UScriptStruct_FScaleOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScaleOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScaleOption()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScaleOption_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScaleOption"), sizeof(FScaleOption), Get_Z_Construct_UScriptStruct_FScaleOption_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScaleOption_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScaleOption_Hash() { return 3682778204U; }
class UScriptStruct* FRotationOption::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FRotationOption_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationOption, Z_Construct_UPackage__Script_HapticsManager(), TEXT("RotationOption"), sizeof(FRotationOption), Get_Z_Construct_UScriptStruct_FRotationOption_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FRotationOption>()
{
	return FRotationOption::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotationOption(FRotationOption::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("RotationOption"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFRotationOption
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFRotationOption()
	{
		UScriptStruct::DeferCppStructOps<FRotationOption>(FName(TEXT("RotationOption")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFRotationOption;
	struct Z_Construct_UScriptStruct_FRotationOption_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAngleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Stores values used in rotating and transforming a feedback file on the haptic vest.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Stores values used in rotating and transforming a feedback file on the haptic vest." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotationOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationOption>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetAngleX_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Rotate the feedback file horizontally clockwise along the vest by the given angle in degrees.\n//A value of 180 will flip the feedback to the other side of the device.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Rotate the feedback file horizontally clockwise along the vest by the given angle in degrees.\nA value of 180 will flip the feedback to the other side of the device." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetAngleX = { "OffsetAngleX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationOption, OffsetAngleX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetAngleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetAngleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetY_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Vertical offset of the transformed feedback file, with negative values moving the feedback upwards.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Vertical offset of the transformed feedback file, with negative values moving the feedback upwards." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationOption, OffsetY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetAngleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationOption_Statics::NewProp_OffsetY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"RotationOption",
		sizeof(FRotationOption),
		alignof(FRotationOption),
		Z_Construct_UScriptStruct_FRotationOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotationOption()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotationOption_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotationOption"), sizeof(FRotationOption), Get_Z_Construct_UScriptStruct_FRotationOption_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotationOption_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotationOption_Hash() { return 2812237532U; }
class UScriptStruct* FHapticFeedback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FHapticFeedback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticFeedback, Z_Construct_UPackage__Script_HapticsManager(), TEXT("HapticFeedback"), sizeof(FHapticFeedback), Get_Z_Construct_UScriptStruct_FHapticFeedback_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FHapticFeedback>()
{
	return FHapticFeedback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHapticFeedback(FHapticFeedback::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("HapticFeedback"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFHapticFeedback
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFHapticFeedback()
	{
		UScriptStruct::DeferCppStructOps<FHapticFeedback>(FName(TEXT("HapticFeedback")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFHapticFeedback;
	struct Z_Construct_UScriptStruct_FHapticFeedback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticFeedback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Vars" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFeedback, Position), Z_Construct_UEnum_HapticsManager_EPosition, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Vars" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFeedback, Mode), Z_Construct_UEnum_HapticsManager_EFeedbackMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Vars" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFeedback, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHapticFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedback_Statics::NewProp_Values,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHapticFeedback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"HapticFeedback",
		sizeof(FHapticFeedback),
		alignof(FHapticFeedback),
		Z_Construct_UScriptStruct_FHapticFeedback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHapticFeedback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HapticFeedback"), sizeof(FHapticFeedback), Get_Z_Construct_UScriptStruct_FHapticFeedback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHapticFeedback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHapticFeedback_Hash() { return 3520846727U; }
class UScriptStruct* FPathPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FPathPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathPoint, Z_Construct_UPackage__Script_HapticsManager(), TEXT("PathPoint"), sizeof(FPathPoint), Get_Z_Construct_UScriptStruct_FPathPoint_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FPathPoint>()
{
	return FPathPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPathPoint(FPathPoint::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("PathPoint"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFPathPoint
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFPathPoint()
	{
		UScriptStruct::DeferCppStructOps<FPathPoint>(FName(TEXT("PathPoint")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFPathPoint;
	struct Z_Construct_UScriptStruct_FPathPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MotorCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Structure to allow for continuous haptic feedback anywhere on the device, interpolating which motors are played.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Structure to allow for continuous haptic feedback anywhere on the device, interpolating which motors are played." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPathPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//X-value position on the device from 0.0 to 1.0\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "X-value position on the device from 0.0 to 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathPoint, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Y-value position on the device from 0.0 to 1.0\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Y-value position on the device from 0.0 to 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathPoint, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Intensity of the vibration from 0 to 100\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Intensity of the vibration from 0 to 100" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathPoint, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_MotorCount_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Number of motors activated when interpolating the point from 1 to 3.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Number of motors activated when interpolating the point from 1 to 3." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_MotorCount = { "MotorCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathPoint, MotorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_MotorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_MotorCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_MotorCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"PathPoint",
		sizeof(FPathPoint),
		alignof(FPathPoint),
		Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPathPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPathPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPathPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PathPoint"), sizeof(FPathPoint), Get_Z_Construct_UScriptStruct_FPathPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPathPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPathPoint_Hash() { return 982822294U; }
class UScriptStruct* FDotPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HAPTICSMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FDotPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDotPoint, Z_Construct_UPackage__Script_HapticsManager(), TEXT("DotPoint"), sizeof(FDotPoint), Get_Z_Construct_UScriptStruct_FDotPoint_Hash());
	}
	return Singleton;
}
template<> HAPTICSMANAGER_API UScriptStruct* StaticStruct<FDotPoint>()
{
	return FDotPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDotPoint(FDotPoint::StaticStruct, TEXT("/Script/HapticsManager"), TEXT("DotPoint"), false, nullptr, nullptr);
static struct FScriptStruct_HapticsManager_StaticRegisterNativesFDotPoint
{
	FScriptStruct_HapticsManager_StaticRegisterNativesFDotPoint()
	{
		UScriptStruct::DeferCppStructOps<FDotPoint>(FName(TEXT("DotPoint")));
	}
} ScriptStruct_HapticsManager_StaticRegisterNativesFDotPoint;
	struct Z_Construct_UScriptStruct_FDotPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDotPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Structure used to play individual motors on each device.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Structure used to play individual motors on each device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDotPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDotPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Index of the motor to be activated.\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Index of the motor to be activated." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDotPoint, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Vars" },
		{ "Comment", "//Intensity of the vibration from 0 to 100\n" },
		{ "ModuleRelativePath", "Public/HapticStructures.h" },
		{ "ToolTip", "Intensity of the vibration from 0 to 100" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDotPoint, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDotPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDotPoint_Statics::NewProp_Intensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDotPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
		nullptr,
		&NewStructOps,
		"DotPoint",
		sizeof(FDotPoint),
		alignof(FDotPoint),
		Z_Construct_UScriptStruct_FDotPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDotPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDotPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDotPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDotPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDotPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HapticsManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DotPoint"), sizeof(FDotPoint), Get_Z_Construct_UScriptStruct_FDotPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDotPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDotPoint_Hash() { return 226441302U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
