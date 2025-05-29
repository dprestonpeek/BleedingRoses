// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleedingRoses/BleedingRosesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleedingRosesGameMode() {}

// Begin Cross Module References
BLEEDINGROSES_API UClass* Z_Construct_UClass_ABleedingRosesGameMode();
BLEEDINGROSES_API UClass* Z_Construct_UClass_ABleedingRosesGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BleedingRoses();
// End Cross Module References

// Begin Class ABleedingRosesGameMode
void ABleedingRosesGameMode::StaticRegisterNativesABleedingRosesGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABleedingRosesGameMode);
UClass* Z_Construct_UClass_ABleedingRosesGameMode_NoRegister()
{
	return ABleedingRosesGameMode::StaticClass();
}
struct Z_Construct_UClass_ABleedingRosesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BleedingRosesGameMode.h" },
		{ "ModuleRelativePath", "BleedingRosesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABleedingRosesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABleedingRosesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BleedingRoses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABleedingRosesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABleedingRosesGameMode_Statics::ClassParams = {
	&ABleedingRosesGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABleedingRosesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABleedingRosesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABleedingRosesGameMode()
{
	if (!Z_Registration_Info_UClass_ABleedingRosesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABleedingRosesGameMode.OuterSingleton, Z_Construct_UClass_ABleedingRosesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABleedingRosesGameMode.OuterSingleton;
}
template<> BLEEDINGROSES_API UClass* StaticClass<ABleedingRosesGameMode>()
{
	return ABleedingRosesGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABleedingRosesGameMode);
ABleedingRosesGameMode::~ABleedingRosesGameMode() {}
// End Class ABleedingRosesGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BleedingRoses_BleedingRoses_Source_BleedingRoses_BleedingRosesGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABleedingRosesGameMode, ABleedingRosesGameMode::StaticClass, TEXT("ABleedingRosesGameMode"), &Z_Registration_Info_UClass_ABleedingRosesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABleedingRosesGameMode), 1562946105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BleedingRoses_BleedingRoses_Source_BleedingRoses_BleedingRosesGameMode_h_3156025806(TEXT("/Script/BleedingRoses"),
	Z_CompiledInDeferFile_FID_BleedingRoses_BleedingRoses_Source_BleedingRoses_BleedingRosesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BleedingRoses_BleedingRoses_Source_BleedingRoses_BleedingRosesGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
