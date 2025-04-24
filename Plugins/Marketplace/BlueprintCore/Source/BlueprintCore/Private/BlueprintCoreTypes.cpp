/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreTypes.h"
#include "BlueprintCorePCH.h"

void UBlueprintCoreKey::GenerateUniqueKeyId()
{
#if WITH_EDITOR
	if (!KeyGuid.IsValid())
	{
		KeyGuid = FGuid::NewGuid();
		bKeyIsValid = KeyGuid.IsValid();
	}
#endif
}