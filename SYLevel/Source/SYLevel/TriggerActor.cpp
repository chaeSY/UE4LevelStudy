// Fill out your copyright notice in the Description page of Project Settings.
#include "TriggerActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATriggerActor::ATriggerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bNativeFunctionCall = true;
}

// Called when the game starts or when spawned
void ATriggerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerActor::LoadLevel()
{
	UGameplayStatics::LoadStreamLevel(this, LevelNameToLoad, true, true, FLatentActionInfo());
}

void ATriggerActor::UnLoadLevel()
{
	UGameplayStatics::UnloadStreamLevel(this, LevelNameToLoad, FLatentActionInfo(), true);
}

