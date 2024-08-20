// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/Public/GMTKJam_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTKJam_PlayerController() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJam_PlayerController_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJam_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AGMTKJam_PlayerController::StaticRegisterNativesAGMTKJam_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGMTKJam_PlayerController_NoRegister()
	{
		return AGMTKJam_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGMTKJam_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pauseScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pauseScreenClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTKJam_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GMTKJam_PlayerController.h" },
		{ "ModuleRelativePath", "Public/GMTKJam_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PlayerController_Statics::NewProp_pauseScreenClass_MetaData[] = {
		{ "Category", "GMTKJam_PlayerController" },
		{ "ModuleRelativePath", "Public/GMTKJam_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGMTKJam_PlayerController_Statics::NewProp_pauseScreenClass = { "pauseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJam_PlayerController, pauseScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_PlayerController_Statics::NewProp_pauseScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PlayerController_Statics::NewProp_pauseScreenClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMTKJam_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJam_PlayerController_Statics::NewProp_pauseScreenClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTKJam_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTKJam_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTKJam_PlayerController_Statics::ClassParams = {
		&AGMTKJam_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMTKJam_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTKJam_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTKJam_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTKJam_PlayerController, 2910293178);
	template<> GMTK2024_API UClass* StaticClass<AGMTKJam_PlayerController>()
	{
		return AGMTKJam_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTKJam_PlayerController(Z_Construct_UClass_AGMTKJam_PlayerController, &AGMTKJam_PlayerController::StaticClass, TEXT("/Script/GMTK2024"), TEXT("AGMTKJam_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTKJam_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
