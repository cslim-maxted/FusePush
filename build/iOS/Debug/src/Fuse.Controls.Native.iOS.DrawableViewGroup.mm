// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.DrawableViewGroup.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class DrawableViewGroup :134
// {
static void DrawableViewGroup_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DrawableViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DrawableViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(DrawableViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(DrawableViewGroup_type, interface3));
    type->SetFields(3,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _container), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _renderer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _visual), 0);
}

DrawableViewGroup_type* DrawableViewGroup_typeof()
{
    static uSStrong<DrawableViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DrawableViewGroup);
    options.TypeSize = sizeof(DrawableViewGroup_type);
    type = (DrawableViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.DrawableViewGroup", options);
    type->fp_build_ = DrawableViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))DrawableViewGroup__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))DrawableViewGroup__NotifyChildNewSize_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DrawableViewGroup__Dispose_fn;
    return type;
}

// public void Add(Fuse.Controls.Native.iOS.View child) :213
void DrawableViewGroup__Add_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) :219
void DrawableViewGroup__Add1_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :245
void DrawableViewGroup__Add2_fn(uObject* parentHandle, uObject* childHandle)
{
    DrawableViewGroup::Add2(parentHandle, childHandle);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) :253
void DrawableViewGroup__Add3_fn(uObject* parentHandle, uObject* childHandle, int* index)
{
    DrawableViewGroup::Add3(parentHandle, childHandle, *index);
}

// public override sealed void Dispose() :151
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_renderer), ::TYPES[0/*Uno.IDisposable*/]));
    __this->_renderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
    __this->_visual = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :198
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child)
{
    __this->Add(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :208
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index)
{
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :203
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child)
{
    __this->Remove(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]));
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :295
void DrawableViewGroup__NotifyChildNewSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
}

// public void Remove(Fuse.Controls.Native.iOS.View child) :225
void DrawableViewGroup__Remove_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Remove(child);
}

// private static void Remove(ObjC.Object childHandle) :261
void DrawableViewGroup__Remove1_fn(uObject* childHandle)
{
    DrawableViewGroup::Remove1(childHandle);
}

// public void Add(Fuse.Controls.Native.iOS.View child) [instance] :213
void DrawableViewGroup::Add(::g::Fuse::Controls::Native::iOS::View* child)
{
    uPtr(child)->Parent(this);
    DrawableViewGroup::Add2(_container, child->Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) [instance] :219
void DrawableViewGroup::Add1(::g::Fuse::Controls::Native::iOS::View* child, int index)
{
    uPtr(child)->Parent(this);
    DrawableViewGroup::Add3(_container, child->Handle(), index);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) [instance] :225
void DrawableViewGroup::Remove(::g::Fuse::Controls::Native::iOS::View* child)
{
    DrawableViewGroup::Remove1(uPtr(child)->Handle());
    child->Parent(NULL);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :245
void DrawableViewGroup::Add2(uObject* parentHandle, uObject* childHandle)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            			::UIView* child =  (::UIView*)childHandle;
            			[parent addSubview:child];
        } (::g::ObjC::Helpers::GetHandle(parentHandle), ::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) [static] :253
void DrawableViewGroup::Add3(uObject* parentHandle, uObject* childHandle, int index)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle, int index) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            			::UIView* child =  (::UIView*)childHandle;
            			[parent insertSubview:child atIndex:index];
        } (::g::ObjC::Helpers::GetHandle(parentHandle), ::g::ObjC::Helpers::GetHandle(childHandle), index);
        
    }
    
}

// private static void Remove(ObjC.Object childHandle) [static] :261
void DrawableViewGroup::Remove1(uObject* childHandle)
{
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            ::UIView* child =  (::UIView*)childHandle;
            			[child removeFromSuperview];
        } (::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
