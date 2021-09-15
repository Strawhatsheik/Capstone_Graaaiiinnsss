// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Zombie_Cow.generated.h"

/**
 * The states that the ZombieCharacter can be in.
 */
UENUM(BlueprintType)
enum class ZombieStates : uint8 {
	IDLE	UMETA(DisplayName = "IDLE"),
	ROAM	UMETA(DisplayName = "ROAM"),
	CHASE	UMETA(DisplayName = "CHASE"),
	ATTACK	UMETA(DisplayName = "ATTACK"),
	DEAD	UMETA(DisplayName = "DEAD"),
};

//The zombie cow who will roam, chase, attack, die, and try to eat the hay
UCLASS()
class MBS_GAME_API AZombie_Cow : public ACharacter
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// Sets default values for this character's properties.
	AZombie_Cow();
	AZombie_Cow(const FObjectInitializer& ObjectInitializer);

	// The skeletal mesh of the ZombieCharacter.
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* ZombieSkeletalMesh;

	// When the ZombieCharacter attacks we check to see if the PlayerCharacter
    // is inside of this collider.
	UPROPERTY(VisibleDefaultsOnly)
	class UBoxComponent* ZombieDamageCollider;

	// The current state of the ZombieCharacter.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Zombie)
		ZombieStates State = ZombieStates::IDLE;

	// The previous state of the ZombieCharacter.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Zombie)
		ZombieStates PreviousState = State;

	// The amount of health the ZombieCharacter has.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zombie)
		float Health = 100.f;

	// Indicates whether the ZombieCharacter is sprinting or not.
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		//bool bIsSprinting = false;

	// The starting location of the ZombieCharacter, used when roaming.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = RoamState)
		FVector StartLocation;

	// Indicates whether the ZombieCharacter should be able to roam or not.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RoamState)
		bool bCanRoam = true;

	// The max speed of the ZombieCharacter in the ROAM state.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RoamState)
		float RoamSpeed = 50.f;

	// The max range around its spawn point that the ZombieCharacter can roam.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RoamState)
		float RoamRadius = 400.f;

	// The amount of time to pause in between `Roam` calls. If set to 0 there will
	// be no delay.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RoamState)
		float RoamDelay = 3.f;

	// The max speed of the ZombieCharacter in the CHASE state.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChaseState)
		float ChaseSpeed = 300.f;

	// The amount of delay after a chase after which the ZombieCharacter will
	// resume to roam. This is to help break up an awkward transition from chasing
	// straight back to roaming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChaseState)
		float AfterChaseDelay = 3.f;

	// The amount of damage that the ZombieCharacter does when attacking.
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttackState)
	//	float AttackDamage = 5.f;

	// The amount of seconds long that the zombie dying animation is. This is used with
	// the `SecondsAfterDeathBeforeDestroy` variable to make sure that the dying animation
	// plays out fully before the ZombieCharacter is destroyed.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DyingState)
		float DyingAnimationLengthInSeconds = 3.f;

	// The amount of time after the ZombieCharacter dies that they will destroy. A value
	// of 0 means that the ZombieCharacter will be destroyed immediately after the dying
	// animation plays. A value below 0 means that the ZombieCharacter will never be destroyed.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DyingState)
		float SecondsAfterDeathBeforeDestroy = 5.f;
	


protected:
	/**
	 * The timer used to wait until the dying animation has finished playing.
	 */
	FTimerHandle DeathAnimationTimer;

protected:
	/**
	 * Called when the game starts.
	 */
	virtual void BeginPlay() override;
	
	//The following are for the health bar widget
	//Sets the widget as a property, editable in details bar
	UPROPERTY(VisibleAnywhere)
		class UWidgetComponent* HealthWidgetComp;
	//Vector to hold the characters velocity, as bar must float along
	FVector MovementVelocity;
	//variable to hold charactrs current health
//	float Health;
	//Variable to hold charactrs max possible health
	//float MaxHealth = 120;
	//Variable to hold inbetween for varying health in demo
	//float HealthTweenDirection;
	/**
	 * Called after the death animation finishes playing.
	 */
	void AfterDeathAnimationFinished();
public:
	/**
	 * Called to transition the ZombieCharacter to the IDLE state.
	 */
	void ToIdleState();

	/**
	 * Called to transition the ZombieCharacter to the ROAM state.
	 */
	void ToRoamState();
	/**
  Called to transition the ZombieCharacter to the CHASE state.
      */
	void ToChaseState();

	/**
	 * Called to transition the ZombieCharacter to the ATTACK state.
	 */
	void ToAttackState();

	/*
	 * Called to transition the ZombieCharacter to the DEAD state.
	 */
	void ToDeadState();

	/**
	 * Called to make the ZombieCharacter take damage and check to see if the
	 * ZombieCharacter needs to die.
	 */
	void Hit(float Damage);

	//The following are for the health bar funtions for display 
	//Retreives the current health of character
	float GetHealth() const { return Health; }
	//Sets the current health of character
	void SetHealth(float val) { Health = val; }
	//Retrieves the  possible max health of player	
	float GetMaxHealth() const { return MaxHealth; }
	//Sets the possible max health of player
	void SetMaxHealth(float val) { MaxHealth = val; }
};
