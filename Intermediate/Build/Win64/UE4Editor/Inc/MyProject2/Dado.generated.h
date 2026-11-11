// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef MYPROJECT2_Dado_generated_h
#error "Dado.generated.h already included, missing '#pragma once' in Dado.h"
#endif
#define MYPROJECT2_Dado_generated_h

#define MyProject2_Source_MyProject2_Dado_h_14_SPARSE_DATA
#define MyProject2_Source_MyProject2_Dado_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyVerticalImpulse); \
	DECLARE_FUNCTION(execBlockClicked); \
	DECLARE_FUNCTION(execladoCara);


#define MyProject2_Source_MyProject2_Dado_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyVerticalImpulse); \
	DECLARE_FUNCTION(execBlockClicked); \
	DECLARE_FUNCTION(execladoCara);


#define MyProject2_Source_MyProject2_Dado_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADado(); \
	friend struct Z_Construct_UClass_ADado_Statics; \
public: \
	DECLARE_CLASS(ADado, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ADado)


#define MyProject2_Source_MyProject2_Dado_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADado(); \
	friend struct Z_Construct_UClass_ADado_Statics; \
public: \
	DECLARE_CLASS(ADado, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ADado)


#define MyProject2_Source_MyProject2_Dado_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADado(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADado) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADado); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADado); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADado(ADado&&); \
	NO_API ADado(const ADado&); \
public:


#define MyProject2_Source_MyProject2_Dado_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADado(ADado&&); \
	NO_API ADado(const ADado&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADado); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADado); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADado)


#define MyProject2_Source_MyProject2_Dado_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_Dado_h_11_PROLOG
#define MyProject2_Source_MyProject2_Dado_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Dado_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Dado_h_14_SPARSE_DATA \
	MyProject2_Source_MyProject2_Dado_h_14_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_Dado_h_14_INCLASS \
	MyProject2_Source_MyProject2_Dado_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_Dado_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Dado_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Dado_h_14_SPARSE_DATA \
	MyProject2_Source_MyProject2_Dado_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Dado_h_14_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Dado_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class ADado>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_Dado_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
