// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"//Include engines core types such as string or float, etc.
#include "GameFramework/Actor.h" //Include execution of functor for component in this actor
#include "OnComponentHit.generated.h"//Include OnComponentHit execution file


UCLASS()
class MBS_GAME_API AOnComponentHit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOnComponentHit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VISIBLEANYWHERE) //"VisibleAnywhere " allows property to be visible in windows, but not edited
		class UBoxComponent* MyComp; //Variable to hold on hit info

	UFUNCTION()
		//Function to be called when a component registers a hit
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
