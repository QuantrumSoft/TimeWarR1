// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TIMEWAR1_TimeWar1Projectile_generated_h
#error "TimeWar1Projectile.generated.h already included, missing '#pragma once' in TimeWar1Projectile.h"
#endif
#define TIMEWAR1_TimeWar1Projectile_generated_h

#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeWar1Projectile(); \
	friend TIMEWAR1_API class UClass* Z_Construct_UClass_ATimeWar1Projectile(); \
public: \
	DECLARE_CLASS(ATimeWar1Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TimeWar1"), NO_API) \
	DECLARE_SERIALIZER(ATimeWar1Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATimeWar1Projectile(); \
	friend TIMEWAR1_API class UClass* Z_Construct_UClass_ATimeWar1Projectile(); \
public: \
	DECLARE_CLASS(ATimeWar1Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TimeWar1"), NO_API) \
	DECLARE_SERIALIZER(ATimeWar1Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeWar1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeWar1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeWar1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeWar1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeWar1Projectile(ATimeWar1Projectile&&); \
	NO_API ATimeWar1Projectile(const ATimeWar1Projectile&); \
public:


#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeWar1Projectile(ATimeWar1Projectile&&); \
	NO_API ATimeWar1Projectile(const ATimeWar1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeWar1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeWar1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimeWar1Projectile)


#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATimeWar1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATimeWar1Projectile, ProjectileMovement); }


#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_9_PROLOG
#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_RPC_WRAPPERS \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_INCLASS \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_INCLASS_NO_PURE_DECLS \
	TimeWar1_Source_TimeWar1_TimeWar1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TimeWar1_Source_TimeWar1_TimeWar1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
