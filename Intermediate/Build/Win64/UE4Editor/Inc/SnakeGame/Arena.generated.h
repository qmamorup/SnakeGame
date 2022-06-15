// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_Arena_generated_h
#error "Arena.generated.h already included, missing '#pragma once' in Arena.h"
#endif
#define SNAKEGAME_Arena_generated_h

#define SnakeGame_Source_SnakeGame_Arena_h_15_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_Arena_h_15_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_Arena_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_Arena_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArena(); \
	friend struct Z_Construct_UClass_AArena_Statics; \
public: \
	DECLARE_CLASS(AArena, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AArena)


#define SnakeGame_Source_SnakeGame_Arena_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAArena(); \
	friend struct Z_Construct_UClass_AArena_Statics; \
public: \
	DECLARE_CLASS(AArena, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(AArena)


#define SnakeGame_Source_SnakeGame_Arena_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArena(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArena) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArena); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArena(AArena&&); \
	NO_API AArena(const AArena&); \
public:


#define SnakeGame_Source_SnakeGame_Arena_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArena(AArena&&); \
	NO_API AArena(const AArena&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArena); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArena)


#define SnakeGame_Source_SnakeGame_Arena_h_15_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_Arena_h_12_PROLOG
#define SnakeGame_Source_SnakeGame_Arena_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Arena_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Arena_h_15_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Arena_h_15_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_Arena_h_15_INCLASS \
	SnakeGame_Source_SnakeGame_Arena_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_Arena_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Arena_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Arena_h_15_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Arena_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Arena_h_15_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Arena_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class AArena>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_Arena_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
