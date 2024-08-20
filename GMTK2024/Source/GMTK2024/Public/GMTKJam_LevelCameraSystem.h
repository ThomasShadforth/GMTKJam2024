// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMTKJam_LevelCameraSystem.generated.h"

class UCameraComponent;
class APlayerController;

UCLASS()
class GMTK2024_API AGMTKJam_LevelCameraSystem : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGMTKJam_LevelCameraSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void InitializeCameraArray();

	void GetPlayerController();
	
private:

	USceneComponent* baseRootComp;
	
	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* levelCamera_1;

	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* levelCamera_2;

	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* levelCamera_3;

	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* levelCamera_4;
	
	TArray<UCameraComponent*> levelCameras;

	int cameraIndex;

	APlayerController* playerController;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ChangeCameraLeft();

	void ChangeCameraRight();
	
};
