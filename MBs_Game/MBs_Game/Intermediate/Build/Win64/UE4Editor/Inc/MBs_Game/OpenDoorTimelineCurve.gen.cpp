// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MBs_Game/OpenDoorTimelineCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoorTimelineCurve() {}
// Cross Module References
	MBS_GAME_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister();
	MBS_GAME_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MBs_Game();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState();
	MBS_GAME_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AOpenDoorTimelineCurve::StaticRegisterNativesAOpenDoorTimelineCurve()
	{
		UClass* Class = AOpenDoorTimelineCurve::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlDoor", &AOpenDoorTimelineCurve::execControlDoor },
			{ "SetState", &AOpenDoorTimelineCurve::execSetState },
			{ "ToggleDoor", &AOpenDoorTimelineCurve::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
		{ "ToolTip", "Function to be used to control the door" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, nullptr, "ControlDoor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
		{ "ToolTip", "Function to be used to set the doors state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, nullptr, "SetState", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
		{ "ToolTip", "Function to be used to toggle door state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, nullptr, "ToggleDoor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister()
	{
		return AOpenDoorTimelineCurve::StaticClass();
	}
	struct Z_Construct_UClass_AOpenDoorTimelineCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MBs_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor, "ControlDoor" }, // 1199336903
		{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState, "SetState" }, // 648558936
		{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor, "ToggleDoor" }, // 603542364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenDoorTimelineCurve.h" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve_MetaData[] = {
		{ "Category", "OpenDoorTimelineCurve" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
		{ "ToolTip", "Property to hold the curve for door opening, edit anywhere allows this property\nto be edited in property windows in Unreal engine" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve = { "DoorCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDoorTimelineCurve, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame_MetaData[] = {
		{ "Category", "OpenDoorTimelineCurve" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDoorTimelineCurve, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "OpenDoorTimelineCurve" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve.h" },
		{ "ToolTip", "Properties to hold the static meshes, edit anywhereallows this property\nto be edited in property windows in Unreal engine" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDoorTimelineCurve, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenDoorTimelineCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::ClassParams = {
		&AOpenDoorTimelineCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenDoorTimelineCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenDoorTimelineCurve, 520871932);
	template<> MBS_GAME_API UClass* StaticClass<AOpenDoorTimelineCurve>()
	{
		return AOpenDoorTimelineCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenDoorTimelineCurve(Z_Construct_UClass_AOpenDoorTimelineCurve, &AOpenDoorTimelineCurve::StaticClass, TEXT("/Script/MBs_Game"), TEXT("AOpenDoorTimelineCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenDoorTimelineCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
