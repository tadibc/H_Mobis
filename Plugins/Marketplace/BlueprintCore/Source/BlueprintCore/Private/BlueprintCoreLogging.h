/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#define LogDebug(format, ...) UE_LOG(LogBlueprintCore, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(LogBlueprintCore, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(LogBlueprintCore, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(LogBlueprintCore, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(LogBlueprintCore, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)