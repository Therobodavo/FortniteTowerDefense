// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShotgunTower.h"
#include "ARTower.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITETOWERDEFENSE_API AARTower : public AShotgunTower
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	
};
