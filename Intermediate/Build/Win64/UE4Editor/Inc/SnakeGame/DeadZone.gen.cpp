// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/DeadZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadZone() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ADeadZone_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ADeadZone();
	SNAKEGAME_API UClass* Z_Construct_UClass_AOverlapable();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void ADeadZone::StaticRegisterNativesADeadZone()
	{
	}
	UClass* Z_Construct_UClass_ADeadZone_NoRegister()
	{
		return ADeadZone::StaticClass();
	}
	struct Z_Construct_UClass_ADeadZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeadZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOverlapable,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeadZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DeadZone.h" },
		{ "ModuleRelativePath", "DeadZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeadZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeadZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeadZone_Statics::ClassParams = {
		&ADeadZone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADeadZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeadZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeadZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeadZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeadZone, 2319762588);
	template<> SNAKEGAME_API UClass* StaticClass<ADeadZone>()
	{
		return ADeadZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeadZone(Z_Construct_UClass_ADeadZone, &ADeadZone::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ADeadZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeadZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
