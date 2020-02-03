// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShotgunTower.generated.h"

UCLASS()
class FORTNITETOWERDEFENSE_API AShotgunTower : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShotgunTower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void FireBullet();
	UFUNCTION(BlueprintCallable, Category = "PathFollowing")
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	USceneComponent* gunSpot;
	USceneComponent* gun;
	USceneComponent* bullet;
	USceneComponent* tower;
	USceneComponent* display;


	UObject* SpawnActor;
	UBlueprint* GeneratedBP;
	UClass* SpawnClass;

	float lastFired = 0;
};