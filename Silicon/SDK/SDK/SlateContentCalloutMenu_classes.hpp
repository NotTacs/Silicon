#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlateContentCalloutMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SlateContentCalloutMenu.SlateContentCalloutMenu_C
// 0x0020 (0x0228 - 0x0208)
class USlateContentCalloutMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UFortLegacySlateBridgeWidget*           _Slate_Widget__Menu_Content;                       // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxContent;                                    // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortLegacySlateWidget                        SlateWidgetType;                                   // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_SlateContentCalloutMenu(int32 EntryPoint);
	void Get_Size_Box(class USizeBox** Size_Box);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SlateContentCalloutMenu_C">();
	}
	static class USlateContentCalloutMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateContentCalloutMenu_C>();
	}
};
static_assert(alignof(USlateContentCalloutMenu_C) == 0x000008, "Wrong alignment on USlateContentCalloutMenu_C");
static_assert(sizeof(USlateContentCalloutMenu_C) == 0x000228, "Wrong size on USlateContentCalloutMenu_C");
static_assert(offsetof(USlateContentCalloutMenu_C, UberGraphFrame) == 0x000208, "Member 'USlateContentCalloutMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USlateContentCalloutMenu_C, _Slate_Widget__Menu_Content) == 0x000210, "Member 'USlateContentCalloutMenu_C::_Slate_Widget__Menu_Content' has a wrong offset!");
static_assert(offsetof(USlateContentCalloutMenu_C, SizeBoxContent) == 0x000218, "Member 'USlateContentCalloutMenu_C::SizeBoxContent' has a wrong offset!");
static_assert(offsetof(USlateContentCalloutMenu_C, SlateWidgetType) == 0x000220, "Member 'USlateContentCalloutMenu_C::SlateWidgetType' has a wrong offset!");

}

