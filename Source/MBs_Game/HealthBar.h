// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AICharacter.h"//The class the bar will be used on
#include"Zombie_Cow.h"//Another class this will be used on
#include "HealthBar.generated.h"

/**
 * 
 */
UCLASS(Abstract)//Class abstract because it is Blueprint only, does not need to be selected
class MBS_GAME_API UHealthBar : public UUserWidget
{
	GENERATED_BODY()
	
	//Class properties, accessible by Blueprint
	//Using meta and 'BindWidget' will bind these properties to the widget as children
	
protected:
	//Overloaded tick function to keep track of bar
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//Create an object pointer that will reference the owner of the health bar
	//WeakObjectPtr is good for this section because it's actor CAN be destroyed.
	TWeakObjectPtr<AZombie_Cow>OwnerOfBar;

	//A progress bar to display health
	UPROPERTY(meta = (BindWidget))
		class UProgressBar* HealthBar;
	//Text block to display current health
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* CurrentHealthLabel;
	//Text block to display max health
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* MaxHealthLabel;

//The following are for the health bar functionality
public:
	//This function sets the owner of the bar to an AI character
	void SetOwnerActor(AZombie_Cow* InActor) { OwnerOfBar = InActor; }
	//Overloaded version
	//This function sets the owner of the bar to an AI character
//	void SetOwnerActor(AZombie_Cow* InActor) { OwnerOfBar = InActor; }


};
