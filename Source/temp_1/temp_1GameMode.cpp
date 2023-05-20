// Copyright Epic Games, Inc. All Rights Reserved.

#include "temp_1GameMode.h"
#include "temp_1Character.h"
#include "UObject/ConstructorHelpers.h"

Atemp_1GameMode::Atemp_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
