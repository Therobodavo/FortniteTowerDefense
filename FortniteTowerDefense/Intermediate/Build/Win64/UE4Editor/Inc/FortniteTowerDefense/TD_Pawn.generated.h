// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FORTNITETOWERDEFENSE_TD_Pawn_generated_h
#error "TD_Pawn.generated.h already included, missing '#pragma once' in TD_Pawn.h"
#endif
#define FORTNITETOWERDEFENSE_TD_Pawn_generated_h

#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_SPARSE_DATA
#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseWave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInceaseWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InceaseWave(); \
		P_NATIVE_END; \
	}


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseWave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInceaseWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InceaseWave(); \
		P_NATIVE_END; \
	}


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATD_Pawn(); \
	friend struct Z_Construct_UClass_ATD_Pawn_Statics; \
public: \
	DECLARE_CLASS(ATD_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FortniteTowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ATD_Pawn)


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATD_Pawn(); \
	friend struct Z_Construct_UClass_ATD_Pawn_Statics; \
public: \
	DECLARE_CLASS(ATD_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FortniteTowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ATD_Pawn)


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATD_Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATD_Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATD_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATD_Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATD_Pawn(ATD_Pawn&&); \
	NO_API ATD_Pawn(const ATD_Pawn&); \
public:


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATD_Pawn(ATD_Pawn&&); \
	NO_API ATD_Pawn(const ATD_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATD_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATD_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATD_Pawn)


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_PRIVATE_PROPERTY_OFFSET
#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_9_PROLOG
#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_SPARSE_DATA \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_RPC_WRAPPERS \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_INCLASS \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_SPARSE_DATA \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_INCLASS_NO_PURE_DECLS \
	FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FORTNITETOWERDEFENSE_API UClass* StaticClass<class ATD_Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FortniteTowerDefense_Source_FortniteTowerDefense_TD_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
