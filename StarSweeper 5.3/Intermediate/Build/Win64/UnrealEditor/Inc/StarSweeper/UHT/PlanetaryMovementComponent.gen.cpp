// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarSweeper/PlanetaryMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetaryMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	STARSWEEPER_API UClass* Z_Construct_UClass_UPlanetaryMovementComponent();
	STARSWEEPER_API UClass* Z_Construct_UClass_UPlanetaryMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StarSweeper();
// End Cross Module References
	DEFINE_FUNCTION(UPlanetaryMovementComponent::execUpdateGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGravityDirection(Z_Param_Out_NewGravityDir);
		P_NATIVE_END;
	}
	void UPlanetaryMovementComponent::StaticRegisterNativesUPlanetaryMovementComponent()
	{
		UClass* Class = UPlanetaryMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateGravityDirection", &UPlanetaryMovementComponent::execUpdateGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics
	{
		struct PlanetaryMovementComponent_eventUpdateGravityDirection_Parms
		{
			FVector NewGravityDir;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir = { "NewGravityDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanetaryMovementComponent_eventUpdateGravityDirection_Parms, NewGravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir_MetaData), Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanetaryMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanetaryMovementComponent, nullptr, "UpdateGravityDirection", nullptr, nullptr, Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::PlanetaryMovementComponent_eventUpdateGravityDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::PlanetaryMovementComponent_eventUpdateGravityDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanetaryMovementComponent);
	UClass* Z_Construct_UClass_UPlanetaryMovementComponent_NoRegister()
	{
		return UPlanetaryMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlanetaryMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanetaryMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StarSweeper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetaryMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlanetaryMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanetaryMovementComponent_UpdateGravityDirection, "UpdateGravityDirection" }, // 4284761849
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetaryMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetaryMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlanetaryMovementComponent.h" },
		{ "ModuleRelativePath", "PlanetaryMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanetaryMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanetaryMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanetaryMovementComponent_Statics::ClassParams = {
		&UPlanetaryMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetaryMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanetaryMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlanetaryMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UPlanetaryMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanetaryMovementComponent.OuterSingleton, Z_Construct_UClass_UPlanetaryMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlanetaryMovementComponent.OuterSingleton;
	}
	template<> STARSWEEPER_API UClass* StaticClass<UPlanetaryMovementComponent>()
	{
		return UPlanetaryMovementComponent::StaticClass();
	}
	UPlanetaryMovementComponent::UPlanetaryMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanetaryMovementComponent);
	UPlanetaryMovementComponent::~UPlanetaryMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_ClaraGame_StarSweeper_StarSweeper_5_3_Source_StarSweeper_PlanetaryMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_ClaraGame_StarSweeper_StarSweeper_5_3_Source_StarSweeper_PlanetaryMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlanetaryMovementComponent, UPlanetaryMovementComponent::StaticClass, TEXT("UPlanetaryMovementComponent"), &Z_Registration_Info_UClass_UPlanetaryMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanetaryMovementComponent), 294030149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_ClaraGame_StarSweeper_StarSweeper_5_3_Source_StarSweeper_PlanetaryMovementComponent_h_918307836(TEXT("/Script/StarSweeper"),
		Z_CompiledInDeferFile_FID_Documents_ClaraGame_StarSweeper_StarSweeper_5_3_Source_StarSweeper_PlanetaryMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_ClaraGame_StarSweeper_StarSweeper_5_3_Source_StarSweeper_PlanetaryMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
