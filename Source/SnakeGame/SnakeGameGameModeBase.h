// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SnakeGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASnakeGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ASnakeGameGameModeBase();
	void StartPlay() override;
	void GameOver();
	void SpawnArena();

	float ArenaWidth;
	float ArenaHeight;
	float CameraHeight;

	void SpawnFruit();
private:
	class AArena* Arena;
};
