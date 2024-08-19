// Fill out your copyright notice in the Description page of Project Settings.


#include "GMTKJam_PickupBase.h"

// Sets default values
AGMTKJam_PickupBase::AGMTKJam_PickupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGMTKJam_PickupBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGMTKJam_PickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGMTKJam_PickupBase::GrabObject_Implementation()
{
	IGrabObjectInterface::GrabObject_Implementation();

	mesh->SetSimulatePhysics(false);
	mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}

void AGMTKJam_PickupBase::DropObject_Implementation()
{
	IGrabObjectInterface::DropObject_Implementation();

	mesh->SetSimulatePhysics(true);
	mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

