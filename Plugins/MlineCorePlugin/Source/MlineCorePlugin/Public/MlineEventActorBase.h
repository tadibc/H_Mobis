// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MlineActorBase.h"
#include "MlineEventTypes.h"
#include "Engine/DataAsset.h"
#include "Blueprint/UserWidget.h"
#include "NiagaraSystem.h"
#include "Animation/AnimSequence.h"
#include "Sound/SoundAttenuation.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/MeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"
#include "TimerManager.h"
#include "MlineScenarioManagerBase.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/GameplayStatics.h"
//#include "MlinePrivateCorePlugin/MlineActorBase.h"
#include "MlineEventActorBase.generated.h"

UCLASS()
class MLINECOREPLUGIN_API AMlineEventActorBase : public AMlineActorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMlineEventActorBase();


public:

	UPROPERTY(EditAnywhere, Category = "MlineEvent", meta = (Bitmask, BitmaskEnum = EEventFlag))
		int32 eventFlags;
	UPROPERTY(EditInstanceOnly, Category = "MlineEvent|Sound", meta = (EditCondition = "eventFlags & EEventFlag::Audio", EditConditionHides))
		TArray<FMlineEventSound> soundEvents;
	UPROPERTY(EditInstanceOnly, Category = "MlineEvent|ParticleEffect", meta = (EditCondition = "eventFlags & EEventFlag::ParticleEffect", EditConditionHides))
		TArray<FMlineEventParticleEffect> particleEvents;
	UPROPERTY(EditInstanceOnly, Category = "MlineEvent|NiagaraEffect", meta = (EditCondition = "eventFlags & EEventFlag::NiagaraEffect", EditConditionHides))
		TArray<FMlineEventNiagaraEffect> niagaraEvents;
	UPROPERTY(EditInstanceOnly, Category = "MlineEvent|Animation", meta = (EditCondition = "eventFlags & EEventFlag::Animaition", EditConditionHides))
		TArray<FMlineEventAnimation> animationEvents;
	UPROPERTY(EditInstanceOnly, Category = "MlineEvent|UI", meta = (EditCondition = "eventFlags & EEventFlag::UI", EditConditionHides))
		TArray<FMlineEventUI> UIEvents;
	UPROPERTY(EditInstanceOnly, Category = "MlineEvent|Custom", meta = (EditCondition = "eventFlags & EEventFlag::CustomEvent", EditConditionHides))
		TArray<FMlineCustomEvent> customEvents;

private:
	UPROPERTY(EditAnyWhere, ReplicatedUsing = OnRep_isVisible, Category = "MlineEvent")
		bool isVisible;
	UPROPERTY(EditAnyWhere, ReplicatedUsing = OnRep_isInteractionTime, Category = "MlineEvent")
		bool isInteractionTime;
	UPROPERTY(EditAnyWhere, ReplicatedUsing = OnRep_isHighLight, Category = "MlineEvent")
		bool isHighLight;
	UPROPERTY(EditAnyWhere, ReplicatedUsing = OnRep_isGuideArrow, Category = "MlineEvent")
		bool isGuideArrow;
	UPROPERTY(EditAnyWhere, ReplicatedUsing = OnRep_newTransform, Category = "MlineEvent")
		FTransform newTransform;
	UPROPERTY(EditAnyWhere, Replicated, Category = "MlineEvent")
		bool isTransformOverride;
	//UPROPERTY(EditAnyWhere, ReplicatedUsing = OnRep_extraDataStepName, Category = "MlineEvent")
	//	FName extraDataStepName;
public:
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		bool GetIsVisible();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		bool GetIsInteractionTime();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		bool GetIsHighLight();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		bool GetIsGuideArrow();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		FTransform GetNewTransform();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		bool GetTransformOverride();

	UFUNCTION(BlueprintCallable, Server, reliable, Category = "MlineEvent")
		void SetIsVisible(bool data);
	UFUNCTION(BlueprintCallable, Server, reliable, Category = "MlineEvent")
		void SetIsInteractionTime(bool data);
	UFUNCTION(BlueprintCallable, Server, reliable, Category = "MlineEvent")
		void SetIsHighLight(bool data);
	UFUNCTION(BlueprintCallable, Server, reliable, Category = "MlineEvent")
		void SetIsGuideArrow(bool data);
	UFUNCTION(BlueprintCallable, Server, reliable, Category = "MlineEvent")
		void SetNewTransform(FTransform data);
	UFUNCTION(BlueprintCallable, Server, reliable, Category = "MlineEvent")
		void SetTransformOverride(bool data);

protected:
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void OnRep_isVisible();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void OnRep_isInteractionTime();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void OnRep_isHighLight();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void OnRep_isGuideArrow();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void OnRep_newTransform();
	//UFUNCTION(BlueprintCallable, Category = "MlineEvent")
	//	void OnRep_extraDataStepName();

public:
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void ActiveEvent();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void DeactiveEvent();


protected:
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void VisibleEvent_cpp(bool visible);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void TransformEvent_cpp(FTransform transform);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void HighLightEvent_cpp(bool highLight);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void GuideArrowEvent_cpp(bool bGuideArrow);

	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void UIEvent_cpp(FMlineEventUI data, bool isActive);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void SoundEvent_cpp(FMlineEventSound& data, bool isActive);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void AnimationEvent_cpp(FMlineEventAnimation data, bool isActive);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void ParticleEvent_cpp(FMlineEventParticleEffect data, bool isActive);
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void NiagaraEvent_cpp(FMlineEventNiagaraEffect data, bool isActive);

	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void StartBlink_cpp();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void EndBlink_cpp();
	UFUNCTION(BlueprintCallable, Category = "MlineEvent")
		void BlinkMaterialSetting_cpp();

private:
	UPROPERTY()
		bool isVisible_OLD;
	UPROPERTY()
		bool isInteractionTime_OLD;
	UPROPERTY()
		bool isHighLight_OLD;
	UPROPERTY()
		bool isGuideArrow_OLD;
	UPROPERTY()
		FTransform Transform_OLD;
	UPROPERTY()
		AActor* guideArrow;
	TSubclassOf<AActor> guideArrowClass;
	UPROPERTY()
		TArray<UMaterialInstanceDynamic*> blinkMaterialInstance;
	UPROPERTY()
		bool isHighlightActivate_cpp;
	UPROPERTY()
		bool isGuideArrowActivate_cpp;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
