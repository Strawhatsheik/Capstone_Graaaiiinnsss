// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/MBs_GameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBs_GameCharacter() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_AMBs_GameCharacter_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AMBs_GameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetHealth();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetMagic();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MBS_GAME_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AMBs_GameProjectile_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMBs_GameCharacter::StaticRegisterNativesAMBs_GameCharacter()
	{
		UClass* Class = AMBs_GameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTimer", &AMBs_GameCharacter::execDamageTimer },
			{ "GetHealth", &AMBs_GameCharacter::execGetHealth },
			{ "GetHealthIntText", &AMBs_GameCharacter::execGetHealthIntText },
			{ "GetMagic", &AMBs_GameCharacter::execGetMagic },
			{ "GetMagicIntText", &AMBs_GameCharacter::execGetMagicIntText },
			{ "PlayFlash", &AMBs_GameCharacter::execPlayFlash },
			{ "SetDamageState", &AMBs_GameCharacter::execSetDamageState },
			{ "SetMagicChange", &AMBs_GameCharacter::execSetMagicChange },
			{ "SetMagicState", &AMBs_GameCharacter::execSetMagicState },
			{ "SetMagicValue", &AMBs_GameCharacter::execSetMagicValue },
			{ "UpdateHealth", &AMBs_GameCharacter::execUpdateHealth },
			{ "UpdateMagic", &AMBs_GameCharacter::execUpdateMagic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Timer to keep track of damge  (for healing)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "DamageTimer", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics
	{
		struct MBs_GameCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MBs_GameCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Retrieve current health status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "GetHealth", sizeof(MBs_GameCharacter_eventGetHealth_Parms), Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics
	{
		struct MBs_GameCharacter_eventGetHealthIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MBs_GameCharacter_eventGetHealthIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Get the health text (to be displayed)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "GetHealthIntText", sizeof(MBs_GameCharacter_eventGetHealthIntText_Parms), Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics
	{
		struct MBs_GameCharacter_eventGetMagic_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MBs_GameCharacter_eventGetMagic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Retrieve current Magic status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "GetMagic", sizeof(MBs_GameCharacter_eventGetMagic_Parms), Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_GetMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics
	{
		struct MBs_GameCharacter_eventGetMagicIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MBs_GameCharacter_eventGetMagicIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Get the magic text (to be displayed)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "GetMagicIntText", sizeof(MBs_GameCharacter_eventGetMagicIntText_Parms), Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics
	{
		struct MBs_GameCharacter_eventPlayFlash_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MBs_GameCharacter_eventPlayFlash_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MBs_GameCharacter_eventPlayFlash_Parms), &Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The following are still for health/magic/HUD, but  are used to play the damaged 'flash'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "PlayFlash", sizeof(MBs_GameCharacter_eventPlayFlash_Parms), Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Sets the damage state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "SetDamageState", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics
	{
		struct MBs_GameCharacter_eventSetMagicChange_Parms
		{
			float MagicChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::NewProp_MagicChange = { "MagicChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MBs_GameCharacter_eventSetMagicChange_Parms, MagicChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::NewProp_MagicChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Sets the change in magic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "SetMagicChange", sizeof(MBs_GameCharacter_eventSetMagicChange_Parms), Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Sets the magic's current state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "SetMagicState", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Sets the magic's current value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "SetMagicValue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics
	{
		struct MBs_GameCharacter_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::NewProp_HealthChange = { "HealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MBs_GameCharacter_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::NewProp_HealthChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Update players health amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "UpdateHealth", sizeof(MBs_GameCharacter_eventUpdateHealth_Parms), Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Update players magic amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMBs_GameCharacter, nullptr, "UpdateMagic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMBs_GameCharacter_NoRegister()
	{
		return AMBs_GameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMBs_GameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOverheatMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunOverheatMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagicCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redFlash_MetaData[];
#endif
		static void NewProp_redFlash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_redFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HelpWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStimuliSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStimuliSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMBs_GameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMBs_GameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMBs_GameCharacter_DamageTimer, "DamageTimer" }, // 157215504
		{ &Z_Construct_UFunction_AMBs_GameCharacter_GetHealth, "GetHealth" }, // 572066045
		{ &Z_Construct_UFunction_AMBs_GameCharacter_GetHealthIntText, "GetHealthIntText" }, // 1437409034
		{ &Z_Construct_UFunction_AMBs_GameCharacter_GetMagic, "GetMagic" }, // 2520414041
		{ &Z_Construct_UFunction_AMBs_GameCharacter_GetMagicIntText, "GetMagicIntText" }, // 3588955028
		{ &Z_Construct_UFunction_AMBs_GameCharacter_PlayFlash, "PlayFlash" }, // 321969171
		{ &Z_Construct_UFunction_AMBs_GameCharacter_SetDamageState, "SetDamageState" }, // 4247047028
		{ &Z_Construct_UFunction_AMBs_GameCharacter_SetMagicChange, "SetMagicChange" }, // 1711025452
		{ &Z_Construct_UFunction_AMBs_GameCharacter_SetMagicState, "SetMagicState" }, // 2840702424
		{ &Z_Construct_UFunction_AMBs_GameCharacter_SetMagicValue, "SetMagicValue" }, // 112708266
		{ &Z_Construct_UFunction_AMBs_GameCharacter_UpdateHealth, "UpdateHealth" }, // 1534842054
		{ &Z_Construct_UFunction_AMBs_GameCharacter_UpdateMagic, "UpdateMagic" }, // 4087340284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MBs_GameCharacter.h" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOverheatMaterial_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOverheatMaterial = { "GunOverheatMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, GunOverheatMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOverheatMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOverheatMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunDefaultMaterial_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The following two properties cause the gun to change materieals to simulated the flash" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunDefaultMaterial = { "GunDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, GunDefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunDefaultMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicCurve_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "A curve for the magic" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicCurve = { "MagicCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, MagicCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "A redflash (to show damage)" },
	};
#endif
	void Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash_SetBit(void* Obj)
	{
		((AMBs_GameCharacter*)Obj)->redFlash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash = { "redFlash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMBs_GameCharacter), &Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicValue_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicValue = { "MagicValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, MagicValue), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousMagic = { "PreviousMagic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, PreviousMagic), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousMagic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicPercentage_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicPercentage = { "MagicPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, MagicPercentage), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Magic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, Magic), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Magic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Magic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullMagic_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Magic properties may not be implemented in my game, or may be converted to something else" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullMagic = { "FullMagic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FullMagic), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullMagic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "What health was previously (example: after player takes damage)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, PreviousHealth), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The percentage of current health out of full health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HealthPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The current Health amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The full health amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullHealth = { "FullHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FullHealth), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_InfoWidget_MetaData[] = {
		{ "Category", "MBs_GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Add widget to details panel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_InfoWidget = { "InfoWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, InfoWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_InfoWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_InfoWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HelpWidgetClass_MetaData[] = {
		{ "Category", "MBs_GameCharacter" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Rference the UMG asset for use in o[pening the door in 'OpenDoorTimelineCurve\" class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HelpWidgetClass = { "HelpWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, HelpWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HelpWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HelpWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_CurrentDoor_MetaData[] = {
		{ "Category", "MBs_GameCharacter" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Declare the float curve to use in the OpenDoorTimelineCurve class\nWhich is used to smooth door opening" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_CurrentDoor = { "CurrentDoor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, CurrentDoor), Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_CurrentDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_CurrentDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AMBs_GameCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMBs_GameCharacter), &Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, ProjectileClass), Z_Construct_UClass_AMBs_GameProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The amount of damage each shot of the PlayerCharacter's gun does." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, WeaponDamage), METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PlayerStimuliSource_MetaData[] = {
		{ "Category", "MBs_GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Used to register sense for the PlayerCharacter that are detectable by the ZombieCharacter.\nMake 'visibleefaultsOnly' so only visible for instance sand not editable" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PlayerStimuliSource = { "PlayerStimuliSource", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, PlayerStimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PlayerStimuliSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PlayerStimuliSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MBs_GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_L_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MBs_GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_R_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "The gun's offset from the PlayerCharacter's location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponSpawnLocation_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "For the modified projectile\n The location on the gun where the BulletActors should spawn from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponSpawnLocation = { "WeaponSpawnLocation", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, WeaponSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponSpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MBs_GameCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMBs_GameCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMBs_GameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOverheatMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_redFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_MagicPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Magic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PreviousHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FullHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_InfoWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_HelpWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_CurrentDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_PlayerStimuliSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_WeaponSpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMBs_GameCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMBs_GameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMBs_GameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMBs_GameCharacter_Statics::ClassParams = {
		&AMBs_GameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMBs_GameCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMBs_GameCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMBs_GameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMBs_GameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMBs_GameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMBs_GameCharacter, 1410804587);
	template<> MBS_GAME_API UClass* StaticClass<AMBs_GameCharacter>()
	{
		return AMBs_GameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMBs_GameCharacter(Z_Construct_UClass_AMBs_GameCharacter, &AMBs_GameCharacter::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AMBs_GameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMBs_GameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
