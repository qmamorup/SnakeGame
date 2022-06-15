// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Overlapable.h"
#include "Fruit.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API AFruit : public AOverlapable
{
	GENERATED_BODY()
public:
	AFruit();
	void OverlapedWithSneakHead(class ASneakHead* SneakHead);
};
