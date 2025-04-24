// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GrabActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Category = "Mline")
class UGrabActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MLINEPRIVATECOREPLUGIN_API IGrabActorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mline")
	void OnPhysicsGrabbed(AActor* GrabbedHand);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mline")
	void OnPhysicsReleased(AActor* GrabbedHand);
};
