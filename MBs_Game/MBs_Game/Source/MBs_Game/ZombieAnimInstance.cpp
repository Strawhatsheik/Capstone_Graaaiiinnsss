// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAnimInstance.h"
#include "Zombie_Cow.h"
#include "MBs_GameCharacter.h"
#include "Math/Rotator.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

/**
 * Used by the animation blueprint to update the animation properties above
 * and decide what animations to play.
 */
void UZombieAnimInstance::UpdateAnimationProperties()
{
	// Try to get the Pawn being animated and return if a nullptr.
	APawn* ZombiePawn = TryGetPawnOwner();
	if (ZombiePawn == nullptr) return;

	// Try to cast the Pawn to our ZombieCharacter since that's the only
	// thing we want to animate.
	AZombie_Cow* Zombie_Cow = Cast<AZombie_Cow>(ZombiePawn);
	if (Zombie_Cow == nullptr) return;

	// Set the variables that are dependent on states.
	bIsRoaming = Zombie_Cow->State == ZombieStates::ROAM;
	bIsChasing = Zombie_Cow->State == ZombieStates::CHASE;
	bIsAttacking = Zombie_Cow->State == ZombieStates::ATTACK;
	bIsDying = Zombie_Cow->State == ZombieStates::DEAD;
}