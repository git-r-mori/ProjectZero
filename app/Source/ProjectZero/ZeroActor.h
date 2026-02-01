// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZeroActor.generated.h"

/**
 * ZeroActor - System status display actor
 * Displays "System Online" message on screen when the game starts
 */
UCLASS()
class PROJECTZERO_API AZeroActor : public AActor
{
	GENERATED_BODY()

public:
	/** Constructor */
	AZeroActor();

protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** The message to display on screen */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectZero|System")
	FString DisplayMessage = TEXT("System Online");

	/** How long to display the message (in seconds) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectZero|System", meta = (ClampMin = "0.1"))
	float DisplayDuration = 5.0f;

	/** Color of the displayed message */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectZero|System")
	FColor MessageColor = FColor::Cyan;

	/** Font scale for the message */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectZero|System", meta = (ClampMin = "0.5", ClampMax = "5.0"))
	float FontScale = 2.0f;

private:
	/** Display the system online message on screen */
	void ShowSystemMessage();
};
