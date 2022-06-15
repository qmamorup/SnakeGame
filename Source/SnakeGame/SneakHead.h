// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SneakHead.generated.h"

UCLASS()
class SNAKEGAME_API ASneakHead : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASneakHead();
	UPROPERTY()
		USceneComponent* RootComp;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* HeadMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void EatFruit();

private:
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	FVector MoveDir;
	float MoveStepSize;
	int Score;
	TArray<class ATail*>Tails;
};
