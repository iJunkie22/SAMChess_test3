// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */



UCLASS()
class SAMCHESS_TEST3_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
        
public:
    UMyBlueprintFunctionLibrary();
    /*
        UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SAMChess")
        static void EventViewportResized(int32 fish);
        //static FName EventViewportResized
	
	*/
};


