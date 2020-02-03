// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Path.generated.h"

UCLASS()
class FORTNITETOWERDEFENSE_API APath : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APath();
	UFUNCTION()
		void SpawnEnemy();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
		void SpawnTower(int type);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "BP")
		AActor* enemyBP;

	int wave = 1;
	int health = 200;
	int money = 0;
};
