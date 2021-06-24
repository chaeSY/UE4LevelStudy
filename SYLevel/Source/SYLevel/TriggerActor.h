// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerActor.generated.h"

UCLASS()
class SYLEVEL_API ATriggerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(Category = "SY", BlueprintReadWrite, EditAnywhere)
	bool bNativeFunctionCall;

	UPROPERTY(Category = "SY", BlueprintReadWrite, EditAnywhere)
	FName LevelNameToLoad;

	UFUNCTION(BlueprintCallable)
	void LoadLevel();

	UFUNCTION(BlueprintCallable)
	void UnLoadLevel();
};
