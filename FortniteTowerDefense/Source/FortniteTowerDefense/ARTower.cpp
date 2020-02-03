// Fill out your copyright notice in the Description page of Project Settings.


#include "ARTower.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Enemy1.h>
#include <vector>
#include <FortniteTowerDefense\Bullet.h>

std::vector<ABullet*> allBullets;

// Sets default values
AARTower::AARTower()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	////Gets Blueprint for projectile
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/Blueprints/BP_Bullet.BP_Bullet'")));
	GeneratedBP = Cast<UBlueprint>(SpawnActor);
	SpawnClass = SpawnActor->StaticClass();
}

// Called when the game starts or when spawned
void AARTower::BeginPlay()
{
	Super::BeginPlay();
	TArray<USceneComponent*> parts;
	GetRootComponent()->GetChildrenComponents(true, parts);
	for (USceneComponent* currentPart : parts)
	{
		if (currentPart != NULL) 
		{
			if (currentPart->GetName() == "GunSpot")
			{
				gunSpot = currentPart;
			}
			if (currentPart->GetName() == "Tower")
			{
				tower = currentPart;
			}
			if (currentPart->GetName() == "Gun")
			{
				gun = currentPart;
			}
			if (currentPart->GetName() == "Display")
			{
				display = currentPart;
			}
			if (currentPart->GetName() == "Bullet")
			{
				bullet = currentPart;
			}
		}
	}
}

// Called every frame
void AARTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	for (TObjectIterator<AEnemy1> I; I; ++I)
	{
		if (abs((I->GetActorLocation() - bullet->GetComponentLocation()).Size()) < 500)
		{
			if (GetWorld()->GetRealTimeSeconds() - lastFired > fireRate)
			{
				FireBullet();
				lastFired = GetWorld()->GetRealTimeSeconds();
			}
		}
	}
}

void AARTower::FireBullet()
{

	FVector Location = bullet->GetComponentLocation();
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ABullet* b = GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo);
	b->damage = damage;
	b->despawnTime = .4;
	allBullets.push_back(b);
}

void AARTower::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

