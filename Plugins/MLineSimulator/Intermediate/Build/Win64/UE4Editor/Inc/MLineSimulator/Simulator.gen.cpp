// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLineSimulator/Public/Simulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulator() {}
// Cross Module References
	MLINESIMULATOR_API UFunction* Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MLineSimulator();
	MLINESIMULATOR_API UFunction* Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature();
	MLINESIMULATOR_API UFunction* Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature();
	MLINESIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPatternInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MLINESIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPattern_Table();
	MLINESIMULATOR_API UClass* Z_Construct_UClass_USimulator_NoRegister();
	MLINESIMULATOR_API UClass* Z_Construct_UClass_USimulator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_MLineSimulator_eventTcpSocketReceivedMessageDelegate_Parms
		{
			int32 ConnectionId;
			TArray<uint8> Message;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MLineSimulator_eventTcpSocketReceivedMessageDelegate_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MLineSimulator_eventTcpSocketReceivedMessageDelegate_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_ConnectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MLineSimulator, nullptr, "TcpSocketReceivedMessageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MLineSimulator_eventTcpSocketReceivedMessageDelegate_Parms), Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics
	{
		struct _Script_MLineSimulator_eventTcpSocketConnectDelegate_Parms
		{
			int32 ConnectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MLineSimulator_eventTcpSocketConnectDelegate_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MLineSimulator, nullptr, "TcpSocketConnectDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MLineSimulator_eventTcpSocketConnectDelegate_Parms), Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics
	{
		struct _Script_MLineSimulator_eventTcpSocketDisconnectDelegate_Parms
		{
			int32 ConnectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MLineSimulator_eventTcpSocketDisconnectDelegate_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MLineSimulator, nullptr, "TcpSocketDisconnectDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MLineSimulator_eventTcpSocketDisconnectDelegate_Parms), Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}

static_assert(std::is_polymorphic<FPatternInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPatternInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPatternInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINESIMULATOR_API uint32 Get_Z_Construct_UScriptStruct_FPatternInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatternInfo, Z_Construct_UPackage__Script_MLineSimulator(), TEXT("PatternInfo"), sizeof(FPatternInfo), Get_Z_Construct_UScriptStruct_FPatternInfo_Hash());
	}
	return Singleton;
}
template<> MLINESIMULATOR_API UScriptStruct* StaticStruct<FPatternInfo>()
{
	return FPatternInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatternInfo(FPatternInfo::StaticStruct, TEXT("/Script/MLineSimulator"), TEXT("PatternInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MLineSimulator_StaticRegisterNativesFPatternInfo
{
	FScriptStruct_MLineSimulator_StaticRegisterNativesFPatternInfo()
	{
		UScriptStruct::DeferCppStructOps<FPatternInfo>(FName(TEXT("PatternInfo")));
	}
} ScriptStruct_MLineSimulator_StaticRegisterNativesFPatternInfo;
	struct Z_Construct_UScriptStruct_FPatternInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAdditive_MetaData[];
#endif
		static void NewProp_IsAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLoop_MetaData[];
#endif
		static void NewProp_IsLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLoop;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pattern_Table_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_Table_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pattern_Table;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpHeave_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpHeave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatternInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatternInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatternInfo, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_AccTime_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_AccTime = { "AccTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatternInfo, AccTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_AccTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_AccTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive_SetBit(void* Obj)
	{
		((FPatternInfo*)Obj)->IsAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive = { "IsAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPatternInfo), &Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop_SetBit(void* Obj)
	{
		((FPatternInfo*)Obj)->IsLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop = { "IsLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPatternInfo), &Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table_Inner = { "Pattern_Table", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPattern_Table, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table = { "Pattern_Table", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatternInfo, Pattern_Table), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpRoll_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpRoll = { "LerpRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatternInfo, LerpRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpPitch_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpPitch = { "LerpPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatternInfo, LerpPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpHeave_MetaData[] = {
		{ "Category", "PatternInfo" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpHeave = { "LerpHeave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatternInfo, LerpHeave), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpHeave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpHeave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatternInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_AccTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_IsLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_Pattern_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatternInfo_Statics::NewProp_LerpHeave,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatternInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MLineSimulator,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PatternInfo",
		sizeof(FPatternInfo),
		alignof(FPatternInfo),
		Z_Construct_UScriptStruct_FPatternInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatternInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatternInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatternInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatternInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MLineSimulator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatternInfo"), sizeof(FPatternInfo), Get_Z_Construct_UScriptStruct_FPatternInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatternInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatternInfo_Hash() { return 3858448404U; }

static_assert(std::is_polymorphic<FPattern_Table>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPattern_Table cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPattern_Table::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINESIMULATOR_API uint32 Get_Z_Construct_UScriptStruct_FPattern_Table_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPattern_Table, Z_Construct_UPackage__Script_MLineSimulator(), TEXT("Pattern_Table"), sizeof(FPattern_Table), Get_Z_Construct_UScriptStruct_FPattern_Table_Hash());
	}
	return Singleton;
}
template<> MLINESIMULATOR_API UScriptStruct* StaticStruct<FPattern_Table>()
{
	return FPattern_Table::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPattern_Table(FPattern_Table::StaticStruct, TEXT("/Script/MLineSimulator"), TEXT("Pattern_Table"), false, nullptr, nullptr);
static struct FScriptStruct_MLineSimulator_StaticRegisterNativesFPattern_Table
{
	FScriptStruct_MLineSimulator_StaticRegisterNativesFPattern_Table()
	{
		UScriptStruct::DeferCppStructOps<FPattern_Table>(FName(TEXT("Pattern_Table")));
	}
} ScriptStruct_MLineSimulator_StaticRegisterNativesFPattern_Table;
	struct Z_Construct_UScriptStruct_FPattern_Table_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heave_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Heave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lerp_MetaData[];
#endif
		static void NewProp_Lerp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Lerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAdditive_MetaData[];
#endif
		static void NewProp_IsAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAdditive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPattern_Table_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPattern_Table>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPattern_Table, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPattern_Table, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPattern_Table, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPattern_Table, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Heave_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Heave = { "Heave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPattern_Table, Heave), METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Heave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Heave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp_SetBit(void* Obj)
	{
		((FPattern_Table*)Obj)->Lerp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp = { "Lerp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPattern_Table), &Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive_MetaData[] = {
		{ "Category", "Pattern_Table" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive_SetBit(void* Obj)
	{
		((FPattern_Table*)Obj)->IsAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive = { "IsAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPattern_Table), &Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPattern_Table_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Heave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_Lerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPattern_Table_Statics::NewProp_IsAdditive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPattern_Table_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MLineSimulator,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Pattern_Table",
		sizeof(FPattern_Table),
		alignof(FPattern_Table),
		Z_Construct_UScriptStruct_FPattern_Table_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPattern_Table_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPattern_Table_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPattern_Table()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPattern_Table_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MLineSimulator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Pattern_Table"), sizeof(FPattern_Table), Get_Z_Construct_UScriptStruct_FPattern_Table_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPattern_Table_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPattern_Table_Hash() { return 2097497408U; }
	DEFINE_FUNCTION(USimulator::execisConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isConnected(Z_Param_ConnectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execMessage_ReadString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_StringLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Message_ReadString(Z_Param_Out_Message,Z_Param_StringLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execMessage_ReadFloat)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Message_ReadFloat(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execMessage_ReadBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumBytes);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ReturnArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Message_ReadBytes(Z_Param_NumBytes,Z_Param_Out_Message,Z_Param_Out_ReturnArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execMessage_ReadByte)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->Message_ReadByte(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execMessage_ReadInt)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Message_ReadInt(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execConv_ByteToBytes)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InByte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->Conv_ByteToBytes(Z_Param_InByte);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execConv_FloatToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->Conv_FloatToBytes(Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execConv_StringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->Conv_StringToBytes(Z_Param_InStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execConv_IntToBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->Conv_IntToBytes(Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execConcat_BytesBytes)
	{
		P_GET_TARRAY(uint8,Z_Param_A);
		P_GET_TARRAY(uint8,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->Concat_BytesBytes(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execSendData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionId);
		P_GET_TARRAY(uint8,Z_Param_DataToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_ConnectionId,Z_Param_DataToSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execDisconnect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(Z_Param_ConnectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execConnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnected);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnected);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMessageReceived);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(FTcpSocketDisconnectDelegate(Z_Param_Out_OnDisconnected),FTcpSocketConnectDelegate(Z_Param_Out_OnConnected),FTcpSocketReceivedMessageDelegate(Z_Param_Out_OnMessageReceived),Z_Param_Out_ConnectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execLoadPatternData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPatternData(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execGetSelfIP)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PORT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelfIP(Z_Param_Out_IP,Z_Param_Out_PORT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimulator::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimulator**)Z_Param__Result=USimulator::Initialize();
		P_NATIVE_END;
	}
	void USimulator::StaticRegisterNativesUSimulator()
	{
		UClass* Class = USimulator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Concat_BytesBytes", &USimulator::execConcat_BytesBytes },
			{ "Connect", &USimulator::execConnect },
			{ "Conv_ByteToBytes", &USimulator::execConv_ByteToBytes },
			{ "Conv_FloatToBytes", &USimulator::execConv_FloatToBytes },
			{ "Conv_IntToBytes", &USimulator::execConv_IntToBytes },
			{ "Conv_StringToBytes", &USimulator::execConv_StringToBytes },
			{ "Disconnect", &USimulator::execDisconnect },
			{ "GetSelfIP", &USimulator::execGetSelfIP },
			{ "Initialize", &USimulator::execInitialize },
			{ "isConnected", &USimulator::execisConnected },
			{ "LoadPatternData", &USimulator::execLoadPatternData },
			{ "Message_ReadByte", &USimulator::execMessage_ReadByte },
			{ "Message_ReadBytes", &USimulator::execMessage_ReadBytes },
			{ "Message_ReadFloat", &USimulator::execMessage_ReadFloat },
			{ "Message_ReadInt", &USimulator::execMessage_ReadInt },
			{ "Message_ReadString", &USimulator::execMessage_ReadString },
			{ "SendData", &USimulator::execSendData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics
	{
		struct Simulator_eventConcat_BytesBytes_Parms
		{
			TArray<uint8> A;
			TArray<uint8> B;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_A_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_B_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConcat_BytesBytes_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConcat_BytesBytes_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConcat_BytesBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_A_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_B_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "Comment", "/*UFUNCTION(BlueprintPure, meta = (DisplayName = \"Append Bytes\", CommutativeAssociativeBinaryOperator = \"true\"), Category = \"Socket\")\n\x09static TArray<uint8> Concat_BytesBytes(const TArray<uint8>& A, const TArray<uint8>& B);*/" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "DisplayName", "Append Bytes" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, meta = (DisplayName = \"Append Bytes\", CommutativeAssociativeBinaryOperator = \"true\"), Category = \"Socket\")\n       static TArray<uint8> Concat_BytesBytes(const TArray<uint8>& A, const TArray<uint8>& B);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Concat_BytesBytes", nullptr, nullptr, sizeof(Simulator_eventConcat_BytesBytes_Parms), Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Concat_BytesBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Concat_BytesBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Connect_Statics
	{
		struct Simulator_eventConnect_Parms
		{
			FScriptDelegate OnDisconnected;
			FScriptDelegate OnConnected;
			FScriptDelegate OnMessageReceived;
			int32 ConnectionId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMessageReceived;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConnect_Parms, OnDisconnected), Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnConnected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConnect_Parms, OnConnected), Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConnect_Parms, OnMessageReceived), Z_Construct_UDelegateFunction_MLineSimulator_TcpSocketReceivedMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnMessageReceived_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConnect_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_OnMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Connect_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "Comment", "/* Returns the ID of the new connection. */" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Returns the ID of the new connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Connect", nullptr, nullptr, sizeof(Simulator_eventConnect_Parms), Z_Construct_UFunction_USimulator_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics
	{
		struct Simulator_eventConv_ByteToBytes_Parms
		{
			uint8 InByte;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InByte;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::NewProp_InByte = { "InByte", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_ByteToBytes_Parms, InByte), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_ByteToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::NewProp_InByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
		{ "Comment", "/** Converts a byte to an array of bytes */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Byte To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Converts a byte to an array of bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Conv_ByteToBytes", nullptr, nullptr, sizeof(Simulator_eventConv_ByteToBytes_Parms), Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Conv_ByteToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Conv_ByteToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics
	{
		struct Simulator_eventConv_FloatToBytes_Parms
		{
			float InFloat;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_FloatToBytes_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_FloatToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::NewProp_InFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
		{ "Comment", "/** Converts a float to an array of bytes */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Float To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Converts a float to an array of bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Conv_FloatToBytes", nullptr, nullptr, sizeof(Simulator_eventConv_FloatToBytes_Parms), Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Conv_FloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Conv_FloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics
	{
		struct Simulator_eventConv_IntToBytes_Parms
		{
			int32 InInt;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_IntToBytes_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_IntToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::NewProp_InInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
		{ "Comment", "/** Converts an integer to an array of bytes */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Int To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Converts an integer to an array of bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Conv_IntToBytes", nullptr, nullptr, sizeof(Simulator_eventConv_IntToBytes_Parms), Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Conv_IntToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Conv_IntToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics
	{
		struct Simulator_eventConv_StringToBytes_Parms
		{
			FString InStr;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InStr;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_InStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_StringToBytes_Parms, InStr), METADATA_PARAMS(Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_InStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_InStr_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventConv_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_InStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
		{ "Comment", "/** Converts a string to an array of bytes */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "String To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Converts a string to an array of bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Conv_StringToBytes", nullptr, nullptr, sizeof(Simulator_eventConv_StringToBytes_Parms), Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Conv_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Conv_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Disconnect_Statics
	{
		struct Simulator_eventDisconnect_Parms
		{
			int32 ConnectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_Disconnect_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventDisconnect_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Disconnect_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "Comment", "/* Disconnect from connection ID. */" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Disconnect from connection ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Disconnect", nullptr, nullptr, sizeof(Simulator_eventDisconnect_Parms), Z_Construct_UFunction_USimulator_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_GetSelfIP_Statics
	{
		struct Simulator_eventGetSelfIP_Parms
		{
			FString IP;
			int32 PORT;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PORT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimulator_GetSelfIP_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventGetSelfIP_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_GetSelfIP_Statics::NewProp_PORT = { "PORT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventGetSelfIP_Parms, PORT), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_GetSelfIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_GetSelfIP_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_GetSelfIP_Statics::NewProp_PORT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_GetSelfIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulator" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_GetSelfIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "GetSelfIP", nullptr, nullptr, sizeof(Simulator_eventGetSelfIP_Parms), Z_Construct_UFunction_USimulator_GetSelfIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_GetSelfIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_GetSelfIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_GetSelfIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_GetSelfIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_GetSelfIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Initialize_Statics
	{
		struct Simulator_eventInitialize_Parms
		{
			USimulator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulator_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventInitialize_Parms, ReturnValue), Z_Construct_UClass_USimulator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulator" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Initialize", nullptr, nullptr, sizeof(Simulator_eventInitialize_Parms), Z_Construct_UFunction_USimulator_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_isConnected_Statics
	{
		struct Simulator_eventisConnected_Parms
		{
			int32 ConnectionId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_isConnected_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventisConnected_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimulator_isConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simulator_eventisConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimulator_isConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Simulator_eventisConnected_Parms), &Z_Construct_UFunction_USimulator_isConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_isConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_isConnected_Statics::NewProp_ConnectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_isConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_isConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_isConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "isConnected", nullptr, nullptr, sizeof(Simulator_eventisConnected_Parms), Z_Construct_UFunction_USimulator_isConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_isConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_isConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_isConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_isConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_isConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_LoadPatternData_Statics
	{
		struct Simulator_eventLoadPatternData_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimulator_LoadPatternData_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventLoadPatternData_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_LoadPatternData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_LoadPatternData_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_LoadPatternData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulator" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_LoadPatternData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "LoadPatternData", nullptr, nullptr, sizeof(Simulator_eventLoadPatternData_Parms), Z_Construct_UFunction_USimulator_LoadPatternData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_LoadPatternData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_LoadPatternData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_LoadPatternData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_LoadPatternData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_LoadPatternData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Message_ReadByte_Statics
	{
		struct Simulator_eventMessage_ReadByte_Parms
		{
			TArray<uint8> Message;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadByte_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Byte" },
		{ "Keywords", "read byte int8 uint8" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Message_ReadByte", nullptr, nullptr, sizeof(Simulator_eventMessage_ReadByte_Parms), Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Message_ReadByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Message_ReadByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics
	{
		struct Simulator_eventMessage_ReadBytes_Parms
		{
			int32 NumBytes;
			TArray<uint8> Message;
			TArray<uint8> ReturnArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_NumBytes = { "NumBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadBytes_Parms, NumBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadBytes_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnArray_Inner = { "ReturnArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnArray = { "ReturnArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadBytes_Parms, ReturnArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simulator_eventMessage_ReadBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Simulator_eventMessage_ReadBytes_Parms), &Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_NumBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Bytes" },
		{ "Keywords", "read bytes" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Message_ReadBytes", nullptr, nullptr, sizeof(Simulator_eventMessage_ReadBytes_Parms), Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Message_ReadBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Message_ReadBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics
	{
		struct Simulator_eventMessage_ReadFloat_Parms
		{
			TArray<uint8> Message;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadFloat_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Float" },
		{ "Keywords", "read float" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Message_ReadFloat", nullptr, nullptr, sizeof(Simulator_eventMessage_ReadFloat_Parms), Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Message_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Message_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Message_ReadInt_Statics
	{
		struct Simulator_eventMessage_ReadInt_Parms
		{
			TArray<uint8> Message;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadInt_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Int" },
		{ "Keywords", "read int" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Message_ReadInt", nullptr, nullptr, sizeof(Simulator_eventMessage_ReadInt_Parms), Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Message_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Message_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_Message_ReadString_Statics
	{
		struct Simulator_eventMessage_ReadString_Parms
		{
			TArray<uint8> Message;
			int32 StringLength;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StringLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadString_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_StringLength = { "StringLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadString_Parms, StringLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventMessage_ReadString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_Message_ReadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_StringLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_Message_ReadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_Message_ReadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read String" },
		{ "Keywords", "read string" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_Message_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "Message_ReadString", nullptr, nullptr, sizeof(Simulator_eventMessage_ReadString_Parms), Z_Construct_UFunction_USimulator_Message_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_Message_ReadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_Message_ReadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_Message_ReadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_Message_ReadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimulator_SendData_Statics
	{
		struct Simulator_eventSendData_Parms
		{
			int32 ConnectionId;
			TArray<uint8> DataToSend;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataToSend_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataToSend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventSendData_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_DataToSend_Inner = { "DataToSend", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_DataToSend = { "DataToSend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulator_eventSendData_Parms, DataToSend), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simulator_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Simulator_eventSendData_Parms), &Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulator_SendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_ConnectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_DataToSend_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_DataToSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulator_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimulator_SendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "Comment", "/* False means we're not connected to socket and the data wasn't sent. \"True\" doesn't guarantee that it was successfully sent,\n\x09only that we were still connected when we initiating the sending process. */// use meta to set first default param to 0\n" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "False means we're not connected to socket and the data wasn't sent. \"True\" doesn't guarantee that it was successfully sent,\n      only that we were still connected when we initiating the sending process. // use meta to set first default param to 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulator_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulator, nullptr, "SendData", nullptr, nullptr, sizeof(Simulator_eventSendData_Parms), Z_Construct_UFunction_USimulator_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_SendData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimulator_SendData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulator_SendData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimulator_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimulator_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimulator_NoRegister()
	{
		return USimulator::StaticClass();
	}
	struct Z_Construct_UClass_USimulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pattern_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pattern_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pattern_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SendBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceiveBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenTicks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLineSimulator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimulator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimulator_Concat_BytesBytes, "Concat_BytesBytes" }, // 2698314913
		{ &Z_Construct_UFunction_USimulator_Connect, "Connect" }, // 206601902
		{ &Z_Construct_UFunction_USimulator_Conv_ByteToBytes, "Conv_ByteToBytes" }, // 2519531556
		{ &Z_Construct_UFunction_USimulator_Conv_FloatToBytes, "Conv_FloatToBytes" }, // 3549213713
		{ &Z_Construct_UFunction_USimulator_Conv_IntToBytes, "Conv_IntToBytes" }, // 2934353884
		{ &Z_Construct_UFunction_USimulator_Conv_StringToBytes, "Conv_StringToBytes" }, // 1289565346
		{ &Z_Construct_UFunction_USimulator_Disconnect, "Disconnect" }, // 1875492447
		{ &Z_Construct_UFunction_USimulator_GetSelfIP, "GetSelfIP" }, // 2465840559
		{ &Z_Construct_UFunction_USimulator_Initialize, "Initialize" }, // 2480492458
		{ &Z_Construct_UFunction_USimulator_isConnected, "isConnected" }, // 2050894519
		{ &Z_Construct_UFunction_USimulator_LoadPatternData, "LoadPatternData" }, // 1370574796
		{ &Z_Construct_UFunction_USimulator_Message_ReadByte, "Message_ReadByte" }, // 3939421471
		{ &Z_Construct_UFunction_USimulator_Message_ReadBytes, "Message_ReadBytes" }, // 1910422525
		{ &Z_Construct_UFunction_USimulator_Message_ReadFloat, "Message_ReadFloat" }, // 3822138843
		{ &Z_Construct_UFunction_USimulator_Message_ReadInt, "Message_ReadInt" }, // 2403225701
		{ &Z_Construct_UFunction_USimulator_Message_ReadString, "Message_ReadString" }, // 3015520780
		{ &Z_Construct_UFunction_USimulator_SendData, "SendData" }, // 766205817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Simulator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array_Inner = { "Pattern_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPattern_Table, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array_MetaData[] = {
		{ "Category", "Simulator" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array = { "Pattern_Array", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimulator, Pattern_Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Info_MetaData[] = {
		{ "Category", "Simulator" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Info = { "Pattern_Info", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimulator, Pattern_Info), Z_Construct_UScriptStruct_FPatternInfo, METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "Simulator" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	void Z_Construct_UClass_USimulator_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((USimulator*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USimulator), &Z_Construct_UClass_USimulator_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_ConnectID_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_ConnectID = { "ConnectID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimulator, ConnectID), METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_ConnectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_ConnectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_SendBufferSize_MetaData[] = {
		{ "Category", "Socket" },
		{ "Comment", "/* Buffer size in bytes. Currently not used. */" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Buffer size in bytes. Currently not used." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_SendBufferSize = { "SendBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimulator, SendBufferSize), METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_SendBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_SendBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_ReceiveBufferSize_MetaData[] = {
		{ "Category", "Socket" },
		{ "Comment", "/* Buffer size in bytes. It's set only when creating a socket, never afterwards. */" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Buffer size in bytes. It's set only when creating a socket, never afterwards." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_ReceiveBufferSize = { "ReceiveBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimulator, ReceiveBufferSize), METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_ReceiveBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_ReceiveBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulator_Statics::NewProp_TimeBetweenTicks_MetaData[] = {
		{ "Category", "Socket" },
		{ "Comment", "/* Time between ticks. Please account for the fact that it takes 1ms to wake up on a modern PC, so 0.01f would effectively be 0.011f */" },
		{ "ModuleRelativePath", "Public/Simulator.h" },
		{ "ToolTip", "Time between ticks. Please account for the fact that it takes 1ms to wake up on a modern PC, so 0.01f would effectively be 0.011f" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimulator_Statics::NewProp_TimeBetweenTicks = { "TimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimulator, TimeBetweenTicks), METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::NewProp_TimeBetweenTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::NewProp_TimeBetweenTicks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_Pattern_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_ConnectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_SendBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_ReceiveBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulator_Statics::NewProp_TimeBetweenTicks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimulator_Statics::ClassParams = {
		&USimulator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimulator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimulator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimulator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimulator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimulator, 3705720918);
	template<> MLINESIMULATOR_API UClass* StaticClass<USimulator>()
	{
		return USimulator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimulator(Z_Construct_UClass_USimulator, &USimulator::StaticClass, TEXT("/Script/MLineSimulator"), TEXT("USimulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
