// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "FunPlayerCharacter.generated.h"

class USpringArmComponent;

UCLASS()
class FUNEXPERIENCE_API AFunPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFunPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> ArmSpringComponent;
	
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float ArmLength = 300.0f;
	
	
	
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> CameraComponent;

	
	
	
public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
