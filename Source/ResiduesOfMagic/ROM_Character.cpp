// Fill out your copyright notice in the Description page of Project Settings.

#include "ResiduesOfMagic.h"
#include "ROM_Character.h"


// Sets default values
AROM_Character::AROM_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AROM_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AROM_Character::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AROM_Character::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

