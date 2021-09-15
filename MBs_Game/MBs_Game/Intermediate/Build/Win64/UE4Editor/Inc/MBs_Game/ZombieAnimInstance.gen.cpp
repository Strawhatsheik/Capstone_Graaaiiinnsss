// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/ZombieAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAnimInstance() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_UZombieAnimInstance_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_UZombieAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
	MBS_GAME_API UFunction* Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties();
// End Cross Module References
	void UZombieAnimInstance::StaticRegisterNativesUZombieAnimInstance()
	{
		UClass* Class = UZombieAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UZombieAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpdateAnimationProperties" },
		{ "ModuleRelativePath", "ZombieAnimInstance.h" },
		{ "ToolTip", "Used by the animation blueprint to update the animation properties above\nand decide what animations to play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombieAnimInstance, nullptr, "UpdateAnimationProperties", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZombieAnimInstance_NoRegister()
	{
		return UZombieAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDying_MetaData[];
#endif
		static void NewProp_bIsDying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChasing_MetaData[];
#endif
		static void NewProp_bIsChasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRoaming_MetaData[];
#endif
		static void NewProp_bIsRoaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRoaming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombieAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombieAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3974144972
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ZombieAnimInstance.h" },
		{ "ModuleRelativePath", "ZombieAnimInstance.h" },
		{ "ToolTip", "* Manages the booleans needed by the animation blueprint to decide what\nanimation needs to be run." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "ZombieAnimInstance.h" },
		{ "ToolTip", "Indicates whether the ZombieCharacter is dying or not." },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying_SetBit(void* Obj)
	{
		((UZombieAnimInstance*)Obj)->bIsDying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying = { "bIsDying", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZombieAnimInstance), &Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying_MetaData, ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "ZombieAnimInstance.h" },
		{ "ToolTip", "Indicates whether the ZombieCharacter is attacking or not." },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((UZombieAnimInstance*)Obj)->bIsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZombieAnimInstance), &Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "ZombieAnimInstance.h" },
		{ "ToolTip", "Indicates whether the ZombieCharacter is chasing or not." },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing_SetBit(void* Obj)
	{
		((UZombieAnimInstance*)Obj)->bIsChasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing = { "bIsChasing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZombieAnimInstance), &Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "ZombieAnimInstance.h" },
		{ "ToolTip", "Indicates whether the ZombieCharacter is roaming or not." },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming_SetBit(void* Obj)
	{
		((UZombieAnimInstance*)Obj)->bIsRoaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming = { "bIsRoaming", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZombieAnimInstance), &Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsDying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsChasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp_bIsRoaming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieAnimInstance_Statics::ClassParams = {
		&UZombieAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombieAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAnimInstance, 2324310148);
	template<> MBS_GAME_API UClass* StaticClass<UZombieAnimInstance>()
	{
		return UZombieAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAnimInstance(Z_Construct_UClass_UZombieAnimInstance, &UZombieAnimInstance::StaticClass, TEXT("/Script/MBs_Game"), TEXT("UZombieAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
