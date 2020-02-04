// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteTowerDefense/TD_Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_Pawn() {}
// Cross Module References
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_ATD_Pawn_NoRegister();
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_ATD_Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FortniteTowerDefense();
	FORTNITETOWERDEFENSE_API UFunction* Z_Construct_UFunction_ATD_Pawn_DecreaseWave();
	FORTNITETOWERDEFENSE_API UFunction* Z_Construct_UFunction_ATD_Pawn_IncreaseWave();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATD_Pawn::StaticRegisterNativesATD_Pawn()
	{
		UClass* Class = ATD_Pawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseWave", &ATD_Pawn::execDecreaseWave },
			{ "IncreaseWave", &ATD_Pawn::execIncreaseWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATD_Pawn_DecreaseWave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATD_Pawn_DecreaseWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TD_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATD_Pawn_DecreaseWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATD_Pawn, nullptr, "DecreaseWave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATD_Pawn_DecreaseWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATD_Pawn_DecreaseWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATD_Pawn_DecreaseWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATD_Pawn_DecreaseWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATD_Pawn_IncreaseWave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATD_Pawn_IncreaseWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TD_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATD_Pawn_IncreaseWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATD_Pawn, nullptr, "IncreaseWave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATD_Pawn_IncreaseWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATD_Pawn_IncreaseWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATD_Pawn_IncreaseWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATD_Pawn_IncreaseWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATD_Pawn_NoRegister()
	{
		return ATD_Pawn::StaticClass();
	}
	struct Z_Construct_UClass_ATD_Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurVisibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurVisibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATD_Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteTowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATD_Pawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATD_Pawn_DecreaseWave, "DecreaseWave" }, // 3988145996
		{ &Z_Construct_UFunction_ATD_Pawn_IncreaseWave, "IncreaseWave" }, // 2469599702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_Pawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TD_Pawn.h" },
		{ "ModuleRelativePath", "TD_Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_Pawn_Statics::NewProp_OurVisibleComponent_MetaData[] = {
		{ "Category", "TD_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TD_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATD_Pawn_Statics::NewProp_OurVisibleComponent = { "OurVisibleComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATD_Pawn, OurVisibleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATD_Pawn_Statics::NewProp_OurVisibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATD_Pawn_Statics::NewProp_OurVisibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATD_Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATD_Pawn_Statics::NewProp_OurVisibleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATD_Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATD_Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATD_Pawn_Statics::ClassParams = {
		&ATD_Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATD_Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATD_Pawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATD_Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATD_Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATD_Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATD_Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATD_Pawn, 2551795823);
	template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<ATD_Pawn>()
	{
		return ATD_Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATD_Pawn(Z_Construct_UClass_ATD_Pawn, &ATD_Pawn::StaticClass, TEXT("/Script/FortniteTowerDefense"), TEXT("ATD_Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATD_Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
