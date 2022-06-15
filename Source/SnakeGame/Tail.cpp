// Fill out your copyright notice in the Description page of Project Settings.


#include "Tail.h"
#include "SneakHead.h"
ATail::ATail()
{
	Mesh->SetRelativeScale3D(FVector(0.6));
}

void ATail::BeginPlay()
{
	Super::BeginPlay();
	ASneakHead* SneakHeadOwner = Cast<ASneakHead>(GetOwner());
	if (SneakHeadOwner)
	{
		Mesh->SetStaticMesh(SneakHeadOwner->HeadMesh->GetStaticMesh());
	}
}
