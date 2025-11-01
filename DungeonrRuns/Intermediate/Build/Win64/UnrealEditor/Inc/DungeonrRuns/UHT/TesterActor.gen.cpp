// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonrRuns/TesterActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTesterActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONRRUNS_API UClass* Z_Construct_UClass_ATesterActor();
DUNGEONRRUNS_API UClass* Z_Construct_UClass_ATesterActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DungeonrRuns();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATesterActor *************************************************************
void ATesterActor::StaticRegisterNativesATesterActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATesterActor;
UClass* ATesterActor::GetPrivateStaticClass()
{
	using TClass = ATesterActor;
	if (!Z_Registration_Info_UClass_ATesterActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TesterActor"),
			Z_Registration_Info_UClass_ATesterActor.InnerSingleton,
			StaticRegisterNativesATesterActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATesterActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATesterActor_NoRegister()
{
	return ATesterActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATesterActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TesterActor.h" },
		{ "ModuleRelativePath", "TesterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointA_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Points between which the actor moves\n" },
#endif
		{ "ModuleRelativePath", "TesterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Points between which the actor moves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointB_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TesterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed of movement\n" },
#endif
		{ "ModuleRelativePath", "TesterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATesterActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATesterActor_Statics::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATesterActor, PointA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointA_MetaData), NewProp_PointA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATesterActor_Statics::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATesterActor, PointB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointB_MetaData), NewProp_PointB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATesterActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATesterActor, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATesterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATesterActor_Statics::NewProp_PointA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATesterActor_Statics::NewProp_PointB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATesterActor_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATesterActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATesterActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonrRuns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATesterActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATesterActor_Statics::ClassParams = {
	&ATesterActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATesterActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATesterActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATesterActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATesterActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATesterActor()
{
	if (!Z_Registration_Info_UClass_ATesterActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATesterActor.OuterSingleton, Z_Construct_UClass_ATesterActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATesterActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATesterActor);
ATesterActor::~ATesterActor() {}
// ********** End Class ATesterActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jetta_OneDrive_Documentos_GitHub_DungeonRun2_DungeonrRuns_Source_DungeonrRuns_TesterActor_h__Script_DungeonrRuns_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATesterActor, ATesterActor::StaticClass, TEXT("ATesterActor"), &Z_Registration_Info_UClass_ATesterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATesterActor), 3719833164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jetta_OneDrive_Documentos_GitHub_DungeonRun2_DungeonrRuns_Source_DungeonrRuns_TesterActor_h__Script_DungeonrRuns_1721760546(TEXT("/Script/DungeonrRuns"),
	Z_CompiledInDeferFile_FID_Users_jetta_OneDrive_Documentos_GitHub_DungeonRun2_DungeonrRuns_Source_DungeonrRuns_TesterActor_h__Script_DungeonrRuns_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jetta_OneDrive_Documentos_GitHub_DungeonRun2_DungeonrRuns_Source_DungeonrRuns_TesterActor_h__Script_DungeonrRuns_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
