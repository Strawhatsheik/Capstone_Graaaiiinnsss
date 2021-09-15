// Fill out your copyright notice in the Description page of Project Settings.

#pragma once//Makes sources file only by included once in a compilation

#include "CoreMinimal.h"//Include engines core types such as string or float, etc.
#include "GameFramework/Actor.h"//Include execution of functor for component in this actor
#include "LightSwitchTrigger.generated.h"//Include execution file

UCLASS()
class MBS_GAME_API ALightSwitchTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitchTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//the point light component
		//VisibleAnywhere enables property of 'switch compoents' to be visible in details tab
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
		class UPointLightComponent* PointLight;

	//The sphere component
	//VisibleAnywhere enables property of 'switch compoents' to be visible in details tab
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
		class USphereComponent* LightSphere;

	//Property holding the intensity for the point light
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
		float LightIntensity;


	//Function to be called when another actor enters the sphere component
	//Parameters being, this component (the sphere), the other actor and it's component, the location of where the entrance occurred, a boolean to hold whether an overlap occurred, from the last parameter, a sweep to check for overlap.                   
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//Function to be called when another actor leaves the sphere component
	//Parameters being, this component (the sphere), the other actor and it's component, the location of where the exit occurred, no bool or sweep needed as to exit, we have already
	//established entrance and thus overlap.
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//Function to toggle the visibility of the Point light
	UFUNCTION()
		void ToggleLight();
};
