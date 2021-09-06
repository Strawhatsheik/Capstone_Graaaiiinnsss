// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MBs_GameGameMode.h"
#include "MBs_GameHUD.h"
#include "Kismet/GameplayStatics.h" //Include gampeplay statics
#include "Engine/World.h"//Include engine basics
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "MBs_GameCharacter.h"

AMBs_GameGameMode::AMBs_GameGameMode()
	: Super()
{
	//Use tick function to check players health, if above 0 game continues, if below it will be restarted
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;


	static ConstructorHelpers::FClassFinder<UUserWidget> HealthBar(TEXT("/Game/FirstPerson/UI/Health_UI"));
	// use our custom HUD class
	HUDClass = AMBs_GameHUD::StaticClass();

	// add Health Bar UI to viewport
	if (HUDClass != nullptr)//If HUD class is NOT null
	{
		//Create current wiget of HUD class type
		//CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		//If current widget was created succesfully
		if (CurrentWidget)
		{
			//Add it to viewport
			CurrentWidget->AddToViewport();
		}
	
	}

}

//Function for when game begins playing to set current gameplay state and retrieve player character
void AMBs_GameGameMode::BeginPlay()
{
	//On begin play
	Super::BeginPlay();
	//Set state to currently playing
	SetCurrentState(EGamePlayState::EPlaying);
	//Retrieve player character
	MyCharacter = Cast<AMBs_GameCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
}

//The function that uses the tick function to check players health and continue/restart game
void AMBs_GameGameMode::Tick(float DeltaTime)
{
	//The overridden tick function
	Super::Tick(DeltaTime);
	//Get the level
	GetWorld()->GetMapName();

	//Cast to character and if successful
	if (MyCharacter)
	{
		//If health is essentially 0
		if (FMath::IsNearlyZero(MyCharacter->GetHealth(), 0.001f))
		{
			//change game state to game over
			SetCurrentState(EGamePlayState::EGameOver);
		}
	}
}

//Constant to hold and return the current game state enum
EGamePlayState AMBs_GameGameMode::GetCurrentState() const
{
	//Retriev ecurrent gamestate
	return CurrentState;
}

//Function to handle the changing of gamestates
void AMBs_GameGameMode::SetCurrentState(EGamePlayState NewState)
{
	//Set the current state to the new state
	CurrentState = NewState;
	//Pass current state to handler for change
	HandleNewState(CurrentState);
}

//Function to be handler for changing gamestates
void AMBs_GameGameMode::HandleNewState(EGamePlayState NewState)
{
	//Switch statement which compares the newstate to current state and adjusts accordingly
	switch (NewState)
	{
	//If playing
	case EGamePlayState::EPlaying:
	{
		// do nothing
	}
	break;
	//If player has died
	case EGamePlayState::EGameOver:
	{
		//Restart the level
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
	break;
	// Unknown/default state (handle for exceptions)
	default:
	case EGamePlayState::EUnknown:
	{
		// do nothing
	}
	break;
	}
}