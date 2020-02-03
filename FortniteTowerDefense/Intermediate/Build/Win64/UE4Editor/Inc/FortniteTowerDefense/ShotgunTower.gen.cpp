// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteTowerDefense/ShotgunTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgunTower() {}
// Cross Module References
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AShotgunTower_NoRegister();
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AShotgunTower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FortniteTowerDefense();
// End Cross Module References
	void AShotgunTower::StaticRegisterNativesAShotgunTower()
	{
	}
	UClass* Z_Construct_UClass_AShotgunTower_NoRegister()
	{
		return AShotgunTower::StaticClass();
	}
	struct Z_Construct_UClass_AShotgunTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotgunTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteTowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgunTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShotgunTower.h" },
		{ "ModuleRelativePath", "ShotgunTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgunTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgunTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShotgunTower_Statics::ClassParams = {
		&AShotgunTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShotgunTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotgunTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShotgunTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShotgunTower, 3930970567);
	template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<AShotgunTower>()
	{
		return AShotgunTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShotgunTower(Z_Construct_UClass_AShotgunTower, &AShotgunTower::StaticClass, TEXT("/Script/FortniteTowerDefense"), TEXT("AShotgunTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgunTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
