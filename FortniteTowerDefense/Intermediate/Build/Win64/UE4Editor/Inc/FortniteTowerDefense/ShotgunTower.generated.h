// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FORTNITETOWERDEFENSE_ShotgunTower_generated_h
#error "ShotgunTower.generated.h already included, missing '#pragma once' in ShotgunTower.h"
#endif
#define FORTNITETOWERDEFENSE_ShotgunTower_generated_h

#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_SPARSE_DATA
#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireBullet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireBullet(); \
		P_NATIVE_END; \
	}


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireBullet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireBullet(); \
		P_NATIVE_END; \
	}


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShotgunTower(); \
	friend struct Z_Construct_UClass_AShotgunTower_Statics; \
public: \
	DECLARE_CLASS(AShotgunTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FortniteTowerDefense"), NO_API) \
	DECLARE_SERIALIZER(AShotgunTower)


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShotgunTower(); \
	friend struct Z_Construct_UClass_AShotgunTower_Statics; \
public: \
	DECLARE_CLASS(AShotgunTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FortniteTowerDefense"), NO_API) \
	DECLARE_SERIALIZER(AShotgunTower)


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShotgunTower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShotgunTower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotgunTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotgunTower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShotgunTower(AShotgunTower&&); \
	NO_API AShotgunTower(const AShotgunTower&); \
public:


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShotgunTower(AShotgunTower&&); \
	NO_API AShotgunTower(const AShotgunTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotgunTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotgunTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShotgunTower)


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_PRIVATE_PROPERTY_OFFSET
#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_9_PROLOG
#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_PRIVATE_PROPERTY_OFFSET \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_SPARSE_DATA \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_RPC_WRAPPERS \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_INCLASS \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_PRIVATE_PROPERTY_OFFSET \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_SPARSE_DATA \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_INCLASS_NO_PURE_DECLS \
	FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<class AShotgunTower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FortniteTowerDefense_Source_FortniteTowerDefense_ShotgunTower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
