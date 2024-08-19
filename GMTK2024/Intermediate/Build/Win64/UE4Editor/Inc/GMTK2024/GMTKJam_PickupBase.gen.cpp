// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/Public/GMTKJam_PickupBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTKJam_PickupBase() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJam_PickupBase_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_AGMTKJam_PickupBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_UGrabObjectInterface_NoRegister();
// End Cross Module References
	void AGMTKJam_PickupBase::StaticRegisterNativesAGMTKJam_PickupBase()
	{
	}
	UClass* Z_Construct_UClass_AGMTKJam_PickupBase_NoRegister()
	{
		return AGMTKJam_PickupBase::StaticClass();
	}
	struct Z_Construct_UClass_AGMTKJam_PickupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrowObject_MetaData[];
#endif
		static void NewProp_bIsGrowObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrowObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTKJam_PickupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PickupBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMTKJam_PickupBase.h" },
		{ "ModuleRelativePath", "Public/GMTKJam_PickupBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject_MetaData[] = {
		{ "Category", "GMTKJam_PickupBase" },
		{ "ModuleRelativePath", "Public/GMTKJam_PickupBase.h" },
	};
#endif
	void Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject_SetBit(void* Obj)
	{
		((AGMTKJam_PickupBase*)Obj)->bIsGrowObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject = { "bIsGrowObject", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGMTKJam_PickupBase), &Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "GMTKJam_PickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMTKJam_PickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJam_PickupBase, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMTKJam_PickupBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_bIsGrowObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGMTKJam_PickupBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGrabObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AGMTKJam_PickupBase, IGrabObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTKJam_PickupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTKJam_PickupBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTKJam_PickupBase_Statics::ClassParams = {
		&AGMTKJam_PickupBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMTKJam_PickupBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTKJam_PickupBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTKJam_PickupBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTKJam_PickupBase, 4136379877);
	template<> GMTK2024_API UClass* StaticClass<AGMTKJam_PickupBase>()
	{
		return AGMTKJam_PickupBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTKJam_PickupBase(Z_Construct_UClass_AGMTKJam_PickupBase, &AGMTKJam_PickupBase::StaticClass, TEXT("/Script/GMTK2024"), TEXT("AGMTKJam_PickupBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTKJam_PickupBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
