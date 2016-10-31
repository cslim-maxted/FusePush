// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.Native.Android.Button.h>
#include <Fuse.Controls.Native.Android.Circle.h>
#include <Fuse.Controls.Native.Android.Ellipse.h>
#include <Fuse.Controls.Native.Android.FocusChangedListener.h>
#include <Fuse.Controls.Native.Android.GraphicsView.h>
#include <Fuse.Controls.Native.Android.Helpers.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.JavaMap.h>
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.Rectangle.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.Android.Slider.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Fuse.Controls.Native.Android.Switch.h>
#include <Fuse.Controls.Native.Android.TextInput.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.Android.ViewGroup.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.Vector.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[6];
static uType* TYPES[26];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class Button :11
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Button, _visual), 0);
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Button__Dispose_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Button__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public Button(Fuse.Visual visual) :15
void Button__ctor_2_fn(Button* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// private static Java.Object Create() :34
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public override sealed void Dispose() :21
void Button__Dispose_fn(Button* __this)
{
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::Android::InputDispatch::RemoveListener(__this);
    __this->_visual = NULL;
}

// public Button New(Fuse.Visual visual) :15
void Button__New1_fn(::g::Fuse::Visual* visual, Button** __retval)
{
    *__retval = Button::New1(visual);
}

// private static void SetText(Java.Object handle, string text) :40
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value) :30
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button(Fuse.Visual visual) [instance] :15
void Button::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(Button::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::Android::InputDispatch::AddListener(this, _visual);
}

// public void set_Text(string value) [instance] :30
void Button::Text(uString* value)
{
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :34
::g::Java::Object* Button::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create52", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Button New(Fuse.Visual visual) [static] :15
Button* Button::New1(::g::Fuse::Visual* visual)
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static] :40
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText53", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Circle :58
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Circle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Circle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Circle_type, interface2),
        ::g::Fuse::Controls::Native::ICircleView_typeof(), offsetof(Circle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _useAngle), 0);
}

Circle_type* Circle_typeof()
{
    static uSStrong<Circle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(Circle_type);
    type = (Circle_type*)uClassType::New("Fuse.Controls.Native.Android.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Circle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_StartAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn;
    type->interface3.fp_set_EndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn;
    type->interface3.fp_set_UseAngle = (void(*)(uObject*, bool*))Circle__FuseControlsNativeICircleViewset_UseAngle_fn;
    type->interface3.fp_set_EffectiveEndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Circle() :58
void Circle__ctor_2_fn(Circle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.ICircleView.set_EffectiveEndAngleDegrees(float value) :91
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value)
{
}

// private void Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float value) :74
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value)
{
    float value_ = *value;
    __this->_endAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float value) :64
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value)
{
    float value_ = *value;
    __this->_startAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_UseAngle(bool value) :84
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value)
{
    bool value_ = *value;
    __this->_useAngle = value_;
    __this->OnShapeChanged();
}

// public generated Circle New() :58
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) :99
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* width, float* height, float* startAngle, float* endAngle)
{
    __this->UpdateShapeDrawable1(handle, *useAngle, *width, *height, *startAngle, *endAngle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :93
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    __this->UpdateShapeDrawable1(handle, __this->_useAngle, __this->Size().X, __this->Size().Y, __this->_startAngle, __this->_endAngle);
}

// public generated Circle() [instance] :58
void Circle::ctor_2()
{
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) [instance] :99
void Circle::UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float width, float height, float startAngle, float endAngle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable154", "(Ljava/lang/Object;Ljava/lang/Object;ZFFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uuseAngle=useAngle;
        jboolean _useAngle = (jboolean)_uuseAngle;
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        float _uheight=height;
        jfloat _height = (jfloat)_uheight;
        float _ustartAngle=startAngle;
        jfloat _startAngle = (jfloat)_ustartAngle;
        float _uendAngle=endAngle;
        jfloat _endAngle = (jfloat)_uendAngle;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_useAngle,_width,_height,_startAngle,_endAngle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Circle New() [static] :58
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Ellipse :277
// {
static void Ellipse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface2));
    type->SetFields(9);
}

::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::Shape_type);
    type = (::g::Fuse::Controls::Native::Android::Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Ellipse", options);
    type->fp_build_ = Ellipse_build;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Ellipse__UpdateShapeDrawable_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// private void UpdateShapeDrawable(Java.Object handle) :285
void Ellipse__UpdateShapeDrawable1_fn(Ellipse* __this, ::g::Java::Object* handle)
{
    __this->UpdateShapeDrawable1(handle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :279
void Ellipse__UpdateShapeDrawable_fn(Ellipse* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    __this->UpdateShapeDrawable1(handle);
}

// private void UpdateShapeDrawable(Java.Object handle) [instance] :285
void Ellipse::UpdateShapeDrawable1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable162", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class FocusChangedListener :2446
// {
static void FocusChangedListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _callback), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _view), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private static void ClearListener(Java.Object viewHandle) :2498
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// public void Dispose() :2475
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private void OnFocusChange(bool hasFocus) :2463
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// public void Dispose() [instance] :2475
void FocusChangedListener::Dispose()
{
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance] :2463
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// private static void ClearListener(Java.Object viewHandle) [static] :2498
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener63", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public abstract extern class GraphicsView :306
// {
static void GraphicsView_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2));
    type->SetFields(6,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _nativeWindow), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _surfaceHandle), 0);
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected GraphicsView(Java.Object handle) :308
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public bool BeginDraw(int2 size) :343
void GraphicsView__BeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval)
{
    *__retval = __this->BeginDraw(*size);
}

// protected void DestroySurface() :331
void GraphicsView__DestroySurface_fn(GraphicsView* __this)
{
    __this->DestroySurface();
}

// public void EndDraw() :366
void GraphicsView__EndDraw_fn(GraphicsView* __this)
{
    __this->EndDraw();
}

// protected void SetSurface(Java.Object surfaceHandle) :316
void GraphicsView__SetSurface_fn(GraphicsView* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsView(Java.Object handle) [instance] :308
void GraphicsView::ctor_1(::g::Java::Object* handle)
{
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_(handle);
}

// public bool BeginDraw(int2 size) [instance] :343
bool GraphicsView::BeginDraw(::g::Uno::Int2 size)
{
    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return false;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
    return true;
}

// protected void DestroySurface() [instance] :331
void GraphicsView::DestroySurface()
{
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance] :366
void GraphicsView::EndDraw()
{
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected void SetSurface(Java.Object surfaceHandle) [instance] :316
void GraphicsView::SetSurface(::g::Java::Object* surfaceHandle)
{
    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal static class Helpers :389
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static int EncodeColor(float4 c) :391
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :391
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal static extern class InputDispatch :677
// {
// static InputDispatch() :677
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[2/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof());
    ::TYPES[2] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[3] = ::g::Fuse::Visual_typeof();
    ::TYPES[4] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[5] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) :819
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(view, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle) :853
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener() :837
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId) :750
void InputDispatch__DeactivatePointer_fn(int* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :831
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId) :740
void InputDispatch__IsPointerActive_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) :689
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) :704
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) :771
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(visual, data);
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) :756
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(visual, data);
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) :783
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) :825
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::Android::View* view)
{
    InputDispatch::RemoveListener(view);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) :847
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener() :686
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() :816
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) [static] :819
void InputDispatch::AddListener(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(uPtr(view)->Handle(), owner);
    InputDispatch::SetOnTouchListener(view->Handle(), InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static] :853
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener79", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static] :837
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener80", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static] :750
void InputDispatch::DeactivatePointer(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :831
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static] :740
bool InputDispatch::IsPointerActive(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static] :689
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[3/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static] :704
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(viewHandle, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[4/*Fuse.ICommonViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :771
void InputDispatch::RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :756
void InputDispatch::RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :783
void InputDispatch::RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) [static] :825
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::Android::View* view)
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(uPtr(view)->Handle());
    InputDispatch::ClearOnTouchListener(view->Handle());
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :847
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener82", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static] :686
::g::Java::Object* InputDispatch::TouchListener()
{
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1 = InputDispatch::_touchListenerHandle();
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle() = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static] :816
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2 = InputDispatch::_viewVisualMap();
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap() = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal abstract extern interface IViewParent :3238
// {
uInterfaceType* IViewParent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.Android.IViewParent", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class JavaMap :862
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap() :866
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key) :881
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) :914
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create() :892
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key) :886
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key) :922
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New() :866
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value) :898
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value) :871
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key) :876
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key) :906
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance] :866
void JavaMap::ctor_()
{
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance] :881
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance] :886
uObject* JavaMap::Get(::g::Java::Object* key)
{
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance] :871
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance] :876
void JavaMap::Remove(::g::Java::Object* key)
{
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static] :914
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey183", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle,_key);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static] :892
::g::Java::Object* JavaMap::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create84", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static] :922
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get185", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_key);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public JavaMap New() [static] :866
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static] :898
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put86", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uvalue=value;
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static] :906
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove187", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public abstract extern class LeafView :1121
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(6);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle) :1123
void LeafView__ctor_1_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private float2 Fuse.Controls.Native.ILeafView.Measure(Fuse.LayoutParams lp, float density) :1125
void LeafView__FuseControlsNativeILeafViewMeasure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    LeafView::Measure(__this->Handle(), (int)(lp_.X() * density_), (int)(lp_.Y() * density_), lp_.HasX(), lp_.HasY());
    ::g::Uno::Float2 res = ::g::Uno::Float2__New2((float)LeafView::GetMeasuredWidth(__this->Handle()) / density_, (float)LeafView::GetMeasuredHeight(__this->Handle()) / density_);
    return *__retval = res, void();
}

// private static int GetMeasuredHeight(Java.Object handle) :1148
void LeafView__GetMeasuredHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredHeight(handle);
}

// private static int GetMeasuredWidth(Java.Object handle) :1142
void LeafView__GetMeasuredWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredWidth(handle);
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) :1133
void LeafView__Measure_fn(::g::Java::Object* handle, int* w, int* h, bool* hasX, bool* hasY)
{
    LeafView::Measure(handle, *w, *h, *hasX, *hasY);
}

// protected LeafView(Java.Object handle) [instance] :1123
void LeafView::ctor_1(::g::Java::Object* handle)
{
    ctor_(handle);
}

// private static int GetMeasuredHeight(Java.Object handle) [static] :1148
int LeafView::GetMeasuredHeight(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredHeight88", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetMeasuredWidth(Java.Object handle) [static] :1142
int LeafView::GetMeasuredWidth(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredWidth89", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) [static] :1133
void LeafView::Measure(::g::Java::Object* handle, int w, int h, bool hasX, bool hasY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure90", "(Ljava/lang/Object;IIZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class MotionEvent :931
// {
static void MotionEvent_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::MotionEvent, _handle), 0);
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle) :936
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action() :953
void MotionEvent__get_Action_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked() :948
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) :1104
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :994
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, MotionEvent_typeof()))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, MotionEvent_typeof()))->_handle), void();
    else
        return *__retval = false, void();
}

// public long get_EventTime() :958
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle) :1028
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle) :1040
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle) :1046
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) :1006
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private int GetLocationOnScreenX(Java.Object viewHandle) :1012
void MotionEvent__GetLocationOnScreenX_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenX(viewHandle);
}

// private int GetLocationOnScreenY(Java.Object viewHandle) :1020
void MotionEvent__GetLocationOnScreenY_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenY(viewHandle);
}

// private int GetPointerCount(Java.Object handle) :1052
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex) :941
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) :1034
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask() :1092
void MotionEvent__GetPointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift() :1098
void MotionEvent__GetPointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex) :966
void MotionEvent__GetPosition_fn(MotionEvent* __this, int* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex) :1058
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex) :1064
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle) :936
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount() :963
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) :971
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(view, *pointDensity);
}

// public static int get_PointerIndexMask() :1083
void MotionEvent__get_PointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift() :1088
void MotionEvent__get_PointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

// public MotionEvent(Java.Object handle) [instance] :936
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public int get_Action() [instance] :953
int MotionEvent::Action()
{
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance] :948
int MotionEvent::ActionMasked()
{
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance] :958
int64_t MotionEvent::EventTime()
{
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance] :1028
int MotionEvent::GetAction(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction92", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance] :1040
int MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked93", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance] :1046
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime94", "(Ljava/lang/Object;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_handle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance] :1006
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    return ::g::Uno::Float2__New2((float)GetLocationOnScreenX(viewHandle), (float)GetLocationOnScreenY(viewHandle));
}

// private int GetLocationOnScreenX(Java.Object viewHandle) [instance] :1012
int MotionEvent::GetLocationOnScreenX(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenX95", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_viewHandle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetLocationOnScreenY(Java.Object viewHandle) [instance] :1020
int MotionEvent::GetLocationOnScreenY(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenY96", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_viewHandle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance] :1052
int MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount97", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance] :941
int MotionEvent::GetPointerId(int pointerIndex)
{
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance] :1034
int MotionEvent::GetPointerId1(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId198", "(Ljava/lang/Object;Ljava/lang/Object;I)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance] :966
::g::Uno::Float2 MotionEvent::GetPosition(int pointerIndex)
{
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance] :1058
float MotionEvent::GetX(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX101", "(Ljava/lang/Object;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance] :1064
float MotionEvent::GetY(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY103", "(Ljava/lang/Object;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance] :963
int MotionEvent::PointerCount()
{
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) [instance] :971
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* view, float pointDensity)
{
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[6/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = GetLocationOnScreen(view);

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static] :1104
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare91", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle1=handle1;
        jobject _handle1 = (_uhandle1==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhandle2=handle2;
        jobject _handle2 = (_uhandle2==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle1,_handle2);
        bool __result = (bool)__jresult;
        if (_handle1!=NULL) { U_JNIVAR->DeleteLocalRef(_handle1); }
        if (_handle2!=NULL) { U_JNIVAR->DeleteLocalRef(_handle2); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static] :1092
int MotionEvent::GetPointerIndexMask()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask99", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static] :1098
int MotionEvent::GetPointerIndexShift()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift100", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static] :936
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static] :1083
int MotionEvent::PointerIndexMask()
{
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static] :1088
int MotionEvent::PointerIndexShift()
{
    return MotionEvent::GetPointerIndexShift();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Rectangle :1325
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Rectangle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Rectangle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Rectangle_type, interface2),
        ::g::Fuse::Controls::Native::IRectangleView_typeof(), offsetof(Rectangle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Rectangle, _cornerRadius), 0);
}

Rectangle_type* Rectangle_typeof()
{
    static uSStrong<Rectangle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(Rectangle_type);
    type = (Rectangle_type*)uClassType::New("Fuse.Controls.Native.Android.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Rectangle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_CornerRadius = (void(*)(uObject*, ::g::Uno::Float4*))Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Rectangle() :1325
void Rectangle__ctor_2_fn(Rectangle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4 value) :1330
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    __this->_cornerRadius = value_;
    __this->OnShapeChanged();
}

// public generated Rectangle New() :1325
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :1337
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    ::g::Uno::Float4 r = ::g::Uno::Float4__op_Multiply1(__this->_cornerRadius, pixelsPerPoint_);
    __this->UpdateShapeDrawable1(handle, r.X, r.Y, r.Z, r.W);
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) :1344
void Rectangle__UpdateShapeDrawable1_fn(Rectangle* __this, ::g::Java::Object* handle, float* x, float* y, float* z, float* w)
{
    __this->UpdateShapeDrawable1(handle, *x, *y, *z, *w);
}

// public generated Rectangle() [instance] :1325
void Rectangle::ctor_2()
{
    _cornerRadius = ::g::Uno::Float4__New1(0.0f);
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) [instance] :1344
void Rectangle::UpdateShapeDrawable1(::g::Java::Object* handle, float x, float y, float z, float w)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable1108", "(Ljava/lang/Object;Ljava/lang/Object;FFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uz=z;
        jfloat _z = (jfloat)_uz;
        float _uw=w;
        jfloat _w = (jfloat)_uw;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_x,_y,_z,_w);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Rectangle New() [static] :1325
Rectangle* Rectangle::New1()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class ScrollView :1364
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::Native::Android::View_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ScrollView_type, interface2),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface3),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ScrollView_type, interface4));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _callbackHandle), 0,
        ::g::Fuse::Controls::Native::Android::View_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _content), 0,
        ::g::Fuse::Controls::Native::IScrollViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _host), 0);
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))ScrollView__Dispose_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface4.fp_Add = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupAdd_fn;
    type->interface4.fp_Add1 = (void(*)(uObject*, uObject*, int*))ScrollView__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_set_ClipToBounds = (void(*)(uObject*, bool*))ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface3.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface3.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1370
void ScrollView__ctor_1_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_1(host);
}

// private Java.Object AddCallback(Java.Object handle) :1389
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval)
{
    *__retval = __this->AddCallback(handle);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :1402
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// public void set_Content(Fuse.Controls.Native.Android.View value) :1448
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* value)
{
    __this->Content(value);
}

// private static Java.Object Create() :1383
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :1376
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :1420
void ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    ScrollView::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :1430
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child)
{
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[7/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :1435
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index)
{
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[7/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :1427
void ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ScrollView* __this, bool* value)
{
    bool value_ = *value;
    ScrollView::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :1440
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child)
{
    __this->Content(NULL);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1370
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) :1414
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value) :1407
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :1490
void ScrollView__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ScrollView::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :1461
void ScrollView__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    ScrollView::SetClipToBounds(handle, *clipToBounds);
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) :1477
void ScrollView__SetContent_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ScrollView::SetContent(parentHandle, childHandle);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) :1469
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1370
void ScrollView::ctor_1(uObject* host)
{
    ctor_(ScrollView::Create());
    _host = host;
    _callbackHandle = AddCallback(Handle());
}

// private Java.Object AddCallback(Java.Object handle) [instance] :1389
::g::Java::Object* ScrollView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback109", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_handle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :1402
void ScrollView::AllowedScrollDirections(int value)
{
}

// public void set_Content(Fuse.Controls.Native.Android.View value) [instance] :1448
void ScrollView::Content(::g::Fuse::Controls::Native::Android::View* value)
{
    if (_content != NULL)
        uPtr(_content)->Parent(NULL);

    _content = value;

    if (_content != NULL)
        uPtr(_content)->Parent((uObject*)this);

    ScrollView::SetContent(Handle(), (_content != NULL) ? (::g::Java::Object*)uPtr(_content)->Handle() : NULL);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance] :1414
void ScrollView::OnScrollChanged(int x, int y, int oldx, int oldy)
{
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[8/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[8/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance] :1407
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[8/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private static Java.Object Create() [static] :1383
::g::Java::Object* ScrollView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create111", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1370
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_1(host);
    return obj1;
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :1490
void ScrollView::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize112", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :1461
void ScrollView::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds113", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) [static] :1477
void ScrollView::SetContent(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetContent114", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static] :1469
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int x, int y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition115", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ux=x;
        jint _x = (jint)_ux;
        int _uy=y;
        jint _y = (jint)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal abstract extern class Shape :1511
// {
static void Shape_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno");
    ::STRINGS[2] = uString::Const("SetBrush");
    ::TYPES[9] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[13] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[14] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[15] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), ::g::Fuse::Drawing::GradientStop_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[16] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[17] = ::g::Uno::Float_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Shape_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Drawing::Brush_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::Stroke_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _strokes), 0);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Shape", options);
    type->fp_build_ = Shape_build;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected Shape() :1515
void Shape__ctor_1_fn(Shape* __this)
{
    __this->ctor_1();
}

// private static Java.Object Create() :1678
void Shape__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Shape::Create();
}

// private void Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[] fills, Fuse.Drawing.Stroke[] strokes, float pixelsPerPoint) :1524
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->_fills = fills;
    __this->_strokes = strokes;
    __this->_pixelsPerPoint = pixelsPerPoint_;
    __this->OnShapeChanged();
}

// private static Java.Object GetLayer(Java.Object handle, int layer) :1690
void Shape__GetLayer_fn(::g::Java::Object* handle, int* layer, ::g::Java::Object** __retval)
{
    *__retval = Shape::GetLayer(handle, *layer);
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) :1697
void Shape__MakeLayerDrawable_fn(::g::Java::Object* handle, int* layerCount, ::g::Java::Object** __retval)
{
    *__retval = Shape::MakeLayerDrawable(handle, *layerCount);
}

// protected void OnShapeChanged() :1534
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) :1602
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval)
{
    *__retval = Shape::SelectOffset(a, b);
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) :1569
void Shape__SetBrush_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(shapeDrawable, brush);
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) :1607
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    __this->SetLinearGradient(shapeDrawable, linearGradient);
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) :1662
void Shape__SetShapeDrawableColor_fn(::g::Java::Object* shapeDrawable, int* r, int* g, int* b, int* a, int* opacity)
{
    Shape::SetShapeDrawableColor(shapeDrawable, *r, *g, *b, *a, *opacity);
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) :1634
void Shape__SetShapeDrawableLinearGradient_fn(::g::Java::Object* shapeDrawable, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* positions)
{
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, *startX, *startY, *endX, *endY, colors, positions);
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) :1670
void Shape__SetShapeDrawableStrokeWidth_fn(::g::Java::Object* shapeDrawable, float* width)
{
    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, *width);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) :1561
void Shape__SetStroke_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(shapeDrawable, stroke);
}

// protected Shape() [instance] :1515
void Shape::ctor_1()
{
    ctor_(Shape::Create());
}

// protected void OnShapeChanged() [instance] :1534
void Shape::OnShapeChanged()
{
    int layerCount = ((_fills != NULL) ? uPtr(_fills)->Length() : 0) + ((_strokes != NULL) ? uPtr(_strokes)->Length() : 0);
    ::g::Java::Object* layerDrawable = Shape::MakeLayerDrawable(Handle(), layerCount);

    for (int i = 0; i < layerCount; i++)
        UpdateShapeDrawable(Shape::GetLayer(layerDrawable, i), _pixelsPerPoint);

    int layer = 0;

    if (_fills != NULL)

        for (int i1 = uPtr(_fills)->Length(); (i1--) > 0; )
            SetBrush(Shape::GetLayer(layerDrawable, layer++), uPtr(_fills)->Strong< ::g::Fuse::Drawing::Brush*>(i1));

    if (_strokes != NULL)

        for (int i2 = uPtr(_strokes)->Length(); (i2--) > 0; )
            SetStroke(Shape::GetLayer(layerDrawable, layer++), uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i2));
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) [instance] :1569
void Shape::SetBrush(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    if (uIs(brush, ::TYPES[9/*Fuse.Drawing.LinearGradient*/]))
        SetLinearGradient(shapeDrawable, uCast< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[9/*Fuse.Drawing.LinearGradient*/]));
    else
    {
        ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[11/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*""*/], brush, ::STRINGS[1/*"/usr/local/...*/], 1586, ::STRINGS[2/*"SetBrush"*/]);

        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(brush, ::TYPES[12/*Fuse.Drawing.DynamicBrush*/]);
        float opacity = (db != NULL) ? uPtr(db)->Opacity() : 1.0f;
        Shape::SetShapeDrawableColor(shapeDrawable, ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(opacity * 255.0f), 0, 255));
    }
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) [instance] :1607
void Shape::SetLinearGradient(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uArray* stops = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[13/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OrderBy1(::TYPES[14/*Uno.Collections.EnumerableExtensions.OrderBy<Fuse.Drawing.GradientStop>*/], uPtr(linearGradient)->Stops(), uDelegate::New(::TYPES[15/*Uno.Func<Fuse.Drawing.GradientStop, Fuse.Drawing.GradientStop, int>*/], (void*)Shape__SelectOffset_fn)));
    uArray* colors = uArray::New(::TYPES[16/*int[]*/], uPtr(stops)->Length());
    uArray* positions = uArray::New(::TYPES[17/*float[]*/], stops->Length());

    for (int i = 0; i < stops->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        uPtr(colors)->Item<int>(i) = ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(uPtr(gradientStop)->Color());
        uPtr(positions)->Item<float>(i) = gradientStop->Offset();
    }

    ::g::Uno::Float2 start = linearGradient->StartPoint();
    ::g::Uno::Float2 end = linearGradient->EndPoint();
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, start.X, start.Y, end.X, end.Y, colors, positions);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) [instance] :1561
void Shape::SetStroke(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(shapeDrawable, uPtr(stroke)->Brush());

    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, uPtr(stroke)->Width() * _pixelsPerPoint);
}

// private static Java.Object Create() [static] :1678
::g::Java::Object* Shape::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create116", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetLayer(Java.Object handle, int layer) [static] :1690
::g::Java::Object* Shape::GetLayer(::g::Java::Object* handle, int layer)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLayer118", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayer=layer;
        jint _layer = (jint)_ulayer;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layer);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) [static] :1697
::g::Java::Object* Shape::MakeLayerDrawable(::g::Java::Object* handle, int layerCount)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeLayerDrawable119", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayerCount=layerCount;
        jint _layerCount = (jint)_ulayerCount;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layerCount);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) [static] :1602
int Shape::SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b)
{
    return (int)::g::Uno::Math::Sign1(uPtr(a)->Offset() - uPtr(b)->Offset());
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) [static] :1662
void Shape::SetShapeDrawableColor(::g::Java::Object* shapeDrawable, int r, int g, int b, int a, int opacity)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableColor120", "(Ljava/lang/Object;IIIII)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ur=r;
        jint _r = (jint)_ur;
        int _ug=g;
        jint _g = (jint)_ug;
        int _ub=b;
        jint _b = (jint)_ub;
        int _ua=a;
        jint _a = (jint)_ua;
        int _uopacity=opacity;
        jint _opacity = (jint)_uopacity;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_r,_g,_b,_a,_opacity);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) [static] :1634
void Shape::SetShapeDrawableLinearGradient(::g::Java::Object* shapeDrawable, float startX, float startY, float endX, float endY, uArray* colors, uArray* positions)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableLinearGradient121", "(Ljava/lang/Object;FFFFLcom/uno/IntArray;Lcom/uno/FloatArray;)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ustartX=startX;
        jfloat _startX = (jfloat)_ustartX;
        float _ustartY=startY;
        jfloat _startY = (jfloat)_ustartY;
        float _uendX=endX;
        jfloat _endX = (jfloat)_uendX;
        float _uendY=endY;
        jfloat _endY = (jfloat)_uendY;
        uArray* _ucolors=colors;
        jobject _colors = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_ucolors);
        uArray* _upositions=positions;
        jobject _positions = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_upositions);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_startX,_startY,_endX,_endY,_colors,_positions);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        if (_colors!=NULL) { U_JNIVAR->DeleteLocalRef(_colors); }
        if (_positions!=NULL) { U_JNIVAR->DeleteLocalRef(_positions); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) [static] :1670
void Shape::SetShapeDrawableStrokeWidth(::g::Java::Object* shapeDrawable, float width)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableStrokeWidth122", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_width);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class Slider :1741
// {
static void Slider_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IRangeViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Slider, _host), 0);
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :1752
void Slider__ctor_2_fn(Slider* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddChangedCallback(Java.Object handle) :1773
void Slider__AddChangedCallback_fn(Slider* __this, ::g::Java::Object* handle)
{
    __this->AddChangedCallback(handle);
}

// private static Java.Object Create() :1759
void Slider__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :1789
void Slider__Dispose_fn(Slider* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :1752
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// private void OnSeekBarChanged(double newProgress) :1784
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress)
{
    __this->OnSeekBarChanged(*newProgress);
}

// public void set_Progress(double value) :1746
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetProgress(Java.Object handle, double progress) :1767
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress)
{
    Slider::SetProgress(handle, *progress);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :1752
void Slider::ctor_2(uObject* host)
{
    ctor_1(Slider::Create());
    _host = host;
    AddChangedCallback(Handle());
}

// private void AddChangedCallback(Java.Object handle) [instance] :1773
void Slider::AddChangedCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddChangedCallback123", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSeekBarChanged(double newProgress) [instance] :1784
void Slider::OnSeekBarChanged(double newProgress)
{
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[18/*Fuse.Controls.Native.IRangeViewHost*/]), newProgress);
}

// public void set_Progress(double value) [instance] :1746
void Slider::Progress(double value)
{
    Slider::SetProgress(Handle(), value);
}

// private static Java.Object Create() [static] :1759
::g::Java::Object* Slider::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create125", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :1752
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetProgress(Java.Object handle, double progress) [static] :1767
void Slider::SetProgress(::g::Java::Object* handle, double progress)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetProgress126", "(Ljava/lang/Object;D)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _uprogress=progress;
        jdouble _progress = (jdouble)_uprogress;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_progress);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class SurfaceView :1806
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface2));
    type->SetFields(9);
}

::g::Fuse::Controls::Native::Android::GraphicsView_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsView_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsView_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public SurfaceView() :1808
void SurfaceView__ctor_2_fn(SurfaceView* __this)
{
    __this->ctor_2();
}

// private void AddCallback(Java.Object handle) :1831
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1850
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder) :1825
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New() :1808
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) :1814
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder) :1815
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder) :1819
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) :1813
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance] :1808
void SurfaceView::ctor_2()
{
    ctor_1(SurfaceView::Create());
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1831
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback129", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance] :1814
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance] :1815
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance] :1819
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance] :1813
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static] :1850
::g::Java::Object* SurfaceView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create134", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static] :1825
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface135", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uholder=holder;
        jobject _holder = (_uholder==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uholder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_holder);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_holder!=NULL) { U_JNIVAR->DeleteLocalRef(_holder); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SurfaceView New() [static] :1808
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class Switch :1875
// {
static void Switch_build(uType* type)
{
    ::TYPES[19] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IToggleViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Switch, _host), 0);
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :1885
void Switch__ctor_2_fn(Switch* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddCallback(Java.Object handle) :1898
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1892
void Switch__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :1918
void Switch__Dispose_fn(Switch* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :1885
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// private void OnToggleChanged(bool value) :1913
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value) :1908
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :1879
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :1885
void Switch::ctor_2(uObject* host)
{
    ctor_1(Switch::Create());
    _host = host;
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1898
void Switch::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback136", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnToggleChanged(bool value) [instance] :1913
void Switch::OnToggleChanged(bool value)
{
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance] :1879
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static Java.Object Create() [static] :1892
::g::Java::Object* Switch::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create138", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :1885
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetValue(Java.Object handle, bool value) [static] :1908
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue139", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class TextInput :1953
// {
static void TextInput_build(uType* type)
{
    ::TYPES[20] = ::g::Uno::IDisposable_typeof();
    ::TYPES[21] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextView_type, interface3));
    type->SetFields(6,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _focusEvent), 0,
        ::g::Fuse::Controls::Native::ITextEditHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _host), 0);
}

::g::Fuse::Controls::Native::Android::TextView_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextView_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextView_type);
    type = (::g::Fuse::Controls::Native::Android::TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextInput__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public override sealed void Dispose() :1991
void TextInput__Dispose_fn(TextInput* __this)
{
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[20/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private bool OnEditorAction(int actionCode) :2356
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnTextChanged(string value) :2351
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// private bool OnEditorAction(int actionCode) [instance] :2356
bool TextInput::OnEditorAction(int actionCode)
{
    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[21/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnTextChanged(string value) [instance] :2351
void TextInput::OnTextChanged(uString* value)
{
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[21/*Fuse.Controls.Native.ITextEditHost*/]), value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public extern class TextView :2766
// {
static void TextView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(6);
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextView() :2770
void TextView__ctor_2_fn(TextView* __this)
{
    __this->ctor_2();
}

// public TextView(Java.Object handle) :2768
void TextView__ctor_3_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_3(handle);
}

// private static Java.Object Create() :2836
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value) :2803
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value) :2798
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value) :2793
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value) :2779
void TextView__set_MaxLength_fn(TextView* __this, int* value)
{
    __this->MaxLength(*value);
}

// public TextView New() :2770
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) :2867
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size) :2861
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing) :2855
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength) :2888
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text) :2842
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment) :2873
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color) :2882
void TextView__SetTextColor_fn(::g::Java::Object* handle, int* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) :2849
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) :2814
void TextView__set_TextAlignment_fn(TextView* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value) :2827
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) :2832
void TextView__set_TextTruncation_fn(TextView* __this, int* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) :2788
void TextView__set_TextWrapping_fn(TextView* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value) :2774
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance] :2770
void TextView::ctor_2()
{
    ctor_3(TextView::Create());
}

// public TextView(Java.Object handle) [instance] :2768
void TextView::ctor_3(::g::Java::Object* handle)
{
    ctor_1(handle);
}

// public void set_Font(Fuse.Font value) [instance] :2803
void TextView::Font(::g::Fuse::Font* value)
{
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance] :2798
void TextView::FontSize(float value)
{
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance] :2793
void TextView::LineSpacing(float value)
{
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance] :2779
void TextView::MaxLength(int value)
{
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance] :2814
void TextView::TextAlignment(int value)
{
    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance] :2827
void TextView::TextColor(::g::Uno::Float4 value)
{
    TextView::SetTextColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance] :2832
void TextView::TextTruncation(int value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance] :2788
void TextView::TextWrapping(int value)
{
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance] :2774
void TextView::Value(uString* value)
{
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :2836
::g::Java::Object* TextView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create162", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextView New() [static] :2770
TextView* TextView::New1()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_2();
    return obj2;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static] :2867
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont163", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ufontHandle=fontHandle;
        jobject _fontHandle = (_ufontHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ufontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_fontHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_fontHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_fontHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static] :2861
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize164", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _usize=size;
        jfloat _size = (jfloat)_usize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_size);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static] :2855
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing165", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uspacing=spacing;
        jfloat _spacing = (jfloat)_uspacing;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_spacing);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static] :2888
void TextView::SetMaxLength(::g::Java::Object* handle, int maxLength)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength166", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _umaxLength=maxLength;
        jint _maxLength = (jint)_umaxLength;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_maxLength);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static] :2842
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText167", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static] :2873
void TextView::SetTextAlignment(::g::Java::Object* handle, int alignment)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment168", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ualignment=alignment;
        jint _alignment = (jint)_ualignment;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_alignment);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static] :2882
void TextView::SetTextColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor169", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static] :2849
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping170", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uwrap=wrap;
        jboolean _wrap = (jboolean)_uwrap;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wrap);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Typeface :2910
// {
static void Typeface_build(uType* type)
{
    ::TYPES[22] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle) :2920
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :2953
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :2942
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) :2947
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :2961
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() :2927
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :2930
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, ::TYPES[22/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[22/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :2967
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :2937
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :2914
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :2920
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :2920
void Typeface::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :2914
::g::Java::Object* Typeface::Handle()
{
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :2953
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile171", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ubundlePath=bundlePath;
        jstring _bundlePath = JniHelper::UnoToJavaString(_ubundlePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundlePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundlePath!=NULL) { U_JNIVAR->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :2942
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static] :2947
Typeface* Typeface::CreateFromFile(uString* path)
{
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :2961
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl172", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_path);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetDefault() [static] :2967
::g::Java::Object* Typeface::GetDefault()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault173", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :2920
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static] :2927
Typeface* Typeface::Default()
{
    return Typeface::New1(Typeface::GetDefault());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// internal static extern class TypefaceCache :2973
// {
// static TypefaceCache() :2973
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[3] = uString::Const("/tempFont");
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof());
    ::TYPES[24] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) :2978
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :2985
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :2995
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static] :2978
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->File(), ::TYPES[24/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->File(), ::TYPES[24/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->File());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :2985
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :2995
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    uArray* data = uPtr(fileSource)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[3/*"/tempFont"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), fileSource->Name, typeface);
    return typeface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public abstract extern class View :3028
// {
static void View_build(uType* type)
{
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno");
    ::STRINGS[4] = uString::Const("set_Background");
    ::STRINGS[5] = uString::Const(" is missing parent view");
    ::TYPES[10] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[25] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _handle), 0,
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _parent), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _scale), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _translation), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->fp_Dispose = View__Dispose_fn;
    type->interface0.fp_Show = (void(*)(uObject*))View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))View__Dispose_fn;
    return type;
}

// protected View(Java.Object handle) :3046
void View__ctor__fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public void set_Background(Fuse.Drawing.Brush value) :3085
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public virtual void Dispose() :3051
void View__Dispose_fn(View* __this)
{
}

// public Java.Object get_Handle() :3030
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public void Hide() :3061
void View__Hide_fn(View* __this)
{
    __this->Hide();
}

// public void set_Opacity(float value) :3167
void View__set_Opacity_fn(View* __this, float* value)
{
    __this->Opacity(*value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() :3035
void View__get_Parent_fn(View* __this, uObject** __retval)
{
    *__retval = __this->Parent();
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) :3036
void View__set_Parent_fn(View* __this, uObject* value)
{
    __this->Parent(value);
}

// public void set_Position(float2 value) :3150
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private static void SetBackground(Java.Object handle, int argb) :3230
void View__SetBackground_fn(::g::Java::Object* handle, int* argb)
{
    View::SetBackground(handle, *argb);
}

// private static void SetOpacity(Java.Object handle, float value) :3176
void View__SetOpacity_fn(::g::Java::Object* handle, float* value)
{
    View::SetOpacity(handle, *value);
}

// private static void SetPivotXY(Java.Object handle, float x, float y) :3214
void View__SetPivotXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetPivotXY(handle, *x, *y);
}

// private static void SetRotation(Java.Object handle, float value) :3196
void View__SetRotation_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotation(handle, *value);
}

// private static void SetRotationX(Java.Object handle, float value) :3202
void View__SetRotationX_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotationX(handle, *value);
}

// private static void SetRotationY(Java.Object handle, float value) :3208
void View__SetRotationY_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotationY(handle, *value);
}

// private static void SetScaleXY(Java.Object handle, float x, float y) :3222
void View__SetScaleXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetScaleXY(handle, *x, *y);
}

// private static void SetTranslation(Java.Object handle, float x, float y) :3188
void View__SetTranslation_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetTranslation(handle, *x, *y);
}

// private static void SetVisible(Java.Object handle, bool isVisible) :3078
void View__SetVisible_fn(::g::Java::Object* handle, bool* isVisible)
{
    View::SetVisible(handle, *isVisible);
}

// public void Show() :3056
void View__Show_fn(View* __this)
{
    __this->Show();
}

// public float2 get_Size() :3156
void View__get_Size_fn(View* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :3157
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public void set_Transform(float4x4 value) :3109
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// protected View(Java.Object handle) [instance] :3046
void View::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :3085
void View::Background(::g::Fuse::Drawing::Brush* value)
{
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);

    if (value != NULL)
    {
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(value, ::TYPES[10/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(value, ::TYPES[11/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::g::Uno::Object::ToString(this), value, ::STRINGS[1/*"/usr/local/...*/], 3098, ::STRINGS[4/*"set_Backgro...*/]);
    }

    View::SetBackground(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(c));
}

// public Java.Object get_Handle() [instance] :3030
::g::Java::Object* View::Handle()
{
    return _handle;
}

// public void Hide() [instance] :3061
void View::Hide()
{
    View::SetVisible(Handle(), false);
}

// public void set_Opacity(float value) [instance] :3167
void View::Opacity(float value)
{
    View::SetOpacity(Handle(), value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() [instance] :3035
uObject* View::Parent()
{
    return _parent;
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) [instance] :3036
void View::Parent(uObject* value)
{
    _parent = value;

    if (_parent != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(_parent), ::TYPES[25/*Fuse.Controls.Native.Android.IViewParent*/]), this, _size);
}

// public void set_Position(float2 value) [instance] :3150
void View::Position(::g::Uno::Float2 value)
{
    View::SetTranslation(Handle(), value.X, value.Y);
}

// public void Show() [instance] :3056
void View::Show()
{
    View::SetVisible(Handle(), true);
}

// public float2 get_Size() [instance] :3156
::g::Uno::Float2 View::Size()
{
    return _size;
}

// public void set_Size(float2 value) [instance] :3157
void View::Size(::g::Uno::Float2 value)
{
    _size = value;

    if (Parent() != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[25/*Fuse.Controls.Native.Android.IViewParent*/]), this, value);
}

// public void set_Transform(float4x4 value) [instance] :3109
void View::Transform(::g::Uno::Float4x4 value)
{
    ::g::Uno::Float4x4 t = value;
    ::g::Uno::Float3 scale;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(t, &scale, &rotation, &translation);

    if (::g::Uno::Float2__op_Inequality(::g::Uno::Float2__New2(scale.X, scale.Y), _scale))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetScaleXY(Handle(), scale.X, scale.Y);
        _scale = ::g::Uno::Float2__New2(scale.X, scale.Y);
    }

    ::g::Uno::Float3 ind1 = ::g::Uno::Quaternion::ToEulerAngleDegrees(rotation);
    ::g::Uno::Float3 r = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);

    if (::g::Uno::Float3__op_Inequality(r, _rotation))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetRotation(Handle(), r.Z);
        View::SetRotationX(Handle(), r.X);
        View::SetRotationY(Handle(), r.Y);
        _rotation = r;
    }

    ::g::Uno::Float2 translationXY = ::g::Uno::Float2__New2(translation.X, translation.Y);

    if (::g::Uno::Vector::Distance(translationXY, _translation) > 0.1f)
    {
        Position(translationXY);
        _translation = translationXY;
    }

    if (Parent() == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition(this, ::STRINGS[5/*" is missing...*/]), 1, ::STRINGS[1/*"/usr/local/...*/], 3143);
    else
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[25/*Fuse.Controls.Native.Android.IViewParent*/]), this, Size());
}

// private static void SetBackground(Java.Object handle, int argb) [static] :3230
void View::SetBackground(::g::Java::Object* handle, int argb)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBackground175", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uargb=argb;
        jint _argb = (jint)_uargb;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_argb);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetOpacity(Java.Object handle, float value) [static] :3176
void View::SetOpacity(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOpacity177", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPivotXY(Java.Object handle, float x, float y) [static] :3214
void View::SetPivotXY(::g::Java::Object* handle, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPivotXY178", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotation(Java.Object handle, float value) [static] :3196
void View::SetRotation(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotation179", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotationX(Java.Object handle, float value) [static] :3202
void View::SetRotationX(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotationX180", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotationY(Java.Object handle, float value) [static] :3208
void View::SetRotationY(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotationY181", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScaleXY(Java.Object handle, float x, float y) [static] :3222
void View::SetScaleXY(::g::Java::Object* handle, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScaleXY182", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTranslation(Java.Object handle, float x, float y) [static] :3188
void View::SetTranslation(::g::Java::Object* handle, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTranslation183", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetVisible(Java.Object handle, bool isVisible) [static] :3078
void View::SetVisible(::g::Java::Object* handle, bool isVisible)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetVisible184", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uisVisible=isVisible;
        jboolean _isVisible = (jboolean)_uisVisible;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_isVisible);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class ViewGroup :3253
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::Native::Android::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface3));
    type->SetFields(6);
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    type->fp_ctor_ = (void*)ViewGroup__New1_fn;
    type->interface3.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface3.fp_Add1 = (void(*)(uObject*, uObject*, int*))ViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_set_ClipToBounds = (void(*)(uObject*, bool*))ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public ViewGroup() :3256
void ViewGroup__ctor_1_fn(ViewGroup* __this)
{
    __this->ctor_1();
}

// public void Add(Fuse.Controls.Native.Android.View child) :3288
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) :3294
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :3327
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :3335
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :3259
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :3306
void ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    ViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :3273
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    __this->Add(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[7/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :3278
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index)
{
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[7/*Fuse.Controls.Native.Android.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :3270
void ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ViewGroup* __this, bool* value)
{
    bool value_ = *value;
    ViewGroup::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :3283
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    __this->Remove(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[7/*Fuse.Controls.Native.Android.View*/]));
}

// public ViewGroup New() :3256
void ViewGroup__New1_fn(ViewGroup** __retval)
{
    *__retval = ViewGroup::New1();
}

// public void Remove(Fuse.Controls.Native.Android.View child) :3300
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Remove(child);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :3343
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :3312
void ViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ViewGroup::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :3319
void ViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    ViewGroup::SetClipToBounds(handle, *clipToBounds);
}

// public ViewGroup() [instance] :3256
void ViewGroup::ctor_1()
{
    ctor_(ViewGroup::Create());
}

// public void Add(Fuse.Controls.Native.Android.View child) [instance] :3288
void ViewGroup::Add(::g::Fuse::Controls::Native::Android::View* child)
{
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView(Handle(), child->Handle());
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) [instance] :3294
void ViewGroup::Add1(::g::Fuse::Controls::Native::Android::View* child, int index)
{
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView1(Handle(), child->Handle(), index);
}

// public void Remove(Fuse.Controls.Native.Android.View child) [instance] :3300
void ViewGroup::Remove(::g::Fuse::Controls::Native::Android::View* child)
{
    uPtr(child)->Parent(NULL);
    ViewGroup::RemoveView(Handle(), child->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :3327
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView185", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :3335
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1186", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :3259
::g::Java::Object* ViewGroup::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create187", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ViewGroup New() [static] :3256
ViewGroup* ViewGroup::New1()
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :3343
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView188", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :3312
void ViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize189", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :3319
void ViewGroup::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds190", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
