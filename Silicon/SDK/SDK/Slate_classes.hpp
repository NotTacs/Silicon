#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slate

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SlateCore_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Slate.ButtonWidgetStyle
// 0x0238 (0x0268 - 0x0030)
class UButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                           ButtonStyle;                                       // 0x0030(0x0238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ButtonWidgetStyle">();
	}
	static class UButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonWidgetStyle>();
	}
};
static_assert(alignof(UButtonWidgetStyle) == 0x000008, "Wrong alignment on UButtonWidgetStyle");
static_assert(sizeof(UButtonWidgetStyle) == 0x000268, "Wrong size on UButtonWidgetStyle");
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x000030, "Member 'UButtonWidgetStyle::ButtonStyle' has a wrong offset!");

// Class Slate.CheckBoxWidgetStyle
// 0x04F0 (0x0520 - 0x0030)
class UCheckBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                         CheckBoxStyle;                                     // 0x0030(0x04F0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CheckBoxWidgetStyle">();
	}
	static class UCheckBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheckBoxWidgetStyle>();
	}
};
static_assert(alignof(UCheckBoxWidgetStyle) == 0x000008, "Wrong alignment on UCheckBoxWidgetStyle");
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x000520, "Wrong size on UCheckBoxWidgetStyle");
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x000030, "Member 'UCheckBoxWidgetStyle::CheckBoxStyle' has a wrong offset!");

// Class Slate.ComboBoxWidgetStyle
// 0x0378 (0x03A8 - 0x0030)
class UComboBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                         ComboBoxStyle;                                     // 0x0030(0x0378)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboBoxWidgetStyle">();
	}
	static class UComboBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboBoxWidgetStyle>();
	}
};
static_assert(alignof(UComboBoxWidgetStyle) == 0x000008, "Wrong alignment on UComboBoxWidgetStyle");
static_assert(sizeof(UComboBoxWidgetStyle) == 0x0003A8, "Wrong size on UComboBoxWidgetStyle");
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x000030, "Member 'UComboBoxWidgetStyle::ComboBoxStyle' has a wrong offset!");

// Class Slate.ComboButtonWidgetStyle
// 0x0340 (0x0370 - 0x0030)
class UComboButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                      ComboButtonStyle;                                  // 0x0030(0x0340)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboButtonWidgetStyle">();
	}
	static class UComboButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboButtonWidgetStyle>();
	}
};
static_assert(alignof(UComboButtonWidgetStyle) == 0x000008, "Wrong alignment on UComboButtonWidgetStyle");
static_assert(sizeof(UComboButtonWidgetStyle) == 0x000370, "Wrong size on UComboButtonWidgetStyle");
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x000030, "Member 'UComboButtonWidgetStyle::ComboButtonStyle' has a wrong offset!");

// Class Slate.EditableTextBoxWidgetStyle
// 0x0728 (0x0758 - 0x0030)
class UEditableTextBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                  EditableTextBoxStyle;                              // 0x0030(0x0728)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextBoxWidgetStyle">();
	}
	static class UEditableTextBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextBoxWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextBoxWidgetStyle) == 0x000008, "Wrong alignment on UEditableTextBoxWidgetStyle");
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x000758, "Wrong size on UEditableTextBoxWidgetStyle");
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x000030, "Member 'UEditableTextBoxWidgetStyle::EditableTextBoxStyle' has a wrong offset!");

// Class Slate.EditableTextWidgetStyle
// 0x01F0 (0x0220 - 0x0030)
class UEditableTextWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                     EditableTextStyle;                                 // 0x0030(0x01F0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextWidgetStyle">();
	}
	static class UEditableTextWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextWidgetStyle) == 0x000008, "Wrong alignment on UEditableTextWidgetStyle");
static_assert(sizeof(UEditableTextWidgetStyle) == 0x000220, "Wrong size on UEditableTextWidgetStyle");
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x000030, "Member 'UEditableTextWidgetStyle::EditableTextStyle' has a wrong offset!");

// Class Slate.ProgressWidgetStyle
// 0x0170 (0x01A0 - 0x0030)
class UProgressWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                      ProgressBarStyle;                                  // 0x0030(0x0170)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProgressWidgetStyle">();
	}
	static class UProgressWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressWidgetStyle>();
	}
};
static_assert(alignof(UProgressWidgetStyle) == 0x000008, "Wrong alignment on UProgressWidgetStyle");
static_assert(sizeof(UProgressWidgetStyle) == 0x0001A0, "Wrong size on UProgressWidgetStyle");
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x000030, "Member 'UProgressWidgetStyle::ProgressBarStyle' has a wrong offset!");

// Class Slate.ScrollBarWidgetStyle
// 0x0440 (0x0470 - 0x0030)
class UScrollBarWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                        ScrollBarStyle;                                    // 0x0030(0x0440)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBarWidgetStyle">();
	}
	static class UScrollBarWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBarWidgetStyle>();
	}
};
static_assert(alignof(UScrollBarWidgetStyle) == 0x000008, "Wrong alignment on UScrollBarWidgetStyle");
static_assert(sizeof(UScrollBarWidgetStyle) == 0x000470, "Wrong size on UScrollBarWidgetStyle");
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x000030, "Member 'UScrollBarWidgetStyle::ScrollBarStyle' has a wrong offset!");

// Class Slate.ScrollBoxWidgetStyle
// 0x01E8 (0x0218 - 0x0030)
class UScrollBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                        ScrollBoxStyle;                                    // 0x0030(0x01E8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBoxWidgetStyle">();
	}
	static class UScrollBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBoxWidgetStyle>();
	}
};
static_assert(alignof(UScrollBoxWidgetStyle) == 0x000008, "Wrong alignment on UScrollBoxWidgetStyle");
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x000218, "Wrong size on UScrollBoxWidgetStyle");
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x000030, "Member 'UScrollBoxWidgetStyle::ScrollBoxStyle' has a wrong offset!");

// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings final : public UObject
{
public:
	bool                                          bExplicitCanvasChildZOrder;                        // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateSettings">();
	}
	static class USlateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateSettings>();
	}
};
static_assert(alignof(USlateSettings) == 0x000008, "Wrong alignment on USlateSettings");
static_assert(sizeof(USlateSettings) == 0x000030, "Wrong size on USlateSettings");
static_assert(offsetof(USlateSettings, bExplicitCanvasChildZOrder) == 0x000028, "Member 'USlateSettings::bExplicitCanvasChildZOrder' has a wrong offset!");

// Class Slate.SpinBoxWidgetStyle
// 0x0298 (0x02C8 - 0x0030)
class USpinBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                          SpinBoxStyle;                                      // 0x0030(0x0298)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpinBoxWidgetStyle">();
	}
	static class USpinBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpinBoxWidgetStyle>();
	}
};
static_assert(alignof(USpinBoxWidgetStyle) == 0x000008, "Wrong alignment on USpinBoxWidgetStyle");
static_assert(sizeof(USpinBoxWidgetStyle) == 0x0002C8, "Wrong size on USpinBoxWidgetStyle");
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x000030, "Member 'USpinBoxWidgetStyle::SpinBoxStyle' has a wrong offset!");

// Class Slate.TextBlockWidgetStyle
// 0x01C8 (0x01F8 - 0x0030)
class UTextBlockWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                        TextBlockStyle;                                    // 0x0030(0x01C8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextBlockWidgetStyle">();
	}
	static class UTextBlockWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBlockWidgetStyle>();
	}
};
static_assert(alignof(UTextBlockWidgetStyle) == 0x000008, "Wrong alignment on UTextBlockWidgetStyle");
static_assert(sizeof(UTextBlockWidgetStyle) == 0x0001F8, "Wrong size on UTextBlockWidgetStyle");
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x000030, "Member 'UTextBlockWidgetStyle::TextBlockStyle' has a wrong offset!");

}

