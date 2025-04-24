// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleLobbySystem/LobbyGameInstance.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameInstance() {}
// Cross Module References
	SIMPLELOBBYSYSTEM_API UClass* Z_Construct_UClass_ULobbyGameInstance_NoRegister();
	SIMPLELOBBYSYSTEM_API UClass* Z_Construct_UClass_ULobbyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SimpleLobbySystem();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyGameInstance::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULobbyGameInstance**)Z_Param__Result=ULobbyGameInstance::GetInstance();
		P_NATIVE_END;
	}
	void ULobbyGameInstance::StaticRegisterNativesULobbyGameInstance()
	{
		UClass* Class = ULobbyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstance", &ULobbyGameInstance::execGetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics
	{
		struct LobbyGameInstance_eventGetInstance_Parms
		{
			ULobbyGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyGameInstance_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_ULobbyGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LobbyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyGameInstance, nullptr, "GetInstance", nullptr, nullptr, sizeof(LobbyGameInstance_eventGetInstance_Parms), Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyGameInstance_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyGameInstance_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyGameInstance_NoRegister()
	{
		return ULobbyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SkinIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleLobbySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyGameInstance_GetInstance, "GetInstance" }, // 4184384574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LobbyGameInstance.h" },
		{ "ModuleRelativePath", "LobbyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "LobbyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyGameInstance, PlayerName), METADATA_PARAMS(Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "LobbyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyGameInstance, SkinIndex), METADATA_PARAMS(Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_SkinIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_SkinIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyGameInstance_Statics::NewProp_SkinIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyGameInstance_Statics::ClassParams = {
		&ULobbyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyGameInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyGameInstance, 1196029698);
	template<> SIMPLELOBBYSYSTEM_API UClass* StaticClass<ULobbyGameInstance>()
	{
		return ULobbyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyGameInstance(Z_Construct_UClass_ULobbyGameInstance, &ULobbyGameInstance::StaticClass, TEXT("/Script/SimpleLobbySystem"), TEXT("ULobbyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
