// Copyright Epic Games, Inc. All Rights Reserved.

#include "OvergrownGameMode.h"
#include "OvergrownCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOvergrownGameMode::AOvergrownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
