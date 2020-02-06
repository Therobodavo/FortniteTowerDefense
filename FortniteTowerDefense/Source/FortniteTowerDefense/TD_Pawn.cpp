#include "TD_Pawn.h"
#include "Components/InputComponent.h"
#include <FortniteTowerDefense\Path.h>
#include "EngineUtils.h"

//TD_Pawn.cpp File
//Code for default pawn + camera + player input
//Programmed by David Knolls

//Reference to path instance
APath* path = NULL;

//Cnstructor
ATD_Pawn::ATD_Pawn()
{

	PrimaryActorTick.bCanEverTick = true;
}

//Initial Settings
void ATD_Pawn::BeginPlay()
{
	Super::BeginPlay();

	//Find path reference
	for (TObjectIterator<APath> I; I; ++I)
	{
		if (I->GetName() == "MAPPATH")
		{
			if (I->IsA(APath::StaticClass()))
			{
				path = Cast<APath>(*I);
			}
		}
	}
}

//Update Function
void ATD_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Setup for player input
void ATD_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("IncreaseWave", IE_Pressed, this, &ATD_Pawn::IncreaseWave);
	PlayerInputComponent->BindAction("DecreaseWave", IE_Pressed, this, &ATD_Pawn::DecreaseWave);
}

//Function to increase wave value in path reference
void ATD_Pawn::IncreaseWave()
{
	if (!path->waveStarted && path->enemiesSpawned == 0) 
	{
		path->wave++;
		path->waveStarted = true;
	}
}

//Function to decrease wave value in path reference
void ATD_Pawn::DecreaseWave()
{
	if (!path->waveStarted && path->enemiesSpawned == 0)
	{
		if (path->wave > 2) 
		{
			path->wave--;
			path->waveStarted = true;
		}
	}
}


