// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OculusInputFunctionLibrary.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "MlineSkeletalMeshExtendLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MLINEPRIVATECOREPLUGIN_API UMlineSkeletalMeshExtendLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Component|SkeletalMesh")
		static TArray<FTransform> GetRefBonePose(USkeletalMeshComponent* skeletalMeshComponent);
	UFUNCTION(BlueprintCallable, Category = "Component|SkeletalMesh")
		static TArray<FTransform> GetRefBonePoseByName(USkeletalMeshComponent* skeletalMeshComponent, TArray<FName> boneNames);
	UFUNCTION(BlueprintCallable, Category = "Component|SkeletalMesh")
		static void SetRefBonePoseByName(USkeletalMeshComponent* skeletalMeshComponent, TMap<FName, EBone> boneMap, EOculusHandType skeletonType);

	UFUNCTION(BlueprintCallable, Category = "Component|SkeletalMesh")
		static TArray<FTransform> GetRefBonePose2(UPoseableMeshComponent* skeletalMeshComponent);
	UFUNCTION(BlueprintCallable, Category = "Component|SkeletalMesh")
		static TArray<FTransform> GetRefBonePoseByName2(UPoseableMeshComponent* skeletalMeshComponent, TArray<FName> boneNames);
	UFUNCTION(BlueprintCallable, Category = "Component|SkeletalMesh")
		static void SetRefBonePoseByName2(UPoseableMeshComponent* skeletalMeshComponent, TMap<FName, EBone> boneMap, EOculusHandType skeletonType);

		

};
