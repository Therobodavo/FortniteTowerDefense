// Fill out your copyright notice in the Description page of Project Settings.


#include "TD_Pawn.h"
#include "Components/InputComponent.h"
#include <FortniteTowerDefense\Path.h>
#include "EngineUtils.h"

APath* path = NULL;

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

// Called every frame
void ATD_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATD_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("IncreaseWave", IE_Pressed, this, &ATD_Pawn::IncreaseWave);
	PlayerInputComponent->BindAction("DecreaseWave", IE_Pressed, this, &ATD_Pawn::DecreaseWave);
}

void ATD_Pawn::IncreaseWave()
{
	path->wave++;
}

void ATD_Pawn::DecreaseWave()
{
	path->wave--;
}


