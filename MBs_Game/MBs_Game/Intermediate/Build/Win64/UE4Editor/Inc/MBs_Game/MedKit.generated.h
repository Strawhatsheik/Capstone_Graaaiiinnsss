// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MBS_GAME_MedKit_generated_h
#error "MedKit.generated.h already included, missing '#pragma once' in MedKit.h"
#endif
#define MBS_GAME_MedKit_generated_h

#define MBs_Game_Source_MBs_Game_MedKit_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MedKit_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define MBs_Game_Source_MBs_Game_MedKit_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMedKit(); \
	friend struct Z_Construct_UClass_AMedKit_Statics; \
public: \
	DECLARE_CLASS(AMedKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMedKit)


#define MBs_Game_Source_MBs_Game_MedKit_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMedKit(); \
	friend struct Z_Construct_UClass_AMedKit_Statics; \
public: \
	DECLARE_CLASS(AMedKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MBs_Game"), NO_API) \
	DECLARE_SERIALIZER(AMedKit)


#define MBs_Game_Source_MBs_Game_MedKit_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMedKit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMedKit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedKit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedKit(AMedKit&&); \
	NO_API AMedKit(const AMedKit&); \
public:


#define MBs_Game_Source_MBs_Game_MedKit_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedKit(AMedKit&&); \
	NO_API AMedKit(const AMedKit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedKit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMedKit)


#define MBs_Game_Source_MBs_Game_MedKit_h_13_PRIVATE_PROPERTY_OFFSET
#define MBs_Game_Source_MBs_Game_MedKit_h_10_PROLOG
#define MBs_Game_Source_MBs_Game_MedKit_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MedKit_h_13_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MedKit_h_13_RPC_WRAPPERS \
	MBs_Game_Source_MBs_Game_MedKit_h_13_INCLASS \
	MBs_Game_Source_MBs_Game_MedKit_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MBs_Game_Source_MBs_Game_MedKit_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MBs_Game_Source_MBs_Game_MedKit_h_13_PRIVATE_PROPERTY_OFFSET \
	MBs_Game_Source_MBs_Game_MedKit_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MedKit_h_13_INCLASS_NO_PURE_DECLS \
	MBs_Game_Source_MBs_Game_MedKit_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBS_GAME_API UClass* StaticClass<class AMedKit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MBs_Game_Source_MBs_Game_MedKit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
