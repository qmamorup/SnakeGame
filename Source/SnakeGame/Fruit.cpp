// Fill out your copyright notice in the Description page of Project Settings.


#include "Fruit.h"
#include "SneakHead.h"
#include "SnakeGameGameModeBase.h"
AFruit::AFruit()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshForMesh(TEXT("StaticMesh'/Engine/VREditor/TransformGizmo/SM_Sequencer_Key.SM_Sequencer_Key'"));
	if (MeshForMesh.Succeeded())
	{
		Mesh->SetStaticMesh(MeshForMesh.Object);
	}
}

void AFruit::OverlapedWithSneakHead(ASneakHead* SneakHead)
{
	SneakHead->EatFruit();
	ASnakeGameGameModeBase* GameMode = Cast<ASnakeGameGameModeBase>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->SpawnFruit();
	}
	Destroy();
}
