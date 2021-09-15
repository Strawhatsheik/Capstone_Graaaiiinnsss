// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_HealthBar_generated_h
#error "HealthBar.generated.h already included, missing '#pragma once' in HealthBar.h"
#endif
#define MBS_GAME_HealthBar_generated_h

#define MBs_Game_Source_MBs_Game_HealthBar_h_17_RPC_WRAPPERS
#define MBs_Game_Source_MBs_Game_HealthBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MBs_Game_Source_MBs_Game_HealthBar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define MBs_Game_Source_MBs_Game_HealthBar_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define MBs_Game_Source_MBs_Game_HealthBar_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public:


#define MBs_Game_Source_MBs_Game_HealthBar_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar)


#define MBs_Game_Source_MBs_Game_HealthBar_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthBar() { return STRUCT_OFFSET(UHealthBar, HealthBar); } \
	FORCEINLINE static uint32 __PPO__CurrentHealthLabel() { return STRUCT_OFFSET(UHealthBar, CurrentHealthLabel); } \
	FORCEINLINE static uint32 __PPO__MaxHealthLabel() { return STRUCT_OFFSET(UHealthBar, MaxHealthLabel); }


#define MBs_Game_Source_MBs_Game_HealthBar_h_14_PROLOG
#define MBs_Game_Source_MBs_Game_HealthBar_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_INCLASS \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_HealthBar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_HealthBar_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class UHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_HealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
