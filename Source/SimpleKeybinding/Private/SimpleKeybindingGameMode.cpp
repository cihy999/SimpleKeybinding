// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleKeybindingGameMode.h"
#include "SimpleKeybindingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleKeybindingGameMode::ASimpleKeybindingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
