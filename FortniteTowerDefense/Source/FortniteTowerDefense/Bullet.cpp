#include "Bullet.h"
#include "Engine.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Enemy1.h>

//Bullet.cpp File
//Code for bullets to carry data, move, and damage enemies
//Programmed by David Knolls

//Holds all componenets for a bullet
TArray<USceneComponent*> allComponents;

//Constructor
ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = true;
}

//Initial Settings
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	//Gets current time of creation
	timeCreated = GetWorld()->GetRealTimeSeconds();

	//Finds collider for bullet
	GetRootComponent()->GetChildrenComponents(true, allComponents);
	for (USceneComponent* part : allComponents)
	{
		if (part->GetName() == "Collider")
		{
			collider = Cast<UStaticMeshComponent>(part);
			if (collider != NULL)
			{
				//adds OnOverlap function
				collider->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlap);
			}
		}
	}
}

//Update function for moving
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Moves bullet in it's current direction
	SetActorLocation(GetActorLocation() + (GetActorForwardVector() * 50));

	//Despawn after certain amount of time
	if (GetWorld()->GetRealTimeSeconds() - timeCreated > despawnTime) 
	{
		Destroy();
	}
}

//Overlap function
void ABullet::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//If bullet hits enemy, damage it and destroy bullet
	if (OtherActor->ActorHasTag("Enemy"))
	{
		AEnemy1* enemy = Cast<AEnemy1>(OtherActor);
		enemy->Health -= damage;
		Destroy();
	}
}

