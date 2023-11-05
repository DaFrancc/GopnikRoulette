// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

UCLASS()
class GOPNIKROULETTE_API AItemActor : public AActor, public IInteractable
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Sets default values for this actor's properties
	AItemActor();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact_Implementation() override;

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_Kill();
};
