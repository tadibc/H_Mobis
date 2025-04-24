// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MlineCorePlugin : ModuleRules
{
	public MlineCorePlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        //PrecompileForTargets = PrecompileTargetsType.Any;
        //bUsePrecompiled = true;
        //MinFilesUsingPrecompiledHeaderOverride = 1;
        //bUseUnity = false;


        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				"MlineCorePlugin/Public"
			}
			);


		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				"MlineCorePlugin/Private"
			}
			);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "CoreUObject", "Engine", "InputCore", "OculusInput", "Niagara", "UMG","DTAes","MlinePrivateCorePlugin"
				// ... add other public dependencies that you statically link with here ...
			}
			);
		//PublicIncludePaths.AddRange(new string[] { "Niagara/Public", "Niagara/Classes"});

		PrivateDependencyModuleNames.AddRange(
			new string[]{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"BlueprintCore",
				 "Http", "Json", "JsonUtilities" 
				// ... add private dependencies that you statically link with here ...	
			});

		DynamicallyLoadedModuleNames.AddRange(
			new string[]{
				// ... add any modules that your module loads dynamically here ...
			});
	}
}
