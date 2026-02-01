// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZeroActor.h"
#include "Engine/Engine.h"
#include "ProjectZero.h"

AZeroActor::AZeroActor()
{
	// This actor doesn't need to tick
	PrimaryActorTick.bCanEverTick = false;
}

void AZeroActor::BeginPlay()
{
	Super::BeginPlay();

	// Log to console
	UE_LOG(LogProjectZero, Log, TEXT("ZeroActor initialized - %s"), *DisplayMessage);

	// Show the system message on screen
	ShowSystemMessage();
}

void AZeroActor::ShowSystemMessage()
{
	if (GEngine)
	{
		// Display message on screen
		// Key -1 means the message won't be replaced by subsequent messages with the same key
		GEngine->AddOnScreenDebugMessage(
			-1,                    // Key (-1 = unique message)
			DisplayDuration,       // Duration in seconds
			MessageColor,          // Text color
			DisplayMessage,        // The message to display
			true,                  // Whether to display newer messages on top
			FVector2D(FontScale, FontScale)  // Font scale
		);

		UE_LOG(LogProjectZero, Log, TEXT("System message displayed: %s (Duration: %.1fs)"), *DisplayMessage, DisplayDuration);
	}
}
