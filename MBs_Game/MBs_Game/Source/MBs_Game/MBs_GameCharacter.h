// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine.h"
#include "OpenDoorTimelineCurve.h"//Include door opening class
#include "Blueprint/UserWidget.h"//Include User Widget class
#include "Perception/AISense_Sight.h"//Needed for sense sight
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Components/TimeLineComponent.h"//Include timeline
#include "Components/BoxComponent.h"//Include box component
#include "Components/SphereComponent.h"
#include "UObject/ObjectMacros.h"
#include "Components/ShapeComponent.h"
#include "MBs_GameCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AMBs_GameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMBs_GameCharacter();

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	//For the modified projectile
// The location on the gun where the BulletActors should spawn from.
	UPROPERTY(VisibleDefaultsOnly, Category = Player)
		class USceneComponent* WeaponSpawnLocation;
	// The gun's offset from the PlayerCharacter's location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
		FVector GunOffset;


	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

	// Used to register sense for the PlayerCharacter that are detectable by the ZombieCharacter.
	//Make 'visibleefaultsOnly' so only visible for instance sand not editable
	UPROPERTY(VisibleDefaultsOnly)
		class UAIPerceptionStimuliSourceComponent* PlayerStimuliSource;

	// The amount of damage each shot of the PlayerCharacter's gun does.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
		float WeaponDamage = 10.f;



protected:
	virtual void BeginPlay();

	//Create an override for tick function to use with various classes
	virtual void Tick(float Deltaseconds) override;

	//Function to cause damage to the player. Takes parameters, in this order, amount of damage received, damage event, the event instigator (damage causer),and the actor who caused the damage
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser);

public:


	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
//	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AMBs_GameProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint32 bUsingMotionControllers : 1;

	//Declare the float curve to use in the OpenDoorTimelineCurve class
	//Which is used to smooth door opening
	UPROPERTY(EditAnywhere)
		class AOpenDoorTimelineCurve* CurrentDoor;

	//Rference the UMG asset for use in o[pening the door in 'OpenDoorTimelineCurve" class
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HelpWidgetClass;

	//Add widget to details panel
	UPROPERTY(Editanywhere)
	class UUserWidget* InfoWidget;

//Properties to be used in HUD and tracking players health
//'EditAnywhere' allows ccess t them from within editor 'Details' panel.
//'BlueprintReadWrite' allows them to be altered in Blueprint, ie during gameplay

	//The full health amount
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float FullHealth;
	//The current Health amount
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Health;
	//The percentage of current health out of full health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float HealthPercentage;
	//What health was previously (example: after player takes damage)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float PreviousHealth;
	
	//Magic properties may not be implemented in my game, or may be converted to something else
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float FullMagic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		float Magic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		float MagicPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		float PreviousMagic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
	    float MagicValue;

	//A redflash (to show damage)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		bool redFlash;
	//A curve for the magic
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic")
		UCurveFloat *MagicCurve;

//Variables to be used for HUD, and tracking player health/magic
	UTimelineComponent* MyTimeline;//The timeline to keep track of magic bar
	float CurveFloatValue;//A curveline to handle refilling of magic bar
	float TimelineValue;//The value of the timeline, ie, length
	struct FTimerHandle MemberTimerHandle; //Handle or timer
	struct FTimerHandle MagicTimerHandle;

	bool bCanUseMagic;//Boolean for if magic can be used (bar is not empty)

//Functions to be used to update health and magic, as well as the HUD
//'BlueprintPure' means the function does not effect the object itself, but is used on it (for example we are using it to retrieve value. It will not CHANGE the value, but will retrieve it). It can be executed in a Blueprint (ie during play)	
//'BlueCallable' means the BLueprints can call the functions (ie during gameplay) 

//Retrieve current health status
	UFUNCTION(BlueprintPure, Category = "Health")
		float GetHealth();

	//Retrieve current Magic status
	UFUNCTION(BlueprintPure, Category = "Magic")
		float GetMagic();

	//Update players health amount
	UFUNCTION(BlueprintCallable, Category = "Health")
		void UpdateHealth(float HealthChange);

	

	//Update players magic amount
	UFUNCTION(BlueprintCallable, Category = "Magic")
		void UpdateMagic();

	//Get the health text (to be displayed)
	UFUNCTION(BlueprintPure, Category = "Health")
		FText GetHealthIntText();

	//Get the magic text (to be displayed)
	UFUNCTION(BlueprintPure, Category = "Magic")
		FText GetMagicIntText();

	//Timer to keep track of damge  (for healing)
	UFUNCTION()
		void DamageTimer();

	//Sets the damage state
	UFUNCTION()
		void SetDamageState();

	//Sets the magic's current value
	UFUNCTION()
		void SetMagicValue();

	//Sets the magic's current state
	UFUNCTION()
		void SetMagicState();

	// Sets the change in magic
	UFUNCTION()
		void SetMagicChange(float MagicChange);

	//The following are still for health/magic/HUD, but  are used to play the damaged 'flash'
	UFUNCTION(BlueprintPure, Category = "Health")
		bool PlayFlash();//Boolean to hold whether currently flashing
	
	//The following two properties cause the gun to change materieals to simulated the flash
	UPROPERTY(EditAnywhere, Category = "Magic")
		class UMaterialInterface* GunDefaultMaterial;

	UPROPERTY(EditAnywhere, Category = "Magic")
		class UMaterialInterface* GunOverheatMaterial;
	
	//Function to cause damage to the player. Takes parameters, in this order, amount of damage, damage type, the  location,a vector to normalize hit location, the component hit, the bone hit, the vector of the direction the shot (or damage causing event) came from,
	//the controller that was used to fire the hit, the actor who did it (was controlled be the previous controller), the result of the hit and hit information 
	
	//UFUNCTION(BlueprintCallable, Category = "Power")
	//void UpdateHealth(float Healthchange);

	//Private function DisplayRaycast, void and does not return value
private:
	void DisplayRaycast();

protected:
	
	/** Fires a projectile. */
	void OnFire();

	//Action function to open doors
	void OnAction();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

