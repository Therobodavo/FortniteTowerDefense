// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy1.generated.h"

UCLASS()
class FORTNITETOWERDEFENSE_API AEnemy1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemy1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "PathFollowing")
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "PathFollowing")
		TArray<USceneComponent*> PathBlocks;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "PathFollowing")
		FVector Direction = FVector(0,0,0);

	USceneComponent* currentTarget = NULL;
	float Speed = 300;
	int pathIndex = 1;
	bool isMoving = false;
	float Health = 500;

};
