#include "Path.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Misc/DateTime.h"
#include "Engine.h"
#include <FortniteTowerDefense\Enemy1.h>
#include <vector>

//Path.cpp File
//Code for path to run in level
//Also manages enemies and the main games code
//Programmed by David Knolls

//Data Structure for holding enemies
std::vector<AEnemy1*> enemies;

//Variables for spawning objects
UObject* SpawnActor = NULL;
UBlueprint* GeneratedBP = NULL;
UClass* SpawnClass = NULL;

//Variables for timer
FTimerHandle TimerHandle;

//Constructor
APath::APath()
{
	PrimaryActorTick.bCanEverTick = true;

	//Gets Blueprint for enemy1
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/Blueprints/BP_Enemy1.BP_Enemy1'")));
	GeneratedBP = Cast<UBlueprint>(SpawnActor);
	SpawnClass = SpawnActor->StaticClass();
}

//Main function to spawn an enemy based on the start location
void APath::SpawnEnemy()
{
	//Find the start location of the path
	TArray<USceneComponent*> t;
	GetRootComponent()->GetChildrenComponents(true, t);
	FVector Location;

	for (USceneComponent* i : t)
	{
		if (i != NULL) 
		{
			if (i->GetName() == "Start")
			{
				Location = i->GetComponentLocation();
			}
		}
	}

	//Get spawning info 
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Spawns enemy
	AEnemy1* e = GetWorld()->SpawnActor<AEnemy1>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo);
	//Adjust enemy for current wave
	int healthAddition = wave * 50;
	e->Health = 50 + healthAddition;
	int speedAddition = wave * 10;
	e->Speed = 300 + (wave * 10);
	enemiesSpawned++;
	enemies.push_back(e);
}

void APath::BeginPlay()
{
	Super::BeginPlay();

	//Timer for spawning enemies
	waveStarted = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &APath::SpawnEnemy, 2.f, true);
}

//Update function
void APath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Ends wave
	if (enemiesSpawned >= (wave * 3) && waveStarted) 
	{
		GetWorldTimerManager().ClearTimer(TimerHandle);
		GLog->Log("AHHH");
		waveStarted = false;
		enemiesSpawned = 0;
	}

	//Starts new wave
	if (enemiesSpawned == 0 && waveStarted && !isStarting)
	{
		isStarting = true;
		//Timer for spawning enemies
		//GetWorldTimerManager().ClearTimer(TimerHandle);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &APath::SpawnEnemy, 2.f, true);
	}

	if (enemiesSpawned > 0 && isStarting)
	{
		isStarting = false;
	}

	FString s;
	s.AppendInt(enemiesSpawned);
	FString s2;
	s2.AppendInt(waveStarted);
	FString s3;
	s3.AppendInt(GetWorldTimerManager().IsTimerActive(TimerHandle));
	GLog->Log(s + " ---- " + s2 + " --- " + s3);
}

//Extra function for future
void APath::SpawnTower(int type)
{
}

