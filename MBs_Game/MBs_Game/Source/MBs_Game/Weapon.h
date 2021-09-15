// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class MBS_GAME_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	// The static mesh of the BulletActor.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Bullet)
		class UStaticMeshComponent* WeaponStaticMesh;

	// The sphere collider of the BulletActor.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Bullet)
		class USphereComponent* WeaponSphereCollider;

	// The projectile movement component of the BulletActor.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Bullet)
		class UProjectileMovementComponent* WeaponMovement;

public:
	/**
	 * Called when the BulletActor hits another component.
	 */
	UFUNCTION()
		void OnWeaponHitComponent(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
	// The damage this BulletActor should do.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float WeaponHitDamage;

/*Original code  vuilt by engine, probab;y wont need
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	*/
};
