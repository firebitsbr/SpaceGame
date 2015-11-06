// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEGAME_Star_generated_h
#error "Star.generated.h already included, missing '#pragma once' in Star.h"
#endif
#define SPACEGAME_Star_generated_h

#define SpaceGame_Source_SpaceGame_Star_h_11_RPC_WRAPPERS
#define SpaceGame_Source_SpaceGame_Star_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceGame_Source_SpaceGame_Star_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAStar(); \
	friend SPACEGAME_API class UClass* Z_Construct_UClass_AStar(); \
	public: \
	DECLARE_CLASS(AStar, AActor, COMPILED_IN_FLAGS(0), 0, SpaceGame, NO_API) \
	DECLARE_SERIALIZER(AStar) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AStar*>(this); }


#define SpaceGame_Source_SpaceGame_Star_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAStar(); \
	friend SPACEGAME_API class UClass* Z_Construct_UClass_AStar(); \
	public: \
	DECLARE_CLASS(AStar, AActor, COMPILED_IN_FLAGS(0), 0, SpaceGame, NO_API) \
	DECLARE_SERIALIZER(AStar) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AStar*>(this); }


#define SpaceGame_Source_SpaceGame_Star_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStar); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AStar(const AStar& InCopy); \
public:


#define SpaceGame_Source_SpaceGame_Star_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AStar(const AStar& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStar)


#define SpaceGame_Source_SpaceGame_Star_h_8_PROLOG
#define SpaceGame_Source_SpaceGame_Star_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceGame_Source_SpaceGame_Star_h_11_RPC_WRAPPERS \
	SpaceGame_Source_SpaceGame_Star_h_11_INCLASS \
	SpaceGame_Source_SpaceGame_Star_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceGame_Source_SpaceGame_Star_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceGame_Source_SpaceGame_Star_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceGame_Source_SpaceGame_Star_h_11_INCLASS_NO_PURE_DECLS \
	SpaceGame_Source_SpaceGame_Star_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceGame_Source_SpaceGame_Star_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
