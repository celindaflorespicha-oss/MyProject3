// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_MyProject2Pawn_generated_h
#error "MyProject2Pawn.generated.h already included, missing '#pragma once' in MyProject2Pawn.h"
#endif
#define MYPROJECT2_MyProject2Pawn_generated_h

#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_SPARSE_DATA
#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_RPC_WRAPPERS
#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2Pawn(); \
	friend struct Z_Construct_UClass_AMyProject2Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Pawn)


#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject2Pawn(); \
	friend struct Z_Construct_UClass_AMyProject2Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Pawn)


#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject2Pawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Pawn(AMyProject2Pawn&&); \
	NO_API AMyProject2Pawn(const AMyProject2Pawn&); \
public:


#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject2Pawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Pawn(AMyProject2Pawn&&); \
	NO_API AMyProject2Pawn(const AMyProject2Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Pawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2Pawn)


#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(AMyProject2Pawn, CurrentBlockFocus); } \
	FORCEINLINE static uint32 __PPO__CurrentDiceFocus() { return STRUCT_OFFSET(AMyProject2Pawn, CurrentDiceFocus); }


#define MyProject2_Source_MyProject2_MyProject2Pawn_h_9_PROLOG
#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_INCLASS \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_MyProject2Pawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Pawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyProject2Pawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyProject2Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_MyProject2Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
