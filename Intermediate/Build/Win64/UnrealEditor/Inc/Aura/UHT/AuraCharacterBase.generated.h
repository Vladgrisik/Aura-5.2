// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AuraCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraCharacterBase_generated_h
#error "AuraCharacterBase.generated.h already included, missing '#pragma once' in AuraCharacterBase.h"
#endif
#define AURA_AuraCharacterBase_generated_h

#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_SPARSE_DATA
#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_RPC_WRAPPERS
#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_ACCESSORS
#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraCharacterBase(); \
	friend struct Z_Construct_UClass_AAuraCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAuraCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraCharacterBase*>(this); }


#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAuraCharacterBase(); \
	friend struct Z_Construct_UClass_AAuraCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAuraCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraCharacterBase*>(this); }


#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuraCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuraCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraCharacterBase(AAuraCharacterBase&&); \
	NO_API AAuraCharacterBase(const AAuraCharacterBase&); \
public: \
	NO_API virtual ~AAuraCharacterBase();


#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraCharacterBase(AAuraCharacterBase&&); \
	NO_API AAuraCharacterBase(const AAuraCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAuraCharacterBase) \
	NO_API virtual ~AAuraCharacterBase();


#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_16_PROLOG
#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_SPARSE_DATA \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_RPC_WRAPPERS \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_ACCESSORS \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_INCLASS \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_SPARSE_DATA \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_ACCESSORS \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aura_5_2_Source_Aura_Public_AuraCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
