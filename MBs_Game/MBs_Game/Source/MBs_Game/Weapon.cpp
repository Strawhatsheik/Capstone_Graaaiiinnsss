// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Zombie_Cow.h"
#include "MBs_GameCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"




// Sets default values
AWeapon::AWeapon()
{
	// Load the Weapon Actor's mesh.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> WeaponStaticMeshAsset(TEXT("StaticMesh'/Game/FirstPerson/Meshes/FirstPersonProjectileMesh.FirstPersonProjectileMesh'"));

	// Create the sphere collider, set its radius, set it to have a collision profile
	// of Projectile and lastly add the `OnWeaponHitComponent` method to respond to the
	// sphere collider making contact with another component.
	WeaponSphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("WeaponSphereCollider"));
	WeaponSphereCollider->InitSphereRadius(20.f);
	WeaponSphereCollider->SetCollisionProfileName("Projectile");
	WeaponSphereCollider->OnComponentHit.AddDynamic(this, &AWeapon::OnWeaponHitComponent);
	RootComponent = WeaponSphereCollider;

	// Create the weapon mesh, set it to the `WeaponStaticMesh` loaded above and attach
	// it to the `WEaponSphereCollider`.
	WeaponStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponStaticMesh"));
	WeaponStaticMesh->SetStaticMesh(WeaponStaticMeshAsset.Object);
	WeaponStaticMesh->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	WeaponStaticMesh->UnWeldFromParent();
	WeaponSphereCollider->SetCollisionProfileName("NoCollision");
	WeaponStaticMesh->SetupAttachment(RootComponent);

	// Create the ProjectileMovementComponent and set its speeds and default properties.
	WeaponMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("WeaponMovement"));
	WeaponMovement->UpdatedComponent = WeaponSphereCollider;
	WeaponMovement->InitialSpeed = 3000.f;
	WeaponMovement->MaxSpeed = 3000.f;
	WeaponMovement->bRotationFollowsVelocity = true;
	WeaponMovement->bShouldBounce = false;

	// Set the WeaponActor to die after 3 seconds.
	InitialLifeSpan = 3.f;
}
	
void AWeapon::OnWeaponHitComponent(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
		// We want to return early if anything is null as it could cause a crash otherwise.
		if ((OtherActor == nullptr) || (OtherActor == this) || (OtherComp == nullptr)) return;

		if (OtherComp->IsSimulatingPhysics())
		{
			// If the component that the BulletActor hit is using physics then we want
			// to add an impulse force where the BulletActor hit to move them back.
			OtherComp->AddImpulseAtLocation(GetVelocity() * 100.f, GetActorLocation());
		}

		// Cast the `OtherActor` to a `ZombieCharacter` if we can and call its `TakeDamage` method.
		AZombie_Cow* Zombie_Cow = Cast<AZombie_Cow>(OtherActor);
		if (Zombie_Cow == nullptr) return;
		Zombie_Cow->Hit(WeaponHitDamage);
		Destroy();
}




/*Original code  when created by engine, probably won't need
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/
