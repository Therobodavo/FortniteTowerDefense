#include "ARTower.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Enemy1.h>
#include <vector>
#include <FortniteTowerDefense\Bullet.h>

//ARTower.cpp File
//Code for AR Tower to run
//Spawns bullets to damage and kill enemies
//Programmed by David Knolls

//Data Sctructure for holding bullets
std::vector<ABullet*> allBullets;

//Constructor
AARTower::AARTower()
{
	PrimaryActorTick.bCanEverTick = true;

	//Gets Blueprint for projectile
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/Blueprints/BP_Bullet.BP_Bullet'")));
	GeneratedBP = Cast<UBlueprint>(SpawnActor);
	SpawnClass = SpawnActor->StaticClass();
}

// Called when the game starts or when spawned
void AARTower::BeginPlay()
{
	Super::BeginPlay();

	//Loop through all component parts
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

//Update function called every frame
void AARTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Fires bullets based off nearby enemies and firerate
	bool canFire = false;
	for (TActorIterator<AEnemy1> I(GetWorld()); I; ++I)
	{
		if (abs((I->GetActorLocation() - bullet->GetComponentLocation()).Size()) < 700)
		{
			canFire = true;
			break;
		}
	}
	if (GetWorld()->GetRealTimeSeconds() - lastFired > fireRate && canFire)
	{
		//Calls function to create bullets based on current tower
		FireBullet();
		lastFired = GetWorld()->GetRealTimeSeconds();
	}
}

//Function to create bullets based on tower
void AARTower::FireBullet()
{
	//Gets info for bullet spawning
	FVector Location = bullet->GetComponentLocation();
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Create bullet with values for AR tower
	ABullet* b = GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo);
	b->damage = damage;
	b->despawnTime = .4;
	allBullets.push_back(b);
}

//Function when object overlaps tower
void AARTower::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Add if needed
}

