// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//#include "DataIOFinctionLibrary.generated.h"
/**
 * 
 */
class UE_NETWORK_LAB_API DataIOFinctionLibrary
{
	

public:
	DataIOFinctionLibrary();
	~DataIOFinctionLibrary();

	UFUNCTION(BlueprintCallable)
	static bool LoadStringFromFile(FString FileName, FString& LoadedString);
};
