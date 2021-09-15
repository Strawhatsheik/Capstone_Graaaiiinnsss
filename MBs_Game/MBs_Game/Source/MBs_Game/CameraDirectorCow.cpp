// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirectorCow.h"
#include "Kismet/GameplayStatics.h" //Access to general-purpose functions for tutorial


// Sets default values
ACameraDirectorCow::ACameraDirectorCow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACameraDirectorCow::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACameraDirectorCow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Number for time between views switching from camera to camera
	const float TimeBetweenCameraChanges = 2.0f;
	//A number to smooth out transition
	const float SmoothBlendTime = 0.75f;
	//Number for time TILL next camera change
	TimeToNextCameraChange -= DeltaTime;

	//If statement that fires when time to change cameras reaches 0
	if (TimeToNextCameraChange <= 0.0f)
	{
		//Restart the time till camera change with between time
		TimeToNextCameraChange += TimeBetweenCameraChanges;

		// Find the actor that handles control for the local player.
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (OurPlayerController)
		{
			//If the player's view is not from camera one
			if ((OurPlayerController->GetViewTarget() != CameraOne) && (CameraOne != nullptr))
			{
				// Cut instantly to camera one.
				OurPlayerController->SetViewTarget(CameraOne);
			}
			//It must be camera one
			else if ((OurPlayerController->GetViewTarget() != CameraTwo) && (CameraTwo != nullptr))
			{
				// Blend smoothly to camera two.
				OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
		}
	}
}

