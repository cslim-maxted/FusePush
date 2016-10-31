// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsBackButton_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h>
#include <_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-bccebf50.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-8dbd4f90.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-43727aab.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseEntities_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <Fuse.Controls.BackButton.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.DefaultScroller.h>
#include <Fuse.Controls.ScrollView.DefaultTrigger.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[146];
static uType* TYPES[1];

namespace g{

// /usr/local/share/uno/Packages/Fuse.Controls/0.38.6/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"n"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[15/*"uniform mat...*/], ::STRINGS[16/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[13/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[17/*"uniform mat...*/], ::STRINGS[18/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[19/*"uniform mat...*/], ::STRINGS[20/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform mat4 l, c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    m = ((((d * (false ? vec2(a.x, float(1) - a.y) : a)) - e) / f) * g) + h;\n"
        "    gl_Position = c * (l * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform vec4 i;\n"
        "uniform float j, k;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = (b ? vec4(float(0)) : texture2D(n, m)) * i;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j) * k;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[15] = uString::Const("uniform mat4 h, b;\n"
        "uniform vec2 c, d, e, i;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n"
        "    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[16] = uString::Const("uniform float f, g;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(l, vec2(k, 0.5));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[20] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportd3ce851b_, uFieldFlagsStatic);
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportd3ce851b_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsCircle_Color_Property :255
// {
static void FuseControlsNavigation_FuseControlsCircle_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsNavigation_FuseControlsCircle_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsCircle_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsCircle_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsCircle_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsCircle_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsNavigation_FuseControlsCircle_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsCircle_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsNavigation_FuseControlsCircle_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsNavigation_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :258
void FuseControlsNavigation_FuseControlsCircle_Color_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :260
void FuseControlsNavigation_FuseControlsCircle_Color_Property__Get_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :258
void FuseControlsNavigation_FuseControlsCircle_Color_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsCircle_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsCircle_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :259
void FuseControlsNavigation_FuseControlsCircle_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :261
void FuseControlsNavigation_FuseControlsCircle_Color_Property__Set_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :262
void FuseControlsNavigation_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :258
void FuseControlsNavigation_FuseControlsCircle_Color_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :258
FuseControlsNavigation_FuseControlsCircle_Color_Property* FuseControlsNavigation_FuseControlsCircle_Color_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsCircle_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsCircle_Color_Property*)uNew(FuseControlsNavigation_FuseControlsCircle_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsBackButton_Text_Property :623
// {
static void FuseControlsPrimitives_FuseControlsBackButton_Text_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::BackButton_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsBackButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsBackButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsBackButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsBackButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :628
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :627
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :629
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :630
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsButton_Text_Property :632
// {
static void FuseControlsPrimitives_FuseControlsButton_Text_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsButton_Text_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) :635
void FuseControlsPrimitives_FuseControlsButton_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :637
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) :635
void FuseControlsPrimitives_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsButton_Text_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :636
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :638
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :639
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) [instance] :635
void FuseControlsPrimitives_FuseControlsButton_Text_Property::ctor_2(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) [static] :635
FuseControlsPrimitives_FuseControlsButton_Text_Property* FuseControlsPrimitives_FuseControlsButton_Text_Property::New1(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsButton_Text_Property* obj1 = (FuseControlsPrimitives_FuseControlsButton_Text_Property*)uNew(FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Fill_Property :677
// {
static void FuseControlsPrimitives_FuseControlsCircle_Fill_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsCircle_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsCircle_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsCircle_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :682
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :681
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :683
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :684
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Opacity_Property :668
// {
static void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsCircle_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :673
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :672
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :674
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :675
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsRectangle_Fill_Property :713
// {
static void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsRectangle_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :718
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :717
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :719
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :720
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsSwitch_Value_Property :641
// {
static void FuseControlsPrimitives_FuseControlsSwitch_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Switch_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsSwitch_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsSwitch_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsSwitch_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsSwitch_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property(Fuse.Controls.Switch obj, Uno.UX.Selector name) :644
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, ::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :646
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property New(Fuse.Controls.Switch obj, Uno.UX.Selector name) :644
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__New1_fn(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsSwitch_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsSwitch_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :645
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :647
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :648
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property(Fuse.Controls.Switch obj, Uno.UX.Selector name) [instance] :644
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property::ctor_2(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property New(Fuse.Controls.Switch obj, Uno.UX.Selector name) [static] :644
FuseControlsPrimitives_FuseControlsSwitch_Value_Property* FuseControlsPrimitives_FuseControlsSwitch_Value_Property::New1(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsSwitch_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsSwitch_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsSwitch_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_Opacity_Property :659
// {
static void FuseControlsPrimitives_FuseControlsText_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :662
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :664
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :662
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :663
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :665
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :666
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :662
void FuseControlsPrimitives_FuseControlsText_Opacity_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :662
FuseControlsPrimitives_FuseControlsText_Opacity_Property* FuseControlsPrimitives_FuseControlsText_Opacity_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_Opacity_Property*)uNew(FuseControlsPrimitives_FuseControlsText_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_TextColor_Property :650
// {
static void FuseControlsPrimitives_FuseControlsText_TextColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :653
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :655
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :653
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :654
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :656
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :657
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :653
void FuseControlsPrimitives_FuseControlsText_TextColor_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :653
FuseControlsPrimitives_FuseControlsText_TextColor_Property* FuseControlsPrimitives_FuseControlsText_TextColor_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsText_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_Value_Property :605
// {
static void FuseControlsPrimitives_FuseControlsText_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :608
void FuseControlsPrimitives_FuseControlsText_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :610
void FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :608
void FuseControlsPrimitives_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :609
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :611
void FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :612
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :608
void FuseControlsPrimitives_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :608
FuseControlsPrimitives_FuseControlsText_Value_Property* FuseControlsPrimitives_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :731
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :734
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :736
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :734
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :735
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :737
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :738
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :734
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :734
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :686
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :691
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :690
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :692
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Brush(v);
}

// public override sealed bool get_SupportsOriginSetter() :693
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :722
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :725
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :727
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :725
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :726
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :728
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :729
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :725
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :725
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :695
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :698
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :700
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :698
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :699
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :701
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Distance(v_);
}

// public override sealed bool get_SupportsOriginSetter() :702
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :698
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :698
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :704
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :707
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :709
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :707
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :708
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :710
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Size(v_);
}

// public override sealed bool get_SupportsOriginSetter() :711
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :707
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :707
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :614
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(1,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_2_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :619
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :618
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :620
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :621
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_2(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :617
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property :141
// {
static void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :146
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :145
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :147
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public override sealed bool get_SupportsOriginSetter() :148
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [instance] :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [static] :144
FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property*)uNew(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property :132
// {
static void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :137
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :136
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :138
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :139
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [instance] :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [static] :135
FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property :114
// {
static void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView__DefaultScroller_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :119
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property New(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :118
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :120
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :121
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) [instance] :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property New(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) [static] :117
FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property :123
// {
static void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView__DefaultTrigger_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :128
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property New(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :127
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :129
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :130
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) [instance] :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::ctor_2(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property New(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) [static] :126
FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::New1(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.38.6/.uno/package
// ---------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[21/*"uniform flo...*/], ::STRINGS[22/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement6ea65baa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[21] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[22] = uString::Const("uniform sampler2D q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[23] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[26] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = (a * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(g, vec2(f.x, f.y)).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElement6ea65baa_, uFieldFlagsStatic);
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement6ea65baa_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/.uno/package
// ----------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform vec...*/], ::STRINGS[29/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/]));
    FuseCore_bundle::RobotoRegularf890a122_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[30/*"FuseCore"*/]))->GetFile(::STRINGS[31/*"roboto-regu...*/]);
}

static void FuseCore_bundle_build(uType* type)
{
    ::STRINGS[28] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[29] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[30] = uString::Const("FuseCore");
    ::STRINGS[31] = uString::Const("roboto-regular-de906226.ttf");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::RobotoRegularf890a122_, uFieldFlagsStatic);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_build_ = FuseCore_bundle_build;
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpers4c5c39ae_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseCore_bundle::RobotoRegularf890a122_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/0.38.6/.uno/package
// --------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[32/*"attribute v...*/], ::STRINGS[33/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[3/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[32] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[33] = uString::Const("uniform float d[b], e;\n"
        "uniform vec4 f[c];\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 h(vec2 i){\n"
        "    float j = d[0] + (e * i.x);\n"
        "    vec4 k = f[0];\n"
        "\n"
        "    for (int l = 0; l < (b - 1); l++)\n"
        "    {\n"
        "        float m = d[l];\n"
        "        float n = d[l + 1];\n"
        "        vec4 o = f[l + 1];\n"
        "        k = mix(k, o, smoothstep(m, n, j));\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h(g);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.38.6/.uno/package
// -------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform vec...*/], ::STRINGS[35/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[38/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[39/*"uniform vec...*/], ::STRINGS[40/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[41/*"s"*/], ::STRINGS[42/*"t"*/], ::STRINGS[43/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle09647386_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[45/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[41/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle09647387_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform vec...*/], ::STRINGS[47/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[36/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle09647389_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[41/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform vec...*/], ::STRINGS[49/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[38/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform vec...*/], ::STRINGS[51/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[37/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform vec...*/], ::STRINGS[53/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[55/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[39/*"uniform vec...*/], ::STRINGS[56/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[41/*"s"*/], ::STRINGS[42/*"t"*/], ::STRINGS[43/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform vec...*/], ::STRINGS[58/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[60/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[62/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[42/*"t"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[63/*"uniform vec...*/], ::STRINGS[64/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[38/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform vec...*/], ::STRINGS[66/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[37/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305ca_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[63/*"uniform vec...*/], ::STRINGS[67/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[38/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circled0e74ba4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[68/*"uniform vec...*/], ::STRINGS[69/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform vec...*/], ::STRINGS[70/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0edda_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0eddb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[73/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[76/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[77/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[78/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform flo...*/], ::STRINGS[80/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[42/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform flo...*/], ::STRINGS[81/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[42/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform flo...*/], ::STRINGS[83/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform flo...*/], ::STRINGS[84/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform flo...*/], ::STRINGS[86/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[87/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform flo...*/], ::STRINGS[88/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[87/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform flo...*/], ::STRINGS[90/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[91/*"uniform flo...*/], ::STRINGS[92/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[91/*"uniform flo...*/], ::STRINGS[93/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform flo...*/], ::STRINGS[94/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[96/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[41/*"s"*/], ::STRINGS[97/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[98/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[37/*"r"*/], ::STRINGS[41/*"s"*/], ::STRINGS[97/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[101/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform flo...*/], ::STRINGS[103/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[87/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform flo...*/], ::STRINGS[104/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[87/*"v"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[34] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "vec4 v(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "float w(vec2 x, vec2 y, float z){\n"
        "    vec2 A = (x * e) - f;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = a * b;\n"
        "    vec2 y = x + c;\n"
        "    s = w(y / e, n, o);\n"
        "    t = x;\n"
        "    gl_Position = v(y, d);\n"
        "}\n"
        "");
    ::STRINGS[35] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[23] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[36] = uString::Const("p");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[37] = uString::Const("r");
    ::STRINGS[38] = uString::Const("u");
    ::STRINGS[39] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "vec4 x(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * c;\n"
        "    vec2 z = y + d;\n"
        "    u = ((((f * (z / f)) - g) / h) * i) + j;\n"
        "    v = y;\n"
        "    gl_Position = x(z, e);\n"
        "}\n"
        "");
    ::STRINGS[40] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((min(dot(v, r), min(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[41] = uString::Const("s");
    ::STRINGS[42] = uString::Const("t");
    ::STRINGS[43] = uString::Const("w");
    ::STRINGS[44] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "vec4 t(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "float u(vec2 v, vec2 w, float x){\n"
        "    vec2 y = (v * e) - f;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * b;\n"
        "    vec2 w = v + c;\n"
        "    q = u(w / e, l, m);\n"
        "    r = v;\n"
        "    gl_Position = t(w, d);\n"
        "}\n"
        "");
    ::STRINGS[45] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[46] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 q(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "float r(vec2 s, vec2 t, float u){\n"
        "    vec2 v = (s * e) - f;\n"
        "    float w = dot(v, t) / u;\n"
        "    return (w - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = a * b;\n"
        "    vec2 t = s + c;\n"
        "    n = r(t / e, l, m);\n"
        "    o = s;\n"
        "    gl_Position = q(t, d);\n"
        "}\n"
        "");
    ::STRINGS[47] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = texture2D(p, vec2(n, 0.5));\n"
        "    vec4 t = vec4(s.xyz, s.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((t.xyz * t.w) * k, t.w * k);\n"
        "}\n"
        "");
    ::STRINGS[48] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[49] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[50] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "vec4 s(vec2 u, mat4 v){\n"
        "    return vec4(((u.x * v[0].x) + (u.y * v[1].x)) + v[3].x, ((u.x * v[0].y) + (u.y * v[1].y)) + v[3].y, ((u.x * v[0].z) + (u.y * v[1].z)) + v[3].z, ((u.x * v[0].w) + (u.y * v[1].w)) + v[3].w);\n"
        "}\n"
        "\n"
        "float t(vec2 u, vec2 v, float w){\n"
        "    vec2 x = (u * e) - f;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    p = t(v / e, n, o);\n"
        "    q = u;\n"
        "    gl_Position = s(v, d);\n"
        "}\n"
        "");
    ::STRINGS[51] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = texture2D(r, vec2(p, 0.5));\n"
        "    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((v.xyz * v.w) * m, v.w * m);\n"
        "}\n"
        "");
    ::STRINGS[52] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    l = n;\n"
        "    gl_Position = m(n + c, d);\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n"
        "}\n"
        "");
    ::STRINGS[54] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    p = r;\n"
        "    gl_Position = q(r + c, d);\n"
        "}\n"
        "");
    ::STRINGS[55] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[56] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((max(dot(v, r), max(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[57] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = a * b;\n"
        "    o = q;\n"
        "    gl_Position = p(q + c, d);\n"
        "}\n"
        "");
    ::STRINGS[58] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[59] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    m = o;\n"
        "    gl_Position = n(o + c, d);\n"
        "}\n"
        "");
    ::STRINGS[60] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * l, o.w * l);\n"
        "}\n"
        "");
    ::STRINGS[61] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * c;\n"
        "    vec2 w = v + d;\n"
        "    r = ((((f * (w / f)) - g) / h) * i) + j;\n"
        "    s = v;\n"
        "    gl_Position = u(w, e);\n"
        "}\n"
        "");
    ::STRINGS[62] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = (b ? vec4(float(0)) : texture2D(t, r)) * k;\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((abs((length(s) - l) - m) - n) * o) * p), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * q, w.w * q);\n"
        "}\n"
        "");
    ::STRINGS[63] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "vec4 v(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * c;\n"
        "    vec2 x = w + d;\n"
        "    s = ((((f * (x / f)) - g) / h) * i) + j;\n"
        "    t = w;\n"
        "    gl_Position = v(x, e);\n"
        "}\n"
        "");
    ::STRINGS[64] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[65] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 s(vec2 t, mat4 u){\n"
        "    return vec4(((t.x * u[0].x) + (t.y * u[1].x)) + u[3].x, ((t.x * u[0].y) + (t.y * u[1].y)) + u[3].y, ((t.x * u[0].z) + (t.y * u[1].z)) + u[3].z, ((t.x * u[0].w) + (t.y * u[1].w)) + u[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * c;\n"
        "    vec2 u = t + d;\n"
        "    p = ((((f * (u / f)) - g) / h) * i) + j;\n"
        "    q = t;\n"
        "    gl_Position = s(u, e);\n"
        "}\n"
        "");
    ::STRINGS[66] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = (b ? vec4(float(0)) : texture2D(r, p)) * k;\n"
        "    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((length(q) - l) * m) * n), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o);\n"
        "}\n"
        "");
    ::STRINGS[67] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[68] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 l(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    k = m;\n"
        "    gl_Position = l(m + c, d);\n"
        "}\n"
        "");
    ::STRINGS[69] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * j, m.w * j);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    n = p;\n"
        "    gl_Position = o(p + c, d);\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "vec4 k(vec2 l, mat4 m){\n"
        "    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    j = l;\n"
        "    gl_Position = k(l + c, d);\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 l = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((l.xyz * l.w) * 1.0, l.w);\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[79] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, j, n;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "float v(vec2 w, vec2 x, float y){\n"
        "    vec2 z = (w * h) - i;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = v(w / h, n, o);\n"
        "    r = w;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = u(w, g);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(t, vec2(q, 0.5));\n"
        "    vec4 x = vec4(w.xyz, w.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(t, vec2(q, 0.5));\n"
        "    float x = clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1));\n"
        "    vec4 y = vec4(w.xyz, w.w * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = p;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = o(p, g);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float p = clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1));\n"
        "    vec4 q = vec4(k, j * (((p * p) * p) * ((p * ((p * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "vec4 w(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    r = f[int(c)];\n"
        "    s = ((((i * (x / i)) - j) / k) * l) + m;\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = w(x, h);\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n"
        "    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1)));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * q, y.w * q);\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("v");
    ::STRINGS[88] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n"
        "    float y = clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1));\n"
        "    vec4 z = vec4(x.xyz, x.w * (((y * y) * y) * ((y * ((y * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = r;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = q(r, g);\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = q;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = p(q, g);\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float q = clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1));\n"
        "    vec4 r = vec4(k, j * (((q * q) * q) * ((q * ((q * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float r = clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1));\n"
        "    vec4 s = vec4(m, l * (((r * r) * r) * ((r * ((r * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * 1.0, s.w);\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "vec4 y(vec2 z, mat4 A){\n"
        "    return vec4(((z.x * A[0].x) + (z.y * A[1].x)) + A[3].x, ((z.x * A[0].y) + (z.y * A[1].y)) + A[3].y, ((z.x * A[0].z) + (z.y * A[1].z)) + A[3].z, ((z.x * A[0].w) + (z.y * A[1].w)) + A[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    t = f[int(c)];\n"
        "    u = ((((i * (z / i)) - j) / k) * l) + m;\n"
        "    v = z;\n"
        "    w = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = y(z, h);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q, r, s;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n"
        "    float A = clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1));\n"
        "    vec4 B = vec4(z.xyz, z.w * (((A * A) * A) * ((A * ((A * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((B.xyz * B.w) * s, B.w * s);\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("x");
    ::STRINGS[98] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q, r, s;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n"
        "    vec4 A = vec4(z.xyz, z.w * clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1)));\n"
        "    gl_FragColor = vec4((A.xyz * A.w) * s, A.w * s);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 r(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = s;\n"
        "    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = r(s, g);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float s = clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1));\n"
        "    vec4 t = vec4(m, l * (((s * s) * s) * ((s * ((s * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((t.xyz * t.w) * n, t.w * n);\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, j, p;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "vec4 w(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "float x(vec2 y, vec2 z, float A){\n"
        "    vec2 B = (y * h) - i;\n"
        "    float C = dot(B, z) / A;\n"
        "    return (C - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = x(y / h, p, q);\n"
        "    t = y;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = w(y, g);\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = texture2D(v, vec2(s, 0.5));\n"
        "    vec4 z = vec4(y.xyz, y.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = texture2D(v, vec2(s, 0.5));\n"
        "    float z = clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1));\n"
        "    vec4 A = vec4(y.xyz, y.w * (((z * z) * z) * ((z * ((z * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((A.xyz * A.w) * o, A.w * o);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle01247f96_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle038d0b56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647386_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647387_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647389_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4a971b16_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4c78c62c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle60e596bb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle91c7af62_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlebe3e2220_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305ca_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled0e74ba4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled802ead9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0edda_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0eddb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleef203ac7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic);
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 40;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle01247f96_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle038d0b56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647386_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647387_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647389_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7ff_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4a971b16_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4c78c62c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60e596bb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7aaa5f74_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91c7af62_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe3e2220_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305ca_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0e74ba4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled802ead9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0edda_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0eddb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleef203ac7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.38.6/.uno/package
// --------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform mat...*/], ::STRINGS[106/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform mat...*/], ::STRINGS[108/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"attribute v...*/], ::STRINGS[110/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"attribute v...*/], ::STRINGS[112/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[113/*"uniform vec...*/], ::STRINGS[114/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[42/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform vec...*/], ::STRINGS[116/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[23/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[117/*"uniform mat...*/], ::STRINGS[118/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[25/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform mat...*/], ::STRINGS[120/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform mat...*/], ::STRINGS[121/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform mat...*/], ::STRINGS[122/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[105] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[107] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[114] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[42] = uString::Const("t");
    ::STRINGS[115] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[23] = uString::Const("m");
    ::STRINGS[117] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[119] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    f = j;\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[120] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[123/*"uniform vec...*/], ::STRINGS[124/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform mat...*/], ::STRINGS[126/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform flo...*/], ::STRINGS[128/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[37/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[123] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[124] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[125] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[127] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[23] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[36] = uString::Const("p");
    ::STRINGS[37] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper230c69b7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseEntities_bundle :0
// {
// static FuseEntities_bundle() :0
static void FuseEntities_bundle__cctor__fn(uType* __type)
{
    FuseEntities_bundle::Blurc28c2aab_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform vec...*/], ::STRINGS[130/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"h"*/]));
    FuseEntities_bundle::FindEdges06a48cc8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[131/*"uniform vec...*/], ::STRINGS[132/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[14/*"n"*/]));
    FuseEntities_bundle::MeshBatchingEngine64346c9e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform mat...*/], ::STRINGS[134/*"uniform vec...*/], 3, 5, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[43/*"w"*/], ::STRINGS[97/*"x"*/], ::STRINGS[135/*"y"*/]));
    FuseEntities_bundle::MeshBatchingEngine7f2c79e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"uniform mat...*/], ::STRINGS[137/*"uniform vec...*/], 3, 4, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[23/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[36/*"p"*/], ::STRINGS[87/*"v"*/], ::STRINGS[43/*"w"*/], ::STRINGS[97/*"x"*/]));
    FuseEntities_bundle::MeshRenderer9e110bf4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform mat...*/], ::STRINGS[139/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseEntities_bundle::MeshRendererf90be5f8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform mat...*/], ::STRINGS[141/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/]));
    FuseEntities_bundle::RenderToTexture8b784dd0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[142/*"attribute v...*/], ::STRINGS[112/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/]));
}

static void FuseEntities_bundle_build(uType* type)
{
    ::STRINGS[129] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 j = (i.xy * 0.5) + 0.5;\n"
        "    d = j + b;\n"
        "    e = j - b;\n"
        "    f = j + c;\n"
        "    g = j - c;\n"
        "    gl_Position = vec4(i, float(1));\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[131] = uString::Const("uniform vec2 b, c, d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2(a.x, 1.0 - a.y);\n"
        "    vec2 p = vec2(o.x, 1.0 - o.y);\n"
        "    i = p + b;\n"
        "    j = p + c;\n"
        "    k = p + d;\n"
        "    l = p + e;\n"
        "    m = p;\n"
        "    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n"
        "}\n"
        "");
    ::STRINGS[132] = uString::Const("uniform float f;\n"
        "uniform vec4 g, h;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 o = texture2D(n, m).xyz;\n"
        "    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n"
        "    gl_FragColor = (g * (1.0 - p)) + (h * p);\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[133] = uString::Const("uniform mat4 i[16], q, m[16];\n"
        "uniform vec2 j, k;\n"
        "\n"
        "attribute vec3 a, e;\n"
        "attribute float b;\n"
        "attribute vec2 c;\n"
        "attribute vec4 d;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "mat3 z(mat3 A){\n"
        "    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n"
        "    r = A * d.xyz;\n"
        "    s = A * (cross(d.xyz, e) * d.w);\n"
        "    t = A * e;\n"
        "    u = (c * j) + k;\n"
        "    v = (i[int(b)] * vec4(a, 1.)).xyz;\n"
        "    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[134] = uString::Const("uniform vec3 l, n, o;\n"
        "uniform float p;\n"
        "\n"
        "uniform sampler2D w, x, y;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n"
        "    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[23] = uString::Const("m");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[36] = uString::Const("p");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[43] = uString::Const("w");
    ::STRINGS[97] = uString::Const("x");
    ::STRINGS[135] = uString::Const("y");
    ::STRINGS[136] = uString::Const("uniform mat4 o, l, p;\n"
        "uniform vec2 h, i;\n"
        "\n"
        "attribute vec3 a, d;\n"
        "attribute vec2 b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n"
        "    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n"
        "    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n"
        "    t = (b * h) + i;\n"
        "    u = (l * vec4(a, 1.)).xyz;\n"
        "    gl_Position = o * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[137] = uString::Const("uniform vec3 j, k, m;\n"
        "uniform float n;\n"
        "\n"
        "uniform sampler2D v, w, x;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n"
        "    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("v");
    ::STRINGS[138] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = c * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform vec4 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b;\n"
        "}\n"
        "");
    ::STRINGS[140] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[141] = uString::Const("void main()\n"
        "{\n"
        "    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[142] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::Blurc28c2aab_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::FindEdges06a48cc8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine64346c9e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine7f2c79e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRenderer9e110bf4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRendererf90be5f8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::RenderToTexture8b784dd0_, uFieldFlagsStatic);
}

uClassType* FuseEntities_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEntities_bundle", options);
    type->fp_build_ = FuseEntities_bundle_build;
    type->fp_cctor_ = FuseEntities_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::Blurc28c2aab_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::FindEdges06a48cc8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine64346c9e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine7f2c79e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRenderer9e110bf4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRendererf90be5f8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::RenderToTexture8b784dd0_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::es6promisef1fde771_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[143/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[144/*"es6-promise...*/]);
    FuseReactive_bundle::Observable8a79544d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[143/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[145/*"observable-...*/]);
}

static void FuseReactive_bundle_build(uType* type)
{
    ::STRINGS[143] = uString::Const("Fuse.Reactive");
    ::STRINGS[144] = uString::Const("es6-promise-c078e7a5.js");
    ::STRINGS[145] = uString::Const("observable-66183501.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promisef1fde771_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observable8a79544d_, uFieldFlagsStatic);
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_build_ = FuseReactive_bundle_build;
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::es6promisef1fde771_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Observable8a79544d_;
// }

} // ::g
