// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK2024/Public/GrabObjectInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabObjectInterface() {}
// Cross Module References
	GMTK2024_API UClass* Z_Construct_UClass_UGrabObjectInterface_NoRegister();
	GMTK2024_API UClass* Z_Construct_UClass_UGrabObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GMTK2024();
// End Cross Module References
	DEFINE_FUNCTION(IGrabObjectInterface::execDropObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGrabObjectInterface::execGrabObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabObject_Implementation();
		P_NATIVE_END;
	}
	void IGrabObjectInterface::DropObject()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DropObject instead.");
	}
	void IGrabObjectInterface::GrabObject()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GrabObject instead.");
	}
	void UGrabObjectInterface::StaticRegisterNativesUGrabObjectInterface()
	{
		UClass* Class = UGrabObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropObject", &IGrabObjectInterface::execDropObject },
			{ "GrabObject", &IGrabObjectInterface::execGrabObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabObjectInterface_DropObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabObjectInterface_DropObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabObjectInterface_DropObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabObjectInterface, nullptr, "DropObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabObjectInterface_DropObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabObjectInterface_DropObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabObjectInterface_DropObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabObjectInterface_DropObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabObjectInterface_GrabObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabObjectInterface_GrabObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabObjectInterface_GrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabObjectInterface, nullptr, "GrabObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabObjectInterface_GrabObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabObjectInterface_GrabObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabObjectInterface_GrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabObjectInterface_GrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabObjectInterface_NoRegister()
	{
		return UGrabObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGrabObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTK2024,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabObjectInterface_DropObject, "DropObject" }, // 3619131056
		{ &Z_Construct_UFunction_UGrabObjectInterface_GrabObject, "GrabObject" }, // 3357375028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGrabObjectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabObjectInterface_Statics::ClassParams = {
		&UGrabObjectInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrabObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabObjectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabObjectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabObjectInterface, 3813436803);
	template<> GMTK2024_API UClass* StaticClass<UGrabObjectInterface>()
	{
		return UGrabObjectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabObjectInterface(Z_Construct_UClass_UGrabObjectInterface, &UGrabObjectInterface::StaticClass, TEXT("/Script/GMTK2024"), TEXT("UGrabObjectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabObjectInterface);
	static FName NAME_UGrabObjectInterface_DropObject = FName(TEXT("DropObject"));
	void IGrabObjectInterface::Execute_DropObject(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrabObjectInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGrabObjectInterface_DropObject);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGrabObjectInterface*)(O->GetNativeInterfaceAddress(UGrabObjectInterface::StaticClass())))
		{
			I->DropObject_Implementation();
		}
	}
	static FName NAME_UGrabObjectInterface_GrabObject = FName(TEXT("GrabObject"));
	void IGrabObjectInterface::Execute_GrabObject(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrabObjectInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGrabObjectInterface_GrabObject);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGrabObjectInterface*)(O->GetNativeInterfaceAddress(UGrabObjectInterface::StaticClass())))
		{
			I->GrabObject_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
