// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/Public/GMTKJ_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTKJ_Player() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJ_Player_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJ_Player();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AGMTKJ_Player::StaticRegisterNativesAGMTKJ_Player()
	{
	}
	UClass* Z_Construct_UClass_AGMTKJ_Player_NoRegister()
	{
		return AGMTKJ_Player::StaticClass();
	}
	struct Z_Construct_UClass_AGMTKJ_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseTurnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTKJ_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJ_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GMTKJ_Player.h" },
		{ "ModuleRelativePath", "Public/GMTKJ_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GMTKJ_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMTKJ_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJ_Player, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_cameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GMTKJ_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMTKJ_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJ_Player, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_cameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_cameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseLookUpRate_MetaData[] = {
		{ "Category", "GMTKJ_Player" },
		{ "ModuleRelativePath", "Public/GMTKJ_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseLookUpRate = { "baseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJ_Player, baseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseTurnRate_MetaData[] = {
		{ "Category", "GMTKJ_Player" },
		{ "ModuleRelativePath", "Public/GMTKJ_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseTurnRate = { "baseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJ_Player, baseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseTurnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMTKJ_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_cameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJ_Player_Statics::NewProp_baseTurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTKJ_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTKJ_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTKJ_Player_Statics::ClassParams = {
		&AGMTKJ_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMTKJ_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJ_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMTKJ_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJ_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTKJ_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTKJ_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTKJ_Player, 4007936576);
	template<> GMTK2024_API UClass* StaticClass<AGMTKJ_Player>()
	{
		return AGMTKJ_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTKJ_Player(Z_Construct_UClass_AGMTKJ_Player, &AGMTKJ_Player::StaticClass, TEXT("/Script/GMTK2024"), TEXT("AGMTKJ_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTKJ_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
