// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

#pragma once

// UE
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
// 
#include "SimpleKeybindingPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class SIMPLEKEYBINDING_API ASimpleKeybindingPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;
	
protected:
	// ~Begin Actor interface
	virtual void BeginPlay() override;
	// ~End Actor interface
};
