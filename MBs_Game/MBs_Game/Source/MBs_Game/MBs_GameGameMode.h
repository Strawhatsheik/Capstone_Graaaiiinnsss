// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MBs_GameCharacter.h"//Include access to character
#include "MBs_GameGameMode.generated.h"


class AMBs_GameCharacter;

//enum to store current state of gameplay, whether playing, charcter dead and game is over, etc.
UENUM()
enum class EGamePlayState
{
	EPlaying,
	EGameOver,
	EUnknown
};

UCLASS(minimalapi)
class AMBs_GameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMBs_GameGameMode();


	//On begin of play
	virtual void BeginPlay() override;

	//Override tick fun ction as game needs to constantly check if player is 'alive'
	virtual void Tick(float DeltaTime) override;

	//Apply to the player charcter
	AMBs_GameCharacter* MyCharacter;

	//Function to retriev ethe curent playing state
	UFUNCTION(BlueprintPure, Category = "Health")
		EGamePlayState GetCurrentState() const;

	//Function to set the current playing state
	void SetCurrentState(EGamePlayState NewState);

	//Properties to create widget

	//Make it a HUD widget type
	UPROPERTY(EditAnywhere, Category = "Health")
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	//Make it the current widget
	UPROPERTY(EditAnywhere, Category = "Health")
		class UUserWidget* CurrentWidget;

private:
	//The enum we created to keep track of what the current playing state is
	EGamePlayState CurrentState;

	//Handler for functions effecting the current playing state
	void HandleNewState(EGamePlayState NewState);
	
	//To hold levelname
	FString LevelName;
protected:
	//Timers to handle counting down for level
	FTimerHandle TimerHandleClock;

	//Timer function to countdown and endgame
//	void EndClock();
	
		
};





