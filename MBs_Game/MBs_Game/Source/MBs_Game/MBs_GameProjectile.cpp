// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MBs_GameProjectile.h"
#include"Zombie_Cow.h"
#include "Engine.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

AMBs_GameProjectile::AMBs_GameProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AMBs_GameProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("PEW! I'm flying!")));
}

void AMBs_GameProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("on hit???")));
	
	// We want to return early if anything is null as it could cause a crash otherwise.
	if ((OtherActor == nullptr) || (OtherActor == this) || (OtherComp == nullptr)) return;

	// Cast the `OtherActor` to a `ZombieCharacter` if we can and call its `TakeDamage` method.
	AZombie_Cow* Zombie_Cow = Cast<AZombie_Cow>(OtherActor);
	//if (Zombie_Cow == nullptr) return;
	Zombie_Cow->Hit(100);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Ouch!!!!")));

	//Apply 200 points worth of fire type' damage to player character
	UGameplayStatics::ApplyPointDamage(OtherActor, 200.0f, GetActorLocation(), Hit, nullptr, this, ProjectileDamageType);


	// Finally destroy the the BulletActor so we don't end up with a bunch of bullets that
	// litter the level and impact performance.
	Destroy();

	//Old code, try replacing??? 
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		//For zombie cows???
			// Cast the `OtherActor` to a `ZombieCharacter` if we can and call its `TakeDamage` method.
		AZombie_Cow* ZombieCharacter = Cast<AZombie_Cow>(OtherActor);
		if (ZombieCharacter == nullptr) return;
		ZombieCharacter->Hit(100);
		
		Destroy();
	}
}