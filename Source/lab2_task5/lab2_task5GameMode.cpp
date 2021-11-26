// Copyright Epic Games, Inc. All Rights Reserved.

#include "lab2_task5GameMode.h"
#include "lab2_task5Character.h"
#include "UObject/ConstructorHelpers.h"

Alab2_task5GameMode::Alab2_task5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
