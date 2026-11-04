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
#ifdef MYPROJECT2_MyProject2Block_generated_h
#error "MyProject2Block.generated.h already included, missing '#pragma once' in MyProject2Block.h"
#endif
#define MYPROJECT2_MyProject2Block_generated_h

#define MyProject2_Source_MyProject2_MyProject2Block_h_13_SPARSE_DATA
#define MyProject2_Source_MyProject2_MyProject2Block_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2Block(); \
	friend struct Z_Construct_UClass_AMyProject2Block_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Block, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), MYPROJECT2_API) \
	DECLARE_SERIALIZER(AMyProject2Block)


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject2Block(); \
	friend struct Z_Construct_UClass_AMyProject2Block_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Block, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), MYPROJECT2_API) \
	DECLARE_SERIALIZER(AMyProject2Block)


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT2_API AMyProject2Block(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2Block) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT2_API, AMyProject2Block); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Block); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT2_API AMyProject2Block(AMyProject2Block&&); \
	MYPROJECT2_API AMyProject2Block(const AMyProject2Block&); \
public:


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT2_API AMyProject2Block(AMyProject2Block&&); \
	MYPROJECT2_API AMyProject2Block(const AMyProject2Block&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT2_API, AMyProject2Block); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Block); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2Block)


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AMyProject2Block, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AMyProject2Block, BlockMesh); }


#define MyProject2_Source_MyProject2_MyProject2Block_h_10_PROLOG
#define MyProject2_Source_MyProject2_MyProject2Block_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_INCLASS \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_MyProject2Block_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyProject2Block>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_MyProject2Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
