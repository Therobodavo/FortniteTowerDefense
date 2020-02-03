// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteTowerDefense/Path.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePath() {}
// Cross Module References
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_APath_NoRegister();
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_APath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FortniteTowerDefense();
	FORTNITETOWERDEFENSE_API UFunction* Z_Construct_UFunction_APath_SpawnEnemy();
	FORTNITETOWERDEFENSE_API UFunction* Z_Construct_UFunction_APath_SpawnTower();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APath::StaticRegisterNativesAPath()
	{
		UClass* Class = APath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemy", &APath::execSpawnEnemy },
			{ "SpawnTower", &APath::execSpawnTower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APath_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "SpawnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APath_SpawnTower_Statics
	{
		struct Path_eventSpawnTower_Parms
		{
			int32 type;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APath_SpawnTower_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventSpawnTower_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_SpawnTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_SpawnTower_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_SpawnTower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_SpawnTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "SpawnTower", nullptr, nullptr, sizeof(Path_eventSpawnTower_Parms), Z_Construct_UFunction_APath_SpawnTower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_SpawnTower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_SpawnTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_SpawnTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_SpawnTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_SpawnTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APath_NoRegister()
	{
		return APath::StaticClass();
	}
	struct Z_Construct_UClass_APath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteTowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APath_SpawnEnemy, "SpawnEnemy" }, // 1922738347
		{ &Z_Construct_UFunction_APath_SpawnTower, "SpawnTower" }, // 1561756676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Path.h" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_enemyBP_MetaData[] = {
		{ "Category", "BP" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APath_Statics::NewProp_enemyBP = { "enemyBP", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, enemyBP), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_enemyBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_enemyBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_enemyBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APath_Statics::ClassParams = {
		&APath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APath, 24258547);
	template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<APath>()
	{
		return APath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APath(Z_Construct_UClass_APath, &APath::StaticClass, TEXT("/Script/FortniteTowerDefense"), TEXT("APath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
