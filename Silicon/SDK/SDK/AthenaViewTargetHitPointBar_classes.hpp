#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaViewTargetHitPointBar

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "ProgressBarType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C
// 0x02E0 (0x04F0 - 0x0210)
class UAthenaViewTargetHitPointBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Stat_Text;                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Baseplate;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Bevel;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Stat_Icon;                                 // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Stat_Icon_Shadow;                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Bar_Artwork;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           _ProgressBar__Delta;                               // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           _ProgressBar__Fill;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               _Size_Box__Bar;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxHighlight;                                  // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCurrentStat;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMaxStat;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EProgressBarType                              Type;                                              // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_279[0x3];                                      // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Current_Value;                                     // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Value;                                         // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Fill_Texture;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Gloss_Texture;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Critical_Color_A;                                  // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Critical_Color_B;                                  // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Critical_Color_C;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last_Value;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeUpdateRate;                                    // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeFont                     MultiFont;                                         // 0x02D0(0x0210)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             Baseplate_Texture;                                 // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Volatile;                                          // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DBNOStateCache;                                    // 0x04E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaViewTargetHitPointBar(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateMaxValue(float Max);
	void UpdateCurrentValue(float Current, EFortHitPointModificationReason Reason);
	void Update_Fill_Bar();
	void UpdateCurrentValueWithoutReason(float Current);
	void Initialize_Bar();
	void Update_Delta_Bar();
	void Update();
	void UpdateVolatileForUpdate();
	void UpdateDBNOState(bool IsDBNO);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaViewTargetHitPointBar_C">();
	}
	static class UAthenaViewTargetHitPointBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaViewTargetHitPointBar_C>();
	}
};
static_assert(alignof(UAthenaViewTargetHitPointBar_C) == 0x000008, "Wrong alignment on UAthenaViewTargetHitPointBar_C");
static_assert(sizeof(UAthenaViewTargetHitPointBar_C) == 0x0004F0, "Wrong size on UAthenaViewTargetHitPointBar_C");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, UberGraphFrame) == 0x000210, "Member 'UAthenaViewTargetHitPointBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Horizontal_Box__Stat_Text) == 0x000218, "Member 'UAthenaViewTargetHitPointBar_C::_Horizontal_Box__Stat_Text' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Image__Baseplate) == 0x000220, "Member 'UAthenaViewTargetHitPointBar_C::_Image__Baseplate' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Image__Bevel) == 0x000228, "Member 'UAthenaViewTargetHitPointBar_C::_Image__Bevel' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Image__Stat_Icon) == 0x000230, "Member 'UAthenaViewTargetHitPointBar_C::_Image__Stat_Icon' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Image__Stat_Icon_Shadow) == 0x000238, "Member 'UAthenaViewTargetHitPointBar_C::_Image__Stat_Icon_Shadow' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Overlay__Bar_Artwork) == 0x000240, "Member 'UAthenaViewTargetHitPointBar_C::_Overlay__Bar_Artwork' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _ProgressBar__Delta) == 0x000248, "Member 'UAthenaViewTargetHitPointBar_C::_ProgressBar__Delta' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _ProgressBar__Fill) == 0x000250, "Member 'UAthenaViewTargetHitPointBar_C::_ProgressBar__Fill' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, _Size_Box__Bar) == 0x000258, "Member 'UAthenaViewTargetHitPointBar_C::_Size_Box__Bar' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, SizeBoxHighlight) == 0x000260, "Member 'UAthenaViewTargetHitPointBar_C::SizeBoxHighlight' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, TextCurrentStat) == 0x000268, "Member 'UAthenaViewTargetHitPointBar_C::TextCurrentStat' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, TextMaxStat) == 0x000270, "Member 'UAthenaViewTargetHitPointBar_C::TextMaxStat' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Type) == 0x000278, "Member 'UAthenaViewTargetHitPointBar_C::Type' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Current_Value) == 0x00027C, "Member 'UAthenaViewTargetHitPointBar_C::Current_Value' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Max_Value) == 0x000280, "Member 'UAthenaViewTargetHitPointBar_C::Max_Value' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Fill_Texture) == 0x000288, "Member 'UAthenaViewTargetHitPointBar_C::Fill_Texture' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Gloss_Texture) == 0x000290, "Member 'UAthenaViewTargetHitPointBar_C::Gloss_Texture' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Critical_Color_A) == 0x000298, "Member 'UAthenaViewTargetHitPointBar_C::Critical_Color_A' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Critical_Color_B) == 0x0002A8, "Member 'UAthenaViewTargetHitPointBar_C::Critical_Color_B' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Critical_Color_C) == 0x0002B8, "Member 'UAthenaViewTargetHitPointBar_C::Critical_Color_C' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Last_Value) == 0x0002C8, "Member 'UAthenaViewTargetHitPointBar_C::Last_Value' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, FadeUpdateRate) == 0x0002CC, "Member 'UAthenaViewTargetHitPointBar_C::FadeUpdateRate' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, MultiFont) == 0x0002D0, "Member 'UAthenaViewTargetHitPointBar_C::MultiFont' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Baseplate_Texture) == 0x0004E0, "Member 'UAthenaViewTargetHitPointBar_C::Baseplate_Texture' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, Volatile) == 0x0004E8, "Member 'UAthenaViewTargetHitPointBar_C::Volatile' has a wrong offset!");
static_assert(offsetof(UAthenaViewTargetHitPointBar_C, DBNOStateCache) == 0x0004E9, "Member 'UAthenaViewTargetHitPointBar_C::DBNOStateCache' has a wrong offset!");

}

