// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomOculusInputFunctionLibrary.h"

FQuat UCustomOculusInputFunctionLibrary::trackingThumb1 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingThumb2 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingThumb3 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingIndex1 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingIndex2 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingIndex3 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingMiddle1 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingMiddle2 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingMiddle3 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingRing1 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingRing2 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingRing3 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingPinky1 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingPinky2 = FQuat();
FQuat UCustomOculusInputFunctionLibrary::trackingPinky3 = FQuat();

TArray<float> UCustomOculusInputFunctionLibrary::GetGrabStrength(const EOculusHandType DeviceHand)
{

	FQuat refThumb1 = FRotator(30.284773, 1.079504, 14.670671).Quaternion();
	FQuat refThumb2 = FRotator(-8.797916, 9.572428, 8.968389).Quaternion();
	FQuat refThumb3 = FRotator(-7.979088, 6.076795, 9.192846).Quaternion();
	FQuat refIndex1 = FRotator(3.421738, 2.310072, -4.895458).Quaternion();
	FQuat refIndex2 = FRotator(-2.965689, 0.805402, -0.398327).Quaternion();
	FQuat refIndex3 = FRotator(-1.612868, 3.235597, 8.220222).Quaternion();
	FQuat refMiddle1 = FRotator(-1.348929, 5.837762, -6.019503).Quaternion();
	FQuat refMiddle2 = FRotator(-1.285729, 0.504293, 0.221043).Quaternion();
	FQuat refMiddle3 = FRotator(-3.867565, 0.891695, 10.649587).Quaternion();
	FQuat refRing1 = FRotator(-6.948535, 13.790889, -6.604005).Quaternion();
	FQuat refRing2 = FRotator(-3.856515, 0.297585, -0.660786).Quaternion();
	FQuat refRing3 = FRotator(-0.482708, -3.333084, 2.883638).Quaternion();
	FQuat refPinky1 = FRotator(10.46442, -0.170707, -3.25292).Quaternion();
	FQuat refPinky2 = FRotator(-4.257704, 4.975335, 1.339908).Quaternion();
	FQuat refPinky3 = FRotator(-0.061882, -5.636941, 2.759024).Quaternion();

	if (GetTrackingConfidence(DeviceHand) == ETrackingConfidence::High)
	{
		trackingThumb1 = GetBoneRotation(DeviceHand, EBone::Thumb_1);
		trackingThumb2 = GetBoneRotation(DeviceHand, EBone::Thumb_2);
		trackingThumb3 = GetBoneRotation(DeviceHand, EBone::Thumb_3);
		trackingIndex1 = GetBoneRotation(DeviceHand, EBone::Index_1);
		trackingIndex2 = GetBoneRotation(DeviceHand, EBone::Index_2);
		trackingIndex3 = GetBoneRotation(DeviceHand, EBone::Index_3);
		trackingMiddle1 = GetBoneRotation(DeviceHand, EBone::Middle_1);
		trackingMiddle2 = GetBoneRotation(DeviceHand, EBone::Middle_2);
		trackingMiddle3 = GetBoneRotation(DeviceHand, EBone::Middle_3);
		trackingRing1 = GetBoneRotation(DeviceHand, EBone::Ring_1);
		trackingRing2 = GetBoneRotation(DeviceHand, EBone::Ring_2);
		trackingRing3 = GetBoneRotation(DeviceHand, EBone::Ring_3);
		trackingPinky1 = GetBoneRotation(DeviceHand, EBone::Pinky_1);
		trackingPinky2 = GetBoneRotation(DeviceHand, EBone::Pinky_2);
		trackingPinky3 = GetBoneRotation(DeviceHand, EBone::Pinky_3);
	}

	float angleThumb1 = refThumb1.AngularDistance(trackingThumb1);
	float angleThumb2 = refThumb2.AngularDistance(trackingThumb2);
	float angleThumb3 = refThumb3.AngularDistance(trackingThumb3);
	float angleIndex1 = refIndex1.AngularDistance(trackingIndex1);
	float angleIndex2 = refIndex2.AngularDistance(trackingIndex2);
	float angleIndex3 = refIndex3.AngularDistance(trackingIndex3);
	float angleMiddle1 = refMiddle1.AngularDistance(trackingMiddle1);
	float angleMiddle2 = refMiddle2.AngularDistance(trackingMiddle2);
	float angleMiddle3 = refMiddle3.AngularDistance(trackingMiddle3);
	float angleRing1 = refRing1.AngularDistance(trackingRing1);
	float angleRing2 = refRing2.AngularDistance(trackingRing2);
	float angleRing3 = refRing3.AngularDistance(trackingRing3);
	float anglePinky1 = refPinky1.AngularDistance(trackingPinky1);
	float anglePinky2 = refPinky2.AngularDistance(trackingPinky2);
	float anglePinky3 = refPinky3.AngularDistance(trackingPinky3);

	TArray<float> result;

	// 90??
	float refRadian = 0.636619;

	float angleThumb = (angleThumb1+angleThumb2 + angleThumb3) * 0.333333f;
	float angleIndex = (angleIndex1 + angleIndex2 + angleIndex3) * 0.333333f;
	float angleMiddle = (angleMiddle1 + angleMiddle2 + angleMiddle3) * 0.333333f;
	float angleRing = (angleRing1 + angleRing2 + angleRing3) * 0.333333f;
	float anglePinky = (anglePinky1 + anglePinky2 + anglePinky3) * 0.333333f;

	float minThumb = 0.2083f*1.1f;
	float minIndex = 0.1310f* 1.1f;
	float minMiddle = 0.1414f* 1.1f;
	float minRing = 0.1509f* 1.1f;
	float minPinky = 0.1691f* 1.1f;
	float maxThumb = 0.5829f*0.9f;
	float maxIndex = 0.8992f* 0.9f;
	float maxMiddle = 0.9025f* 0.9f;
	float maxRing = 0.9289f* 0.9f;
	float maxPinky = 0.8458f* 0.9f;

	float clampThumb = FMath::Clamp(angleThumb * refRadian, minThumb, maxThumb);
	float clampIndex = FMath::Clamp(angleIndex * refRadian, minIndex, maxIndex);
	float clampMiddle = FMath::Clamp(angleMiddle * refRadian, minMiddle, maxMiddle);
	float clampRing = FMath::Clamp(angleRing * refRadian, minRing, maxRing);
	float clampPinky = FMath::Clamp(anglePinky * refRadian, minPinky, maxPinky);



	result.Add(FMath::FloorToFloat(((clampThumb - minThumb) / (maxThumb - minThumb)) * 10) * 0.1f);
	result.Add(FMath::FloorToFloat(((clampIndex - minIndex) / (maxIndex - minIndex)) * 10) * 0.1f);
	result.Add(FMath::FloorToFloat(((clampMiddle - minMiddle) / (maxMiddle - minMiddle)) * 10) * 0.1f);
	result.Add(FMath::FloorToFloat(((clampRing - minRing) / (maxRing - minRing)) * 10) * 0.1f);
	result.Add(FMath::FloorToFloat(((clampPinky - minPinky) / (maxPinky - minPinky)) * 10) * 0.1f);


	return result;


}

FRotator* UCustomOculusInputFunctionLibrary::GetRefRotations()
{
	FRotator* arrRotator = new FRotator[14];
	arrRotator[0] = FRotator(30.284773, 1.079504, 14.670671);
	arrRotator[1] = FRotator(-8.797916, 9.572428, 8.968389);
	arrRotator[2] = FRotator(-7.979088, 6.076795, 9.192846);
	arrRotator[3] = FRotator(3.421738, 2.310072, -4.895458);
	arrRotator[4] = FRotator(-2.965689, 0.805402, -0.398327);
	arrRotator[5] = FRotator(-1.612868, 3.235597, 8.220222);
	arrRotator[6] = FRotator(-1.348929, 5.837762, -6.019503);
	arrRotator[7] = FRotator(-1.285729, 0.504293, 0.221043);
	arrRotator[8] = FRotator(-3.867565, 0.891695, 10.649587);
	arrRotator[9] = FRotator(-6.948535, 13.790889, -6.604005);
	arrRotator[10] = FRotator(-3.856515, 0.297585, -0.660786);
	arrRotator[11] = FRotator(-0.482708, -3.333084, 2.883638);
	arrRotator[12] = FRotator(10.46442, -0.170707, -3.25292);
	arrRotator[13] = FRotator(-4.257704, 4.975335, 1.339908);
	arrRotator[14] = FRotator(-0.061882, -5.636941, 2.759024);

	return arrRotator;
}

FGrabbingRule UCustomOculusInputFunctionLibrary::GetDefaultPalmRule()
{
	FGrabbingRule result;

	result._indexRequirement = FingerRequirement::Required;
	result._middleRequirement = FingerRequirement::Required;
	result._ringRequirement = FingerRequirement::Required;
	result._pinkyRequirement = FingerRequirement::Optional;
	result._unselectMode = FingerUnselectMode::AllReleased;

	return result;
}

FGrabbingRule UCustomOculusInputFunctionLibrary::GetDefaultPinchRule()
{

	FGrabbingRule result;
	result._thumbRequirement = FingerRequirement::Required;
	result._indexRequirement = FingerRequirement::Optional;
	result._middleRequirement = FingerRequirement::Optional;
	result._ringRequirement = FingerRequirement::Ignored;
	result._pinkyRequirement = FingerRequirement::Ignored;
	result._unselectMode = FingerUnselectMode::AllReleased;

	return result;
}

FGrabbingRule UCustomOculusInputFunctionLibrary::GetFullGrabRule()
{
	FGrabbingRule result;
	result._thumbRequirement = FingerRequirement::Required;
	result._indexRequirement = FingerRequirement::Required;
	result._middleRequirement = FingerRequirement::Required;
	result._ringRequirement = FingerRequirement::Required;
	result._pinkyRequirement = FingerRequirement::Required;
	result._unselectMode = FingerUnselectMode::AllReleased;

	return result;
}
