// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GopnikWidget.generated.h"

/**
 * 
 */
UCLASS()
class GOPNIKROULETTE_API UGopnikWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// UPROPERTY(EditAnywhere, BlueprintReadWrite)
	// TSubclassOf<UGopnikWidget> CallingMenu;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetMouseControl();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMouseControl = true;	
};
