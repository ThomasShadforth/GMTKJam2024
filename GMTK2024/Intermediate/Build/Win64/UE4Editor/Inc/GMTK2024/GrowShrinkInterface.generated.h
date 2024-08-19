// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMTK2024_GrowShrinkInterface_generated_h
#error "GrowShrinkInterface.generated.h already included, missing '#pragma once' in GrowShrinkInterface.h"
#endif
#define GMTK2024_GrowShrinkInterface_generated_h

#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_SPARSE_DATA
#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_RPC_WRAPPERS \
	virtual void GrowShrinkObject_Implementation(bool bShouldGrow) {}; \
 \
	DECLARE_FUNCTION(execGrowShrinkObject);


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GrowShrinkObject_Implementation(bool bShouldGrow) {}; \
 \
	DECLARE_FUNCTION(execGrowShrinkObject);


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_EVENT_PARMS \
	struct GrowShrinkInterface_eventGrowShrinkObject_Parms \
	{ \
		bool bShouldGrow; \
	};


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_CALLBACK_WRAPPERS
#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GMTK2024_API UGrowShrinkInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrowShrinkInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GMTK2024_API, UGrowShrinkInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrowShrinkInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GMTK2024_API UGrowShrinkInterface(UGrowShrinkInterface&&); \
	GMTK2024_API UGrowShrinkInterface(const UGrowShrinkInterface&); \
public:


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GMTK2024_API UGrowShrinkInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GMTK2024_API UGrowShrinkInterface(UGrowShrinkInterface&&); \
	GMTK2024_API UGrowShrinkInterface(const UGrowShrinkInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GMTK2024_API, UGrowShrinkInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrowShrinkInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrowShrinkInterface)


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGrowShrinkInterface(); \
	friend struct Z_Construct_UClass_UGrowShrinkInterface_Statics; \
public: \
	DECLARE_CLASS(UGrowShrinkInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GMTK2024"), GMTK2024_API) \
	DECLARE_SERIALIZER(UGrowShrinkInterface)


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_GENERATED_UINTERFACE_BODY() \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_GENERATED_UINTERFACE_BODY() \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGrowShrinkInterface() {} \
public: \
	typedef UGrowShrinkInterface UClassType; \
	typedef IGrowShrinkInterface ThisClass; \
	static void Execute_GrowShrinkObject(UObject* O, bool bShouldGrow); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGrowShrinkInterface() {} \
public: \
	typedef UGrowShrinkInterface UClassType; \
	typedef IGrowShrinkInterface ThisClass; \
	static void Execute_GrowShrinkObject(UObject* O, bool bShouldGrow); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_10_PROLOG \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_EVENT_PARMS


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_SPARSE_DATA \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_RPC_WRAPPERS \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_CALLBACK_WRAPPERS \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_SPARSE_DATA \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_CALLBACK_WRAPPERS \
	GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMTK2024_API UClass* StaticClass<class UGrowShrinkInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GMTK2024_Source_GMTK2024_Public_GrowShrinkInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
