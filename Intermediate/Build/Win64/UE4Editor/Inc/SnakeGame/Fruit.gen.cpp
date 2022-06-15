// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Fruit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFruit() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_AFruit_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFruit();
	SNAKEGAME_API UClass* Z_Construct_UClass_AOverlapable();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void AFruit::StaticRegisterNativesAFruit()
	{
	}
	UClass* Z_Construct_UClass_AFruit_NoRegister()
	{
		return AFruit::StaticClass();
	}
	struct Z_Construct_UClass_AFruit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFruit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOverlapable,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fruit.h" },
		{ "ModuleRelativePath", "Fruit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFruit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFruit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFruit_Statics::ClassParams = {
		&AFruit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFruit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFruit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFruit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFruit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFruit, 3355565721);
	template<> SNAKEGAME_API UClass* StaticClass<AFruit>()
	{
		return AFruit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFruit(Z_Construct_UClass_AFruit, &AFruit::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AFruit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFruit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
