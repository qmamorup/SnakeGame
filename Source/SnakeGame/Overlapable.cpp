// Fill out your copyright notice in the Description page of Project Settings.


#include "Overlapable.h"
#include "SneakHead.h"

// Sets default values
AOverlapable::AOverlapable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComp = CreateDefaultSubobject<USceneComponent>("RootComp");
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(RootComp);
	Mesh->SetupAttachment(RootComp);

	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	Mesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

}

// Called when the game starts or when spawned
void AOverlapable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOverlapable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOverlapable::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ASneakHead* OverlapedActorAsSneakHead = Cast<ASneakHead>(OtherActor);
	if (OverlapedActorAsSneakHead)
	{
		OverlapedWithSneakHead(OverlapedActorAsSneakHead);
	}
}

void AOverlapable::OverlapedWithSneakHead(ASneakHead* SneakHead)
{
	//Child class need to override it...
}

