// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GopnikRoulette : ModuleRules
{
	public GopnikRoulette(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
