// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MBS_GAME_LightSwitchTrigger_generated_h
#error "LightSwitchTrigger.generated.h already included, missing '#pragma once' in LightSwitchTrigger.h"
#endif
#define MBS_GAME_LightSwitchTrigger_generated_h

#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitchTrigger(); \
	friend struct Z_Construct_UClass_ALightSwitchTrigger_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchTrigger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchTrigger)


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitchTrigger(); \
	friend struct Z_Construct_UClass_ALightSwitchTrigger_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchTrigger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchTrigger)


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitchTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitchTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchTrigger(ALightSwitchTrigger&&); \
	NO_API ALightSwitchTrigger(const ALightSwitchTrigger&); \
public:


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchTrigger(ALightSwitchTrigger&&); \
	NO_API ALightSwitchTrigger(const ALightSwitchTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitchTrigger)


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_9_PROLOG
#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_INCLASS \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_LightSwitchTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class ALightSwitchTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_LightSwitchTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
