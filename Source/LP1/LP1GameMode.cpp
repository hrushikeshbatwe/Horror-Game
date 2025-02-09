// Copyright Epic Games, Inc. All Rights Reserved.

#include "LP1GameMode.h"
#include "LP1Character.h"
#include "UObject/ConstructorHelpers.h"

ALP1GameMode::ALP1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
