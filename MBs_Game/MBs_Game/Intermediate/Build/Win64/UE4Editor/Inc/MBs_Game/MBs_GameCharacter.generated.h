// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBS_GAME_MBs_GameCharacter_generated_h
#error "MBs_GameCharacter.generated.h already included, missing '#pragma once' in MBs_GameCharacter.h"
#endif
#define MBS_GAME_MBs_GameCharacter_generated_h

#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicChange(Z_Param_MagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicChange(Z_Param_MagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMBs_GameCharacter(); \
	friend struct Z_Construct_UClass_AMBs_GameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMBs_GameCharacter)


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMBs_GameCharacter(); \
	friend struct Z_Construct_UClass_AMBs_GameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMBs_GameCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMBs_GameCharacter)


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMBs_GameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMBs_GameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMBs_GameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMBs_GameCharacter(AMBs_GameCharacter&&); \
	NO_API AMBs_GameCharacter(const AMBs_GameCharacter&); \
public:


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMBs_GameCharacter(AMBs_GameCharacter&&); \
	NO_API AMBs_GameCharacter(const AMBs_GameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMBs_GameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMBs_GameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMBs_GameCharacter)


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_21_PROLOG
#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_INCLASS \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MBs_GameCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AMBs_GameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_MBs_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
