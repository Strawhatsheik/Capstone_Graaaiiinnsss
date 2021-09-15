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
struct FVector;
struct FHitResult;
#ifdef MBS_GAME_OnComponentHit_generated_h
#error "OnComponentHit.generated.h already included, missing '#pragma once' in OnComponentHit.h"
#endif
#define MBS_GAME_OnComponentHit_generated_h

#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnComponentHit(); \
	friend struct Z_Construct_UClass_AOnComponentHit_Statics; \
public: \
	DECLARE_CLASS(AOnComponentHit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AOnComponentHit)


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAOnComponentHit(); \
	friend struct Z_Construct_UClass_AOnComponentHit_Statics; \
public: \
	DECLARE_CLASS(AOnComponentHit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AOnComponentHit)


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnComponentHit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnComponentHit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnComponentHit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnComponentHit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnComponentHit(AOnComponentHit&&); \
	NO_API AOnComponentHit(const AOnComponentHit&); \
public:


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnComponentHit(AOnComponentHit&&); \
	NO_API AOnComponentHit(const AOnComponentHit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnComponentHit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnComponentHit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOnComponentHit)


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_OnComponentHit_h_10_PROLOG
#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_INCLASS \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_OnComponentHit_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_OnComponentHit_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AOnComponentHit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_OnComponentHit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
