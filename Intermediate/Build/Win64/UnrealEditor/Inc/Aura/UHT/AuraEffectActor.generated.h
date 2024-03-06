// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraEffectActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AURA_AuraEffectActor_generated_h
#error "AuraEffectActor.generated.h already included, missing '#pragma once' in AuraEffectActor.h"
#endif
#define AURA_AuraEffectActor_generated_h

#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_SPARSE_DATA
#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_ACCESSORS
#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct Z_Construct_UClass_AAuraEffectActor_Statics; \
public: \
	DECLARE_CLASS(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct Z_Construct_UClass_AAuraEffectActor_Statics; \
public: \
	DECLARE_CLASS(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuraEffectActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuraEffectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraEffectActor(AAuraEffectActor&&); \
	NO_API AAuraEffectActor(const AAuraEffectActor&); \
public: \
	NO_API virtual ~AAuraEffectActor();


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraEffectActor(AAuraEffectActor&&); \
	NO_API AAuraEffectActor(const AAuraEffectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEffectActor) \
	NO_API virtual ~AAuraEffectActor();


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_10_PROLOG
#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_SPARSE_DATA \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_RPC_WRAPPERS \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_ACCESSORS \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_INCLASS \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_SPARSE_DATA \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_ACCESSORS \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraEffectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Aura_5_2_Source_Aura_Public_Actor_AuraEffectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
