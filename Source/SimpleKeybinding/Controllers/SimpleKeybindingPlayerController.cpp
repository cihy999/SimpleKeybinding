// Copyright(C) 2024 Cindy Chen.All Rights Reserved.

// Self
#include "Controllers/SimpleKeybindingPlayerController.h"
// UE
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"

void ASimpleKeybindingPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 由BP處理，較方便
	/*
	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}
	*/
}
