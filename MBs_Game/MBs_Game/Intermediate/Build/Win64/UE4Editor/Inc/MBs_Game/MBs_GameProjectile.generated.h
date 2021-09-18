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
#ifdef MBS_GAME_MBs_GameProjectile_generated_h
#error "MBs_GameProjectile.generated.h already included, missing '#pragma once' in MBs_GameProjectile.h"
#endif
#define MBS_GAME_MBs_GameProjectile_generated_h

#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMBs_GameProjectile(); \
	friend struct Z_Construct_UClass_AMBs_GameProjectile_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMBs_GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMBs_GameProjectile(); \
	friend struct Z_Construct_UClass_AMBs_GameProjectile_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMBs_GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMBs_GameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMBs_GameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMBs_GameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMBs_GameProjectile(AMBs_GameProjectile&&); \
	NO_API AMBs_GameProjectile(const AMBs_GameProjectile&); \
public:


#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMBs_GameProjectile(AMBs_GameProjectile&&); \
	NO_API AMBs_GameProjectile(const AMBs_GameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMBs_GameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMBs_GameProjectile)


#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMBs_GameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMBs_GameProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileDamageType() { return STRUCT_OFFSET(AMBs_GameProjectile, ProjectileDamageType); }


#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_9_PROLOG
#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_INCLASS \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AMBs_GameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_MBs_GameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
