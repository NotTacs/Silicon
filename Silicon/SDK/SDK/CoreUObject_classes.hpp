#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreUObject

#include "Basic.hpp"


namespace SDK
{

// Class CoreUObject.Object
// 0x0028 (0x0028 - 0x0000)
class UObject
{
public:
	static inline class TUObjectArrayWrapper      GObjects;                                          // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)

	void**                                        VTable;                                            // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
	EObjectFlags                                  Flags;                                             // 0x0008(0x0004)(NOT AUTO-GENERATED PROPERTY)
	int32                                         Index;                                             // 0x000C(0x0004)(NOT AUTO-GENERATED PROPERTY)
	class UClass*                                 Class;                                             // 0x0010(0x0008)(NOT AUTO-GENERATED PROPERTY)
	class FName                                   Name;                                              // 0x0018(0x0008)(NOT AUTO-GENERATED PROPERTY)
	class UObject*                                Outer;                                             // 0x0020(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UObject* FindObjectFastImpl(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None);
	static class UObject* FindObjectImpl(const std::string& FullName, EClassCastFlags RequiredType = EClassCastFlags::None);

	std::string GetFullName() const;
	std::string GetName() const;
	bool HasTypeFlag(EClassCastFlags TypeFlags) const;
	bool IsA(EClassCastFlags TypeFlags) const;
	bool IsA(class UClass* TypeClass) const;
	bool IsDefaultObject() const;

	void ExecuteUbergraph(int32 EntryPoint);

public:
	static class UClass* FindClass(const std::string& ClassFullName)
	{
		return FindObject<class UClass>(ClassFullName, EClassCastFlags::Class);
	}
	static class UClass* FindClassFast(const std::string& ClassName)
	{
		return FindObjectFast<class UClass>(ClassName, EClassCastFlags::Class);
	}
	
	template<typename UEType = UObject>
	static UEType* FindObject(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		return static_cast<UEType*>(FindObjectImpl(Name, RequiredType));
	}
	template<typename UEType = UObject>
	static UEType* FindObjectFast(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		return static_cast<UEType*>(FindObjectFastImpl(Name, RequiredType));
	}

	void ProcessEvent(class UFunction* Function, void* Parms) const
	{
		InSDKUtils::CallGameFunction(InSDKUtils::GetVirtualFunction<void(*)(const UObject*, class UFunction*, void*)>(this, Offsets::ProcessEventIdx), this, Function, Parms);
	}

	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Object">();
	}
	static class UObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObject>();
	}

	template<typename T>
	inline T Cast() {
		return (T)this;
	}
};
static_assert(alignof(UObject) == 0x000008, "Wrong alignment on UObject");
static_assert(sizeof(UObject) == 0x000028, "Wrong size on UObject");
static_assert(offsetof(UObject, VTable) == 0x000000, "Member 'UObject::VTable' has a wrong offset!");
static_assert(offsetof(UObject, Flags) == 0x000008, "Member 'UObject::Flags' has a wrong offset!");
static_assert(offsetof(UObject, Index) == 0x00000C, "Member 'UObject::Index' has a wrong offset!");
static_assert(offsetof(UObject, Class) == 0x000010, "Member 'UObject::Class' has a wrong offset!");
static_assert(offsetof(UObject, Name) == 0x000018, "Member 'UObject::Name' has a wrong offset!");
static_assert(offsetof(UObject, Outer) == 0x000020, "Member 'UObject::Outer' has a wrong offset!");

// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
class UField : public UObject
{
public:
	class UField*                                 Next;                                              // 0x0028(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Field">();
	}
	static class UField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UField>();
	}
};
static_assert(alignof(UField) == 0x000008, "Wrong alignment on UField");
static_assert(sizeof(UField) == 0x000030, "Wrong size on UField");
static_assert(offsetof(UField, Next) == 0x000028, "Member 'UField::Next' has a wrong offset!");

// Class CoreUObject.Struct
// 0x0058 (0x0088 - 0x0030)
class UStruct : public UField
{
public:
	class UStruct*                                Super;                                             // 0x0030(0x0008)(NOT AUTO-GENERATED PROPERTY)
	class UField*                                 Children;                                          // 0x0038(0x0008)(NOT AUTO-GENERATED PROPERTY)
	int32                                         Size;                                              // 0x0040(0x0004)(NOT AUTO-GENERATED PROPERTY)
	int32                                         MinAlignemnt;                                      // 0x0044(0x0004)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_48[0x40];                                      // 0x0048(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsSubclassOf(const UStruct* Base) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Struct">();
	}
	static class UStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStruct>();
	}
};
static_assert(alignof(UStruct) == 0x000008, "Wrong alignment on UStruct");
static_assert(sizeof(UStruct) == 0x000088, "Wrong size on UStruct");
static_assert(offsetof(UStruct, Super) == 0x000030, "Member 'UStruct::Super' has a wrong offset!");
static_assert(offsetof(UStruct, Children) == 0x000038, "Member 'UStruct::Children' has a wrong offset!");
static_assert(offsetof(UStruct, Size) == 0x000040, "Member 'UStruct::Size' has a wrong offset!");
static_assert(offsetof(UStruct, MinAlignemnt) == 0x000044, "Member 'UStruct::MinAlignemnt' has a wrong offset!");

// Class CoreUObject.ScriptStruct
// 0x0010 (0x0098 - 0x0088)
class UScriptStruct : public UStruct
{
public:
	uint8                                         Pad_88[0x10];                                      // 0x0088(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScriptStruct">();
	}
	static class UScriptStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScriptStruct>();
	}
};
static_assert(alignof(UScriptStruct) == 0x000008, "Wrong alignment on UScriptStruct");
static_assert(sizeof(UScriptStruct) == 0x000098, "Wrong size on UScriptStruct");

// Class CoreUObject.Package
// 0x0070 (0x0098 - 0x0028)
class UPackage final : public UObject
{
public:
	uint8                                         Pad_28[0x70];                                      // 0x0028(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Package">();
	}
	static class UPackage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPackage>();
	}
};
static_assert(alignof(UPackage) == 0x000008, "Wrong alignment on UPackage");
static_assert(sizeof(UPackage) == 0x000098, "Wrong size on UPackage");

// Class CoreUObject.Property
// 0x0040 (0x0070 - 0x0030)
class UProperty : public UField
{
public:
	int32                                         ArrayDim;                                          // 0x0030(0x0004)(NOT AUTO-GENERATED PROPERTY)
	int32                                         ElementSize;                                       // 0x0034(0x0004)(NOT AUTO-GENERATED PROPERTY)
	uint64                                        PropertyFlags;                                     // 0x0038(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_40[0x4];                                       // 0x0040(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Offset;                                            // 0x0044(0x0004)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_48[0x28];                                      // 0x0048(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Property">();
	}
	static class UProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProperty>();
	}
};
static_assert(alignof(UProperty) == 0x000008, "Wrong alignment on UProperty");
static_assert(sizeof(UProperty) == 0x000070, "Wrong size on UProperty");
static_assert(offsetof(UProperty, ArrayDim) == 0x000030, "Member 'UProperty::ArrayDim' has a wrong offset!");
static_assert(offsetof(UProperty, ElementSize) == 0x000034, "Member 'UProperty::ElementSize' has a wrong offset!");
static_assert(offsetof(UProperty, PropertyFlags) == 0x000038, "Member 'UProperty::PropertyFlags' has a wrong offset!");
static_assert(offsetof(UProperty, Offset) == 0x000044, "Member 'UProperty::Offset' has a wrong offset!");

// Class CoreUObject.NumericProperty
// 0x0000 (0x0070 - 0x0070)
class UNumericProperty : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NumericProperty">();
	}
	static class UNumericProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNumericProperty>();
	}
};
static_assert(alignof(UNumericProperty) == 0x000008, "Wrong alignment on UNumericProperty");
static_assert(sizeof(UNumericProperty) == 0x000070, "Wrong size on UNumericProperty");

// Class CoreUObject.UInt64Property
// 0x0000 (0x0070 - 0x0070)
class UUInt64Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UInt64Property">();
	}
	static class UUInt64Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUInt64Property>();
	}
};
static_assert(alignof(UUInt64Property) == 0x000008, "Wrong alignment on UUInt64Property");
static_assert(sizeof(UUInt64Property) == 0x000070, "Wrong size on UUInt64Property");

// Class CoreUObject.Interface
// 0x0000 (0x0028 - 0x0028)
class IInterface : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Interface">();
	}
	static class IInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterface>();
	}
};
static_assert(alignof(IInterface) == 0x000008, "Wrong alignment on IInterface");
static_assert(sizeof(IInterface) == 0x000028, "Wrong size on IInterface");

// Class CoreUObject.GCObjectReferencer
// 0x0038 (0x0060 - 0x0028)
class UGCObjectReferencer final : public UObject
{
public:
	uint8                                         Pad_28[0x38];                                      // 0x0028(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GCObjectReferencer">();
	}
	static class UGCObjectReferencer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCObjectReferencer>();
	}
};
static_assert(alignof(UGCObjectReferencer) == 0x000008, "Wrong alignment on UGCObjectReferencer");
static_assert(sizeof(UGCObjectReferencer) == 0x000060, "Wrong size on UGCObjectReferencer");

// Class CoreUObject.TextBuffer
// 0x0028 (0x0050 - 0x0028)
class UTextBuffer final : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextBuffer">();
	}
	static class UTextBuffer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBuffer>();
	}
};
static_assert(alignof(UTextBuffer) == 0x000008, "Wrong alignment on UTextBuffer");
static_assert(sizeof(UTextBuffer) == 0x000050, "Wrong size on UTextBuffer");

// Class CoreUObject.Class
// 0x0170 (0x01F8 - 0x0088)
class UClass : public UStruct
{
public:
	uint8                                         Pad_88[0x30];                                      // 0x0088(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	enum class EClassCastFlags                    CastFlags;                                         // 0x00B8(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_C0[0x38];                                      // 0x00C0(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                DefaultObject;                                     // 0x00F8(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_100[0xF8];                                     // 0x0100(0x00F8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UFunction* GetFunction(const std::string& ClassName, const std::string& FuncName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Class">();
	}
	static class UClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClass>();
	}
};
static_assert(alignof(UClass) == 0x000008, "Wrong alignment on UClass");
static_assert(sizeof(UClass) == 0x0001F8, "Wrong size on UClass");
static_assert(offsetof(UClass, CastFlags) == 0x0000B8, "Member 'UClass::CastFlags' has a wrong offset!");
static_assert(offsetof(UClass, DefaultObject) == 0x0000F8, "Member 'UClass::DefaultObject' has a wrong offset!");

// Class CoreUObject.Function
// 0x0030 (0x00B8 - 0x0088)
class UFunction : public UStruct
{
public:
	using FNativeFuncPtr = void (*)(void* Context, void* TheStack, void* Result);                    // 0x0000(0x0000)(NOT AUTO-GENERATED PROPERTY)

	uint32                                        FunctionFlags;                                     // 0x0088(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_90[0x20];                                      // 0x0090(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	FNativeFuncPtr                                ExecFunction;                                      // 0x00B0(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Function">();
	}
	static class UFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFunction>();
	}
};
static_assert(alignof(UFunction) == 0x000008, "Wrong alignment on UFunction");
static_assert(sizeof(UFunction) == 0x0000B8, "Wrong size on UFunction");
static_assert(offsetof(UFunction, FunctionFlags) == 0x000088, "Member 'UFunction::FunctionFlags' has a wrong offset!");
static_assert(offsetof(UFunction, ExecFunction) == 0x0000B0, "Member 'UFunction::ExecFunction' has a wrong offset!");

// Class CoreUObject.DelegateFunction
// 0x0000 (0x00B8 - 0x00B8)
class UDelegateFunction final : public UFunction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DelegateFunction">();
	}
	static class UDelegateFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDelegateFunction>();
	}
};
static_assert(alignof(UDelegateFunction) == 0x000008, "Wrong alignment on UDelegateFunction");
static_assert(sizeof(UDelegateFunction) == 0x0000B8, "Wrong size on UDelegateFunction");

// Class CoreUObject.DynamicClass
// 0x0068 (0x0260 - 0x01F8)
class UDynamicClass final : public UClass
{
public:
	uint8                                         Pad_1F8[0x68];                                     // 0x01F8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicClass">();
	}
	static class UDynamicClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicClass>();
	}
};
static_assert(alignof(UDynamicClass) == 0x000008, "Wrong alignment on UDynamicClass");
static_assert(sizeof(UDynamicClass) == 0x000260, "Wrong size on UDynamicClass");

// Class CoreUObject.PackageMap
// 0x00B8 (0x00E0 - 0x0028)
class UPackageMap : public UObject
{
public:
	uint8                                         Pad_28[0xB8];                                      // 0x0028(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PackageMap">();
	}
	static class UPackageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPackageMap>();
	}
};
static_assert(alignof(UPackageMap) == 0x000008, "Wrong alignment on UPackageMap");
static_assert(sizeof(UPackageMap) == 0x0000E0, "Wrong size on UPackageMap");

// Class CoreUObject.Enum
// 0x0030 (0x0060 - 0x0030)
class UEnum : public UField
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class TArray<class TPair<class FName, int64>> Names;                                             // 0x0040(0x0010)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Enum">();
	}
	static class UEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnum>();
	}
};
static_assert(alignof(UEnum) == 0x000008, "Wrong alignment on UEnum");
static_assert(sizeof(UEnum) == 0x000060, "Wrong size on UEnum");
static_assert(offsetof(UEnum, Names) == 0x000040, "Member 'UEnum::Names' has a wrong offset!");

// Class CoreUObject.EnumProperty
// 0x0010 (0x0080 - 0x0070)
class UEnumProperty final : public UProperty
{
public:
	class UProperty*                              UnderlayingProperty;                               // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)
	class UEnum*                                  Enum;                                              // 0x0078(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnumProperty">();
	}
	static class UEnumProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnumProperty>();
	}
};
static_assert(alignof(UEnumProperty) == 0x000008, "Wrong alignment on UEnumProperty");
static_assert(sizeof(UEnumProperty) == 0x000080, "Wrong size on UEnumProperty");
static_assert(offsetof(UEnumProperty, UnderlayingProperty) == 0x000070, "Member 'UEnumProperty::UnderlayingProperty' has a wrong offset!");
static_assert(offsetof(UEnumProperty, Enum) == 0x000078, "Member 'UEnumProperty::Enum' has a wrong offset!");

// Class CoreUObject.LinkerPlaceholderClass
// 0x01A0 (0x0398 - 0x01F8)
class ULinkerPlaceholderClass final : public UClass
{
public:
	uint8                                         Pad_1F8[0x1A0];                                    // 0x01F8(0x01A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkerPlaceholderClass">();
	}
	static class ULinkerPlaceholderClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkerPlaceholderClass>();
	}
};
static_assert(alignof(ULinkerPlaceholderClass) == 0x000008, "Wrong alignment on ULinkerPlaceholderClass");
static_assert(sizeof(ULinkerPlaceholderClass) == 0x000398, "Wrong size on ULinkerPlaceholderClass");

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00B0 (0x00D8 - 0x0028)
class ULinkerPlaceholderExportObject final : public UObject
{
public:
	uint8                                         Pad_28[0xB0];                                      // 0x0028(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkerPlaceholderExportObject">();
	}
	static class ULinkerPlaceholderExportObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkerPlaceholderExportObject>();
	}
};
static_assert(alignof(ULinkerPlaceholderExportObject) == 0x000008, "Wrong alignment on ULinkerPlaceholderExportObject");
static_assert(sizeof(ULinkerPlaceholderExportObject) == 0x0000D8, "Wrong size on ULinkerPlaceholderExportObject");

// Class CoreUObject.LinkerPlaceholderFunction
// 0x01A0 (0x0258 - 0x00B8)
class ULinkerPlaceholderFunction final : public UFunction
{
public:
	uint8                                         Pad_B8[0x1A0];                                     // 0x00B8(0x01A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkerPlaceholderFunction">();
	}
	static class ULinkerPlaceholderFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkerPlaceholderFunction>();
	}
};
static_assert(alignof(ULinkerPlaceholderFunction) == 0x000008, "Wrong alignment on ULinkerPlaceholderFunction");
static_assert(sizeof(ULinkerPlaceholderFunction) == 0x000258, "Wrong size on ULinkerPlaceholderFunction");

// Class CoreUObject.MetaData
// 0x00A0 (0x00C8 - 0x0028)
class UMetaData final : public UObject
{
public:
	uint8                                         Pad_28[0xA0];                                      // 0x0028(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaData">();
	}
	static class UMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaData>();
	}
};
static_assert(alignof(UMetaData) == 0x000008, "Wrong alignment on UMetaData");
static_assert(sizeof(UMetaData) == 0x0000C8, "Wrong size on UMetaData");

// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0030 - 0x0028)
class UObjectRedirector final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectRedirector">();
	}
	static class UObjectRedirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectRedirector>();
	}
};
static_assert(alignof(UObjectRedirector) == 0x000008, "Wrong alignment on UObjectRedirector");
static_assert(sizeof(UObjectRedirector) == 0x000030, "Wrong size on UObjectRedirector");

// Class CoreUObject.ArrayProperty
// 0x0008 (0x0078 - 0x0070)
class UArrayProperty final : public UProperty
{
public:
	class UProperty*                              InnerProperty;                                     // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArrayProperty">();
	}
	static class UArrayProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArrayProperty>();
	}
};
static_assert(alignof(UArrayProperty) == 0x000008, "Wrong alignment on UArrayProperty");
static_assert(sizeof(UArrayProperty) == 0x000078, "Wrong size on UArrayProperty");
static_assert(offsetof(UArrayProperty, InnerProperty) == 0x000070, "Member 'UArrayProperty::InnerProperty' has a wrong offset!");

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (0x0078 - 0x0070)
class UObjectPropertyBase : public UProperty
{
public:
	class UClass*                                 PropertyClass;                                     // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectPropertyBase">();
	}
	static class UObjectPropertyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectPropertyBase>();
	}
};
static_assert(alignof(UObjectPropertyBase) == 0x000008, "Wrong alignment on UObjectPropertyBase");
static_assert(sizeof(UObjectPropertyBase) == 0x000078, "Wrong size on UObjectPropertyBase");
static_assert(offsetof(UObjectPropertyBase, PropertyClass) == 0x000070, "Member 'UObjectPropertyBase::PropertyClass' has a wrong offset!");

// Class CoreUObject.BoolProperty
// 0x0008 (0x0078 - 0x0070)
class UBoolProperty final : public UProperty
{
public:
	uint8                                         FieldSize;                                         // 0x0070(0x0001)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         ByteOffset;                                        // 0x0071(0x0001)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         ByteMask;                                          // 0x0072(0x0001)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         FieldMask;                                         // 0x0073(0x0001)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoolProperty">();
	}
	static class UBoolProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoolProperty>();
	}
};
static_assert(alignof(UBoolProperty) == 0x000008, "Wrong alignment on UBoolProperty");
static_assert(sizeof(UBoolProperty) == 0x000078, "Wrong size on UBoolProperty");
static_assert(offsetof(UBoolProperty, FieldSize) == 0x000070, "Member 'UBoolProperty::FieldSize' has a wrong offset!");
static_assert(offsetof(UBoolProperty, ByteOffset) == 0x000071, "Member 'UBoolProperty::ByteOffset' has a wrong offset!");
static_assert(offsetof(UBoolProperty, ByteMask) == 0x000072, "Member 'UBoolProperty::ByteMask' has a wrong offset!");
static_assert(offsetof(UBoolProperty, FieldMask) == 0x000073, "Member 'UBoolProperty::FieldMask' has a wrong offset!");

// Class CoreUObject.ByteProperty
// 0x0008 (0x0078 - 0x0070)
class UByteProperty final : public UNumericProperty
{
public:
	class UEnum*                                  Enum;                                              // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ByteProperty">();
	}
	static class UByteProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UByteProperty>();
	}
};
static_assert(alignof(UByteProperty) == 0x000008, "Wrong alignment on UByteProperty");
static_assert(sizeof(UByteProperty) == 0x000078, "Wrong size on UByteProperty");
static_assert(offsetof(UByteProperty, Enum) == 0x000070, "Member 'UByteProperty::Enum' has a wrong offset!");

// Class CoreUObject.ObjectProperty
// 0x0000 (0x0078 - 0x0078)
class UObjectProperty : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectProperty">();
	}
	static class UObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectProperty>();
	}
};
static_assert(alignof(UObjectProperty) == 0x000008, "Wrong alignment on UObjectProperty");
static_assert(sizeof(UObjectProperty) == 0x000078, "Wrong size on UObjectProperty");

// Class CoreUObject.ClassProperty
// 0x0008 (0x0080 - 0x0078)
class UClassProperty final : public UObjectProperty
{
public:
	class UClass*                                 MetaClass;                                         // 0x0078(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassProperty">();
	}
	static class UClassProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassProperty>();
	}
};
static_assert(alignof(UClassProperty) == 0x000008, "Wrong alignment on UClassProperty");
static_assert(sizeof(UClassProperty) == 0x000080, "Wrong size on UClassProperty");
static_assert(offsetof(UClassProperty, MetaClass) == 0x000078, "Member 'UClassProperty::MetaClass' has a wrong offset!");

// Class CoreUObject.DelegateProperty
// 0x0008 (0x0078 - 0x0070)
class UDelegateProperty final : public UProperty
{
public:
	class UFunction*                              SignatureFunction;                                 // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DelegateProperty">();
	}
	static class UDelegateProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDelegateProperty>();
	}
};
static_assert(alignof(UDelegateProperty) == 0x000008, "Wrong alignment on UDelegateProperty");
static_assert(sizeof(UDelegateProperty) == 0x000078, "Wrong size on UDelegateProperty");
static_assert(offsetof(UDelegateProperty, SignatureFunction) == 0x000070, "Member 'UDelegateProperty::SignatureFunction' has a wrong offset!");

// Class CoreUObject.DoubleProperty
// 0x0000 (0x0070 - 0x0070)
class UDoubleProperty final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DoubleProperty">();
	}
	static class UDoubleProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoubleProperty>();
	}
};
static_assert(alignof(UDoubleProperty) == 0x000008, "Wrong alignment on UDoubleProperty");
static_assert(sizeof(UDoubleProperty) == 0x000070, "Wrong size on UDoubleProperty");

// Class CoreUObject.FloatProperty
// 0x0000 (0x0070 - 0x0070)
class UFloatProperty final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FloatProperty">();
	}
	static class UFloatProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloatProperty>();
	}
};
static_assert(alignof(UFloatProperty) == 0x000008, "Wrong alignment on UFloatProperty");
static_assert(sizeof(UFloatProperty) == 0x000070, "Wrong size on UFloatProperty");

// Class CoreUObject.IntProperty
// 0x0000 (0x0070 - 0x0070)
class UIntProperty final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IntProperty">();
	}
	static class UIntProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntProperty>();
	}
};
static_assert(alignof(UIntProperty) == 0x000008, "Wrong alignment on UIntProperty");
static_assert(sizeof(UIntProperty) == 0x000070, "Wrong size on UIntProperty");

// Class CoreUObject.Int16Property
// 0x0000 (0x0070 - 0x0070)
class UInt16Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Int16Property">();
	}
	static class UInt16Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInt16Property>();
	}
};
static_assert(alignof(UInt16Property) == 0x000008, "Wrong alignment on UInt16Property");
static_assert(sizeof(UInt16Property) == 0x000070, "Wrong size on UInt16Property");

// Class CoreUObject.Int64Property
// 0x0000 (0x0070 - 0x0070)
class UInt64Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Int64Property">();
	}
	static class UInt64Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInt64Property>();
	}
};
static_assert(alignof(UInt64Property) == 0x000008, "Wrong alignment on UInt64Property");
static_assert(sizeof(UInt64Property) == 0x000070, "Wrong size on UInt64Property");

// Class CoreUObject.Int8Property
// 0x0000 (0x0070 - 0x0070)
class UInt8Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Int8Property">();
	}
	static class UInt8Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInt8Property>();
	}
};
static_assert(alignof(UInt8Property) == 0x000008, "Wrong alignment on UInt8Property");
static_assert(sizeof(UInt8Property) == 0x000070, "Wrong size on UInt8Property");

// Class CoreUObject.InterfaceProperty
// 0x0008 (0x0078 - 0x0070)
class UInterfaceProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterfaceProperty">();
	}
	static class UInterfaceProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterfaceProperty>();
	}
};
static_assert(alignof(UInterfaceProperty) == 0x000008, "Wrong alignment on UInterfaceProperty");
static_assert(sizeof(UInterfaceProperty) == 0x000078, "Wrong size on UInterfaceProperty");

// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0078 - 0x0078)
class ULazyObjectProperty final : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LazyObjectProperty">();
	}
	static class ULazyObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULazyObjectProperty>();
	}
};
static_assert(alignof(ULazyObjectProperty) == 0x000008, "Wrong alignment on ULazyObjectProperty");
static_assert(sizeof(ULazyObjectProperty) == 0x000078, "Wrong size on ULazyObjectProperty");

// Class CoreUObject.MapProperty
// 0x0038 (0x00A8 - 0x0070)
class UMapProperty final : public UProperty
{
public:
	class UProperty*                              KeyProperty;                                       // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)
	class UProperty*                              ValueProperty;                                     // 0x0078(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_80[0x28];                                      // 0x0080(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MapProperty">();
	}
	static class UMapProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapProperty>();
	}
};
static_assert(alignof(UMapProperty) == 0x000008, "Wrong alignment on UMapProperty");
static_assert(sizeof(UMapProperty) == 0x0000A8, "Wrong size on UMapProperty");
static_assert(offsetof(UMapProperty, KeyProperty) == 0x000070, "Member 'UMapProperty::KeyProperty' has a wrong offset!");
static_assert(offsetof(UMapProperty, ValueProperty) == 0x000078, "Member 'UMapProperty::ValueProperty' has a wrong offset!");

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (0x0078 - 0x0070)
class UMulticastDelegateProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MulticastDelegateProperty">();
	}
	static class UMulticastDelegateProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulticastDelegateProperty>();
	}
};
static_assert(alignof(UMulticastDelegateProperty) == 0x000008, "Wrong alignment on UMulticastDelegateProperty");
static_assert(sizeof(UMulticastDelegateProperty) == 0x000078, "Wrong size on UMulticastDelegateProperty");

// Class CoreUObject.NameProperty
// 0x0000 (0x0070 - 0x0070)
class UNameProperty final : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NameProperty">();
	}
	static class UNameProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNameProperty>();
	}
};
static_assert(alignof(UNameProperty) == 0x000008, "Wrong alignment on UNameProperty");
static_assert(sizeof(UNameProperty) == 0x000070, "Wrong size on UNameProperty");

// Class CoreUObject.SetProperty
// 0x0028 (0x0098 - 0x0070)
class USetProperty final : public UProperty
{
public:
	class UProperty*                              ElementProperty;                                   // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_78[0x20];                                      // 0x0078(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SetProperty">();
	}
	static class USetProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetProperty>();
	}
};
static_assert(alignof(USetProperty) == 0x000008, "Wrong alignment on USetProperty");
static_assert(sizeof(USetProperty) == 0x000098, "Wrong size on USetProperty");
static_assert(offsetof(USetProperty, ElementProperty) == 0x000070, "Member 'USetProperty::ElementProperty' has a wrong offset!");

// Class CoreUObject.SoftObjectProperty
// 0x0000 (0x0078 - 0x0078)
class USoftObjectProperty : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoftObjectProperty">();
	}
	static class USoftObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoftObjectProperty>();
	}
};
static_assert(alignof(USoftObjectProperty) == 0x000008, "Wrong alignment on USoftObjectProperty");
static_assert(sizeof(USoftObjectProperty) == 0x000078, "Wrong size on USoftObjectProperty");

// Class CoreUObject.SoftClassProperty
// 0x0008 (0x0080 - 0x0078)
class USoftClassProperty final : public USoftObjectProperty
{
public:
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoftClassProperty">();
	}
	static class USoftClassProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoftClassProperty>();
	}
};
static_assert(alignof(USoftClassProperty) == 0x000008, "Wrong alignment on USoftClassProperty");
static_assert(sizeof(USoftClassProperty) == 0x000080, "Wrong size on USoftClassProperty");

// Class CoreUObject.StrProperty
// 0x0000 (0x0070 - 0x0070)
class UStrProperty final : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StrProperty">();
	}
	static class UStrProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStrProperty>();
	}
};
static_assert(alignof(UStrProperty) == 0x000008, "Wrong alignment on UStrProperty");
static_assert(sizeof(UStrProperty) == 0x000070, "Wrong size on UStrProperty");

// Class CoreUObject.StructProperty
// 0x0008 (0x0078 - 0x0070)
class UStructProperty final : public UProperty
{
public:
	class UStruct*                                Struct;                                            // 0x0070(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StructProperty">();
	}
	static class UStructProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStructProperty>();
	}
};
static_assert(alignof(UStructProperty) == 0x000008, "Wrong alignment on UStructProperty");
static_assert(sizeof(UStructProperty) == 0x000078, "Wrong size on UStructProperty");
static_assert(offsetof(UStructProperty, Struct) == 0x000070, "Member 'UStructProperty::Struct' has a wrong offset!");

// Class CoreUObject.UInt16Property
// 0x0000 (0x0070 - 0x0070)
class UUInt16Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UInt16Property">();
	}
	static class UUInt16Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUInt16Property>();
	}
};
static_assert(alignof(UUInt16Property) == 0x000008, "Wrong alignment on UUInt16Property");
static_assert(sizeof(UUInt16Property) == 0x000070, "Wrong size on UUInt16Property");

// Class CoreUObject.UInt32Property
// 0x0000 (0x0070 - 0x0070)
class UUInt32Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UInt32Property">();
	}
	static class UUInt32Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUInt32Property>();
	}
};
static_assert(alignof(UUInt32Property) == 0x000008, "Wrong alignment on UUInt32Property");
static_assert(sizeof(UUInt32Property) == 0x000070, "Wrong size on UUInt32Property");

// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0078 - 0x0078)
class UWeakObjectProperty final : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeakObjectProperty">();
	}
	static class UWeakObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeakObjectProperty>();
	}
};
static_assert(alignof(UWeakObjectProperty) == 0x000008, "Wrong alignment on UWeakObjectProperty");
static_assert(sizeof(UWeakObjectProperty) == 0x000078, "Wrong size on UWeakObjectProperty");

// Class CoreUObject.TextProperty
// 0x0000 (0x0070 - 0x0070)
class UTextProperty final : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextProperty">();
	}
	static class UTextProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextProperty>();
	}
};
static_assert(alignof(UTextProperty) == 0x000008, "Wrong alignment on UTextProperty");
static_assert(sizeof(UTextProperty) == 0x000070, "Wrong size on UTextProperty");

}

