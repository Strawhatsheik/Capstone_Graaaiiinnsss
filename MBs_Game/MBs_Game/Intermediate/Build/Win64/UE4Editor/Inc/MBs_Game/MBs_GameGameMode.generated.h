// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlayState : int32;
#ifdef MBS_GAME_MBs_GameGameMode_generated_h
#error "MBs_GameGameMode.generated.h already included, missing '#pragma once' in MBs_GameGameMode.h"
#endif
#define MBS_GAME_MBs_GameGameMode_generated_h

#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMBs_GameGameMode(); \
	friend struct Z_Construct_UClass_AMBs_GameGameMode_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MBs_Game"), MBS_GAME_API) \
	DECLARE_SERIALIZER(AMBs_GameGameMode)


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAMBs_GameGameMode(); \
	friend struct Z_Construct_UClass_AMBs_GameGameMode_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MBs_Game"), MBS_GAME_API) \
	DECLARE_SERIALIZER(AMBs_GameGameMode)


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MBS_GAME_API AMBs_GameGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMBs_GameGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MBS_GAME_API, AMBs_GameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MBS_GAME_API AMBs_GameGameMode(AMBs_GameGameMode&&); \
	MBS_GAME_API AMBs_GameGameMode(const AMBs_GameGameMode&); \
public:


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MBS_GAME_API AMBs_GameGameMode(AMBs_GameGameMode&&); \
	MBS_GAME_API AMBs_GameGameMode(const AMBs_GameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MBS_GAME_API, AMBs_GameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMBs_GameGameMode)


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_22_PROLOG
#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_INCLASS \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AMBs_GameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_MBs_GameGameMode_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGamePlayState::EPlaying) \
	op(EGamePlayState::EGameOver) \
	op(EGamePlayState::EUnknown) 

enum class EGamePlayState;
template<> MBS_GAME_API UEnum* StaticEnum<EGamePlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
