// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AICharacter.generated.h"

/**
 * The states that the ZombieCharacter can be in.
 
UENUM(BlueprintType)
enum class ZombieStates : uint8 {
	IDLE	UMETA(DisplayName = "IDLE"),
	ROAM	UMETA(DisplayName = "ROAM"),
	CHASE	UMETA(DisplayName = "CHASE"),
	ATTACK	UMETA(DisplayName = "ATTACK"),
	DEAD	UMETA(DisplayName = "DEAD"),
};
*/

UCLASS()
class MBS_GAME_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacter();
	//Overloaded version for object initializing 
	AAICharacter(const FObjectInitializer& ObjectInitializer);
	/*
	// The skeletal mesh of the ZombieCharacter.
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* ZombieSkeletalMesh;

	// The current state of the ZombieCharacter.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Zombie)
		ZombieStates State = ZombieStates::IDLE;

	// The previous state of the ZombieCharacter.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Zombie)
		ZombieStates PreviousState = State;

	// Indicates whether the ZombieCharacter is sprinting or not.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool bIsSprinting = false;*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//The following are for the health bar widget
	//Sets the widget as a property, editable in details bar
	UPROPERTY(VisibleAnywhere)
		class UWidgetComponent* HealthWidgetComp;
	//Vector to hold the characters velocity, as bar must float along
	FVector MovementVelocity;
	//variable to hold charactrs current health
	float Health;
	//Variable to hold charactrs max possible health
	float MaxHealth = 120;
	//Variable to hold inbetween for varying health in demo
	//float HealthTweenDirection;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Component to be 'seeing' sense of AI
	UPROPERTY(VisibleAnywhere, Category = "AI")
		class UPawnSensingComponent* PawnSensingComp;
	
	//The behaviour tree for this AI character
	UPROPERTY(EditAnywhere, Category = "AI")
		class UBehaviorTree* BehaviorTree;
	
//The following are for the health bar funtions for display 
	//Retreives the current health of character
	float GetHealth() const { return Health; }
	//Sets the current health of character
	void SetHealth(float val) { Health = val; }
	//Retrieves the  possible max health of player	
	float GetMaxHealth() const { return MaxHealth; }
	//Sets the possible max health of player
	void SetMaxHealth(float val) { MaxHealth = val; }

//Private functions
private:
	//When it sees the player, register that as seen pawn
	UFUNCTION()
		void OnSeePlayer(APawn* Pawn);

};
