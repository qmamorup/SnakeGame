// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Overlapable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlapable() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_AOverlapable_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AOverlapable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AOverlapable::StaticRegisterNativesAOverlapable()
	{
	}
	UClass* Z_Construct_UClass_AOverlapable_NoRegister()
	{
		return AOverlapable::StaticClass();
	}
	struct Z_Construct_UClass_AOverlapable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOverlapable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOverlapable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Overlapable.h" },
		{ "ModuleRelativePath", "Overlapable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOverlapable_Statics::NewProp_RootComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Overlapable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOverlapable_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOverlapable, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOverlapable_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOverlapable_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOverlapable_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Overlapable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOverlapable_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOverlapable, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOverlapable_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOverlapable_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOverlapable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOverlapable_Statics::NewProp_RootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOverlapable_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOverlapable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOverlapable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOverlapable_Statics::ClassParams = {
		&AOverlapable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOverlapable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOverlapable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOverlapable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOverlapable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOverlapable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOverlapable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOverlapable, 461378923);
	template<> SNAKEGAME_API UClass* StaticClass<AOverlapable>()
	{
		return AOverlapable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOverlapable(Z_Construct_UClass_AOverlapable, &AOverlapable::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AOverlapable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOverlapable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
