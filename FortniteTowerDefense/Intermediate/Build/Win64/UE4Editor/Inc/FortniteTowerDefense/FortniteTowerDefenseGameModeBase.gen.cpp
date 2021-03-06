// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteTowerDefense/FortniteTowerDefenseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortniteTowerDefenseGameModeBase() {}
// Cross Module References
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_NoRegister();
	FORTNITETOWERDEFENSE_API UClass* Z_Construct_UClass_AFortniteTowerDefenseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FortniteTowerDefense();
// End Cross Module References
	void AFortniteTowerDefenseGameModeBase::StaticRegisterNativesAFortniteTowerDefenseGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_NoRegister()
	{
		return AFortniteTowerDefenseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteTowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FortniteTowerDefenseGameModeBase.h" },
		{ "ModuleRelativePath", "FortniteTowerDefenseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortniteTowerDefenseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::ClassParams = {
		&AFortniteTowerDefenseGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFortniteTowerDefenseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFortniteTowerDefenseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFortniteTowerDefenseGameModeBase, 399804908);
	template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<AFortniteTowerDefenseGameModeBase>()
	{
		return AFortniteTowerDefenseGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFortniteTowerDefenseGameModeBase(Z_Construct_UClass_AFortniteTowerDefenseGameModeBase, &AFortniteTowerDefenseGameModeBase::StaticClass, TEXT("/Script/FortniteTowerDefense"), TEXT("AFortniteTowerDefenseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortniteTowerDefenseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
