// Fill out your copyright notice in the Description page of Project Settings.


#include "GMTKJam_LevelCameraSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

// Sets default values
AGMTKJam_LevelCameraSystem::AGMTKJam_LevelCameraSystem() :
cameraIndex(0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	baseRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	SetRootComponent(baseRootComp);
	
	levelCamera_1 = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera 1"));
	levelCamera_1->SetupAttachment(RootComponent);

	levelCamera_2 = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera 2"));
	levelCamera_2->SetupAttachment(RootComponent);

	levelCamera_3 = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera 3"));
	levelCamera_3->SetupAttachment(RootComponent);

	levelCamera_4 = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera 4"));
	levelCamera_4->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGMTKJam_LevelCameraSystem::BeginPlay()
{
	Super::BeginPlay();

	InitializeCameraArray();

	GetPlayerController();

	if(playerController)
	{
		playerController->SetViewTargetWithBlend(this, 0.25f);
	}
	
}

//To Do: call a method that changes the camera when the player enters the level

void AGMTKJam_LevelCameraSystem::InitializeCameraArray()
{
	levelCameras.Add(levelCamera_1);
	levelCameras.Add(levelCamera_2);
	levelCameras.Add(levelCamera_3);
	levelCameras.Add(levelCamera_4);
	
	levelCamera_1->Activate();
	levelCamera_2->Deactivate();
	levelCamera_3->Deactivate();
	levelCamera_4->Deactivate();
}

void AGMTKJam_LevelCameraSystem::GetPlayerController()
{
	playerController = UGameplayStatics::GetPlayerController(this, 0);
}

// Called every frame
void AGMTKJam_LevelCameraSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGMTKJam_LevelCameraSystem::ChangeCameraLeft()
{
	if(playerController == nullptr) return;

	levelCameras[cameraIndex]->Deactivate();
	
	if(cameraIndex == 0)
	{
		
		cameraIndex = levelCameras.Num() - 1;
	} else
	{
		cameraIndex--;
	}

	levelCameras[cameraIndex]->Activate();
	
}

void AGMTKJam_LevelCameraSystem::ChangeCameraRight()
{
	if(playerController == nullptr) return;

	levelCameras[cameraIndex]->Deactivate();
	
	if(cameraIndex == levelCameras.Num() - 1)
	{
		
		cameraIndex = 0;
	} else
	{
		cameraIndex++;
	}

	levelCameras[cameraIndex]->Activate();
}

