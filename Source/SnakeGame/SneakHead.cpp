// Fill out your copyright notice in the Description page of Project Settings.


#include "SneakHead.h"

// Sets default values
ASneakHead::ASneakHead()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComp = CreateAbstractDefaultSubobject<USceneComponent>("RootComp");
	HeadMesh = CreateDefaultSubobject<UStaticMeshComponent>("HeadMesh");
	SetRootComponent(RootComp);
	HeadMesh->SetupAttachment(RootComp);
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshForHeadMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if(MeshForHeadMesh.Succeeded())
	{
		HeadMesh->SetStaticMesh(MeshForHeadMesh.Object);
	}
	HeadMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HeadMesh->SetCollisionObjectType(ECC_Pawn);
	HeadMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
}

// Called when the game starts or when spawned
void ASneakHead::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASneakHead::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASneakHead::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

