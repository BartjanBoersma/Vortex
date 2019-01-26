// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventControlTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlTrack() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UFMODEventControlTrack::StaticRegisterNativesUFMODEventControlTrack()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister()
	{
		return UFMODEventControlTrack::StaticClass();
	}
	struct Z_Construct_UClass_UFMODEventControlTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlSections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlSections_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODEventControlTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/FMODEventControlTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlTrack.h" },
		{ "ToolTip", "Handles control of an FMOD Event" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlTrack.h" },
		{ "ToolTip", "List of all event control sections." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections = { UE4CodeGen_Private::EPropertyClass::Array, "ControlSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UFMODEventControlTrack, ControlSections), METADATA_PARAMS(Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControlSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODEventControlTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventControlTrack_Statics::ClassParams = {
		&UFMODEventControlTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A800A0u,
		nullptr, 0,
		Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODEventControlTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODEventControlTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODEventControlTrack, 473707013);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventControlTrack(Z_Construct_UClass_UFMODEventControlTrack, &UFMODEventControlTrack::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventControlTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
