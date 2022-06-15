// Fill out your copyright notice in the Description page of Project Settings.


#include "Arena.h"
#include "Wall.h"

AArena::AArena()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshForMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshForMesh.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshForMesh.Object);
		GetStaticMeshComponent()->SetRelativeScale3D(FVector(1) / MeshForMesh.Object->GetBoundingBox().GetSize());
	}
	WallHeight = 200;
	WallWidth = 50;
}

void AArena::BeginPlay()
{
	Super::BeginPlay();
	FVector Origion;
	FVector Extend;
	GetActorBounds(false, Origion, Extend);

	FVector LeftWallLoc = Origion - FVector(Extend.X, 0, 0);
	FVector VerticalWallScale = FVector(WallWidth, Extend.Y * 2 + WallWidth, WallHeight);
	SpawnWall(LeftWallLoc, VerticalWallScale);
	
	FVector RightWallLoc = Origion + FVector(Extend.X, 0, 0);
	SpawnWall(RightWallLoc, VerticalWallScale);

	FVector UpWallLoc = Origion + FVector(0, Extend.Y, 0);
	FVector HorizontalWallScale = FVector(Extend.X * 2 + WallWidth, WallWidth, WallHeight);
	SpawnWall(UpWallLoc, HorizontalWallScale);

	FVector DownWallLoc = Origion - FVector(0, Extend.Y, 0);
	SpawnWall(DownWallLoc, HorizontalWallScale);
}

void AArena::SpawnWall(FVector SpawnLocation, FVector SpawnScale)
{
	FTransform SpawnTransfrom = FTransform(FRotator(), SpawnLocation, SpawnScale);
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ADeadZone* SpawnedWall = GetWorld()->SpawnActor<AWall>(AWall::StaticClass(), SpawnTransfrom, SpawnParams);
}

void AArena::GetRandDomFruitSpawnLoc(FVector& OutLocation)
{
	FVector Origion;
	FVector Extend;
	GetActorBounds(false, Origion, Extend);
	float SPawnZ = Origion.Z + Extend.Z;
	float SpawnX = FMath::RandRange(Origion.X - Extend.X + WallWidth, Origion.X + Extend.X - WallWidth);
	float SpawnY = FMath::RandRange(Origion.Y - Extend.Y + WallWidth, Origion.Y + Extend.Y - WallWidth);
	OutLocation = FVector(SpawnX, SpawnY, SPawnZ);
}
