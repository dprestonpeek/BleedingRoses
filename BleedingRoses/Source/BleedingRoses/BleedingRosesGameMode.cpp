// Copyright Epic Games, Inc. All Rights Reserved.

#include "BleedingRosesGameMode.h"
#include "BleedingRosesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABleedingRosesGameMode::ABleedingRosesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
