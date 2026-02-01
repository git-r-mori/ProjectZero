// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectZero : ModuleRules
{
	public ProjectZero(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProjectZero",
			"ProjectZero/Variant_Platforming",
			"ProjectZero/Variant_Platforming/Animation",
			"ProjectZero/Variant_Combat",
			"ProjectZero/Variant_Combat/AI",
			"ProjectZero/Variant_Combat/Animation",
			"ProjectZero/Variant_Combat/Gameplay",
			"ProjectZero/Variant_Combat/Interfaces",
			"ProjectZero/Variant_Combat/UI",
			"ProjectZero/Variant_SideScrolling",
			"ProjectZero/Variant_SideScrolling/AI",
			"ProjectZero/Variant_SideScrolling/Gameplay",
			"ProjectZero/Variant_SideScrolling/Interfaces",
			"ProjectZero/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
