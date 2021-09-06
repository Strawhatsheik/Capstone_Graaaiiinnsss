// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h" //Include box component for collison
#include "Components/TimelineComponent.h" //Include Timeline component
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OpenDoorTimelineCurve.generated.h"

UCLASS()
class MBS_GAME_API AOpenDoorTimelineCurve : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOpenDoorTimelineCurve();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//Variables and functions for opening the door (openDoorTimelineCurve class)

	//Properties to hold the static meshes, edit anywhereallows this property
	//to be edited in property windows in Unreal engine
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Door;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* DoorFrame;

	//Property to hold the curve for door opening, edit anywhere allows this property
	//to be edited in property windows in Unreal engine
	UPROPERTY(EditAnywhere)
		UCurveFloat *DoorCurve;

	//Function to be used to control the door
	UFUNCTION()
		void ControlDoor();
	//Function to be used to toggle door state
	UFUNCTION()
		void ToggleDoor();
	//Function to be used to set the doors state
	UFUNCTION()
		void SetState();

	//Variables
	bool Open; //Whether the door is opn
	bool ReadyState; //State of door
	float RotateValue; //The amount to rotate door 
	float CurveFloatValue; //The amount of the curve
	float TimelineValue; //The amount of the time for the door to animate open or closed
	FRotator DoorRotation; //Hold the doors rotation
	FTimeline MyTimeLine;//Hold the timeline


};
