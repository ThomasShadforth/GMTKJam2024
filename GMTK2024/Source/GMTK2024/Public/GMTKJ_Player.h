// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GMTKJ_Player.generated.h"

class USpringArmComponent;
class UCameraComponent;
class AGMTKJam_LevelCameraSystem;

UCLASS()
class GMTK2024_API AGMTKJ_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGMTKJ_Player();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float baseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float baseLookUpRate;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);

	void MoveRight(float Value);

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

	void StartJump();

	void StopJump();

	void ChangeCameraLeft();

	void ChangeCameraRight();

	void GrabOrDropObject();

	void GrabObject();

	void DropObject();

	void UseObject();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* camera;

	AGMTKJam_LevelCameraSystem* levelCamera;

	bool bIsHoldingObject;

	AActor* heldObject;
	
public:
	
};
