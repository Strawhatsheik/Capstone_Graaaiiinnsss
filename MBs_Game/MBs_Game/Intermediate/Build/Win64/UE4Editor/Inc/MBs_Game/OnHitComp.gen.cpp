// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/OnHitComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnHitComp() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_AOnHitComp_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AOnHitComp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
// End Cross Module References
	void AOnHitComp::StaticRegisterNativesAOnHitComp()
	{
	}
	UClass* Z_Construct_UClass_AOnHitComp_NoRegister()
	{
		return AOnHitComp::StaticClass();
	}
	struct Z_Construct_UClass_AOnHitComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnHitComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnHitComp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnHitComp.h" },
		{ "ModuleRelativePath", "OnHitComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnHitComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnHitComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnHitComp_Statics::ClassParams = {
		&AOnHitComp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOnHitComp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOnHitComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnHitComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnHitComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnHitComp, 598167997);
	template<> MBS_GAME_API UClass* StaticClass<AOnHitComp>()
	{
		return AOnHitComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnHitComp(Z_Construct_UClass_AOnHitComp, &AOnHitComp::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AOnHitComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnHitComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
