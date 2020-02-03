// Fill out your copyright notice in the Description page of Project Settings.


#include "ShotgunTower.h"

// Sets default values
AShotgunTower::AShotgunTower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShotgunTower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShotgunTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

