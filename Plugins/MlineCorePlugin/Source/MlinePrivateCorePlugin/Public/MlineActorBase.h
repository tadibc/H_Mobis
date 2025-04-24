// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GrabActorInterface.h"
#include "GameFramework/Actor.h"
#include "MlineActorBase.generated.h"

UCLASS()
class MLINEPRIVATECOREPLUGIN_API AMlineActorBase : public AActor ,public IGrabActorInterface
{
	GENERATED_BODY()
	
public:	 
	// Sets default values for this actor's properties
	AMlineActorBase();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab")
		bool bisGrabbed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab")
		TArray<AActor*> grabbedHands;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnPhysicsGrabbed_Implementation(AActor* GrabbedHand) override;
	virtual void OnPhysicsReleased_Implementation(AActor* GrabbedHand) override;

};
