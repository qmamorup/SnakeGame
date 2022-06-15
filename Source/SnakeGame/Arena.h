// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Arena.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API AArena : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AArena();
	void BeginPlay() override;
	void GetRandDomFruitSpawnLoc(FVector& OutLocation);
private:
	void SpawnWall(FVector SpawnLocation, FVector SpawnScale);
	float WallHeight;
	float WallWidth;

};
