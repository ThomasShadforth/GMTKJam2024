// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/GMTK2024GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTK2024GameMode() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_AGMTK2024GameMode_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_AGMTK2024GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
// End Cross Module References
	void AGMTK2024GameMode::StaticRegisterNativesAGMTK2024GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGMTK2024GameMode_NoRegister()
	{
		return AGMTK2024GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGMTK2024GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTK2024GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTK2024GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GMTK2024GameMode.h" },
		{ "ModuleRelativePath", "GMTK2024GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTK2024GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTK2024GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTK2024GameMode_Statics::ClassParams = {
		&AGMTK2024GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGMTK2024GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTK2024GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTK2024GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTK2024GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTK2024GameMode, 3239831509);
	template<> GMTK2024_API UClass* StaticClass<AGMTK2024GameMode>()
	{
		return AGMTK2024GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTK2024GameMode(Z_Construct_UClass_AGMTK2024GameMode, &AGMTK2024GameMode::StaticClass, TEXT("/Script/GMTK2024"), TEXT("AGMTK2024GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTK2024GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
