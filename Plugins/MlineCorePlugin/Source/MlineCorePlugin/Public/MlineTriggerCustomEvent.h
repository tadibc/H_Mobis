// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "MlineTriggerCustomEvent.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(LogMlineTriggerCustonEvent, Log, All);

DECLARE_MULTICAST_DELEGATE(FCustomEvent);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MLINECOREPLUGIN_API UMlineTriggerCustomEvent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMlineTriggerCustomEvent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	

	UFUNCTION(BlueprintCallable, Category = "EventSystem|CustomEvent")
	void ActivateEvent();
	void SetEvent(UObject* object, FName FunctionName);
	void Initalize();
	FCustomEvent EventDelegate;

private:


		
};
