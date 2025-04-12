// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimpleKeybinding : ModuleRules
{
	public SimpleKeybinding(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] 
		{
            "SimpleKeybinding"
        });

        PrivateIncludePaths.AddRange(new string[] 
		{
			
		});

        PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
			"UMG",
            "GameplayTags",
			"CommonUI",
			"CommonInput",
        });
	}
}
