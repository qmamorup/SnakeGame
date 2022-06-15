// Fill out your copyright notice in the Description page of Project Settings.


#include "SneakHead.h"
#include "Tail.h"

// Sets default values
ASneakHead::ASneakHead()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 0.25;
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
	Score = 0;
}

// Called when the game starts or when spawned
void ASneakHead::BeginPlay()
{
	Super::BeginPlay();
	MoveStepSize = HeadMesh->GetStaticMesh()->GetBoundingBox().GetSize().X;
}

// Called every frame
void ASneakHead::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector PreviousSectrionLoc = HeadMesh->GetComponentLocation();
	AddActorWorldOffset(MoveDir * MoveStepSize);
	for (int i = 0;i<Tails.Num();i++)
	{
		FVector CurrentSectionLoc = Tails[i]->GetActorLocation();
		Tails[i]->SetActorLocation(PreviousSectrionLoc);
		PreviousSectrionLoc = CurrentSectionLoc;
	}
}

// Called to bind functionality to input
void ASneakHead::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	ensure(PlayerInputComponent);
	PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &ASneakHead::MoveUp);
	PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &ASneakHead::MoveDown);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ASneakHead::MoveLeft);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ASneakHead::MoveRight);
}


void ASneakHead::MoveUp()
{
	MoveDir = FVector(1, 0, 0);
}

void ASneakHead::MoveDown()
{
	MoveDir = FVector(-1, 0, 0);
}

void ASneakHead::MoveLeft()
{
	MoveDir = FVector(0, -1, 0);
}

void ASneakHead::MoveRight()
{
	MoveDir = FVector(0, 1, 0);
}

void ASneakHead::EatFruit()
{
	Score++;
	UE_LOG(LogTemp, Warning, TEXT("Score is now: %i"), Score)

	FVector TailSpawnLoc = HeadMesh->GetComponentLocation() - MoveDir * MoveStepSize;
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ATail* NewTail = GetWorld()->SpawnActor<ATail>(ATail::StaticClass(),TailSpawnLoc,FRotator(),SpawnParams);
	if (NewTail)
	{
		Tails.Add(NewTail);
	}
}
