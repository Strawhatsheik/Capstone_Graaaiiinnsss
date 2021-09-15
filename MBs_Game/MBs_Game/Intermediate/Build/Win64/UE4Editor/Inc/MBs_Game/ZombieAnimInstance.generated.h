// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_ZombieAnimInstance_generated_h
#error "ZombieAnimInstance.generated.h already included, missing '#pragma once' in ZombieAnimInstance.h"
#endif
#define MBS_GAME_ZombieAnimInstance_generated_h

#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAnimationProperties(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAnimationProperties(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZombieAnimInstance(); \
	friend struct Z_Construct_UClass_UZombieAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UZombieAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(UZombieAnimInstance)


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUZombieAnimInstance(); \
	friend struct Z_Construct_UClass_UZombieAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UZombieAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(UZombieAnimInstance)


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZombieAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZombieAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZombieAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZombieAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZombieAnimInstance(UZombieAnimInstance&&); \
	NO_API UZombieAnimInstance(const UZombieAnimInstance&); \
public:


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZombieAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZombieAnimInstance(UZombieAnimInstance&&); \
	NO_API UZombieAnimInstance(const UZombieAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZombieAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZombieAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZombieAnimInstance)


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_13_PROLOG
#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_INCLASS \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_ZombieAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class UZombieAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_ZombieAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
