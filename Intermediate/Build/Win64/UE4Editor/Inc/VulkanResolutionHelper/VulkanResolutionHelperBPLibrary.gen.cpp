// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VulkanResolutionHelper/Public/VulkanResolutionHelperBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVulkanResolutionHelperBPLibrary() {}
// Cross Module References
	VULKANRESOLUTIONHELPER_API UClass* Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_NoRegister();
	VULKANRESOLUTIONHELPER_API UClass* Z_Construct_UClass_UVulkanResolutionHelperBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VulkanResolutionHelper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	DEFINE_FUNCTION(UVulkanResolutionHelperBPLibrary::execGetMonitorInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MonitorIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NativeWidth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NativeHeight);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_MaxResolution);
		P_GET_UBOOL_REF(Z_Param_Out_bIsPrimary);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DPI);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVulkanResolutionHelperBPLibrary::GetMonitorInfo(Z_Param_MonitorIndex,Z_Param_Out_Name,Z_Param_Out_ID,Z_Param_Out_NativeWidth,Z_Param_Out_NativeHeight,Z_Param_Out_MaxResolution,Z_Param_Out_bIsPrimary,Z_Param_Out_DPI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVulkanResolutionHelperBPLibrary::execGetNumberOfConnectedMonitors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVulkanResolutionHelperBPLibrary::GetNumberOfConnectedMonitors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVulkanResolutionHelperBPLibrary::execGetPrimaryMonitorSupportedResolutions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntPoint>*)Z_Param__Result=UVulkanResolutionHelperBPLibrary::GetPrimaryMonitorSupportedResolutions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVulkanResolutionHelperBPLibrary::execGetSupportedResolutions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MonitorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntPoint>*)Z_Param__Result=UVulkanResolutionHelperBPLibrary::GetSupportedResolutions(Z_Param_MonitorIndex);
		P_NATIVE_END;
	}
	void UVulkanResolutionHelperBPLibrary::StaticRegisterNativesUVulkanResolutionHelperBPLibrary()
	{
		UClass* Class = UVulkanResolutionHelperBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMonitorInfo", &UVulkanResolutionHelperBPLibrary::execGetMonitorInfo },
			{ "GetNumberOfConnectedMonitors", &UVulkanResolutionHelperBPLibrary::execGetNumberOfConnectedMonitors },
			{ "GetPrimaryMonitorSupportedResolutions", &UVulkanResolutionHelperBPLibrary::execGetPrimaryMonitorSupportedResolutions },
			{ "GetSupportedResolutions", &UVulkanResolutionHelperBPLibrary::execGetSupportedResolutions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics
	{
		struct VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms
		{
			int32 MonitorIndex;
			FString Name;
			FString ID;
			int32 NativeWidth;
			int32 NativeHeight;
			FIntPoint MaxResolution;
			bool bIsPrimary;
			int32 DPI;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MonitorIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NativeWidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NativeHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxResolution;
		static void NewProp_bIsPrimary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPrimary;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DPI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_MonitorIndex = { "MonitorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, MonitorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_NativeWidth = { "NativeWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, NativeWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_NativeHeight = { "NativeHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, NativeHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_MaxResolution = { "MaxResolution", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, MaxResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_bIsPrimary_SetBit(void* Obj)
	{
		((VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms*)Obj)->bIsPrimary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_bIsPrimary = { "bIsPrimary", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms), &Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_bIsPrimary_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_DPI = { "DPI", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms, DPI), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_MonitorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_NativeWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_NativeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_MaxResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_bIsPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::NewProp_DPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "VulkanPlugin" },
		{ "ModuleRelativePath", "Public/VulkanResolutionHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVulkanResolutionHelperBPLibrary, nullptr, "GetMonitorInfo", nullptr, nullptr, sizeof(VulkanResolutionHelperBPLibrary_eventGetMonitorInfo_Parms), Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics
	{
		struct VulkanResolutionHelperBPLibrary_eventGetNumberOfConnectedMonitors_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetNumberOfConnectedMonitors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::Function_MetaDataParams[] = {
		{ "Category", "VulkanPlugin" },
		{ "ModuleRelativePath", "Public/VulkanResolutionHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVulkanResolutionHelperBPLibrary, nullptr, "GetNumberOfConnectedMonitors", nullptr, nullptr, sizeof(VulkanResolutionHelperBPLibrary_eventGetNumberOfConnectedMonitors_Parms), Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics
	{
		struct VulkanResolutionHelperBPLibrary_eventGetPrimaryMonitorSupportedResolutions_Parms
		{
			TArray<FIntPoint> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetPrimaryMonitorSupportedResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::Function_MetaDataParams[] = {
		{ "Category", "VulkanPlugin" },
		{ "ModuleRelativePath", "Public/VulkanResolutionHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVulkanResolutionHelperBPLibrary, nullptr, "GetPrimaryMonitorSupportedResolutions", nullptr, nullptr, sizeof(VulkanResolutionHelperBPLibrary_eventGetPrimaryMonitorSupportedResolutions_Parms), Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics
	{
		struct VulkanResolutionHelperBPLibrary_eventGetSupportedResolutions_Parms
		{
			int32 MonitorIndex;
			TArray<FIntPoint> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MonitorIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::NewProp_MonitorIndex = { "MonitorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetSupportedResolutions_Parms, MonitorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VulkanResolutionHelperBPLibrary_eventGetSupportedResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::NewProp_MonitorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::Function_MetaDataParams[] = {
		{ "Category", "VulkanPlugin" },
		{ "ModuleRelativePath", "Public/VulkanResolutionHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVulkanResolutionHelperBPLibrary, nullptr, "GetSupportedResolutions", nullptr, nullptr, sizeof(VulkanResolutionHelperBPLibrary_eventGetSupportedResolutions_Parms), Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_NoRegister()
	{
		return UVulkanResolutionHelperBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VulkanResolutionHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetMonitorInfo, "GetMonitorInfo" }, // 717106831
		{ &Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetNumberOfConnectedMonitors, "GetNumberOfConnectedMonitors" }, // 195892017
		{ &Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetPrimaryMonitorSupportedResolutions, "GetPrimaryMonitorSupportedResolutions" }, // 4069496764
		{ &Z_Construct_UFunction_UVulkanResolutionHelperBPLibrary_GetSupportedResolutions, "GetSupportedResolutions" }, // 1180702094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "VulkanResolutionHelperBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VulkanResolutionHelperBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVulkanResolutionHelperBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::ClassParams = {
		&UVulkanResolutionHelperBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVulkanResolutionHelperBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVulkanResolutionHelperBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVulkanResolutionHelperBPLibrary, 1740080671);
	template<> VULKANRESOLUTIONHELPER_API UClass* StaticClass<UVulkanResolutionHelperBPLibrary>()
	{
		return UVulkanResolutionHelperBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVulkanResolutionHelperBPLibrary(Z_Construct_UClass_UVulkanResolutionHelperBPLibrary, &UVulkanResolutionHelperBPLibrary::StaticClass, TEXT("/Script/VulkanResolutionHelper"), TEXT("UVulkanResolutionHelperBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVulkanResolutionHelperBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
