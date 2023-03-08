// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MapInfoAsset.h"
#include "DLCMapLoader.h"
#include "DLCGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GB_DLC_API UDLCGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UDLCLoader * _DLCLoader;

public:
	UFUNCTION(BlueprintCallable)
	TArray<FMapInfo> GetMapsInfo();
	
protected:
	void Init() override;
};
