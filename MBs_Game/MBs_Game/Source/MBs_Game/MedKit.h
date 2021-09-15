// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MBs_GameCharacter.h"//Include the game character, who will use the medkits
#include "MedKit.generated.h"

UCLASS()
class MBS_GAME_API AMedKit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMedKit();


//Following are functions for this class
	//On overlap function
	UFUNCTION()
		void OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor);

//Following are properties for this class
	//Character property 
	UPROPERTY(EditAnywhere)
		AMBs_GameCharacter* MyCharacter;

};
