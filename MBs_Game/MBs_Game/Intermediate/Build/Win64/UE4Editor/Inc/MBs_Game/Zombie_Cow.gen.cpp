// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/Zombie_Cow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie_Cow() {}
// Cross Module References
	MBS_GAME_API UEnum* Z_Construct_UEnum_MBs_Game_ZombieStates();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
	MBS_GAME_API UClass* Z_Construct_UClass_AZombie_Cow_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AZombie_Cow();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ZombieStates_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MBs_Game_ZombieStates, Z_Construct_UPackage__Script_MBs_Game(), TEXT("ZombieStates"));
		}
		return Singleton;
	}
	template<> MBS_GAME_API UEnum* StaticEnum<ZombieStates>()
	{
		return ZombieStates_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ZombieStates(ZombieStates_StaticEnum, TEXT("/Script/MBs_Game"), TEXT("ZombieStates"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MBs_Game_ZombieStates_Hash() { return 4008928940U; }
	UEnum* Z_Construct_UEnum_MBs_Game_ZombieStates()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MBs_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ZombieStates"), 0, Get_Z_Construct_UEnum_MBs_Game_ZombieStates_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ZombieStates::IDLE", (int64)ZombieStates::IDLE },
				{ "ZombieStates::ROAM", (int64)ZombieStates::ROAM },
				{ "ZombieStates::CHASE", (int64)ZombieStates::CHASE },
				{ "ZombieStates::ATTACK", (int64)ZombieStates::ATTACK },
				{ "ZombieStates::DEAD", (int64)ZombieStates::DEAD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ATTACK.DisplayName", "ATTACK" },
				{ "BlueprintType", "true" },
				{ "CHASE.DisplayName", "CHASE" },
				{ "DEAD.DisplayName", "DEAD" },
				{ "IDLE.DisplayName", "IDLE" },
				{ "ModuleRelativePath", "Zombie_Cow.h" },
				{ "ROAM.DisplayName", "ROAM" },
				{ "ToolTip", "The states that the ZombieCharacter can be in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MBs_Game,
				nullptr,
				"ZombieStates",
				"ZombieStates",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AZombie_Cow::StaticRegisterNativesAZombie_Cow()
	{
	}
	UClass* Z_Construct_UClass_AZombie_Cow_NoRegister()
	{
		return AZombie_Cow::StaticClass();
	}
	struct Z_Construct_UClass_AZombie_Cow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthWidgetComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsAfterDeathBeforeDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsAfterDeathBeforeDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DyingAnimationLengthInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DyingAnimationLengthInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterChaseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AfterChaseDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRoam_MetaData[];
#endif
		static void NewProp_bCanRoam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRoam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieDamageCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieDamageCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombie_Cow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zombie_Cow.h" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The zombie cow who will roam, chase, attack, die, and try to eat the hay" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_HealthWidgetComp_MetaData[] = {
		{ "Category", "Zombie_Cow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The following are for the health bar widget\nSets the widget as a property, editable in details bar" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_HealthWidgetComp = { "HealthWidgetComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, HealthWidgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_HealthWidgetComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_HealthWidgetComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_SecondsAfterDeathBeforeDestroy_MetaData[] = {
		{ "Category", "DyingState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The amount of time after the ZombieCharacter dies that they will destroy. A value\nof 0 means that the ZombieCharacter will be destroyed immediately after the dying\nanimation plays. A value below 0 means that the ZombieCharacter will never be destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_SecondsAfterDeathBeforeDestroy = { "SecondsAfterDeathBeforeDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, SecondsAfterDeathBeforeDestroy), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_SecondsAfterDeathBeforeDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_SecondsAfterDeathBeforeDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_DyingAnimationLengthInSeconds_MetaData[] = {
		{ "Category", "DyingState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The amount of seconds long that the zombie dying animation is. This is used with\nthe `SecondsAfterDeathBeforeDestroy` variable to make sure that the dying animation\nplays out fully before the ZombieCharacter is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_DyingAnimationLengthInSeconds = { "DyingAnimationLengthInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, DyingAnimationLengthInSeconds), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_DyingAnimationLengthInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_DyingAnimationLengthInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_AfterChaseDelay_MetaData[] = {
		{ "Category", "ChaseState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The amount of delay after a chase after which the ZombieCharacter will\nresume to roam. This is to help break up an awkward transition from chasing\nstraight back to roaming." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_AfterChaseDelay = { "AfterChaseDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, AfterChaseDelay), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_AfterChaseDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_AfterChaseDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ChaseSpeed_MetaData[] = {
		{ "Category", "ChaseState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The max speed of the ZombieCharacter in the CHASE state." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ChaseSpeed = { "ChaseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, ChaseSpeed), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ChaseSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ChaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamDelay_MetaData[] = {
		{ "Category", "RoamState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The amount of time to pause in between `Roam` calls. If set to 0 there will\nbe no delay." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamDelay = { "RoamDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, RoamDelay), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamRadius_MetaData[] = {
		{ "Category", "RoamState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The max range around its spawn point that the ZombieCharacter can roam." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamRadius = { "RoamRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, RoamRadius), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamSpeed_MetaData[] = {
		{ "Category", "RoamState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The max speed of the ZombieCharacter in the ROAM state." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamSpeed = { "RoamSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, RoamSpeed), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam_MetaData[] = {
		{ "Category", "RoamState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "Indicates whether the ZombieCharacter should be able to roam or not." },
	};
#endif
	void Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam_SetBit(void* Obj)
	{
		((AZombie_Cow*)Obj)->bCanRoam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam = { "bCanRoam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AZombie_Cow), &Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "RoamState" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The starting location of the ZombieCharacter, used when roaming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_StartLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The amount of health the ZombieCharacter has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, Health), METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The previous state of the ZombieCharacter." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, PreviousState), Z_Construct_UEnum_MBs_Game_ZombieStates, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The current state of the ZombieCharacter." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, State), Z_Construct_UEnum_MBs_Game_ZombieStates, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieDamageCollider_MetaData[] = {
		{ "Category", "Zombie_Cow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "When the ZombieCharacter attacks we check to see if the PlayerCharacter\nis inside of this collider." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieDamageCollider = { "ZombieDamageCollider", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, ZombieDamageCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieDamageCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieDamageCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieSkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie_Cow.h" },
		{ "ToolTip", "The skeletal mesh of the ZombieCharacter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieSkeletalMesh = { "ZombieSkeletalMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombie_Cow, ZombieSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombie_Cow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_HealthWidgetComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_SecondsAfterDeathBeforeDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_DyingAnimationLengthInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_AfterChaseDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ChaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_RoamSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_bCanRoam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_PreviousState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieDamageCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Cow_Statics::NewProp_ZombieSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombie_Cow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombie_Cow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombie_Cow_Statics::ClassParams = {
		&AZombie_Cow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombie_Cow_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AZombie_Cow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombie_Cow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombie_Cow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombie_Cow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombie_Cow, 3627812003);
	template<> MBS_GAME_API UClass* StaticClass<AZombie_Cow>()
	{
		return AZombie_Cow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie_Cow(Z_Construct_UClass_AZombie_Cow, &AZombie_Cow::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AZombie_Cow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie_Cow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
