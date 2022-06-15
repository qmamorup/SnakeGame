// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadZone.h"
#include "SnakeGameGameModeBase.h"

void ADeadZone::OverlapedWithSneakHead(class ASneakHead* SneakHead)
{
	ASnakeGameGameModeBase* GameMode=Cast<ASnakeGameGameModeBase>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->GameOver();
	}
}

