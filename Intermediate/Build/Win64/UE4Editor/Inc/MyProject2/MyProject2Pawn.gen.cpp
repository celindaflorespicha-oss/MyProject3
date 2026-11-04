// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyProject2Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject2Pawn() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2Pawn_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2Block_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ADado_NoRegister();
// End Cross Module References
	void AMyProject2Pawn::StaticRegisterNativesAMyProject2Pawn()
	{
	}
	UClass* Z_Construct_UClass_AMyProject2Pawn_NoRegister()
	{
		return AMyProject2Pawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject2Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDiceFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDiceFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject2Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2Pawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyProject2Pawn.h" },
		{ "ModuleRelativePath", "MyProject2Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "MyProject2Pawn" },
		{ "ModuleRelativePath", "MyProject2Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProject2Pawn, CurrentBlockFocus), Z_Construct_UClass_AMyProject2Block_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentBlockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentDiceFocus_MetaData[] = {
		{ "Category", "MyProject2Pawn" },
		{ "ModuleRelativePath", "MyProject2Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentDiceFocus = { "CurrentDiceFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProject2Pawn, CurrentDiceFocus), Z_Construct_UClass_ADado_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentDiceFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentDiceFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProject2Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentBlockFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2Pawn_Statics::NewProp_CurrentDiceFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject2Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject2Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject2Pawn_Statics::ClassParams = {
		&AMyProject2Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyProject2Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2Pawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject2Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject2Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject2Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject2Pawn, 2420152494);
	template<> MYPROJECT2_API UClass* StaticClass<AMyProject2Pawn>()
	{
		return AMyProject2Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject2Pawn(Z_Construct_UClass_AMyProject2Pawn, &AMyProject2Pawn::StaticClass, TEXT("/Script/MyProject2"), TEXT("AMyProject2Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject2Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
