// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/Public/GrowShrinkInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrowShrinkInterface() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_UGrowShrinkInterface_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_UGrowShrinkInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
// End Cross Module References
	DEFINE_FUNCTION(IGrowShrinkInterface::execGrowShrinkObject)
	{
		P_GET_UBOOL(Z_Param_bShouldGrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrowShrinkObject_Implementation(Z_Param_bShouldGrow);
		P_NATIVE_END;
	}
	void IGrowShrinkInterface::GrowShrinkObject(bool bShouldGrow)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GrowShrinkObject instead.");
	}
	void UGrowShrinkInterface::StaticRegisterNativesUGrowShrinkInterface()
	{
		UClass* Class = UGrowShrinkInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrowShrinkObject", &IGrowShrinkInterface::execGrowShrinkObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics
	{
		static void NewProp_bShouldGrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::NewProp_bShouldGrow_SetBit(void* Obj)
	{
		((GrowShrinkInterface_eventGrowShrinkObject_Parms*)Obj)->bShouldGrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::NewProp_bShouldGrow = { "bShouldGrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrowShrinkInterface_eventGrowShrinkObject_Parms), &Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::NewProp_bShouldGrow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::NewProp_bShouldGrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrowShrinkInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrowShrinkInterface, nullptr, "GrowShrinkObject", nullptr, nullptr, sizeof(GrowShrinkInterface_eventGrowShrinkObject_Parms), Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrowShrinkInterface_NoRegister()
	{
		return UGrowShrinkInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGrowShrinkInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrowShrinkInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrowShrinkInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrowShrinkInterface_GrowShrinkObject, "GrowShrinkObject" }, // 2730057387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrowShrinkInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrowShrinkInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrowShrinkInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGrowShrinkInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrowShrinkInterface_Statics::ClassParams = {
		&UGrowShrinkInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGrowShrinkInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrowShrinkInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrowShrinkInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrowShrinkInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrowShrinkInterface, 1129695471);
	template<> GMTK2024_API UClass* StaticClass<UGrowShrinkInterface>()
	{
		return UGrowShrinkInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrowShrinkInterface(Z_Construct_UClass_UGrowShrinkInterface, &UGrowShrinkInterface::StaticClass, TEXT("/Script/GMTK2024"), TEXT("UGrowShrinkInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrowShrinkInterface);
	static FName NAME_UGrowShrinkInterface_GrowShrinkObject = FName(TEXT("GrowShrinkObject"));
	void IGrowShrinkInterface::Execute_GrowShrinkObject(UObject* O, bool bShouldGrow)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrowShrinkInterface::StaticClass()));
		GrowShrinkInterface_eventGrowShrinkObject_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGrowShrinkInterface_GrowShrinkObject);
		if (Func)
		{
			Parms.bShouldGrow=bShouldGrow;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGrowShrinkInterface*)(O->GetNativeInterfaceAddress(UGrowShrinkInterface::StaticClass())))
		{
			I->GrowShrinkObject_Implementation(bShouldGrow);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
