// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventControlSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSection() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
	static UEnum* EFMODEventControlKey_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventControlKey"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODEventControlKey(EFMODEventControlKey_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODEventControlKey"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_CRC() { return 1890893331U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODEventControlKey"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODEventControlKey::Stop", (int64)EFMODEventControlKey::Stop },
				{ "EFMODEventControlKey::Play", (int64)EFMODEventControlKey::Play },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
				{ "ToolTip", "Defines the types of FMOD event control keys." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFMODEventControlKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFMODEventControlKey",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFMODEventControlChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlChannel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlChannel, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventControlChannel"), sizeof(FFMODEventControlChannel), Get_Z_Construct_UScriptStruct_FFMODEventControlChannel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventControlChannel(FFMODEventControlChannel::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventControlChannel"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlChannel
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventControlChannel")),new UScriptStruct::TCppStructOps<FFMODEventControlChannel>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlChannel;
	struct Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlChannel>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FMovieSceneByteChannel,
		&NewStructOps,
		"FMODEventControlChannel",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFMODEventControlChannel),
		alignof(FFMODEventControlChannel),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlChannel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventControlChannel"), sizeof(FFMODEventControlChannel), Get_Z_Construct_UScriptStruct_FFMODEventControlChannel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlChannel_CRC() { return 933648084U; }
	void UFMODEventControlSection::StaticRegisterNativesUFMODEventControlSection()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister()
	{
		return UFMODEventControlSection::StaticClass();
	}
	struct Z_Construct_UClass_UFMODEventControlSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODEventControlSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/FMODEventControlSection.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "FMOD Event control section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "Channel containing the event control keys" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFMODEventControlSection, ControlKeys), Z_Construct_UScriptStruct_FFMODEventControlChannel, METADATA_PARAMS(Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODEventControlSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventControlSection_Statics::ClassParams = {
		&UFMODEventControlSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODEventControlSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODEventControlSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODEventControlSection, 51212852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventControlSection(Z_Construct_UClass_UFMODEventControlSection, &UFMODEventControlSection::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventControlSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
