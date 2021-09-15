// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_MBs_GameHUD_generated_h
#error "MBs_GameHUD.generated.h already included, missing '#pragma once' in MBs_GameHUD.h"
#endif
#define MBS_GAME_MBs_GameHUD_generated_h

#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_RPC_WRAPPERS
#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMBs_GameHUD(); \
	friend struct Z_Construct_UClass_AMBs_GameHUD_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMBs_GameHUD)


#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMBs_GameHUD(); \
	friend struct Z_Construct_UClass_AMBs_GameHUD_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMBs_GameHUD)


#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMBs_GameHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMBs_GameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMBs_GameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMBs_GameHUD(AMBs_GameHUD&&); \
	NO_API AMBs_GameHUD(const AMBs_GameHUD&); \
public:


#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMBs_GameHUD(AMBs_GameHUD&&); \
	NO_API AMBs_GameHUD(const AMBs_GameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMBs_GameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMBs_GameHUD)


#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(AMBs_GameHUD, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMBs_GameHUD, CurrentWidget); }


#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_9_PROLOG
#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_INCLASS \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AMBs_GameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_MBs_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
