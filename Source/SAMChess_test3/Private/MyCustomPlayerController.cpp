// Fill out your copyright notice in the Description page of Project Settings.

#include "SAMChess_test3.h"
#include "MyCustomPlayerController.h"



void AMyCustomPlayerController::SetMousePosition(float LocationX, float LocationY)
{
    FViewport* v = CastChecked<ULocalPlayer>(this->Player)->ViewportClient->Viewport;
    int intX = (int)LocationX;
    int intY = (int)LocationY;
    v->SetMouse(intX, intY);
}
