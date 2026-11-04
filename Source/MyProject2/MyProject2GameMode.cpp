// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2GameMode.h"
#include "MyProject2PlayerController.h"
#include "MyProject2Pawn.h"

AMyProject2GameMode::AMyProject2GameMode()
{
	// no pawn by default
	DefaultPawnClass = AMyProject2Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AMyProject2PlayerController::StaticClass();
}
