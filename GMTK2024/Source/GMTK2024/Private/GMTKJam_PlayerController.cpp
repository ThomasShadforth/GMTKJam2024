// Fill out your copyright notice in the Description page of Project Settings.


#include "GMTKJam_PlayerController.h"

#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

AGMTKJam_PlayerController::AGMTKJam_PlayerController()
{
	
}

void AGMTKJam_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(pauseScreenClass)
	{
		pauseScreen = CreateWidget(this, pauseScreenClass);
	}
}

void AGMTKJam_PlayerController::PauseGame()
{
	if(pauseScreen)
	{
		pauseScreen->AddToViewport();

		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this);
		bShowMouseCursor = true;
		SetPause(true);
	}
}
