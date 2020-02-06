#include "ShotgunTower.h"
#include "EngineUtils.h"
#include <FortniteTowerDefense\Enemy1.h>
#include <vector>
#include <FortniteTowerDefense\Bullet.h>

//ShotgunTower.cpp File
//Code for Shotgun Tower to run
//Spawns bullets to damage and kill enemies (5 at a time in rotated directions)
//Programmed by David Knolls

//Data structure for holding bullets
std::vector<ABullet*> bullets;

//Constructor
AShotgunTower::AShotgunTower()
{
	PrimaryActorTick.bCanEverTick = true;

	//Gets Blueprint for projectile
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/Blueprints/BP_Bullet.BP_Bullet'")));
	GeneratedBP = Cast<UBlueprint>(SpawnActor);
	SpawnClass = SpawnActor->StaticClass();
}

//Initial Settings
void AShotgunTower::BeginPlay()
{
	Super::BeginPlay();

	//Gets all components for tower
	TArray<USceneComponent*> parts;
	GetRootComponent()->GetChildrenComponents(true, parts);
	for (USceneComponent* currentPart : parts)
	{
		if (currentPart->GetName() == "Filler")
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
		if (currentPart->GetName() == "bullet")
		{
			bullet = currentPart;
		}
	}
}

//Update function
void AShotgunTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Checks firing range and firerate before firing bullets
	bool canFire = false;
	for (TActorIterator<AEnemy1> I(GetWorld()); I; ++I)
	{
		if (I->GetRootComponent()->ComponentHasTag("Enemy")) 
		{
			if (abs((I->GetActorLocation() - gunSpot->GetComponentLocation()).Size()) < 500)
			{
				canFire = true;
				GLog->Log(I->GetName());
				break;
			}
		}
	}
	if (GetWorld()->GetRealTimeSeconds() - lastFired > fireRate && canFire)
	{
		//Runs bullet creation function for this tower
		FireBullet();
		lastFired = GetWorld()->GetRealTimeSeconds();
	}
}

//Function for creating bullets
void AShotgunTower::FireBullet()
{
	//Bullet spawn info
	FVector Location = bullet->GetComponentLocation();
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Create bullets (5 all rotated slightly around an origin bullet)
	bullets.push_back(GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo));
	Rotation = GetActorRotation() - FRotator(0,3,0);
	bullets.push_back(GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo));
	Rotation = GetActorRotation() - FRotator(0, 6, 0);
	bullets.push_back(GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo));
	Rotation = GetActorRotation() + FRotator(0, 3, 0);
	bullets.push_back(GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo));
	Rotation = GetActorRotation() + FRotator(0, 6, 0);
	bullets.push_back(GetWorld()->SpawnActor<ABullet>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo));
}

//Unused Overlap Function
void AShotgunTower::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

