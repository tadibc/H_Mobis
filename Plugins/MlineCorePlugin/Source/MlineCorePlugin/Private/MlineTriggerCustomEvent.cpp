// Fill out your copyright notice in the Description page of Project Settings.


#include "MlineTriggerCustomEvent.h"

DEFINE_LOG_CATEGORY(LogMlineTriggerCustonEvent);
// Sets default values for this component's properties
UMlineTriggerCustomEvent::UMlineTriggerCustomEvent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMlineTriggerCustomEvent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
}


// Called every frame
void UMlineTriggerCustomEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMlineTriggerCustomEvent::Initalize()
{
	EventDelegate.Clear();
}

void UMlineTriggerCustomEvent::SetEvent(UObject* object, FName FunctionName)
{
	UFunction* const bindFunction = object->GetClass()->FindFunctionByName(FunctionName);
	if (bindFunction != nullptr)
		EventDelegate.AddUFunction(object, FunctionName);
	else
		UE_LOG(LogMlineTriggerCustonEvent, Warning, TEXT("\"%s\" Function is none (Actor = %s)"), *(FunctionName.ToString()), *(GetAttachmentRootActor()->GetName()));
}


void UMlineTriggerCustomEvent::ActivateEvent()
{
	EventDelegate.Broadcast();
}

