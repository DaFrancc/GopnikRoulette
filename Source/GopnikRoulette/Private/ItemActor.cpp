// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActor.h"
#include "../PrintMacros.h"

// Sets default values
AItemActor::AItemActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SetReplicates(true);
}

// Called when the game starts or when spawned
void AItemActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemActor::Interact_Implementation()
{
	Server_Kill();
}

void AItemActor::Server_Kill_Implementation()
{
	Destroy();
}