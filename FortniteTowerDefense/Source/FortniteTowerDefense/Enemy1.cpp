#include "Enemy1.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Path.h>
#include "Engine.h"
#include<string>

//Enemy1.cpp File
//Code for basic enemies that follow a path
//Programmed by David Knolls

//Collider to access
UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Stats")
UStaticMeshComponent* collider;

//Initial Settings
AEnemy1::AEnemy1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Speed = 300;
	isMoving = true;
}

//Constructor
void AEnemy1::BeginPlay()
{
	Super::BeginPlay();

	//Get the entire path then find the initial starting spot
	for (TObjectIterator<APath> I; I; ++I)
	{
		if (I->GetName() == "MAPPATH")
		{
			if (I->IsA(APath::StaticClass()))
			{
				I->GetRootComponent()->GetChildrenComponents(true, PathBlocks);

				for (USceneComponent* i : PathBlocks)
				{
					if (i->GetName() == "1")
					{
						currentTarget = i;
					}
				}
			}
		}

		//Get Collider and add overlap function
		TArray<USceneComponent*> allComponents;
		GetRootComponent()->GetChildrenComponents(true, allComponents);

		for (int i = 0; i < allComponents.Max(); i++)
		{
			if (allComponents[i]->GetName() == "Collider")
			{
				collider = Cast<UStaticMeshComponent>(allComponents[i]);
				if (collider != NULL)
				{
					//Add Overlap function
					collider->OnComponentBeginOverlap.AddDynamic(this, &AEnemy1::OnOverlap);
					break;
				}

			}
		}
	}

}

//Update, moves player to current target
void AEnemy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Movement logic/math
	if (isMoving)
	{
		//Move to current pathspot
		FVector myPos = GetActorLocation();
		if (currentTarget != NULL) 
		{
			FVector spotLocation = currentTarget->GetComponentLocation();
			Direction = (spotLocation - myPos).GetSafeNormal();
			SetActorLocation(GetActorLocation() + (Speed * Direction * DeltaTime));
		}
		
		
	}

	//If the enemy should die
	if (Health <= 0)
	{
		Destroy();
	}

}

//Overlap function, used for path spots
void AEnemy1::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp != NULL)
	{
		
		if (OtherComp->ComponentHasTag("End"))
		{
			Destroy();
		}
		//If currently overlapping path spot
		if (OtherComp->ComponentHasTag("PathSpot") && OtherComp->GetName() != "Start")
		{
			
			//Convert path component to a number, add 1, then convert back to string to find
			pathIndex = FCString::Atoi(*OtherComp->GetName()) + 1;
			for (USceneComponent* i : PathBlocks)
			{
				FString temp;
				temp.AppendInt(pathIndex);

				if (i->GetName() == temp)
				{
					currentTarget = i;
				}
			}
		}
	}
}

