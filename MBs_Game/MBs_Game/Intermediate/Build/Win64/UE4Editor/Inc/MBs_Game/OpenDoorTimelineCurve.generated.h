// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_OpenDoorTimelineCurve_generated_h
#error "OpenDoorTimelineCurve.generated.h already included, missing '#pragma once' in OpenDoorTimelineCurve.h"
#endif
#define MBS_GAME_OpenDoorTimelineCurve_generated_h

#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execControlDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ControlDoor(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execControlDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ControlDoor(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenDoorTimelineCurve(); \
	friend struct Z_Construct_UClass_AOpenDoorTimelineCurve_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorTimelineCurve, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorTimelineCurve)


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAOpenDoorTimelineCurve(); \
	friend struct Z_Construct_UClass_AOpenDoorTimelineCurve_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorTimelineCurve, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorTimelineCurve)


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenDoorTimelineCurve(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenDoorTimelineCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorTimelineCurve); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorTimelineCurve); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorTimelineCurve(AOpenDoorTimelineCurve&&); \
	NO_API AOpenDoorTimelineCurve(const AOpenDoorTimelineCurve&); \
public:


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorTimelineCurve(AOpenDoorTimelineCurve&&); \
	NO_API AOpenDoorTimelineCurve(const AOpenDoorTimelineCurve&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorTimelineCurve); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorTimelineCurve); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenDoorTimelineCurve)


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_11_PROLOG
#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_INCLASS \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AOpenDoorTimelineCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_OpenDoorTimelineCurve_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
