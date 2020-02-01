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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APath::StaticRegisterNativesAPath()
	{
	}
	UClass* Z_Construct_UClass_APath_NoRegister()
	{
		return APath::StaticClass();
	}
	struct Z_Construct_UClass_APath_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		Z_Construct_UClass_APath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(APath, 3322043507);
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
