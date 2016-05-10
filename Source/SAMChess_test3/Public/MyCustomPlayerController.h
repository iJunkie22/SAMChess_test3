// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "MyCustomPlayerController.generated.h"

/**
 * KUDOS TO https://answers.unrealengine.com/questions/37165/set-mouse-position-via-blueprint.html#answer-container-41333
 */
UCLASS()
class SAMCHESS_TEST3_API AMyCustomPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "Game|Player")
    void SetMousePosition(float LocationX, float LocationY);
	
	
	
	
};
