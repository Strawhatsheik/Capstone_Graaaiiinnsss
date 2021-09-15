// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/CameraDirectorCow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirectorCow() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_ACameraDirectorCow_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_ACameraDirectorCow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACameraDirectorCow::StaticRegisterNativesACameraDirectorCow()
	{
	}
	UClass* Z_Construct_UClass_ACameraDirectorCow_NoRegister()
	{
		return ACameraDirectorCow::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirectorCow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirectorCow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirectorCow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirectorCow.h" },
		{ "ModuleRelativePath", "CameraDirectorCow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraTwo_MetaData[] = {
		{ "Category", "CameraDirectorCow" },
		{ "ModuleRelativePath", "CameraDirectorCow.h" },
		{ "ToolTip", "Property for the second camera, that is a component\nof the cube, makes it visible to engine\n\"EditAnywhere\" allows cameras to be set in Editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraTwo = { "CameraTwo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirectorCow, CameraTwo), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraTwo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraOne_MetaData[] = {
		{ "Category", "CameraDirectorCow" },
		{ "ModuleRelativePath", "CameraDirectorCow.h" },
		{ "ToolTip", "Property for the first camera, which is the free camera\nlooking at 'the scene', makes it visible to engine\n\"EditAnywhere\" allows cameras to be set in Editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraOne = { "CameraOne", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirectorCow, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirectorCow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirectorCow_Statics::NewProp_CameraOne,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirectorCow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirectorCow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirectorCow_Statics::ClassParams = {
		&ACameraDirectorCow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraDirectorCow_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACameraDirectorCow_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirectorCow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraDirectorCow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirectorCow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraDirectorCow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraDirectorCow, 4047853404);
	template<> MBS_GAME_API UClass* StaticClass<ACameraDirectorCow>()
	{
		return ACameraDirectorCow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirectorCow(Z_Construct_UClass_ACameraDirectorCow, &ACameraDirectorCow::StaticClass, TEXT("/Script/MBs_Game"), TEXT("ACameraDirectorCow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirectorCow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
