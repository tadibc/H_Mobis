// Copyright 2022 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#include "DTAesLib.h"
#include "Misc/AES.h"
#include "Misc/Base64.h"
#include "Misc/MessageDialog.h"
#include "Kismet/KismetSystemLibrary.h"
#include <string>

#if UE_EDITOR       

#define DT_AES_KEY(OutString, TAESKey)                                                              \
std::string szKey(TCHAR_TO_UTF8(*Key));                                                             \
int nKeySize = szKey.length();                                                                      \
if (nKeySize != FAES::FAESKey::KeySize)                                                             \
{                                                                                                   \
    OutString = FString::Printf(TEXT("The AES Key Must Be %d Characters"), FAES::FAESKey::KeySize); \
    UKismetSystemLibrary::PrintWarning(OutString);                                                  \
    FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(OutString));                            \
    return;                                                                                         \
}                                                                                                   \
FAES::FAESKey TAESKey;                                                                              \
memcpy(TAESKey.Key, szKey.c_str(), FAES::FAESKey::KeySize);

#else 

#define DT_AES_KEY(OutString, TAESKey)                                                              \
std::string szKey(TCHAR_TO_UTF8(*Key));                                                             \
int nKeySize = szKey.length();                                                                      \
if (nKeySize != FAES::FAESKey::KeySize)                                                             \
{                                                                                                   \
    OutString = FString::Printf(TEXT("The AES Key Must Be %d Characters"), FAES::FAESKey::KeySize); \
    UKismetSystemLibrary::PrintWarning(OutString);                                                  \
    return;                                                                                         \
}                                                                                                   \
FAES::FAESKey TAESKey;                                                                              \
memcpy(TAESKey.Key, szKey.c_str(), FAES::FAESKey::KeySize);

#endif         

#define DT_AES_KEY_DATA(TAESKey)                                                                                            \
std::string szKey(TCHAR_TO_UTF8(*Key));                                                                                     \
int nKeySize = szKey.length();                                                                                              \
if (nKeySize != FAES::FAESKey::KeySize)                                                                                     \
{                                                                                                                           \
    UKismetSystemLibrary::PrintWarning(FString::Printf(TEXT("The AES Key Must Be %d Characters"), FAES::FAESKey::KeySize)); \
    return;                                                                                                                 \
}                                                                                                                           \
FAES::FAESKey TAESKey;                                                                                                      \
memcpy(TAESKey.Key, szKey.c_str(), FAES::FAESKey::KeySize);


// 字符串加密
void UDTAesLib::AESEncrypt(FString& Base64, const FString& String, const FString& Key) 
{
    // 无加密数据
    if (String.IsEmpty())
    {
        return;
    }

    // 生成密码
    DT_AES_KEY(Base64, TAESKey);

    // 转换数据
    std::string szInfo(TCHAR_TO_UTF8(*String));
    int nInfoSize = szInfo.length();
    if (nInfoSize % 16 != 0)
    {
        nInfoSize = (nInfoSize / 16) * 16 + 16;
    }
    uint8* pcbInfo = new uint8[nInfoSize];
    memset(pcbInfo, 0, nInfoSize);
    memcpy(pcbInfo, szInfo.c_str(), szInfo.length());

    // 加密数据
    FAES::EncryptData(pcbInfo, nInfoSize, TAESKey);
    Base64 = FBase64::Encode(pcbInfo, nInfoSize);

    // 释放数据
    delete[] pcbInfo;
}

// 字符串解密
void UDTAesLib::AESDecrypt(FString& String, const FString& Base64, const FString& Key)
{
    // 无解密数据
    if (Base64.IsEmpty())
    {
        return;
    }

    // 生成密码
    DT_AES_KEY(String, TAESKey);

    // 先从Base64解密
    TArray<uint8> ArrayData;
    FBase64::Decode(Base64, ArrayData);

    // 转换数据
    int nInfoSize = ArrayData.Num();
    if (nInfoSize % 16 != 0)
    {
        nInfoSize = (nInfoSize / 16) * 16 + 16;
    }
    uint8* pcbInfo = new uint8[nInfoSize];
    memset(pcbInfo, 0, nInfoSize);
    memcpy(pcbInfo, ArrayData.GetData(), ArrayData.Num());

    // 解密数据
    FAES::DecryptData(pcbInfo, nInfoSize, TAESKey);

    // 生成字符串
    std::string szInfo((char *)pcbInfo, ArrayData.Num());

    // 返回数据
    String = UTF8_TO_TCHAR(szInfo.c_str());
}

// 加密数据
void UDTAesLib::AESEncryptData(TArray<uint8>& Output, const TArray<uint8>& Input, const FString& Key)
{
    // 无加密数据
    if (Input.Num() == 0)
    {
        return;
    }

    // 生成密码
    DT_AES_KEY_DATA(TAESKey);

    // 转换数据
    int nInfoSize = Input.Num();
    if (nInfoSize % 16 != 0)
    {
        nInfoSize = (nInfoSize / 16) * 16 + 16;
    }
    uint8* pcbInfo = new uint8[nInfoSize];
    memset(pcbInfo, 0, nInfoSize);
    memcpy(pcbInfo, Input.GetData(), Input.Num());

    // 加密数据
    FAES::EncryptData(pcbInfo, nInfoSize, TAESKey);

    // 输出数据
    Output.Append(pcbInfo, nInfoSize);

    // 释放数据
    delete[] pcbInfo;
}

// 解密数据
void UDTAesLib::AESDecryptData(TArray<uint8>& Output, const TArray<uint8>& Input, const FString& Key)
{
    // 无解密数据
    if (Input.Num() == 0)
    {
        return;
    }

    // 无加密数据
    if (Input.Num() == 0)
    {
        return;
    }

    // 生成密码
    DT_AES_KEY_DATA(TAESKey);

    // 转换数据
    int nInfoSize = Input.Num();
    if (nInfoSize % 16 != 0)
    {
        nInfoSize = (nInfoSize / 16) * 16 + 16;
    }
    uint8* pcbInfo = new uint8[nInfoSize];
    memset(pcbInfo, 0, nInfoSize);
    memcpy(pcbInfo, Input.GetData(), Input.Num());

    // 解密数据
    FAES::DecryptData(pcbInfo, nInfoSize, TAESKey);

    // 输出数据
    Output.Append(pcbInfo, nInfoSize);

    // 释放数据
    delete[] pcbInfo;
}