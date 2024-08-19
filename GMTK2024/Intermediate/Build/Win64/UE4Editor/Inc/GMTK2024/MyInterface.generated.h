// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMTK2024_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define GMTK2024_MyInterface_generated_h

#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_SPARSE_DATA
#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_RPC_WRAPPERS
#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GMTK2024_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GMTK2024_API, UMyInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GMTK2024_API UMyInterface(UMyInterface&&); \
	GMTK2024_API UMyInterface(const UMyInterface&); \
public:


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GMTK2024_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GMTK2024_API UMyInterface(UMyInterface&&); \
	GMTK2024_API UMyInterface(const UMyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GMTK2024_API, UMyInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface)


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct Z_Construct_UClass_UMyInterface_Statics; \
public: \
	DECLARE_CLASS(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GMTK2024"), GMTK2024_API) \
	DECLARE_SERIALIZER(UMyInterface)


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_10_PROLOG
#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_SPARSE_DATA \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_RPC_WRAPPERS \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK2024_Source_GMTK2024_Public_MyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_SPARSE_DATA \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GMTK2024_Source_GMTK2024_Public_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMTK2024_API UClass* StaticClass<class UMyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GMTK2024_Source_GMTK2024_Public_MyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
