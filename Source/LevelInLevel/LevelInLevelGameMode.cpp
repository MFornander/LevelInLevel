// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LevelInLevelGameMode.h"
#include "LevelInLevelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALevelInLevelGameMode::ALevelInLevelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
