// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Siltarne : ModuleRules
{
	public Siltarne(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"HeadMountedDisplay",
			"EnhancedInput", 
			"OnlineSubsystem", 
			"OnlineSubsystemSteam"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate", 
			"SlateCore"
		});
	}
}
