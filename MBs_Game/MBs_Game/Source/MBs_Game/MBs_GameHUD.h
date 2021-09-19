// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MBs_GameHUD.generated.h"

UCLASS()
class AMBs_GameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMBs_GameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;
	
	//Override beginPlay because we want the HUD to be drwn at beginning of play
	virtual void BeginPlay() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;
	//Hods current name
	FString LevelName;


//Properties to be used to display users health and magic
	
	UPROPERTY(EditAnywhere, Category = "Health")
		TSubclassOf<class UUserWidget> HUDWidgetClass;
	
	UPROPERTY(EditAnywhere, Category = "Health")
		class UUserWidget* CurrentWidget;
};

