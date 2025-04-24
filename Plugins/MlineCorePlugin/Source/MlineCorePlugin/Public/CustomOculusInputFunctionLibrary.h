// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OculusInputFunctionLibrary.h"
#include "CustomOculusInputFunctionLibrary.generated.h"

/**
 * 
 */


UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EGrabFlag : uint8
{
    None = 0x00,
    Thumb = 0x01 << 0,
    Index = 0x01 << 1,
    Middle = 0x01 << 2,
    Ring = 0x01 << 3,
    Pinky = 0x01 << 4
};
ENUM_CLASS_FLAGS(EGrabFlag)

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EGrabTypeFlag : uint8
{
    None = 0x00,
    Pinch = 0x01 << 0,
    Palm = 0x01 << 1
};
ENUM_CLASS_FLAGS(EGrabTypeFlag)

UENUM(BlueprintType)
enum class FingerRequirement : uint8
{
    Ignored,
    Optional,
    Required
};


UENUM(BlueprintType)
enum class FingerUnselectMode : uint8
{
    AllReleased,
    AnyReleased
};

USTRUCT(Atomic, BlueprintType)
struct FGrabbingRule 
{
    GENERATED_BODY()


public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FingerRequirement")
    FingerRequirement _thumbRequirement;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FingerRequirement")
    FingerRequirement _indexRequirement;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FingerRequirement")
    FingerRequirement _middleRequirement;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FingerRequirement")
    FingerRequirement _ringRequirement;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FingerRequirement")
    FingerRequirement _pinkyRequirement;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FingerRequirement")
    FingerUnselectMode _unselectMode;
};


UCLASS()
class MLINECOREPLUGIN_API UCustomOculusInputFunctionLibrary : public UOculusInputFunctionLibrary
{

	GENERATED_BODY()

public:
    static FQuat trackingThumb1;
    static FQuat trackingThumb2;
    static FQuat trackingThumb3;
    static FQuat trackingIndex1;
    static FQuat trackingIndex2;
    static FQuat trackingIndex3;
    static FQuat trackingMiddle1;
    static FQuat trackingMiddle2;
    static FQuat trackingMiddle3;
    static FQuat trackingRing1;
    static FQuat trackingRing2;
    static FQuat trackingRing3;
    static FQuat trackingPinky1;
    static FQuat trackingPinky2;
    static FQuat trackingPinky3;


public:
	UFUNCTION(BlueprintPure, Category = "OculusLibrary|HandTracking")
		static TArray<float> GetGrabStrength(const EOculusHandType DeviceHand);


    UFUNCTION(BlueprintPure, Category = "OculusLibrary|HandTracking")
    static FGrabbingRule GetDefaultPalmRule();

    UFUNCTION(BlueprintPure, Category = "OculusLibrary|HandTracking")
    static FGrabbingRule GetDefaultPinchRule();

    UFUNCTION(BlueprintPure, Category = "OculusLibrary|HandTracking")
    static FGrabbingRule GetFullGrabRule();

    FRotator* GetRefRotations();
};
