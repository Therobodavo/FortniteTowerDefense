// Fill out your copyright notice in the Description page of Project Settings.


#include "ARTower.h"
#include "EngineUtils.h"
#include <vector>
#include <FortniteTowerDefense\Bullet.h>

std::vector<ABullet*> bullets;

void AARTower::BeginPlay() 
{
	GLog->Log("We good");
	fireRate = .2;
}

void AShotgunTower::FireBullet() 
{
	FVector Location = bullet->GetComponentLocation();
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ABullet* b = GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo);
	b->damage = 15;
	b->despawnTime = .3;
	bullets.push_back(b);
}

