// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/Public/GMTKJam_LevelObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTKJam_LevelObject() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJam_LevelObject_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJam_LevelObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GMTK2024_API UClass* Z_Construct_UClass_UGrowShrinkInterface_NoRegister();
// End Cross Module References
	void AGMTKJam_LevelObject::StaticRegisterNativesAGMTKJam_LevelObject()
	{
	}
	UClass* Z_Construct_UClass_AGMTKJam_LevelObject_NoRegister()
	{
		return AGMTKJam_LevelObject::StaticClass();
	}
	struct Z_Construct_UClass_AGMTKJam_LevelObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sizeTiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sizeTiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sizeTiers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTKJam_LevelObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_LevelObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMTKJam_LevelObject.h" },
		{ "ModuleRelativePath", "Public/GMTKJam_LevelObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers_MetaData[] = {
		{ "Category", "GMTKJam_LevelObject" },
		{ "Comment", "//To do: add size tiers for object, and index\n" },
		{ "ModuleRelativePath", "Public/GMTKJam_LevelObject.h" },
		{ "ToolTip", "To do: add size tiers for object, and index" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers = { "sizeTiers", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJam_LevelObject, sizeTiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers_Inner = { "sizeTiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMTKJam_LevelObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJam_LevelObject_Statics::NewProp_sizeTiers_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGMTKJam_LevelObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGrowShrinkInterface_NoRegister, (int32)VTABLE_OFFSET(AGMTKJam_LevelObject, IGrowShrinkInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTKJam_LevelObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTKJam_LevelObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTKJam_LevelObject_Statics::ClassParams = {
		&AGMTKJam_LevelObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMTKJam_LevelObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_LevelObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_LevelObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_LevelObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTKJam_LevelObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTKJam_LevelObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTKJam_LevelObject, 3676092441);
	template<> GMTK2024_API UClass* StaticClass<AGMTKJam_LevelObject>()
	{
		return AGMTKJam_LevelObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTKJam_LevelObject(Z_Construct_UClass_AGMTKJam_LevelObject, &AGMTKJam_LevelObject::StaticClass, TEXT("/Script/GMTK2024"), TEXT("AGMTKJam_LevelObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTKJam_LevelObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
