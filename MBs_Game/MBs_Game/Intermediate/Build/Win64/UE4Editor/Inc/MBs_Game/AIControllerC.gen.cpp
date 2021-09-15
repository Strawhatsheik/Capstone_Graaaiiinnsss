// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/AIControllerC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerC() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_AAIControllerC_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AAIControllerC();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
// End Cross Module References
	void AAIControllerC::StaticRegisterNativesAAIControllerC()
	{
	}
	UClass* Z_Construct_UClass_AAIControllerC_NoRegister()
	{
		return AAIControllerC::StaticClass();
	}
	struct Z_Construct_UClass_AAIControllerC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIControllerC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIControllerC.h" },
		{ "ModuleRelativePath", "AIControllerC.h" },
		{ "ToolTip", "An AI controller to control the zombie cows" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerC_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIControllerC.h" },
		{ "ToolTip", "Blackboard keys\nThis key is to hold the target for chase, in this case our player character" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAIControllerC_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerC, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_AAIControllerC_Statics::NewProp_BlackboardKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIControllerC_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIControllerC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerC_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIControllerC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerC_Statics::ClassParams = {
		&AAIControllerC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIControllerC_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAIControllerC_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIControllerC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIControllerC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIControllerC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIControllerC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIControllerC, 2734941078);
	template<> MBS_GAME_API UClass* StaticClass<AAIControllerC>()
	{
		return AAIControllerC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIControllerC(Z_Construct_UClass_AAIControllerC, &AAIControllerC::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AAIControllerC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
