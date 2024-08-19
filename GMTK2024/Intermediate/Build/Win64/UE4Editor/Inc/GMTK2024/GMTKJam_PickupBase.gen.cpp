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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_UGrabObjectInterface_NoRegister();
// End Cross Module References
	static FName NAME_AGMTKJam_PickupBase_UsePickupObject = FName(TEXT("UsePickupObject"));
	void AGMTKJam_PickupBase::UsePickupObject(AActor* recipientActor)
	{
		GMTKJam_PickupBase_eventUsePickupObject_Parms Parms;
		Parms.recipientActor=recipientActor;
		ProcessEvent(FindFunctionChecked(NAME_AGMTKJam_PickupBase_UsePickupObject),&Parms);
	}
	void AGMTKJam_PickupBase::StaticRegisterNativesAGMTKJam_PickupBase()
	{
	}
	struct Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_recipientActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::NewProp_recipientActor = { "recipientActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMTKJam_PickupBase_eventUsePickupObject_Parms, recipientActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::NewProp_recipientActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMTKJam_PickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMTKJam_PickupBase, nullptr, "UsePickupObject", nullptr, nullptr, sizeof(GMTKJam_PickupBase_eventUsePickupObject_Parms), Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMTKJam_PickupBase_NoRegister()
	{
		return AGMTKJam_PickupBase::StaticClass();
	}
	struct Z_Construct_UClass_AGMTKJam_PickupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMTKJam_PickupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMTKJam_PickupBase_UsePickupObject, "UsePickupObject" }, // 1534130166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PickupBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMTKJam_PickupBase.h" },
		{ "ModuleRelativePath", "Public/GMTKJam_PickupBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "GMTKJam_PickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMTKJam_PickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMTKJam_PickupBase, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKJam_PickupBase_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMTKJam_PickupBase_Statics::PropPointers[] = {
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
		FuncInfo,
		Z_Construct_UClass_AGMTKJam_PickupBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGMTKJam_PickupBase, 1127096717);
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
