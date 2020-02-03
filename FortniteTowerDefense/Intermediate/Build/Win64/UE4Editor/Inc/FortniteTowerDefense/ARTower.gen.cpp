// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteTowerDefense/ARTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTower() {}
// Cross Module References
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AARTower_NoRegister();
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AARTower();
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AShotgunTower();
	UPackage* Z_Construct_UPackage__Script_FortniteTowerDefense();
// End Cross Module References
	void AARTower::StaticRegisterNativesAARTower()
	{
	}
	UClass* Z_Construct_UClass_AARTower_NoRegister()
	{
		return AARTower::StaticClass();
	}
	struct Z_Construct_UClass_AARTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShotgunTower,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteTowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ARTower.h" },
		{ "ModuleRelativePath", "ARTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARTower_Statics::ClassParams = {
		&AARTower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AARTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARTower, 1740711631);
	template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<AARTower>()
	{
		return AARTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARTower(Z_Construct_UClass_AARTower, &AARTower::StaticClass, TEXT("/Script/FortniteTowerDefense"), TEXT("AARTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
