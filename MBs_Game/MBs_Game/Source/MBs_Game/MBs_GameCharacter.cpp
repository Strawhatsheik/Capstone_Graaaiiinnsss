// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "MBs_GameCharacter.h"
#include "Kismet/KismetMathLibrary.h"//The math library will be needed for timer events
#include "TimerManager.h"//Needed for timer events as well
#include "MBs_GameProjectile.h"
#include "Perception/AISense_Sight.h"//Needed for sense sight
#include "Animation/AnimInstance.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "GameplayTagContainer.h"///////
#include "Camera/CameraComponent.h"
#include "Weapon.h"
#include "UObject/ObjectMacros.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "DrawDebugHelpers.h" //Debug lines to help visualize line traces
#include "Components/TimelineComponent.h"//Included for timeline
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "MedKit.h"
#include "Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AMBs_GameCharacter

AMBs_GameCharacter::AMBs_GameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	// Set the PlayerCharacter to be the default player of the game.
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	 //FGameplayTag(FName("Player")) = PlayerTag;

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));



	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;

	//For use in the door opening/closing class "OpenDoorTimelineCurve"
	//Door instance begins null
	CurrentDoor = NULL;

	//Following is for Zombie cow to 'see' and chase player
	// Create the stimuli source and set it to register as a source for `AISense_Sight`.
	PlayerStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PlayerStimuliSource"));
	PlayerStimuliSource->RegisterForSense(TSubclassOf<UAISense_Sight>());
}

void AMBs_GameCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

//May move to constructor
//Variables to start and store the values of character's health and magic
	FullHealth = 1000.0f;//Health amount when full
	Health = FullHealth;//Start with full health
	HealthPercentage = 1.0f;//Percentage to represent health in bar
	//Not in  his git? 
	PreviousHealth = HealthPercentage;//centage of helth available
	bCanBeDamaged = true;//Boolean to mark the player can take damage

	//May not keep magic variables, follow same convention here as above
	FullMagic = 100.0f;
	Magic = FullMagic;
	MagicPercentage = 1.0f;
	PreviousMagic = MagicPercentage;
	MagicValue = 0.0f;
	bCanUseMagic = true;

	//The magic bar refills over time, this curve (if true, and it always should be) enables that
	if (MagicCurve)
	{
		//Call the current timeline
		FOnTimelineFloat TimelineCallback;
		//The finished timeline
		FOnTimelineEventStatic TimelineFinishedCallback;

		//set the current value of magic to the current value of timeline
		TimelineCallback.BindUFunction(this, FName("SetMagicValue"));
		//Set state of magic bar based on timeline
		TimelineFinishedCallback.BindUFunction(this, FName{ TEXT("SetMagicState") });
		
		//This is in his GIT files, but bar appears to work without it?
		MyTimeline = NewObject<UTimelineComponent>(this, FName("Magic Animation"));
		//Magic slowly replenishes? 
		MyTimeline->AddInterpFloat(MagicCurve, TimelineCallback);
		//Magic is full
		MyTimeline->SetTimelineFinishedFunc(TimelineFinishedCallback);

		MyTimeline->RegisterComponent();
		//Weird, and if I try to use they are buggy
	}

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
	
	//For use in the door opening/closing class "OpenDoorTimelineCurve"
	//Adds the Userwidget for displaying 'press E to open' 
	//to the viewport
	if (HelpWidgetClass)
	{
		InfoWidget = CreateWidget<UUserWidget>(GetWorld(), HelpWidgetClass);

		if (InfoWidget)
		{
			InfoWidget->AddToViewport();
		}

	}
	

}

//////////////////////////////////////////////////////////////////////////
// Input

void AMBs_GameCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMBs_GameCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMBs_GameCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMBs_GameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMBs_GameCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMBs_GameCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMBs_GameCharacter::LookUpAtRate);

	//Bind camera Event to toggle cameras
	//PlayerInputComponent->BindAction("CameraToggle", IE_Pressed, this, &AMBs_GameCharacter::OnCameraSwitch);

	//Bind the DisplayRaycast event when button pressed
	PlayerInputComponent->BindAction("Raycast", IE_Pressed, this, &AMBs_GameCharacter::DisplayRaycast);

	//Bind the action event to open doors
	PlayerInputComponent->BindAction("Action", IE_Pressed, this, &AMBs_GameCharacter::OnAction);

}

//These functions are to return the current health and magic amoutn of player
float AMBs_GameCharacter::GetHealth()
{
	//Return the current health 
	return HealthPercentage;
}

float AMBs_GameCharacter::GetMagic()
{
	//Return the current magic
	return MagicPercentage;
}

//These return the current health and magic as text so as to allow them to be displayed on HUD
FText AMBs_GameCharacter::GetHealthIntText()
{
	//Round to a whole number
	int32 HP = FMath::RoundHalfFromZero(HealthPercentage * 100);
	//Convert from int to string
	FString HPS = FString::FromInt(HP);
	//Concantenate a string to appear on HUD with percentage sign appended
	FString HealthHUD = HPS + FString(TEXT("%"));
	//Convert from string to text
	FText HPText = FText::FromString(HealthHUD);
	//Return the text
	return HPText;
}

FText AMBs_GameCharacter::GetMagicIntText()
{
	//Round to a whole number
	int32 MP = FMath::RoundHalfFromZero(MagicPercentage * 100);//It was *FullMagic but in GIT 100, lets try 100!
	//Convert from int to string
	FString MPS = FString::FromInt(MP);
	//Convert from int to string (For full amount of magic this time)
	FString FullMPS = FString::FromInt(FullMagic);
	//Concantenate a string to appear on HUD which combines both current magic and full magic, separated by a slash
	FString MagicHUD = MPS + FString(TEXT("/")) + FullMPS;
	//Convert from string to text
	FText MPText = FText::FromString(MagicHUD);
	//Return the text
	return MPText;
}

//Functions to toggle the players invincibility status.
//After taking a hit a player cannot receive more damage for two seconds

//Set the players damage state
void AMBs_GameCharacter::SetDamageState()
{
	//Damage state is true, can be damaged
	bCanBeDamaged = true;
}

//Create the timer to keep track of the 2 seconds of invincibilty
void AMBs_GameCharacter::DamageTimer()
{
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AMBs_GameCharacter::SetDamageState, 2.0f, false);
}

//Functions both setup the timeline curve needed  for magic replenishment and change magic's values while running
void AMBs_GameCharacter::SetMagicValue()
{
	//Set timeline value by getting it's current position
	TimelineValue = MyTimeline->GetPlaybackPosition();
	//Set the curve value  with current and pevious magic values as well as current timeline values
	CurveFloatValue = PreviousMagic + MagicValue * MagicCurve->GetFloatValue(TimelineValue);
	//Set the value of magic bar using curve and amount it CAN be full
	//This is copmmented out in GIT  Magic = CurveFloatValue * FullMagic;
	//Use math function 'clamp' to assign middling values as bar moves up or down
	//Magic = FMath::Clamp(Magic, 0.0f, FullMagic);
	//The above was before the below is GIT, it doesn't make sense but ill try
	Magic = FMath::Clamp(CurveFloatValue*FullHealth, 0.0f, FullMagic);
	//Current magic percentage
	//MagicPercentage = CurveFloatValue;
	//Again use math function to set middling value as bar moves up or down
	MagicPercentage = FMath::Clamp(CurveFloatValue, 0.0f, 1.0f);
}
//This sets the magics state to ready to use 
void AMBs_GameCharacter::SetMagicState()
{
	//Set the magic available to be used
	bCanUseMagic = true;
	//Set MagicValue back to beginning state
	MagicValue = 0.0;
	//Stops gun from flashing and sets back to default material
	if (GunDefaultMaterial)
	{
		FP_Gun->SetMaterial(0, GunDefaultMaterial);
	}
}

//This function returns the bool state of 'redFlash' indicating whether or not the red flash animation should be playing
bool AMBs_GameCharacter::PlayFlash()
{
	//If already playing
	if (redFlash)
	{
		//Stop it from playing
		redFlash = false;
		//And return true
		return true;
	}
	//If not playing, do nothing, return false
	return false;
}

//This function 'damages' the player. It runs when the player interacts with an element that calls 'ApplyPointsDamage'
float AMBs_GameCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	//Player was just hurt, so they cannot be hurt for the next two seconds
	bCanBeDamaged = false;
	//Set the flash animation to run
	redFlash = true;
	//Update the helth bar (take away health)
	UpdateHealth(-DamageAmount);
	//Start the damage timer that gives them the two seconds
	DamageTimer();
	//Return the damage amount
	return DamageAmount;
}

//This is the function that is used to 'heal' the player
void AMBs_GameCharacter::UpdateHealth(float HealthChange)
{
	//Increase health
	Health += HealthChange;
	//Use clamp function to set middling value (smooth increase)
	Health = FMath::Clamp(Health, 0.0f, FullHealth);
	//Set what previous health was (health percentage not yet updated, so we can get the value from this
	//PreviousHealth = HealthPercentage;
	//Update current health percentage
	HealthPercentage = Health / FullHealth;
}

//Function to update magic values and start replenishing timeline 
void AMBs_GameCharacter::UpdateMagic()
{

	//Magic percentage has not been updated yet, so can supply the previous magic amount
	PreviousMagic = MagicPercentage;
	//Update magic percentage
	MagicPercentage = Magic / FullMagic;
	//Reset magic value
	MagicValue = 1.0f;
	//Start replenish timeline
	//Git varies here
	if(MyTimeline != nullptr)MyTimeline->PlayFromStart();
}

//Function when meter is starting over, ie player ran out of magic 
void AMBs_GameCharacter::SetMagicChange(float MagicChange)
{
	//Set to false as they cannot use magic right now
	bCanUseMagic = false;
	//Magic percentage has not been updated yet, so can supply the previous magic amount
	PreviousMagic = MagicPercentage;
	//Set current value of magic
	MagicValue = (MagicChange / FullMagic);
	//If gun overheat material can be accessed (is found)
	if (GunOverheatMaterial)
	{
		//Set it to gun to looked 'overheated'
		FP_Gun->SetMaterial(0, GunOverheatMaterial);
	}
	//Start over timeline
	if(MyTimeline !=nullptr)MyTimeline->PlayFromStart();
}



void AMBs_GameCharacter::OnFire()
{
	// try and fire a projectile
	//Projectile has been updated for 'magic' effect. Essentially it will look like the gun overheats when magic cannot be used.
	//I will probably not keep this for my game
	//BUT if the magic meter is not 0 and 'canFire' is true
	if (ProjectileClass != NULL && !FMath::IsNearlyZero(Magic, 0.001f) && bCanUseMagic)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AMBs_GameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				//const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				// Since the `WeaponSpawnLocation` is in camera space, we have to transform it to
				// world space before offsetting it from the character location to find the final
				// bullet spawn location.
				const FVector SpawnLocation = ((WeaponSpawnLocation != nullptr) ? WeaponSpawnLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);



				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// Spawn the BulletActor and pass the `Damage` value over to it.
				AWeapon* Weapon = World->SpawnActorDeferred<AWeapon>(AWeapon::StaticClass(), FTransform::Identity, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding);
				Weapon->WeaponHitDamage = WeaponDamage;
				UGameplayStatics::FinishSpawningActor(Weapon, FTransform(SpawnRotation, SpawnLocation, FVector(1.f, 1.f, 1.f)));


				//Old code
				// spawn the projectile at the muzzle
				//AMBs_GameProjectile* BulletActor = World->SpawnActor<AMBs_GameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
				// Spawn the BulletActor and pass the `Damage` value over to it.

				//BulletActor->Damage = WeaponDamage;
				//UGameplayStatics::FinishSpawningActor(BulletActor, FTransform(SpawnRotation, SpawnLocation, FVector(1.f, 1.f, 1.f)));


				// try and play the sound if specified
				if (FireSound != NULL)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}

				// try and play a firing animation if specified
				if (FireAnimation != NULL)
				{
					// Get the animation object for the arms mesh
					UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
					if (AnimInstance != NULL)
					{
						AnimInstance->Montage_Play(FireAnimation, 1.f);
					}
				}
				//Stop timeline when gun is fired
				if (MyTimeline != nullptr) MyTimeline->Stop();
				//Clear timer back to 0
				GetWorldTimerManager().ClearTimer(MagicTimerHandle);
				//Run function to update magic meter
				SetMagicChange(-20.0f);
				//REstart the replenish timer
				GetWorldTimerManager().SetTimer(MagicTimerHandle, this, &AMBs_GameCharacter::UpdateMagic, 5.0f, false);

			}
		}

	}
}

void AMBs_GameCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMBs_GameCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AMBs_GameCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AMBs_GameCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AMBs_GameCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMBs_GameCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMBs_GameCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMBs_GameCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AMBs_GameCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AMBs_GameCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AMBs_GameCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AMBs_GameCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}


//Defines the DisplayRaycast function, enables player to receives message of 
//what they are looking at and raycast
void  AMBs_GameCharacter::DisplayRaycast()
{
	//Instantiate a new FHitResult item and 
	//assign to variable to hold the result of what the raycast 'hits'
	FHitResult* HitResult = new FHitResult();
	//Instantiate a new FVector item and 
	//assign to variable to hold the result of the start of the trace (the players location)
	FVector StartTrace = FirstPersonCameraComponent->GetComponentLocation();
	//Instantiate a new FVector item and 
	//assign to variable to hold the vectors direction
	FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
	//Instantiate a new FVector item and 
	//assign to variable to hold the vectors ending location.
	//Which is it's direction, times a prescribed length (3319.f) plus the starting location
	FVector EndTrace = ((ForwardVector * 3319.f) + StartTrace);
	//Instantiate a new FCollisionQueryParams item and 
	//assign to variable to hold the result of the collison query
	FCollisionQueryParams* TraceParams = new FCollisionQueryParams();

	//Cast a raycast line in the world and visually display the raycast itself
	//and a text of the componenet struck by the line (if one is struck)
	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_Visibility, *TraceParams))
	{
		//Draw the visual raycast line
		//Adjusted floatLifetime so rays would not stay on screen
		DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor(255, 192, 203), 0.F, true);

		//Display the visual text message of component hit
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("You hit: %s"), *HitResult->Actor->GetName()));
	}
}

//The overloaded tick function used in opening door class 
//"OpenDoorTimelineCurve". It will draw a line trace every frame to check for a door
//If a door actor is 'hit' then it will set 'CurrenDoor' to the current actor and 
//display the 'E to open' image
void AMBs_GameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Connect 'MyTimeline' by binding each frame to a tick in deltaTime
	if (MyTimeline != nullptr) MyTimeline->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);
	//This is diff in git to, but again appears to work???

	//Hold hit result
	FHitResult Hit;
	//Udn camera vector to determine wghat player is working at
	FVector Start = FirstPersonCameraComponent->GetComponentLocation();
	//Get the forward vector
	FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
	//set point for forward vector
	FVector End = ((ForwardVector * 200.f) + Start);
	//Hold collison parameter results
	FCollisionQueryParams CollisionParams;

	//Draw a dbug line so while testing we can see the vector searching for door
	//DrawDebugLine(GetWorld(), Start, End, FColor::Yellow, false, 1, 0, 1);

	/*his is not currently working and causing th engine to crash repeatedly. 
	//If the line trace in the world, hits something, has a start and end point, the object is visibale
	//and has collison parameters
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, CollisionParams))
	{
		//If the collision is blocked (solid object)
		if (Hit.bBlockingHit)
		{
			//And if the hit actor is a member of the 'opening door' class
			if (Hit.GetActor()->GetClass()->IsChildOf(AOpenDoorTimelineCurve::StaticClass()))
			{
				//The infor widget is set based on it's name and set to visible
				InfoWidget->GetWidgetFromName("helpimage")->SetVisibility(ESlateVisibility::Visible);
				//The current door is the one being 'looked at' or hit
				CurrentDoor = Cast<AOpenDoorTimelineCurve>(Hit.GetActor());

			}
		}
	}

	//If none of those parameters are met, this isb not a door of the opening class and we do not want to display the "open with E" message
	else
	{
		//The widget is retrieved by name and set to invisible
		InfoWidget->GetWidgetFromName("helpimage")->SetVisibility(ESlateVisibility::Hidden);
		//The current door is null
		CurrentDoor = NULL;
	}
	*/
}
//Create the onAction function to respond to players 'E' press
//and open/close the doors
void AMBs_GameCharacter::OnAction()
{
	//If there is a current door being faced
	if (CurrentDoor)
	{
		//Toggle it
		CurrentDoor->ToggleDoor();
	}

}