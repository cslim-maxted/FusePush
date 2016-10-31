// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.OSVersion.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.Float.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// internal sealed extern class FontCache :489
// {
static void FontCache_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::iOS::FontCache::GetFontFromFileHandler_, uFieldFlagsStatic);
}

uType* FontCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FontCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FontCache", options);
    type->fp_build_ = FontCache_build;
    return type;
}

// public static ObjC.Object GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) :494
void FontCache__GetFontFromFile_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval)
{
    *__retval = FontCache::GetFontFromFile(fileSource, *fontSize);
}

uSStrong<uDelegate*> FontCache::GetFontFromFileHandler_;

// public static ObjC.Object GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) [static] :494
uObject* FontCache::GetFontFromFile(::g::Uno::UX::FileSource* fileSource, float fontSize)
{
    return ::g::Uno::Delegate::op_Inequality(FontCache::GetFontFromFileHandler_, NULL) ? (uObject*)uPtr(FontCache::GetFontFromFileHandler_)->Invoke(2, fileSource, uCRef(fontSize)) : NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :346
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// internal static extern class NativeFocus :352
// {
// static NativeFocus() :352
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof());
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void RaiseFocusGained(ObjC.Object handle) :368
void NativeFocus__RaiseFocusGained_fn(uObject* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :376
void NativeFocus__RaiseFocusLost_fn(uObject* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void RaiseFocusGained(ObjC.Object handle) [static] :368
void NativeFocus::RaiseFocusGained(uObject* handle)
{
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :376
void NativeFocus::RaiseFocusLost(uObject* handle)
{
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// public sealed extern class OSVersion :1186
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Patch), 0);
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :1191
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :1191
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :1197
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->Major), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Minor)), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :1191
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :1191
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :1206
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// public enum UITouch.TouchPhase :1030
uEnumType* UITouch__TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.UITouch.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Staionary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// public abstract extern class ViewParent :3496
// {
static void ViewParent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewParent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewParent_type, interface1));
    type->SetFields(3);
}

ViewParent_type* ViewParent_typeof()
{
    static uSStrong<ViewParent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewParent);
    options.TypeSize = sizeof(ViewParent_type);
    type = (ViewParent_type*)uClassType::New("Fuse.Controls.Native.iOS.ViewParent", options);
    type->fp_build_ = ViewParent_build;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    return type;
}

// protected ViewParent(ObjC.Object handle) :3498
void ViewParent__ctor_1_fn(ViewParent* __this, uObject* handle)
{
    __this->ctor_1(handle);
}

// protected ViewParent(ObjC.Object handle) [instance] :3498
void ViewParent::ctor_1(uObject* handle)
{
    ctor_(handle);
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
