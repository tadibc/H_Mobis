// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "MlineEventTypes.generated.h"
class UNiagaraSystem;
class USoundAttenuation;
class UAnimSequence;
UENUM(BlueprintType)
enum class EActorEventType : uint8
{
	None,
	Audio UMETA(DisplayName = "Audio"),
	Effect UMETA(DisplayName = "Effect"),
	Animaition UMETA(DisplayName = "Animaition"),
	UI UMETA(DisplayName = "UI"),
	CustomEvent UMETA(DisplayName = "CustomEvent")
};

UENUM(BlueprintType)
enum class EEffectType : uint8
{
	ParticleSystem UMETA(DisplayName = "ParticleSystem"),
	NiagaraSystem UMETA(DisplayName = "NiagaraSystem")
};

enum class EEffectLocation : uint8
{
	Default UMETA(DisplayName = "Default"),
	Target UMETA(DisplayName = "Target"),
	Location UMETA(DisplayName = "Location")
};

UENUM(BlueprintType)
enum class EAnimationEndType : uint8
{
	Keep UMETA(DisplayName = "Keep"),
	Return UMETA(DisplayName = "Return"),

};

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EEventFlag : uint8
{
	None,
	Audio = 1 << 0,
	ParticleEffect = 1 << 1,
	NiagaraEffect = 1 << 2,
	Animaition = 1 << 3,
	UI = 1 << 4,
	CustomEvent = 1 << 5
};
ENUM_CLASS_FLAGS(EEventFlag)


USTRUCT(BlueprintType)
struct FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TriggerSystem|Base")
		float StartTime = 0.0f;
};

USTRUCT(BlueprintType)
struct FMlineEventSound : public FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|Sound", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "AudioComponent"))
		FComponentReference AudioComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Sound")
		USoundBase* Sound;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Sound")
		USoundAttenuation* SoundAttenuation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Sound")
		float Volume = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Sound")
		float Pitch = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Sound")
		bool Looping;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Sound")
		float Delay = 0.0f;

	FTimerHandle timerHandle;


};

USTRUCT(BlueprintType)
struct FMlineEventParticleEffect : public FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|ParticleEffect", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "ParticleSystemComponent"))
		FComponentReference ParticleSystemComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|ParticleEffect")
		UParticleSystem* ParticleSystem;

};

USTRUCT(BlueprintType)
struct FMlineEventNiagaraEffect : public FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|NiagaraEffect", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "NiagaraComponent"))
		FComponentReference NiagaraSystemComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|NiagaraEffect")
		UNiagaraSystem* NiagaraSystem;

};

USTRUCT(BlueprintType)
struct FMlineEventAnimation : public FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|Animation", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "MeshComponent"))
		FComponentReference MeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Animation")
		AActor* AnimationTargerActor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Editcondition = "false", EditConditionHides), Category = "MlineEvent|Animation")
		FString AnimationTargerActorName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Editcondition = "false", EditConditionHides), Category = "MlineEvent|Animation")
		TSubclassOf<class AActor> AnimationTargerActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Animation")
		UAnimSequence* AnimSequence;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Animation")
		bool Looping;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Animation")
		EAnimationEndType AnimationEndType;


};

USTRUCT(BlueprintType)
struct FMlineEventUI : public FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|UI", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "WidgetComponent"))
		FComponentReference widgetComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|UI")
		AActor* AttachedActor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Editcondition = "false", EditConditionHides), Category = "MlineEvent|UI")
		FString AttachedActorName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Editcondition = "false", EditConditionHides), Category = "MlineEvent|UI")
		TSubclassOf<class AActor>AttachedActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|UI")
		TSubclassOf<class UUserWidget> WidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|UI")
		bool AutoDestroy;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (Editcondition = "AutoDestroy", EditConditionHides), Category = "MlineEvent|UI")
		float DestroyTime = 3;


};

USTRUCT(BlueprintType)
struct FMlineCustomEvent : public FMlineEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|Sound", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "MlineCustomEventComponent"))
		FComponentReference CustomEventComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Custom")
		AActor* CustomEventActor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Editcondition = "false", EditConditionHides), Category = "MlineEvent|Custom")
		FString CustomEventActorName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Editcondition = "false", EditConditionHides), Category = "MlineEvent|Custom")
		TSubclassOf<class AActor> CustomEventActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MlineEvent|Custom")
		FString FunctionName;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (Editcondition = "", EditConditionHides))
	//	TScriptInterface<UInterface> Interface;

};



