// Fill out your copyright notice in the Description page of Project Settings.


#include "Path.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Misc/DateTime.h"
#include "Engine.h"
#include <FortniteTowerDefense\Enemy1.h>
#include <vector>

UPROPERTY(BlueprintReadWrite)
TSubclassOf<AEnemy1> Enemy1Class;
float lastSpawned = 0;
std::vector<AEnemy1*> enemies;
UObject* SpawnActor;
UBlueprint* GeneratedBP;
UClass* SpawnClass;
FTimerDelegate TimerDel;
FTimerHandle TimerHandle;

// Sets default values
APath::APath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Gets Blueprint for enemy1
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/Blueprints/BP_Enemy1.BP_Enemy1'")));
	GeneratedBP = Cast<UBlueprint>(SpawnActor);
	SpawnClass = SpawnActor->StaticClass();

	if (!SpawnActor)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("CANT FIND OBJECT TO SPAWN")));
		return;
	}

	if (SpawnClass == NULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("CLASS == NULL")));
		return;
	}
}

void APath::SpawnEnemy()
{
	TArray<USceneComponent*> t;
	GetRootComponent()->GetChildrenComponents(true, t);
	FVector Location;
	for (USceneComponent* i : t)
	{
		if (i->GetName() == "Start")
		{
			Location = i->GetComponentLocation();
		}
	}
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	enemies.push_back(GetWorld()->SpawnActor<AEnemy1>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo));
}

// Called when the game starts or when spawned
void APath::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &APath::SpawnEnemy, 2.f, true);
	//REMEMBER TO CLEAR TIMER IF THIS IS DELETED
	//GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}

// Called every frame
void APath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

