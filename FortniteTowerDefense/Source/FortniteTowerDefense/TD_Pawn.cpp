// Fill out your copyright notice in the Description page of Project Settings.


#include "TD_Pawn.h"
#include "Components/InputComponent.h"
#include <FortniteTowerDefense\Path.h>
#include "EngineUtils.h"
// Sets default values
ATD_Pawn::ATD_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//AutoPossessPlayer = EAutoReceiveInput::Player0;
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	//OurVisibleComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATD_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATD_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATD_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*PlayerInputComponent->BindAction("NextWave", IE_Pressed, this, &ATD_Pawn::NextWave);
	PlayerInputComponent->BindAction("SelectShotgun", IE_Pressed, this, &ATD_Pawn::SelectShotgun);
	PlayerInputComponent->BindAction("SelectScar", IE_Pressed, this, &ATD_Pawn::SelectScar);
	PlayerInputComponent->BindAction("RotateLeft", IE_Pressed, this, &ATD_Pawn::RotateLeft);
	PlayerInputComponent->BindAction("RotateRight", IE_Pressed, this, &ATD_Pawn::RotateRight);
	PlayerInputComponent->BindAction("RotateUp", IE_Pressed, this, &ATD_Pawn::RotateUp);
	PlayerInputComponent->BindAction("RotateDown", IE_Pressed, this, &ATD_Pawn::RotateDown);
	PlayerInputComponent->BindAction("SpawnTower", IE_Pressed, this, &ATD_Pawn::SpawnTower);
	PlayerInputComponent->BindAction("Cancel", IE_Pressed, this, &ATD_Pawn::Cancel);*/
}

void ATD_Pawn::InceaseWave()
{
}

void ATD_Pawn::DecreaseWave()
{
}


