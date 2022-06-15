// Copyright Epic Games, Inc. All Rights Reserved.


#include "SnakeGameGameModeBase.h"
#include "SneakHead.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "Fruit.h"
#include "Arena.h"

ASnakeGameGameModeBase::ASnakeGameGameModeBase()
{
	DefaultPawnClass = ASneakHead::StaticClass();
	ArenaHeight = 3400;
	ArenaWidth = 2000;
	CameraHeight = 3000;
}

void ASnakeGameGameModeBase::StartPlay()
{
	Super::StartPlay();
	FVector SpawnLoc(0, 0, CameraHeight);
	FRotator SpawnRotation(-90,0,0);
	ACameraActor* PlayerViewCamera = GetWorld()->SpawnActor<ACameraActor>(ACameraActor::StaticClass(),SpawnLoc,SpawnRotation,FActorSpawnParameters());
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (PC)
	{
		PlayerViewCamera->SetOwner(PC);
		PC->SetViewTarget(PlayerViewCamera);
	}

	SpawnArena();
	SpawnFruit();
}

void ASnakeGameGameModeBase::GameOver()
{
	UGameplayStatics::SetGamePaused(this, true);
	UE_LOG(LogTemp,Warning,TEXT("Game Over!!!"))
}

void ASnakeGameGameModeBase::SpawnArena()
{
	FTransform SpawnTransfrom = FTransform(FRotator(), FVector(), FVector(ArenaHeight, ArenaWidth, 1));
	Arena = GetWorld()->SpawnActor<AArena>(AArena::StaticClass(), SpawnTransfrom, FActorSpawnParameters());
}

void ASnakeGameGameModeBase::SpawnFruit()
{
	FVector SpawnLocation;
	Arena->GetRandDomFruitSpawnLoc(SpawnLocation);
	GetWorld()->SpawnActor<AFruit>(AFruit::StaticClass(), SpawnLocation, FRotator(), FActorSpawnParameters());
}
