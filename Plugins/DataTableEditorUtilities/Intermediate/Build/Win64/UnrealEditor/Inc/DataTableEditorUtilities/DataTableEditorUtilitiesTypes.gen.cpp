// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableEditorUtilities/Public/DataTableEditorUtilitiesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableEditorUtilitiesTypes() {}
// Cross Module References
	DATATABLEEDITORUTILITIES_API UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition();
	UPackage* Z_Construct_UPackage__Script_DataTableEditorUtilities();
	DATATABLEEDITORUTILITIES_API UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataTableRowInsertPosition;
	static UEnum* EDataTableRowInsertPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataTableRowInsertPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataTableRowInsertPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition, Z_Construct_UPackage__Script_DataTableEditorUtilities(), TEXT("EDataTableRowInsertPosition"));
		}
		return Z_Registration_Info_UEnum_EDataTableRowInsertPosition.OuterSingleton;
	}
	template<> DATATABLEEDITORUTILITIES_API UEnum* StaticEnum<EDataTableRowInsertPosition>()
	{
		return EDataTableRowInsertPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::Enumerators[] = {
		{ "EDataTableRowInsertPosition::Above", (int64)EDataTableRowInsertPosition::Above },
		{ "EDataTableRowInsertPosition::Below", (int64)EDataTableRowInsertPosition::Below },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::Enum_MetaDataParams[] = {
		{ "Above.Name", "EDataTableRowInsertPosition::Above" },
		{ "Below.Name", "EDataTableRowInsertPosition::Below" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataTableEditorUtilities,
		nullptr,
		"EDataTableRowInsertPosition",
		"EDataTableRowInsertPosition",
		Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition()
	{
		if (!Z_Registration_Info_UEnum_EDataTableRowInsertPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataTableRowInsertPosition.InnerSingleton, Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataTableRowInsertPosition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataTableRowMoveDirection;
	static UEnum* EDataTableRowMoveDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataTableRowMoveDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataTableRowMoveDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection, Z_Construct_UPackage__Script_DataTableEditorUtilities(), TEXT("EDataTableRowMoveDirection"));
		}
		return Z_Registration_Info_UEnum_EDataTableRowMoveDirection.OuterSingleton;
	}
	template<> DATATABLEEDITORUTILITIES_API UEnum* StaticEnum<EDataTableRowMoveDirection>()
	{
		return EDataTableRowMoveDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::Enumerators[] = {
		{ "EDataTableRowMoveDirection::Up", (int64)EDataTableRowMoveDirection::Up },
		{ "EDataTableRowMoveDirection::Down", (int64)EDataTableRowMoveDirection::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.Name", "EDataTableRowMoveDirection::Down" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesTypes.h" },
		{ "Up.Name", "EDataTableRowMoveDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataTableEditorUtilities,
		nullptr,
		"EDataTableRowMoveDirection",
		"EDataTableRowMoveDirection",
		Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection()
	{
		if (!Z_Registration_Info_UEnum_EDataTableRowMoveDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataTableRowMoveDirection.InnerSingleton, Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataTableRowMoveDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Full_Plugins_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Full_Plugins_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesTypes_h_Statics::EnumInfo[] = {
		{ EDataTableRowInsertPosition_StaticEnum, TEXT("EDataTableRowInsertPosition"), &Z_Registration_Info_UEnum_EDataTableRowInsertPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2052496896U) },
		{ EDataTableRowMoveDirection_StaticEnum, TEXT("EDataTableRowMoveDirection"), &Z_Registration_Info_UEnum_EDataTableRowMoveDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260020126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Full_Plugins_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesTypes_h_392692908(TEXT("/Script/DataTableEditorUtilities"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Full_Plugins_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Full_Plugins_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
