// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SneakHead.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSneakHead() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASneakHead_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASneakHead();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASneakHead::StaticRegisterNativesASneakHead()
	{
	}
	UClass* Z_Construct_UClass_ASneakHead_NoRegister()
	{
		return ASneakHead::StaticClass();
	}
	struct Z_Construct_UClass_ASneakHead_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASneakHead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASneakHead_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SneakHead.h" },
		{ "ModuleRelativePath", "SneakHead.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASneakHead_Statics::NewProp_RootComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SneakHead.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASneakHead_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASneakHead, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASneakHead_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASneakHead_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASneakHead_Statics::NewProp_HeadMesh_MetaData[] = {
		{ "Category", "SneakHead" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SneakHead.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASneakHead_Statics::NewProp_HeadMesh = { "HeadMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASneakHead, HeadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASneakHead_Statics::NewProp_HeadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASneakHead_Statics::NewProp_HeadMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASneakHead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASneakHead_Statics::NewProp_RootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASneakHead_Statics::NewProp_HeadMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASneakHead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASneakHead>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASneakHead_Statics::ClassParams = {
		&ASneakHead::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASneakHead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASneakHead_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASneakHead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASneakHead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASneakHead()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASneakHead_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASneakHead, 3366383479);
	template<> SNAKEGAME_API UClass* StaticClass<ASneakHead>()
	{
		return ASneakHead::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASneakHead(Z_Construct_UClass_ASneakHead, &ASneakHead::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASneakHead"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASneakHead);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
