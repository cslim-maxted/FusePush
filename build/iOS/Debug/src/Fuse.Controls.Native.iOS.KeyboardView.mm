// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :1263
// {
static void KeyboardView_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::KeyboardView, _handle), 0);
}

uType* KeyboardView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(KeyboardView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.KeyboardView", options);
    type->fp_build_ = KeyboardView_build;
    type->fp_ctor_ = (void*)KeyboardView__New1_fn;
    return type;
}

// public KeyboardView() :1278
void KeyboardView__ctor__fn(KeyboardView* __this)
{
    __this->ctor_();
}

// private static ObjC.Object Create() :1285
void KeyboardView__Create_fn(uObject** __retval)
{
    *__retval = KeyboardView::Create();
}

// public ObjC.Object get_Handle() :1267
void KeyboardView__get_Handle_fn(KeyboardView* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public KeyboardView New() :1278
void KeyboardView__New1_fn(KeyboardView** __retval)
{
    *__retval = KeyboardView::New1();
}

// public KeyboardView() [instance] :1278
void KeyboardView::ctor_()
{
    _handle = KeyboardView::Create();
}

// public ObjC.Object get_Handle() [instance] :1267
uObject* KeyboardView::Handle()
{
    return _handle;
}

// private static ObjC.Object Create() [static] :1285
uObject* KeyboardView::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::KeyboardView alloc] init];
        } ());
        
    }
    
}

// public KeyboardView New() [static] :1278
KeyboardView* KeyboardView::New1()
{
    KeyboardView* obj1 = (KeyboardView*)uNew(KeyboardView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
