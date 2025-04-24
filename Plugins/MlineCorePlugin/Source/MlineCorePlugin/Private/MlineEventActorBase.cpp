// Fill out your copyright notice in the Description page of Project Settings.


#include "MlineEventActorBase.h"

// Sets default values
AMlineEventActorBase::AMlineEventActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FString path = FString(TEXT("/MlineCorePlugin/MlineCore/Blueprints/Actor/MlineGuideArrow.MlineGuideArrow"));
	ConstructorHelpers::FClassFinder<AActor> guideArrowClassOb(TEXT("/MlineCorePlugin/MlineCore/Blueprints/Actor/MlineGuideArrow"));

	guideArrowClass = guideArrowClassOb.Class;

	bReplicates = true;

}

void AMlineEventActorBase::VisibleEvent_cpp(bool visible)
{
	RootComponent->SetVisibility(visible, true);
	SetActorEnableCollision(visible);

	UPrimitiveComponent* primitiveComponent1 = Cast<UPrimitiveComponent>(RootComponent);
	if (primitiveComponent1->IsValidLowLevel())
	{
		primitiveComponent1->SetEnableGravity(visible);
		primitiveComponent1->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
		primitiveComponent1->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	}
	TArray<USceneComponent*> childrenComponents;
	RootComponent->GetChildrenComponents(true, childrenComponents);
	for (USceneComponent* component : childrenComponents)
	{
		if (component->IsSimulatingPhysics())
		{
			UPrimitiveComponent* primitiveComponent2 = Cast<UPrimitiveComponent>(component);
			if (primitiveComponent2->IsValidLowLevel())
			{
				primitiveComponent2->SetEnableGravity(visible);
				primitiveComponent2->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
				primitiveComponent2->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
			}
		}
	}
}

void AMlineEventActorBase::TransformEvent_cpp(FTransform transform)
{
	RootComponent->SetWorldTransform(transform);
}

void AMlineEventActorBase::HighLightEvent_cpp(bool highLight)
{
	isHighlightActivate_cpp = highLight;
	if (highLight)
		StartBlink_cpp();
	else
		EndBlink_cpp();

}

void AMlineEventActorBase::GuideArrowEvent_cpp(bool bGuideArrow)
{
	isGuideArrowActivate_cpp = bGuideArrow;

	if (bGuideArrow)
	{
		if (!guideArrow->IsValidLowLevel())
		{
			FActorSpawnParameters spawnParameters;
			spawnParameters.Owner = this;
			guideArrow = GetWorld()->SpawnActor<AActor>(guideArrowClass, spawnParameters);
		}
	}
	else
	{
		if (guideArrow->IsValidLowLevel())
			guideArrow->Destroy();
	}
}

void AMlineEventActorBase::SoundEvent_cpp(FMlineEventSound& data, bool isActive)
{
	UAudioComponent* audioComponent = Cast<UAudioComponent>(data.AudioComponent.GetComponent(this));

	audioComponent->Sound = data.Sound;
	audioComponent->AttenuationSettings = data.SoundAttenuation;
	audioComponent->SetPitchMultiplier(data.Pitch);
	audioComponent->VolumeMultiplier = data.Volume;

	if (isActive) {
		FTimerHandle startTimeTimerHandle;
		FTimerDelegate startTimeTimerDelegate = FTimerDelegate::CreateLambda([this, audioComponent]()
			{
				UE_LOG(LogTemp, Warning, TEXT("StartTime"));

				if (audioComponent->IsValidLowLevel())
				{
					audioComponent->Play();
				}
			});

		GetWorld()->GetTimerManager().SetTimer(startTimeTimerHandle, startTimeTimerDelegate, data.Sound->GetDuration() + data.Delay, data.Looping, data.StartTime + 0.001f);

	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(data.timerHandle);
		audioComponent->Stop();
	}

}

void AMlineEventActorBase::AnimationEvent_cpp(FMlineEventAnimation data, bool isActive)
{
	USkeletalMeshComponent* skeletalMesh = Cast<USkeletalMeshComponent>(data.MeshComponent.GetComponent(this));

	FTimerHandle startTimeTimerHandle;
	FTimerDelegate startTimeTimerDelegate = FTimerDelegate::CreateLambda([this, skeletalMesh, data, isActive]()
		{

			UE_LOG(LogTemp, Warning, TEXT("SrartTime"));

			if (skeletalMesh->IsValidLowLevel())
			{
				if (isActive) {
					skeletalMesh->PlayAnimation(data.AnimSequence, data.Looping);
				}
				else
				{
					skeletalMesh->Stop();
				}
			}
		});
	GetWorld()->GetTimerManager().SetTimer(startTimeTimerHandle, startTimeTimerDelegate, data.StartTime + 0.001f, false);



}

void AMlineEventActorBase::ParticleEvent_cpp(FMlineEventParticleEffect data, bool isActive)
{
	UParticleSystemComponent* particleSystemComponent = Cast<UParticleSystemComponent>(data.ParticleSystemComponent.GetComponent(this));

	FTimerHandle startTimeTimerHandle;
	FTimerDelegate startTimeTimerDelegate = FTimerDelegate::CreateLambda([this, particleSystemComponent, data, isActive]()
		{

			UE_LOG(LogTemp, Warning, TEXT("SrartTime"));

			if (particleSystemComponent->IsValidLowLevel())
			{


				particleSystemComponent->SetTemplate(data.ParticleSystem);
				particleSystemComponent->SetActive(isActive);


			}
		});
	GetWorld()->GetTimerManager().SetTimer(startTimeTimerHandle, startTimeTimerDelegate, data.StartTime + 0.001f, false);

}

void AMlineEventActorBase::NiagaraEvent_cpp(FMlineEventNiagaraEffect data, bool isActive)
{
	UNiagaraComponent* niagaraComponent = Cast<UNiagaraComponent>(data.NiagaraSystemComponent.GetComponent(this));

	FTimerHandle startTimeTimerHandle;
	FTimerDelegate startTimeTimerDelegate = FTimerDelegate::CreateLambda([this, niagaraComponent, data, isActive]()
		{

			UE_LOG(LogTemp, Warning, TEXT("SrartTime"));

			if (niagaraComponent->IsValidLowLevel())
			{
				niagaraComponent->SetAsset(data.NiagaraSystem);
				niagaraComponent->SetActive(isActive);


			}
		});
	GetWorld()->GetTimerManager().SetTimer(startTimeTimerHandle, startTimeTimerDelegate, data.StartTime + 0.001f, false);
}

void AMlineEventActorBase::UIEvent_cpp(FMlineEventUI data, bool isActive)
{
	AActor* attachedActor = data.AttachedActor;
	UWidgetComponent* widgetComponent = Cast<UWidgetComponent>(data.widgetComponent.GetComponent(this));
	FTimerHandle startTimeTimerHandle;
	//if (data.StartTime > 0)
	//{
	FTimerDelegate startTimeTimerDelegate = FTimerDelegate::CreateLambda([this, widgetComponent, data, isActive]()
		{

			UE_LOG(LogTemp, Warning, TEXT("SrartTime"));

			if (widgetComponent->IsValidLowLevel())
			{

				widgetComponent->SetWidget(CreateWidget(GetWorld(), data.WidgetClass));
				widgetComponent->SetVisibility(isActive);
				FTimerHandle autoDestroyTimerHandle;


				if (data.AutoDestroy)
				{
					FTimerDelegate autoDestroyTimerDelegate = FTimerDelegate::CreateLambda([this, widgetComponent]()
						{
							UE_LOG(LogTemp, Warning, TEXT("UIEvent_cpp AutoDestroy"));
							if (widgetComponent->IsValidLowLevel())
							{
								widgetComponent->SetSlateWidget(nullptr);;
							}
						});


					GetWorld()->GetTimerManager().SetTimer(autoDestroyTimerHandle, autoDestroyTimerDelegate, data.DestroyTime, false);
				}


			}
		});
	GetWorld()->GetTimerManager().SetTimer(startTimeTimerHandle, startTimeTimerDelegate, data.StartTime + 0.001f, false);
	//}
	//else
	//{
	//	widgetComponent->SetWidget(CreateWidget(GetWorld(), data.WidgetClass));
	//	widgetComponent->SetVisibility(isActive);
	//}


}

void AMlineEventActorBase::ActiveEvent()
{
	if (eventFlags & (int32)(EEventFlag::Audio))
	{
		for (int i = 0; i < soundEvents.Num(); i++)
		{
			SoundEvent_cpp((soundEvents[i]), true);
		}
	}
	if (eventFlags & (int32)(EEventFlag::UI))
	{
		for (int i = 0; i < UIEvents.Num(); i++)
		{
			UIEvent_cpp((UIEvents[i]), true);
		}
	}
	if (eventFlags & (int32)(EEventFlag::ParticleEffect))
	{
		for (int i = 0; i < particleEvents.Num(); i++)
		{
			ParticleEvent_cpp((particleEvents[i]), true);
		}
	}
	if (eventFlags & (int32)(EEventFlag::NiagaraEffect))
	{
		for (int i = 0; i < niagaraEvents.Num(); i++)
		{
			NiagaraEvent_cpp((niagaraEvents[i]), true);
		}
	}
	if (eventFlags & (int32)(EEventFlag::Animaition))
	{
		for (int i = 0; i < animationEvents.Num(); i++)
		{
			AnimationEvent_cpp((animationEvents[i]), true);
		}
	}

}

void AMlineEventActorBase::DeactiveEvent()
{
	if (eventFlags & (int32)(EEventFlag::Audio))
	{
		for (int i = 0; i < soundEvents.Num(); i++)
		{
			SoundEvent_cpp((soundEvents[i]), false);
		}
	}
	if (eventFlags & (int32)(EEventFlag::UI))
	{
		for (int i = 0; i < UIEvents.Num(); i++)
		{
			UIEvent_cpp((UIEvents[i]), false);
		}
	}
	if (eventFlags & (int32)(EEventFlag::ParticleEffect))
	{
		for (int i = 0; i < particleEvents.Num(); i++)
		{
			ParticleEvent_cpp((particleEvents[i]), false);
		}
	}
	if (eventFlags & (int32)(EEventFlag::NiagaraEffect))
	{
		for (int i = 0; i < niagaraEvents.Num(); i++)
		{
			NiagaraEvent_cpp((niagaraEvents[i]), false);
		}
	}
	if (eventFlags & (int32)(EEventFlag::Animaition))
	{
		for (int i = 0; i < animationEvents.Num(); i++)
		{
			AnimationEvent_cpp((animationEvents[i]), false);
		}
	}
}

void AMlineEventActorBase::StartBlink_cpp()
{
	for (auto& instance : blinkMaterialInstance)
	{
		if (instance->IsValidLowLevel())
		{
			instance->SetScalarParameterValue("Glow", 1);
		}
	}
}

void AMlineEventActorBase::EndBlink_cpp()
{
	for (auto& instance : blinkMaterialInstance)
	{
		if (instance->IsValidLowLevel())
		{
			instance->SetScalarParameterValue("Glow", 0);
		}
	}
}

void AMlineEventActorBase::BlinkMaterialSetting_cpp()
{
	TArray<UActorComponent*> actorComponents = GetComponentsByTag(UMeshComponent::StaticClass(), "blink");
	for (UActorComponent* actorComponent : actorComponents)
	{
		UMeshComponent* meshComponent = StaticCast<UMeshComponent*>(actorComponent);
		int matNum = meshComponent->GetNumMaterials();
		for (int i = 0; i < matNum; i++)
		{
			UMaterialInterface* material = meshComponent->GetMaterial(i);

			blinkMaterialInstance.Add(meshComponent->CreateDynamicMaterialInstance(i, material));

		}
	}
}

void AMlineEventActorBase::OnRep_isVisible()
{
	if (isVisible != isVisible_OLD)
	{
		VisibleEvent_cpp(isVisible);
		isVisible_OLD = isVisible;
	}
}

void AMlineEventActorBase::OnRep_isInteractionTime()
{
	if (isInteractionTime != isInteractionTime_OLD)
	{
		isInteractionTime_OLD = isInteractionTime;
	}

}

void AMlineEventActorBase::OnRep_isHighLight()
{
	if (isHighLight != isHighLight_OLD)
	{
		HighLightEvent_cpp(isHighLight);
		isHighLight_OLD = isHighLight;
	}
}

void AMlineEventActorBase::OnRep_isGuideArrow()
{
	if (isGuideArrow != isGuideArrow_OLD)
	{
		GuideArrowEvent_cpp(isGuideArrow);
		isGuideArrow_OLD = isGuideArrow;
	}
}

void AMlineEventActorBase::OnRep_newTransform()
{
	if (!newTransform.Equals(Transform_OLD, 0.0001))
	{
		TransformEvent_cpp(newTransform);
		Transform_OLD = newTransform;
		;
	}
}

void AMlineEventActorBase::SetIsVisible_Implementation(bool data)
{
	isVisible = data;
	if (GetNetMode() == ENetMode::NM_Standalone)
	{
		OnRep_isVisible();
	}
}

void AMlineEventActorBase::SetIsInteractionTime_Implementation(bool data)
{
	isInteractionTime = data;
	if (GetNetMode() == ENetMode::NM_Standalone)
	{
		OnRep_isInteractionTime();
	}
}

void AMlineEventActorBase::SetIsHighLight_Implementation(bool data)
{
	isHighLight = data;
	if (GetNetMode() == ENetMode::NM_Standalone)
	{
		OnRep_isHighLight();
	}
}

void AMlineEventActorBase::SetIsGuideArrow_Implementation(bool data)
{
	isGuideArrow = data;
	if (GetNetMode() == ENetMode::NM_Standalone)
	{
		OnRep_isGuideArrow();
	}
}

void AMlineEventActorBase::SetNewTransform_Implementation(FTransform data)
{
	newTransform = data;
	if (GetNetMode() == ENetMode::NM_Standalone)
	{
		OnRep_newTransform();
	}
}

void AMlineEventActorBase::SetTransformOverride_Implementation(bool data)
{
	isTransformOverride = data;
}





bool AMlineEventActorBase::GetIsVisible()
{
	return isVisible;

}

bool AMlineEventActorBase::GetIsInteractionTime()
{
	return isInteractionTime;

}

bool AMlineEventActorBase::GetIsHighLight()
{
	return isHighLight;

}

bool AMlineEventActorBase::GetIsGuideArrow()
{
	return isGuideArrow;
}

FTransform AMlineEventActorBase::GetNewTransform()
{
	return newTransform;


}

bool AMlineEventActorBase::GetTransformOverride()
{
	return isTransformOverride;

}





// Called when the game starts or when spawned
void AMlineEventActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMlineEventActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMlineEventActorBase, isVisible);
	DOREPLIFETIME(AMlineEventActorBase, isInteractionTime);
	DOREPLIFETIME(AMlineEventActorBase, isHighLight);
	DOREPLIFETIME(AMlineEventActorBase, isGuideArrow);
	DOREPLIFETIME(AMlineEventActorBase, newTransform);
	DOREPLIFETIME(AMlineEventActorBase, isTransformOverride);

}



// Called every frame
void AMlineEventActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

