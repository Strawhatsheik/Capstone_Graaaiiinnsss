// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirectorCow.generated.h"

UCLASS()
class MBS_GAME_API ACameraDirectorCow : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACameraDirectorCow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		//Property for the first camera, which is the free camera
		//looking at 'the scene', makes it visible to engine
		//"EditAnywhere" allows cameras to be set in Editor
		AActor* CameraOne;

	UPROPERTY(EditAnywhere)
		//Property for the second camera, that is a component
		//of the cube, makes it visible to engine
		//"EditAnywhere" allows cameras to be set in Editor
		AActor* CameraTwo;

	//Number to hold the time until the view switches between cameras
	float TimeToNextCameraChange;

};
