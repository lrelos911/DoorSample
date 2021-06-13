// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorSample/DoorSampleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorSampleGameModeBase() {}
// Cross Module References
	DOORSAMPLE_API UClass* Z_Construct_UClass_ADoorSampleGameModeBase_NoRegister();
	DOORSAMPLE_API UClass* Z_Construct_UClass_ADoorSampleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DoorSample();
// End Cross Module References
	void ADoorSampleGameModeBase::StaticRegisterNativesADoorSampleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADoorSampleGameModeBase_NoRegister()
	{
		return ADoorSampleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADoorSampleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorSampleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorSample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorSampleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DoorSampleGameModeBase.h" },
		{ "ModuleRelativePath", "DoorSampleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorSampleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorSampleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorSampleGameModeBase_Statics::ClassParams = {
		&ADoorSampleGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADoorSampleGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorSampleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorSampleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorSampleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorSampleGameModeBase, 3637581095);
	template<> DOORSAMPLE_API UClass* StaticClass<ADoorSampleGameModeBase>()
	{
		return ADoorSampleGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorSampleGameModeBase(Z_Construct_UClass_ADoorSampleGameModeBase, &ADoorSampleGameModeBase::StaticClass, TEXT("/Script/DoorSample"), TEXT("ADoorSampleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorSampleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
