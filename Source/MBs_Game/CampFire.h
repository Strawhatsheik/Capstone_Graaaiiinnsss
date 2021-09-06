// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h" //Box component to be used in fire class
#include "Particles/ParticleSystemComponent.h"//Particle system to be used in fire
#include "CampFire.generated.h"

class UBoxComponent;
class UParticleSystemComponent;

UCLASS()
class MBS_GAME_API ACampFire : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACampFire();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

//Following are this classes properties
	
	//A particle system for the fire
	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* Fire;
	//A box component for fire trigger
	UPROPERTY(EditAnywhere)
		UBoxComponent* MyBoxComponent;
	//The damge type the fire causes
	UPROPERTY(EditAnywhere)
		TSubclassOf<UDamageType> FireDamageType;
	//The fire actor
	UPROPERTY(EditAnywhere)
		AActor* MyCharacter;
	//The hit that causes the damage
	UPROPERTY(EditAnywhere)
		FHitResult MyHit;

//Following are variables for fire class
	//Boolean for whether damage can be applied
	bool bCanApplyDamage;
	//Timre for fire
	FTimerHandle FireTimerHandle;

//Following are functions for fire class
	// Function for component overlap begin
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Function for component overlap end 
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	//Function to apply the damage
	UFUNCTION()
		void ApplyFireDamage();

};