// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAttributeSet() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet();
	AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraAttributeSet::StaticRegisterNativesUAuraAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAttributeSet);
	UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister()
	{
		return UAuraAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/AuraAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams = {
		&UAuraAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuraAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton, Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAttributeSet>()
	{
		return UAuraAttributeSet::StaticClass();
	}
	UAuraAttributeSet::UAuraAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAttributeSet);
	UAuraAttributeSet::~UAuraAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeSet, UAuraAttributeSet::StaticClass, TEXT("UAuraAttributeSet"), &Z_Registration_Info_UClass_UAuraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeSet), 254985392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_2106710608(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
