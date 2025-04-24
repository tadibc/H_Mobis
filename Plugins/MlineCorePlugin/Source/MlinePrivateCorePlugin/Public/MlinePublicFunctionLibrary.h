// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MlinePublicFunctionLibrary.generated.h"

/**
 * 
 */

//DECLARE_LOG_CATEGORY_EXTERN(LogMlinePublicFunction, Log, All);


UCLASS()
class MLINEPRIVATECOREPLUGIN_API UMlinePublicFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "MlinePublic")
		static void CallFunctionByName(UObject* object, FString FunctionData);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MlinePublic")
		static bool GetIsEditor();
	UFUNCTION(BlueprintCallable, Category = "MlinePublic")
		static void SetAutonomousProxy(AActor* actor, const bool bInAutonomousProxy, const bool bAllowForcePropertyCompare);


	
};
