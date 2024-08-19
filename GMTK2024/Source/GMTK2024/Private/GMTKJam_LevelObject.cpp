// Fill out your copyright notice in the Description page of Project Settings.


#include "GMTKJam_LevelObject.h"

// Sets default values
AGMTKJam_LevelObject::AGMTKJam_LevelObject() :
sizeTierIndex(2)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGMTKJam_LevelObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGMTKJam_LevelObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGMTKJam_LevelObject::GrowShrinkObject_Implementation(bool bShouldGrow)
{
	IGrowShrinkInterface::GrowShrinkObject_Implementation(bShouldGrow);

	if(bShouldGrow)
	{
		UE_LOG(LogTemp, Warning, TEXT("GROWING"));
		if(sizeTierIndex == sizeTiers.Num() - 1)
		{
			//DO NOT GROW
		} else
		{
			sizeTierIndex++;
			SetActorScale3D(sizeTiers[sizeTierIndex]);
		}
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("SHRINKING"));
		if(sizeTierIndex == 0)
		{
			//DO NOT SHRINK
		} else
		{
			sizeTierIndex--;
			SetActorScale3D(sizeTiers[sizeTierIndex]);
		}
	}
}

