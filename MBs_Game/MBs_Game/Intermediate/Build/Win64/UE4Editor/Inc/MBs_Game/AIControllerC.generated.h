// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_AIControllerC_generated_h
#error "AIControllerC.generated.h already included, missing '#pragma once' in AIControllerC.h"
#endif
#define MBS_GAME_AIControllerC_generated_h

#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_RPC_WRAPPERS
#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIControllerC(); \
	friend struct Z_Construct_UClass_AAIControllerC_Statics; \
public: \
	DECLARE_CLASS(AAIControllerC, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AAIControllerC)


#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAIControllerC(); \
	friend struct Z_Construct_UClass_AAIControllerC_Statics; \
public: \
	DECLARE_CLASS(AAIControllerC, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AAIControllerC)


#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIControllerC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIControllerC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIControllerC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIControllerC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIControllerC(AAIControllerC&&); \
	NO_API AAIControllerC(const AAIControllerC&); \
public:


#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIControllerC(AAIControllerC&&); \
	NO_API AAIControllerC(const AAIControllerC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIControllerC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIControllerC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIControllerC)


#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_AIControllerC_h_14_PROLOG
#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_INCLASS \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_AIControllerC_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_AIControllerC_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AAIControllerC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_AIControllerC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
