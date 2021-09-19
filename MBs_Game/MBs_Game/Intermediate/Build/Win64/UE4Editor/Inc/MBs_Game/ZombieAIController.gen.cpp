// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/ZombieAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAIController() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_AZombieAIController_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AZombieAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AZombie_Cow_NoRegister();
// End Cross Module References
	void AZombieAIController::StaticRegisterNativesAZombieAIController()
	{
		UClass* Class = AZombieAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentEnterDamageCollider", &AZombieAIController::execOnComponentEnterDamageCollider },
			{ "OnComponentLeaveDamageCollider", &AZombieAIController::execOnComponentLeaveDamageCollider },
			{ "OnTargetPerceptionUpdate", &AZombieAIController::execOnTargetPerceptionUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics
	{
		struct ZombieAIController_eventOnComponentEnterDamageCollider_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentEnterDamageCollider_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ZombieAIController_eventOnComponentEnterDamageCollider_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZombieAIController_eventOnComponentEnterDamageCollider_Parms), &Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentEnterDamageCollider_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentEnterDamageCollider_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentEnterDamageCollider_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentEnterDamageCollider_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "Called when an actor enters the ZombieCharacter's DamageCollider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "OnComponentEnterDamageCollider", sizeof(ZombieAIController_eventOnComponentEnterDamageCollider_Parms), Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics
	{
		struct ZombieAIController_eventOnComponentLeaveDamageCollider_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentLeaveDamageCollider_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentLeaveDamageCollider_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentLeaveDamageCollider_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnComponentLeaveDamageCollider_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "Called when an actor leaves the ZombieCharacter's DamageCollider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "OnComponentLeaveDamageCollider", sizeof(ZombieAIController_eventOnComponentLeaveDamageCollider_Parms), Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics
	{
		struct ZombieAIController_eventOnTargetPerceptionUpdate_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnTargetPerceptionUpdate_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnTargetPerceptionUpdate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "Called when the AIController's perception is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "OnTargetPerceptionUpdate", sizeof(ZombieAIController_eventOnTargetPerceptionUpdate_Parms), Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombieAIController_NoRegister()
	{
		return AZombieAIController::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CowDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CowDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CowHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CowHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieSightMaxAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZombieSightMaxAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieLoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZombieLoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZombieSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieSight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombiePerception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombiePerception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zombie_Cow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Zombie_Cow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieAIController_OnComponentEnterDamageCollider, "OnComponentEnterDamageCollider" }, // 3483854940
		{ &Z_Construct_UFunction_AZombieAIController_OnComponentLeaveDamageCollider, "OnComponentLeaveDamageCollider" }, // 1496960987
		{ &Z_Construct_UFunction_AZombieAIController_OnTargetPerceptionUpdate, "OnTargetPerceptionUpdate" }, // 417221974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombieAIController.h" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "* The ZombieAIController is the AIController that manages the states and movement\nof the ZombieCharacter." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowDamageType_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "Property to handle damage and type of damage applied to player if attacked" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowDamageType = { "CowDamageType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, CowDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowHit_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "Property to hold hit result when attacking" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowHit = { "CowHit", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, CowHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_RoamDelay_MetaData[] = {
		{ "Category", "RoamState" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The amount of time to pause in between `Roam` calls." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_RoamDelay = { "RoamDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, RoamDelay), METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_RoamDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_RoamDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightMaxAge_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The amount of time that the ZombieCharacter will remember the PlayerCharacter after\nseeing them." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightMaxAge = { "ZombieSightMaxAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, ZombieSightMaxAge), METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightMaxAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightMaxAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieLoseSightRadius_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The radius around the ZombieCharacter which they'll lose sight of the PlayerCharacter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieLoseSightRadius = { "ZombieLoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, ZombieLoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieLoseSightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieLoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightRadius_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The radius around the ZombieCharacter that the PlayerCharacter will be sensed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightRadius = { "ZombieSightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, ZombieSightRadius), METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSight_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The ZombieCharacter's sight sense component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSight = { "ZombieSight", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, ZombieSight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombiePerception_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The ZombieCharacter's perception component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombiePerception = { "ZombiePerception", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, ZombiePerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombiePerception_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombiePerception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp_Zombie_Cow_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
		{ "ToolTip", "The ZombieCharacter that the ZombieAIController is controlling." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_Zombie_Cow = { "Zombie_Cow", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, Zombie_Cow), Z_Construct_UClass_AZombie_Cow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp_Zombie_Cow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp_Zombie_Cow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_CowHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_RoamDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightMaxAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieLoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombieSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_ZombiePerception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_Zombie_Cow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAIController_Statics::ClassParams = {
		&AZombieAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombieAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAIController, 2862995142);
	template<> MBS_GAME_API UClass* StaticClass<AZombieAIController>()
	{
		return AZombieAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAIController(Z_Construct_UClass_AZombieAIController, &AZombieAIController::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AZombieAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
