/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "BlueprintCoreHelpers.h"
#include "Engine/DataAsset.h"
#include "Blueprint/UserWidget.h"

#include "BlueprintCoreTypes.generated.h"

class UDataAsset;
class UUserWidget;
class UBlueprintCoreBlueprint;

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

///////////////////////////////
/// Flags
/// 1: bReadOnly
/// 2: bAllowRenaming
/// 3: bSupportsGlobalVariables
/// 4: bSupportsLocalVariables
/// 5: bSupportsFunctions
/// 6: bSupportsMacros
/// 7: bSupportsDelegates
/// 8: bSupportsEventGraphs
/// 9: bSupportsAnimLayers
/// 10: bGraphAllowDeletion
/// 11: bAllowRenaming
///////////////////////////////

// Key files are used to unlock/lock Blueprints
// If this key is lost the Blueprints that are assigned to this key
// will not be unlockable and editable.
//
// DO NOT LOOSE THIS KEY!
// IT IS YOUR RESPONSIBILITY TO KEEP IT SAFE AND BACKED UP.
UCLASS(BlueprintType)
class BLUEPRINTCORE_API UBlueprintCoreKey : public UDataAsset
{
	GENERATED_BODY()
public:
	virtual void PostLoad() override;
public:
	FGuid GetKeyGuid() const { return KeyGuid; }

	FString GetKeyHash()
	{
		FString Result = "";
		if (IsValid())
		{
			Result = FMD5::HashAnsiString(*KeyGuid.ToString());
		}
		return Result;
	}

	bool IsValid() const { return KeyGuid.IsValid(); }
	bool IsDirty() const { return GetOutermost()->IsDirty(); }
public:
	// Generate a unqiue ID for this key file, this can only be done once.
	void GenerateUniqueKeyId();
	uint32 GetFlags() const { return Flags; }
private:
	void HandleSaving();
protected:
	// If this key file has a valid key
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data")
	bool bKeyIsValid;
	UPROPERTY()
	FGuid KeyGuid;
	UPROPERTY()
	uint32 Flags;
};

inline void UBlueprintCoreKey::PostLoad()
{
	Super::PostLoad();

	bKeyIsValid = KeyGuid.IsValid();
}

UENUM(BlueprintType)
enum class EBlueprintSecurity : uint8
{
	Basic,
	High
};

static FString _ToString(EBlueprintStatus status)
{
	FString Result = "Unkonwn";

	switch (status)
	{
	case EBlueprintStatus::BS_Unknown:
		Result = "Unknown";
		break;
	case EBlueprintStatus::BS_Dirty:
		Result = "Dirty";
		break;
	case EBlueprintStatus::BS_Error:
		Result = "Error";
		break;
	case EBlueprintStatus::BS_UpToDate:
		Result = "Up To Date";
		break;
	case EBlueprintStatus::BS_BeingCreated:
		Result = "Being Created";
		break;
	case EBlueprintStatus::BS_UpToDateWithWarnings:
		Result = "Up To Date with Warnings";
		break;
	case EBlueprintStatus::BS_MAX:
		Result = "MAX";
		break;
	}

	return Result;
}

static FString _ToString(EBlueprintType status)
{
	FString Result = "Unkonwn";

	switch (status)
	{
	case BPTYPE_Normal:
		Result = "Normal";
		break;
	case BPTYPE_Const:
		Result = "Const";
		break;
	case BPTYPE_MacroLibrary:
		Result = "Macro Library";
		break;
	case BPTYPE_Interface:
		Result = "Interface";
		break;
	case BPTYPE_LevelScript:
		Result = "Level Script";
		break;
	case BPTYPE_FunctionLibrary:
		Result = "Function Library";
		break;
	case BPTYPE_MAX:
		Result = "MAX";
		break;
	}

	return Result;
}

#undef LOCTEXT_NAMESPACE
