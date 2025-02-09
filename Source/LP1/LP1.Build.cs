// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LP1 : ModuleRules
{
	public LP1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
