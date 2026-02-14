// Fill out your copyright notice in the Description page of Project Settings.


#include "FunPlayerCharacter.h"

#include "GameFramework/SpringArmComponent.h"


// Sets default values
AFunPlayerCharacter::AFunPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	GetMesh()->SetupAttachment(RootComponent);
	
	ArmSpringComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("ArmSpringComponent"));
	ArmSpringComponent->SetupAttachment(RootComponent);
	ArmSpringComponent->TargetArmLength = ArmLength;
	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(ArmSpringComponent);
	
	
}

// Called when the game starts or when spawned
void AFunPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called to bind functionality to input
void AFunPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	
}

