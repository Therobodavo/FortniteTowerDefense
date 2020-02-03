// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Engine.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Enemy1.h>

TArray<USceneComponent*> allComponents;

// Sets default values
ABullet::ABullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	timeCreated = GetWorld()->GetRealTimeSeconds();
	GetRootComponent()->GetChildrenComponents(true, allComponents);
	for (USceneComponent* part : allComponents)
	{
		if (part->GetName() == "Collider")
		{
			collider = Cast<UStaticMeshComponent>(part);
			if (collider != NULL)
			{
			collider->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlap);
			}
		}
	}
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(GetActorLocation() + (GetActorForwardVector() * 100));
	if (GetWorld()->GetRealTimeSeconds() - timeCreated > 3) 
	{
		Destroy();
	}
}

void ABullet::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Enemy"))
	{
		AEnemy1* enemy = Cast<AEnemy1>(OtherActor);
		enemy->Health = 0;
	}
}

