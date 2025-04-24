/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "BlueprintCoreBlueprint.h"
#include "BlueprintCoreHelpers.h"
#include "BlueprintCoreLogging.h"
#include "BlueprintCorePCH.h"

#define LOCTEXT_NAMESPACE "FBlueprintCoreModule"

#if WITH_EDITOR
bool UBlueprintCoreBlueprint::IsUnlocked() const
{
	if (KeyFileHash.Len() == 0)
	{
		return true;
	}
	
	for (auto& Element : FBlueprintCoreModule::GetLoadedKeyFiles())
	{
		if (Element.IsValid() && Element != nullptr)
		{
			if (Element->GetKeyHash() == KeyFileHash)
				return true;
		}
	}
	return false;
}

bool UBlueprintCoreBlueprint::UpdateKeyFile(TWeakObjectPtr<UBlueprintCoreKey> keyFile)
{
	if (IsUnlocked())
	{
		if (keyFile.IsValid())
		{
			if (keyFile->IsValid())
			{
				if (!keyFile->IsDirty())
				{
					KeyFileHash = keyFile->GetKeyHash();
					KeyFileName = keyFile->GetName();
					FBlueprintCoreHelpers::HandleSaving(GetOutermost());
					return true;
				}
				else
				{
					FBlueprintCoreHelpers::CreateErrorMessage("Key file needs to be saved before it can be used");
				}	
			}
			else
			{
				FBlueprintCoreHelpers::CreateErrorMessage("Key file does not have a valid Id");
			}
		}
	}
	return false;
}

bool UBlueprintCoreBlueprint::ClearKeyFile()
{
	if (IsUnlocked())
	{
		KeyFileHash = "";
		KeyFileName = "";
		FBlueprintCoreHelpers::HandleSaving(GetOutermost());
		return true;
	}
	return false;
}

void UBlueprintCoreBlueprint::ApplyDefaultFlags(uint32 flags)
{
	bReadOnly = (flags & 1 << 1) != 0;
	bAllowRenaming = (flags & 1 << 2) != 0;
	bSupportsGlobalVariables = (flags & 1 << 3) != 0;
	bSupportsLocalVariables = (flags & 1 << 4) != 0;
	bSupportsFunctions = (flags & 1 << 5) != 0;
	bSupportsMacros = (flags & 1 << 6) != 0;
	bSupportsDelegates = (flags & 1 << 7) != 0;
	bSupportsEventGraphs = (flags & 1 << 8) != 0;
	bSupportsAnimLayers = (flags & 1 << 9) != 0;
	bGraphAllowDeletion = (flags & 1 << 10) != 0;
}

void UBlueprintCoreBlueprint::UpdateBlueprint()
{
	for (int32 i = 0; i < FunctionGraphs.Num(); ++i)
		{
			UEdGraph* Graph = FunctionGraphs[i];

			if (Graph)
			{
				Graph->bEditable = !bReadOnly;
				Graph->bAllowDeletion = bGraphAllowDeletion;
				Graph->bAllowRenaming = bAllowRenaming;

				for (auto Element : Graph->Nodes)
				{
					if (Element->GetClass() == UK2Node_CustomEvent::StaticClass() ||
						Element->GetClass() == UK2Node_FunctionEntry::StaticClass())
					{
						Element->bCanRenameNode = bAllowRenaming;
					}
					else
					{
						continue;
					}
				}

				Graph->Modify();
			}
		}

		for (int32 i = 0; i < MacroGraphs.Num(); ++i)
		{
			UEdGraph* Graph = MacroGraphs[i];
			if (Graph)
			{
				Graph->bEditable = !bReadOnly;
				Graph->bAllowDeletion = bGraphAllowDeletion;
				Graph->bAllowRenaming = bAllowRenaming;

				for (auto Element : Graph->Nodes)
				{
					if (Element->GetClass() == UK2Node_CustomEvent::StaticClass() ||
						Element->GetClass() == UK2Node_FunctionEntry::StaticClass())
					{
						Element->bCanRenameNode = bAllowRenaming;
					}
					else
					{
						continue;
					}
				}

				Graph->Modify();
			}
		}

		for (int32 i = 0; i < UbergraphPages.Num(); ++i)
		{
			UEdGraph* Graph = UbergraphPages[i];
			if (Graph)
			{
				Graph->bEditable = !bReadOnly;
				Graph->bAllowDeletion = bGraphAllowDeletion;
				Graph->bAllowRenaming = bAllowRenaming;

				for (auto Element : Graph->Nodes)
				{
					if (Element->GetClass() == UK2Node_CustomEvent::StaticClass() ||
						Element->GetClass() == UK2Node_FunctionEntry::StaticClass())
					{
						Element->bCanRenameNode = bAllowRenaming;
					}
					else
					{
						continue;
					}
				}

				Graph->Modify();
			}
		}

		for (int32 i = 0; i < DelegateSignatureGraphs.Num(); ++i)
		{
			UEdGraph* Graph = DelegateSignatureGraphs[i];
			if (Graph)
			{
				Graph->bEditable = !bReadOnly;
				Graph->bAllowDeletion = bGraphAllowDeletion;
				Graph->bAllowRenaming = bAllowRenaming;

				for (auto Element : Graph->Nodes)
				{
					if (Element->GetClass() == UK2Node_CustomEvent::StaticClass() ||
						Element->GetClass() == UK2Node_FunctionEntry::StaticClass())
					{
						Element->bCanRenameNode = bAllowRenaming;
					}
					else
					{
						continue;
					}
				}

				Graph->Modify();
			}
		}

		for (int32 BPIdx = 0; BPIdx < ImplementedInterfaces.Num(); BPIdx++)
		{
			const FBPInterfaceDescription& InterfaceDesc = ImplementedInterfaces[BPIdx];
			for (int32 GraphIdx = 0; GraphIdx < InterfaceDesc.Graphs.Num(); GraphIdx++)
			{
				UEdGraph* Graph = InterfaceDesc.Graphs[GraphIdx];
				if (Graph)
				{
					Graph->bEditable = !bReadOnly;
					Graph->bAllowDeletion = bGraphAllowDeletion;
					Graph->bAllowRenaming = bAllowRenaming;

					for (auto Element : Graph->Nodes)
					{
						if (Element->GetClass() == UK2Node_CustomEvent::StaticClass() ||
							Element->GetClass() == UK2Node_FunctionEntry::StaticClass())
						{
							Element->bCanRenameNode = bAllowRenaming;
						}
						else
						{
							continue;
						}
					}

					Graph->Modify();
				}
			}
		}
}


void UBlueprintCoreBlueprint::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	Super::GetAssetRegistryTags(OutTags);

	const FName BlueprintLockedStatus(TEXT("BlueprintLockStatus"));
	OutTags.Add(FAssetRegistryTag(BlueprintLockedStatus, FString::Printf(TEXT("%s"), IsUnlocked() ? TEXT("Unlocked") : TEXT("Locked")), FAssetRegistryTag::TT_Alphabetical));
}

#endif

void UBlueprintCoreBlueprint::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

#if WITH_EDITOR
void UBlueprintCoreBlueprint::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	UpdateBlueprint();

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bReadOnly))
	{
		MarkPackageDirty();
	}
	
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bAllowRenaming))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsGlobalVariables))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsLocalVariables))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsFunctions))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsMacros))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsDelegates))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsEventGraphs))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsAnimLayers))
	{
		MarkPackageDirty();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bGraphAllowDeletion))
	{
		MarkPackageDirty();
	}

	TWeakObjectPtr<UBlueprintCoreKey> KeyFile = nullptr;
	for (auto Element : FBlueprintCoreModule::GetLoadedKeyFiles())
	{
		if (Element->GetKeyHash() == KeyFileHash)
		{
			KeyFile = Element;
		}
	}
}

#if ENGINE_MINOR_VERSION == 24
bool UBlueprintCoreBlueprint::CanEditChange(const UProperty* InProperty) const
{
	const bool bParentValue = Super::CanEditChange(InProperty);
	
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bReadOnly))
	{
		return bParentValue && IsUnlocked();
	}
	
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bAllowRenaming))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsGlobalVariables))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsLocalVariables))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsFunctions))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsMacros))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsDelegates))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsEventGraphs))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsAnimLayers))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bGraphAllowDeletion))
	{
		return bParentValue && IsUnlocked();
	}

	return bParentValue;
}
#else
bool UBlueprintCoreBlueprint::CanEditChange(const FProperty* InProperty) const
{
	const bool bParentValue = Super::CanEditChange(InProperty);
	
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bReadOnly))
	{
		return bParentValue && IsUnlocked();
	}
	
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bAllowRenaming))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsGlobalVariables))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsLocalVariables))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsFunctions))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsMacros))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsDelegates))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsEventGraphs))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bSupportsAnimLayers))
	{
		return bParentValue && IsUnlocked();
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UBlueprintCoreBlueprint, bGraphAllowDeletion))
	{
		return bParentValue && IsUnlocked();
	}

	return bParentValue;
}
#endif
#endif

#undef LOCTEXT_NAMESPACE