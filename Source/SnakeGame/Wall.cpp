// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"

AWall::AWall()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshForMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshForMesh.Succeeded())
	{
		Mesh->SetStaticMesh(MeshForMesh.Object);
		Mesh->SetRelativeScale3D(FVector(1) / MeshForMesh.Object->GetBoundingBox().GetSize());
	}
}
