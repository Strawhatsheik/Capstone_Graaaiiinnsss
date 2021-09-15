// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_Zombie_Cow_generated_h
#error "Zombie_Cow.generated.h already included, missing '#pragma once' in Zombie_Cow.h"
#endif
#define MBS_GAME_Zombie_Cow_generated_h

#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_RPC_WRAPPERS
#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie_Cow(); \
	friend struct Z_Construct_UClass_AZombie_Cow_Statics; \
public: \
	DECLARE_CLASS(AZombie_Cow, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AZombie_Cow)


#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAZombie_Cow(); \
	friend struct Z_Construct_UClass_AZombie_Cow_Statics; \
public: \
	DECLARE_CLASS(AZombie_Cow, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AZombie_Cow)


#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie_Cow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie_Cow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie_Cow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie_Cow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie_Cow(AZombie_Cow&&); \
	NO_API AZombie_Cow(const AZombie_Cow&); \
public:


#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie_Cow(AZombie_Cow&&); \
	NO_API AZombie_Cow(const AZombie_Cow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie_Cow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie_Cow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie_Cow)


#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthWidgetComp() { return STRUCT_OFFSET(AZombie_Cow, HealthWidgetComp); }


#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_23_PROLOG
#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_INCLASS \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_Zombie_Cow_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AZombie_Cow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_Zombie_Cow_h


#define FOREACH_ENUM_ZOMBIESTATES(op) \
	op(ZombieStates::IDLE) \
	op(ZombieStates::ROAM) \
	op(ZombieStates::CHASE) \
	op(ZombieStates::ATTACK) \
	op(ZombieStates::DEAD) 

enum class ZombieStates : uint8;
template<> MBS_GAME_API UEnum* StaticEnum<ZombieStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
