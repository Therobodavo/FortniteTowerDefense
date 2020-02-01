// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy1.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Path.h>
#include "Engine.h"
#include<string>

UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Stats")
UStaticMeshComponent* collider;
TArray<FString> collided;
// Sets default values
AEnemy1::AEnemy1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Speed = 300;
	isMoving = true;
}

// Called when the game starts or when spawned
void AEnemy1::BeginPlay()
{
	Super::BeginPlay();
	for (TObjectIterator<APath> I; I; ++I)
	{
		if (I->GetName() == "MAPPATH") 
		{
			if (I->IsA(APath::StaticClass())) 
			{
				I->GetRootComponent()->GetChildrenComponents(true, PathBlocks);
				//PathBlocks.RemoveAt(0,1,true);
				for (USceneComponent* i : PathBlocks) 
				{
					if (i->GetName() == "1") 
					{
						currentTarget = i;
					}
				}
			}
		}

		TArray<USceneComponent*> allComponents;
		GetRootComponent()->GetChildrenComponents(true, allComponents);

		for (int i = 0; i < allComponents.Max(); i++)
		{
			if (allComponents[i]->GetName() == "Collider") 
			{
				collider = Cast<UStaticMeshComponent>(allComponents[i]);
				if (collider != NULL) 
				{
					collider->OnComponentBeginOverlap.AddDynamic(this, &AEnemy1::OnOverlap);
				}
	
			}
		}
	}
	
}

// Called every frame
void AEnemy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isMoving) 
	{
		//Move to current pathspot
		FVector myPos = GetActorLocation();
		FVector spotLocation = currentTarget->GetComponentLocation();
		Direction = (spotLocation - myPos).GetSafeNormal();
		SetActorLocation(GetActorLocation() + (Speed * Direction * DeltaTime));
	}

}

void AEnemy1::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp != NULL) 
	{
		if (OtherComp->ComponentHasTag("End"))
		{
			Destroy();
		}
		if (OtherComp->ComponentHasTag("PathSpot") && OtherComp->GetName() != "Start")
		{
			FString s;
			s.AppendInt(pathIndex);
			bool beenHit = false;
			for (FString c : collided) 
			{
				if (c == currentTarget->GetName()) 
				{
					beenHit = true;
				}
			}
			if (!beenHit) 
			{
				
				collided.Add(currentTarget->GetName());
				pathIndex++;
				s = "";
				s.AppendInt(pathIndex);

				for (USceneComponent* i : PathBlocks)
				{
					beenHit = false;
					for (FString c : collided)
					{
						if (c == s)
						{
							beenHit = true;
						}
					}
					if (i->GetName() == s && !beenHit)
					{
						currentTarget = i;
					}
				}
			}
			
		}
	}
}

