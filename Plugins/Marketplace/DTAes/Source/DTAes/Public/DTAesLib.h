// Copyright 2022 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTAesLib.generated.h"

/**
 * 
 */
UCLASS()
class DTAES_API UDTAesLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// AES Encrypt Of String
	// Character Set : UTF-8
	// Encryption Mode : ECB
	// Filling Method : Zeropadding
	UFUNCTION(BlueprintPure, meta = (DisplayName = "AES Encrypt"), Category = "DT AES")
	static void AESEncrypt(FString& Base64, const FString& String, const FString& Key);
	
	// AES Decrypt Of Base64 String 
	// Character Set : UTF-8
	// Encryption Mode : ECB
	// Filling Method : Zeropadding
	UFUNCTION(BlueprintPure, meta = (DisplayName = "AES Decrypt"), Category = "DT AES")
	static void AESDecrypt(FString& String, const FString& Base64, const FString& Key);

	// AES Encrypt Data
	// Encryption Mode : ECB
	// Filling Method : Zeropadding
	UFUNCTION(BlueprintPure, meta = (DisplayName = "AES Encrypt ( Data )"), Category = "DT AES")
	static void AESEncryptData(TArray<uint8>& Output, const TArray<uint8>& Input, const FString& Key);

	// AES Decrypt Data
	// Encryption Mode : ECB
	// Filling Method : Zeropadding
	UFUNCTION(BlueprintPure, meta = (DisplayName = "AES Decrypt ( Data )"), Category = "DT AES")
	static void AESDecryptData(TArray<uint8>& Output, const TArray<uint8>& Input, const FString& Key);
};
