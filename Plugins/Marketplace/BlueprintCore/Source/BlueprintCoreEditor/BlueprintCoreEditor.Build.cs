// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintCoreEditor : ModuleRules
{
	public BlueprintCoreEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"KismetCompiler",
				"UMG",
				"AssetTools",
				"ToolMenus",
				"BlueprintCore"
			}
		);


		PrivateDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Projects",
				"UnrealEd",
				"EditorStyle",
				"InputCore",
				"BlueprintGraph"
			}
		);
    }
}
