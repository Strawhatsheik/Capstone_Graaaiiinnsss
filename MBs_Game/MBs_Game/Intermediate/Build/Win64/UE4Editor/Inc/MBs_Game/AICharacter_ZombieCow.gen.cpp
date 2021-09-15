// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/AICharacter_ZombieCow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacter_ZombieCow() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_AAICharacter_ZombieCow_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AAICharacter_ZombieCow();
	MBS_GAME_API UClass* Z_Construct_UClass_AAICharacter();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
// End Cross Module References
	void AAICharacter_ZombieCow::StaticRegisterNativesAAICharacter_ZombieCow()
	{
	}
	UClass* Z_Construct_UClass_AAICharacter_ZombieCow_NoRegister()
	{
		return AAICharacter_ZombieCow::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacter_ZombieCow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacter_ZombieCow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAICharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_ZombieCow_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AICharacter_ZombieCow.h" },
		{ "ModuleRelativePath", "AICharacter_ZombieCow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacter_ZombieCow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter_ZombieCow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_ZombieCow_Statics::ClassParams = {
		&AAICharacter_ZombieCow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacter_ZombieCow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAICharacter_ZombieCow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacter_ZombieCow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICharacter_ZombieCow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICharacter_ZombieCow, 1861715486);
	template<> MBS_GAME_API UClass* StaticClass<AAICharacter_ZombieCow>()
	{
		return AAICharacter_ZombieCow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICharacter_ZombieCow(Z_Construct_UClass_AAICharacter_ZombieCow, &AAICharacter_ZombieCow::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AAICharacter_ZombieCow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter_ZombieCow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
