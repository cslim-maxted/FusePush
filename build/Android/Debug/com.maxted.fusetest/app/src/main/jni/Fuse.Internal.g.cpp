// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.DoubleBlender.h>
#include <Fuse.Internal.Float2Blender.h>
#include <Fuse.Internal.Float3Blender.h>
#include <Fuse.Internal.Float4Blender.h>
#include <Fuse.Internal.FloatBlender.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Size2Blender.h>
#include <Fuse.Internal.SizeBlender.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Internal{

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal abstract class Blender<T> :64
// {
static void Blender_build(uType* type)
{
}

Blender_type* Blender_typeof()
{
    static uSStrong<Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Blender);
    options.TypeSize = sizeof(Blender_type);
    type = (Blender_type*)uClassType::New("Fuse.Internal.Blender`1", options);
    type->fp_build_ = Blender_build;
    return type;
}

// protected generated Blender() :64
void Blender__ctor__fn(Blender* __this)
{
    __this->ctor_();
}

// public double Distance(T a, T b) :81
void Blender__Distance_fn(Blender* __this, void* a, void* b, double* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret1;
    return *__retval = (__this->Length_ex((__this->Sub_ex(a, b, &ret2), ret2), &ret1), ret1), void();
}

// public T ScalarMult(T v, double s) :87
void Blender__ScalarMult_fn(Blender* __this, void* v, double* s, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double s_ = *s;
    return __retval.Store((__this->Weight_ex(v, uCRef(s_), &ret3), ret3)), void();
}

// public T UnitWeight(T v, double w) :75
void Blender__UnitWeight_fn(Blender* __this, void* v, double* w, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->T(0),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double w_ = *w;
    double l;
    unit = (__this->ToUnit_ex(v, &l, &ret4), ret4);
    return __retval.Store((__this->Weight_ex(unit, uCRef(w_), &ret5), ret5)), void();
}

// protected generated Blender() [instance] :64
void Blender::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class BlenderMap :11
// {
// static BlenderMap() :11
static void BlenderMap__cctor__fn(uType* __type)
{
    BlenderMap::_blenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
    BlenderMap::_scalarBlenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void BlenderMap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported blender type: ");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof());
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[3] = ::g::Fuse::Internal::ScalarBlender_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->U(0)),
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->U(0)));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof()), (uintptr_t)&::g::Fuse::Internal::BlenderMap::_blenders_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof()), (uintptr_t)&::g::Fuse::Internal::BlenderMap::_scalarBlenders_, uFieldFlagsStatic);
}

uType* BlenderMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(BlenderMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.BlenderMap", options);
    type->fp_build_ = BlenderMap_build;
    type->fp_cctor_ = BlenderMap__cctor__fn;
    return type;
}

// public static Fuse.Internal.Blender<T> Get<T>() :15
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval)
{
    *__retval = BlenderMap::Get(__type);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() :45
void BlenderMap__GetScalar_fn(uType* __type, ::g::Fuse::Internal::ScalarBlender** __retval)
{
    *__retval = BlenderMap::GetScalar(__type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_blenders_;
uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_scalarBlenders_;

// public static Fuse.Internal.Blender<T> Get<T>() [static] :15
::g::Fuse::Internal::Blender* BlenderMap::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.Blender<T>*/),
    };
    BlenderMap_typeof()->Init();
    bool ret2;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_blenders()), __type->U(0), (void**)(&blender), &ret2), ret2))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float2_typeof()))
            blender = ::g::Fuse::Internal::Float2Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float3_typeof()))
            blender = ::g::Fuse::Internal::Float3Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float4_typeof()))
            blender = ::g::Fuse::Internal::Float4Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size_typeof()))
            blender = ::g::Fuse::Internal::SizeBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size2_typeof()))
            blender = ::g::Fuse::Internal::Size2Blender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_blenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::Blender*>(blender, __types[0]);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() [static] :45
::g::Fuse::Internal::ScalarBlender* BlenderMap::GetScalar(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.ScalarBlender<T>*/),
    };
    BlenderMap_typeof()->Init();
    bool ret3;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), (void**)(&blender), &ret3), ret3))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::ScalarBlender*>(blender, __types[0]);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class DoubleBlender :149
// {
static void DoubleBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Double_typeof()));
}

::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(DoubleBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.DoubleBlender", options);
    type->fp_build_ = DoubleBlender_build;
    type->fp_ctor_ = (void*)DoubleBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))DoubleBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))DoubleBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))DoubleBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))DoubleBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_Zero_fn;
    return type;
}

// public generated DoubleBlender() :149
void DoubleBlender__ctor_2_fn(DoubleBlender* __this)
{
    __this->ctor_2();
}

// public override sealed double Add(double a, double b) :152
void DoubleBlender__Add_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed double FromDouble(double a) :164
void DoubleBlender__FromDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double Length(double a) :162
void DoubleBlender__Length_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = ::g::Uno::Math::Abs(a_), void();
}

// public override sealed double Lerp(double a, double b, double d) :154
void DoubleBlender__Lerp_fn(DoubleBlender* __this, double* a, double* b, double* d, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * d_), void();
}

// public generated DoubleBlender New() :149
void DoubleBlender__New1_fn(DoubleBlender** __retval)
{
    *__retval = DoubleBlender::New1();
}

// public override sealed double Sub(double a, double b) :153
void DoubleBlender__Sub_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(double a) :163
void DoubleBlender__ToDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double ToUnit(double a, double& length) :157
void DoubleBlender__ToUnit_fn(DoubleBlender* __this, double* a, double* length, double* __retval)
{
    double a_ = *a;
    *length = ::g::Uno::Math::Abs(a_);
    return *__retval = (double)((a_ < 0.0) ? -1 : 1), void();
}

// public override sealed double Weight(double v, double w) :151
void DoubleBlender__Weight_fn(DoubleBlender* __this, double* v, double* w, double* __retval)
{
    double v_ = *v;
    double w_ = *w;
    return *__retval = v_ * w_, void();
}

// public override sealed double get_Zero() :155
void DoubleBlender__get_Zero_fn(DoubleBlender* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// public generated DoubleBlender() [instance] :149
void DoubleBlender::ctor_2()
{
    ctor_1();
}

// public generated DoubleBlender New() [static] :149
DoubleBlender* DoubleBlender::New1()
{
    DoubleBlender* obj1 = (DoubleBlender*)uNew(DoubleBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Float2Blender :167
// {
static void Float2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float2_typeof()));
}

::g::Fuse::Internal::Blender_type* Float2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float2Blender", options);
    type->fp_build_ = Float2Blender_build;
    type->fp_ctor_ = (void*)Float2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float2Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_Zero_fn;
    return type;
}

// public generated Float2Blender() :167
void Float2Blender__ctor_1_fn(Float2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float2 Add(float2 a, float2 b) :170
void Float2Blender__Add_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float2 a) :180
void Float2Blender__Length_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(a_), void();
}

// public override sealed float2 Lerp(float2 a, float2 b, double d) :172
void Float2Blender__Lerp_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, double* d, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp2(a_, b_, (float)d_), void();
}

// public generated Float2Blender New() :167
void Float2Blender__New1_fn(Float2Blender** __retval)
{
    *__retval = Float2Blender::New1();
}

// public override sealed float2 Sub(float2 a, float2 b) :171
void Float2Blender__Sub_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Subtraction2(a_, b_), void();
}

// public override sealed float2 ToUnit(float2 a, double& length) :175
void Float2Blender__ToUnit_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* length, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(a_);
    return *__retval = ::g::Uno::Vector::Normalize(a_), void();
}

// public override sealed float2 Weight(float2 v, double w) :169
void Float2Blender__Weight_fn(Float2Blender* __this, ::g::Uno::Float2* v, double* w, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float2__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float2 get_Zero() :173
void Float2Blender__get_Zero_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated Float2Blender() [instance] :167
void Float2Blender::ctor_1()
{
    ctor_();
}

// public generated Float2Blender New() [static] :167
Float2Blender* Float2Blender::New1()
{
    Float2Blender* obj1 = (Float2Blender*)uNew(Float2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Float3Blender :183
// {
static void Float3Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float3_typeof()));
}

::g::Fuse::Internal::Blender_type* Float3Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float3Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float3Blender", options);
    type->fp_build_ = Float3Blender_build;
    type->fp_ctor_ = (void*)Float3Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float3Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float3Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_Zero_fn;
    return type;
}

// public generated Float3Blender() :183
void Float3Blender__ctor_1_fn(Float3Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float3 Add(float3 a, float3 b) :186
void Float3Blender__Add_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float3 a) :196
void Float3Blender__Length_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length1(a_), void();
}

// public override sealed float3 Lerp(float3 a, float3 b, double d) :188
void Float3Blender__Lerp_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, double* d, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp4(a_, b_, (float)d_), void();
}

// public generated Float3Blender New() :183
void Float3Blender__New1_fn(Float3Blender** __retval)
{
    *__retval = Float3Blender::New1();
}

// public override sealed float3 Sub(float3 a, float3 b) :187
void Float3Blender__Sub_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Subtraction2(a_, b_), void();
}

// public override sealed float3 ToUnit(float3 a, double& length) :191
void Float3Blender__ToUnit_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* length, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    *length = (double)::g::Uno::Vector::Length1(a_);
    return *__retval = ::g::Uno::Vector::Normalize1(a_), void();
}

// public override sealed float3 Weight(float3 v, double w) :185
void Float3Blender__Weight_fn(Float3Blender* __this, ::g::Uno::Float3* v, double* w, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float3__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float3 get_Zero() :189
void Float3Blender__get_Zero_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated Float3Blender() [instance] :183
void Float3Blender::ctor_1()
{
    ctor_();
}

// public generated Float3Blender New() [static] :183
Float3Blender* Float3Blender::New1()
{
    Float3Blender* obj1 = (Float3Blender*)uNew(Float3Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Float4Blender :199
// {
static void Float4Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float4_typeof()));
}

::g::Fuse::Internal::Blender_type* Float4Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float4Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float4Blender", options);
    type->fp_build_ = Float4Blender_build;
    type->fp_ctor_ = (void*)Float4Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float4Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float4Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_Zero_fn;
    return type;
}

// public generated Float4Blender() :199
void Float4Blender__ctor_1_fn(Float4Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float4 Add(float4 a, float4 b) :202
void Float4Blender__Add_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float4 a) :212
void Float4Blender__Length_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length2(a_), void();
}

// public override sealed float4 Lerp(float4 a, float4 b, double d) :204
void Float4Blender__Lerp_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, double* d, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp6(a_, b_, (float)d_), void();
}

// public generated Float4Blender New() :199
void Float4Blender__New1_fn(Float4Blender** __retval)
{
    *__retval = Float4Blender::New1();
}

// public override sealed float4 Sub(float4 a, float4 b) :203
void Float4Blender__Sub_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Subtraction2(a_, b_), void();
}

// public override sealed float4 ToUnit(float4 a, double& length) :207
void Float4Blender__ToUnit_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* length, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    *length = (double)::g::Uno::Vector::Length2(a_);
    return *__retval = ::g::Uno::Vector::Normalize2(a_), void();
}

// public override sealed float4 Weight(float4 v, double w) :201
void Float4Blender__Weight_fn(Float4Blender* __this, ::g::Uno::Float4* v, double* w, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float4__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float4 get_Zero() :205
void Float4Blender__get_Zero_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = ::g::Uno::Float4__New1(0.0f), void();
}

// public generated Float4Blender() [instance] :199
void Float4Blender::ctor_1()
{
    ctor_();
}

// public generated Float4Blender New() [static] :199
Float4Blender* Float4Blender::New1()
{
    Float4Blender* obj1 = (Float4Blender*)uNew(Float4Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class FloatBlender :131
// {
static void FloatBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Float_typeof()));
}

::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(FloatBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.FloatBlender", options);
    type->fp_build_ = FloatBlender_build;
    type->fp_ctor_ = (void*)FloatBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))FloatBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))FloatBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))FloatBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))FloatBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_Zero_fn;
    return type;
}

// public generated FloatBlender() :131
void FloatBlender__ctor_2_fn(FloatBlender* __this)
{
    __this->ctor_2();
}

// public override sealed float Add(float a, float b) :134
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed float FromDouble(double a) :146
void FloatBlender__FromDouble_fn(FloatBlender* __this, double* a, float* __retval)
{
    double a_ = *a;
    return *__retval = (float)a_, void();
}

// public override sealed double Length(float a) :144
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_), void();
}

// public override sealed float Lerp(float a, float b, double d) :136
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * (float)d_), void();
}

// public generated FloatBlender New() :131
void FloatBlender__New1_fn(FloatBlender** __retval)
{
    *__retval = FloatBlender::New1();
}

// public override sealed float Sub(float a, float b) :135
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(float a) :145
void FloatBlender__ToDouble_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)a_, void();
}

// public override sealed float ToUnit(float a, double& length) :139
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval)
{
    float a_ = *a;
    *length = (double)::g::Uno::Math::Abs1(a_);
    return *__retval = (float)((a_ < 0.0f) ? -1 : 1), void();
}

// public override sealed float Weight(float v, double w) :133
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval)
{
    float v_ = *v;
    double w_ = *w;
    return *__retval = v_ * (float)w_, void();
}

// public override sealed float get_Zero() :137
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// public generated FloatBlender() [instance] :131
void FloatBlender::ctor_2()
{
    ctor_1();
}

// public generated FloatBlender New() [static] :131
FloatBlender* FloatBlender::New1()
{
    FloatBlender* obj1 = (FloatBlender*)uNew(FloatBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal static class FrustumMatrix :407
// {
static void FrustumMatrix_build(uType* type)
{
}

uClassType* FrustumMatrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FrustumMatrix", options);
    type->fp_build_ = FrustumMatrix_build;
    return type;
}

// public static float4x4 OrthoLH(float width, float height, float near, float far) :409
void FrustumMatrix__OrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLH(*width, *height, *near, *far);
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) :437
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLHInverse(*width, *height, *near, *far);
}

// public static float4x4 OrthoRH(float width, float height, float zNear, float zFar) :430
void FrustumMatrix__OrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRH(*width, *height, *zNear, *zFar);
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) :459
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRHInverse(*width, *height, *zNear, *zFar);
}

// public static float4x4 OrthoLH(float width, float height, float near, float far) [static] :409
::g::Uno::Float4x4 FrustumMatrix::OrthoLH(float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    float left = -halfWidth;
    float right = halfWidth;
    float bottom = -halfHeight;
    float top = halfHeight;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (2.0f / (right - left));
    result.M22 = (2.0f / (top - bottom));
    result.M33 = (-2.0f / (far - near));
    result.M41 = (-(right + left) / (right - left));
    result.M42 = (-(top + bottom) / (top - bottom));
    result.M43 = ((far + near) / (far - near));
    return result;
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) [static] :437
::g::Uno::Float4x4 FrustumMatrix::OrthoLHInverse(float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = (-(far - near) / 2.0f);
    result.M43 = ((near + far) / 2.0f);
    return result;
}

// public static float4x4 OrthoRH(float width, float height, float zNear, float zFar) [static] :430
::g::Uno::Float4x4 FrustumMatrix::OrthoRH(float width, float height, float zNear, float zFar)
{
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLH(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    return result;
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) [static] :459
::g::Uno::Float4x4 FrustumMatrix::OrthoRHInverse(float width, float height, float zNear, float zFar)
{
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLHInverse(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    result.M43 = (result.M43 * -1.0f);
    return result;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal abstract interface IImageContainerOwner :14
// {
uInterfaceType* IImageContainerOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Internal.IImageContainerOwner", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class ImageContainer :21
// {
static void ImageContainer_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    ::TYPES[5] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[7] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[11] = ::g::Uno::EventHandler_typeof();
    ::TYPES[12] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isRooted), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isVisible), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _memoryPolicy), 0,
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _owner), uFieldFlagsWeak,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _sourcePinned), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, Sizing), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, SourceChanged1), 0,
        ::g::Fuse::Resources::ImageSourceErrorHandler_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, SourceError1), 0);
}

uType* ImageContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ImageContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.ImageContainer", options);
    type->fp_build_ = ImageContainer_build;
    return type;
}

// private void CheckPinning() :227
void ImageContainer__CheckPinning_fn(ImageContainer* __this)
{
    __this->CheckPinning();
}

// public texture2D GetTexture() :318
void ImageContainer__GetTexture_fn(ImageContainer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public bool get_IsRooted() :215
void ImageContainer__get_IsRooted_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public void set_IsRooted(bool value) :216
void ImageContainer__set_IsRooted_fn(ImageContainer* __this, bool* value)
{
    __this->IsRooted(*value);
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :84
void ImageContainer__get_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :85
void ImageContainer__set_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// private void OnSourceChanged(object s, object a) :181
void ImageContainer__OnSourceChanged_fn(ImageContainer* __this, uObject* s, uObject* a)
{
    __this->OnSourceChanged(s, a);
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) :191
void ImageContainer__OnSourceError_fn(ImageContainer* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnSourceError(s, args);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) :93
void ImageContainer__ReapplyOptions_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* src)
{
    __this->ReapplyOptions(src);
}

// private void ReleaseSource() :197
void ImageContainer__ReleaseSource_fn(ImageContainer* __this)
{
    __this->ReleaseSource();
}

// public Fuse.Resources.ImageSource get_Source() :163
void ImageContainer__get_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :164
void ImageContainer__set_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :180
void ImageContainer__add_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :180
void ImageContainer__remove_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :190
void ImageContainer__add_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceError(value);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :190
void ImageContainer__remove_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceError(value);
}

// private void CheckPinning() [instance] :227
void ImageContainer::CheckPinning()
{
    if (_source == NULL)
        return;

    bool on = _isRooted;

    if (uPtr(MemoryPolicy())->UnpinInvisible() && !_isVisible)
        on = false;

    if (on != _sourcePinned)
    {
        if (on)
            uPtr(_source)->Pin();
        else
            uPtr(_source)->Unpin();

        _sourcePinned = on;
    }
}

// public texture2D GetTexture() [instance] :318
::g::Uno::Graphics::Texture2D* ImageContainer::GetTexture()
{
    if (Source() != NULL)
        return uPtr(Source())->GetTexture();

    return NULL;
}

// public bool get_IsRooted() [instance] :215
bool ImageContainer::IsRooted()
{
    return _isRooted;
}

// public void set_IsRooted(bool value) [instance] :216
void ImageContainer::IsRooted(bool value)
{
    _isRooted = value;
    CheckPinning();
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :84
::g::Fuse::Resources::MemoryPolicy* ImageContainer::MemoryPolicy()
{
    return _memoryPolicy;
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :85
void ImageContainer::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    _memoryPolicy = value;
    ReapplyOptions(Source());
    CheckPinning();
}

// private void OnSourceChanged(object s, object a) [instance] :181
void ImageContainer::OnSourceChanged(uObject* s, uObject* a)
{
    CheckPinning();

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSourceChanged(uInterface(uPtr(_owner), ::TYPES[4/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance] :191
void ImageContainer::OnSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(SourceError1, NULL))
        uPtr(SourceError1)->Invoke(2, this, args);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) [instance] :93
void ImageContainer::ReapplyOptions(::g::Fuse::Resources::ImageSource* src)
{
    ::g::Fuse::Resources::ImageSource* ret17;
    ::g::Fuse::Resources::FileImageSource* f = uAs< ::g::Fuse::Resources::FileImageSource*>(src, ::TYPES[5/*Fuse.Resources.FileImageSource*/]);

    if ((f != NULL) && (MemoryPolicy() != NULL))
        uPtr(f)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::HttpImageSource* hf = uAs< ::g::Fuse::Resources::HttpImageSource*>(src, ::TYPES[6/*Fuse.Resources.HttpImageSource*/]);

    if ((hf != NULL) && (MemoryPolicy() != NULL))
        uPtr(hf)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::MultiDensityImageSource* mf = uAs< ::g::Fuse::Resources::MultiDensityImageSource*>(Source(), ::TYPES[7/*Fuse.Resources.MultiDensityImageSource*/]);

    if (mf != NULL)

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(mf)->Sources()), ::TYPES[8/*Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[9/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Resources::ImageSource* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret17), ret17);
            ReapplyOptions(s);
        }
}

// private void ReleaseSource() [instance] :197
void ImageContainer::ReleaseSource()
{
    if (_source == NULL)
        return;

    uPtr(_source)->remove_Changed(uDelegate::New(::TYPES[11/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
    uPtr(_source)->remove_Error(uDelegate::New(::TYPES[12/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));

    if (_sourcePinned)
    {
        uPtr(_source)->Unpin();
        _sourcePinned = false;
    }

    _source = NULL;
}

// public Fuse.Resources.ImageSource get_Source() [instance] :163
::g::Fuse::Resources::ImageSource* ImageContainer::Source()
{
    return _source;
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :164
void ImageContainer::Source(::g::Fuse::Resources::ImageSource* value)
{
    if (_source != value)
    {
        ReleaseSource();
        _source = value;

        if (_source != NULL)
        {
            uPtr(_source)->add_Changed(uDelegate::New(::TYPES[11/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
            uPtr(_source)->add_Error(uDelegate::New(::TYPES[12/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
        }

        OnSourceChanged(NULL, NULL);
    }
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :180
void ImageContainer::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[11/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :180
void ImageContainer::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[11/*Uno.EventHandler*/]);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :190
void ImageContainer::add_SourceError(uDelegate* value)
{
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceError1, value), ::TYPES[12/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :190
void ImageContainer::remove_SourceError(uDelegate* value)
{
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceError1, value), ::TYPES[12/*Fuse.Resources.ImageSourceErrorHandler*/]);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal abstract class ScalarBlender<T> :125
// {
static void ScalarBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)));
}

ScalarBlender_type* ScalarBlender_typeof()
{
    static uSStrong<ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScalarBlender);
    options.TypeSize = sizeof(ScalarBlender_type);
    type = (ScalarBlender_type*)uClassType::New("Fuse.Internal.ScalarBlender`1", options);
    type->fp_build_ = ScalarBlender_build;
    return type;
}

// protected generated ScalarBlender() :125
void ScalarBlender__ctor_1_fn(ScalarBlender* __this)
{
    __this->ctor_1();
}

// protected generated ScalarBlender() [instance] :125
void ScalarBlender::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Size2Blender :106
// {
static void Size2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size2_typeof()));
}

::g::Fuse::Internal::Blender_type* Size2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Size2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Size2Blender", options);
    type->fp_build_ = Size2Blender_build;
    type->fp_ctor_ = (void*)Size2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Size2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Size2Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_Zero_fn;
    return type;
}

// public generated Size2Blender() :106
void Size2Blender__ctor_1_fn(Size2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size2 Add(Uno.UX.Size2 a, Uno.UX.Size2 b) :109
void Size2Blender__Add_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size2 a) :122
void Size2Blender__Length_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_)), void();
}

// public override sealed Uno.UX.Size2 Lerp(Uno.UX.Size2 a, Uno.UX.Size2 b, double d) :111
void Size2Blender__Lerp_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, double* d, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, ::g::Uno::UX::Size2__op_Multiply(::g::Uno::UX::Size2__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated Size2Blender New() :106
void Size2Blender__New1_fn(Size2Blender** __retval)
{
    *__retval = Size2Blender::New1();
}

// public override sealed Uno.UX.Size2 Sub(Uno.UX.Size2 a, Uno.UX.Size2 b) :110
void Size2Blender__Sub_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size2 ToUnit(Uno.UX.Size2 a, double& length) :114
void Size2Blender__ToUnit_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* length, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::Float2 v = ::g::Uno::Vector::Normalize(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::UX::Size x = a_.X;
    ::g::Uno::UX::Size y = a_.Y;
    return *__retval = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(v.X, x.Unit), ::g::Uno::UX::Size__New1(v.Y, y.Unit)), void();
}

// public override sealed Uno.UX.Size2 Weight(Uno.UX.Size2 v, double w) :108
void Size2Blender__Weight_fn(Size2Blender* __this, ::g::Uno::UX::Size2* v, double* w, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size2__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size2 get_Zero() :112
void Size2Blender__get_Zero_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(0.0f, 0.0f)), void();
}

// public generated Size2Blender() [instance] :106
void Size2Blender::ctor_1()
{
    ctor_();
}

// public generated Size2Blender New() [static] :106
Size2Blender* Size2Blender::New1()
{
    Size2Blender* obj1 = (Size2Blender*)uNew(Size2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal sealed class SizeBlender :90
// {
static void SizeBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
}

::g::Fuse::Internal::Blender_type* SizeBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(SizeBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.SizeBlender", options);
    type->fp_build_ = SizeBlender_build;
    type->fp_ctor_ = (void*)SizeBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))SizeBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))SizeBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_Zero_fn;
    return type;
}

// public generated SizeBlender() :90
void SizeBlender__ctor_1_fn(SizeBlender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size Add(Uno.UX.Size a, Uno.UX.Size b) :93
void SizeBlender__Add_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size a) :103
void SizeBlender__Length_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_.Value), void();
}

// public override sealed Uno.UX.Size Lerp(Uno.UX.Size a, Uno.UX.Size b, double d) :95
void SizeBlender__Lerp_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, double* d, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, ::g::Uno::UX::Size__op_Multiply(::g::Uno::UX::Size__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated SizeBlender New() :90
void SizeBlender__New1_fn(SizeBlender** __retval)
{
    *__retval = SizeBlender::New1();
}

// public override sealed Uno.UX.Size Sub(Uno.UX.Size a, Uno.UX.Size b) :94
void SizeBlender__Sub_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size ToUnit(Uno.UX.Size a, double& length) :98
void SizeBlender__ToUnit_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* length, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    *length = (double)a_.Value;
    return *__retval = (a_.Value < 0.0f) ? ::g::Uno::UX::Size__New1(-1.0f, a_.Unit) : ::g::Uno::UX::Size__New1(1.0f, a_.Unit), void();
}

// public override sealed Uno.UX.Size Weight(Uno.UX.Size v, double w) :92
void SizeBlender__Weight_fn(SizeBlender* __this, ::g::Uno::UX::Size* v, double* w, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size get_Zero() :96
void SizeBlender__get_Zero_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(0), void();
}

// public generated SizeBlender() [instance] :90
void SizeBlender::ctor_1()
{
    ctor_();
}

// public generated SizeBlender New() [static] :90
SizeBlender* SizeBlender::New1()
{
    SizeBlender* obj1 = (SizeBlender*)uNew(SizeBlender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class SizingContainer :351
// {
static void SizingContainer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, absoluteZoom), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, align), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, padding), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, snapToPixels), 0,
        ::g::Fuse::Elements::StretchDirection_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchDirection), 0,
        ::g::Fuse::Elements::StretchMode_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchMode), 0,
        ::g::Fuse::Elements::StretchSizing_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchSizing), 0);
}

uType* SizingContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SizingContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.SizingContainer", options);
    type->fp_build_ = SizingContainer_build;
    type->fp_ctor_ = (void*)SizingContainer__New1_fn;
    return type;
}

// public generated SizingContainer() :351
void SizingContainer__ctor__fn(SizingContainer* __this)
{
    __this->ctor_();
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) :575
void SizingContainer__CalcClip_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CalcClip(*availableSize, origin, contentActualSize);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) :403
void SizingContainer__CalcContentSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Uno::Int2* pixelSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcContentSize(*size, *pixelSize);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) :533
void SizingContainer__CalcOrigin_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOrigin(*availableSize, *contentActualSize);
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) :398
void SizingContainer__CalcScale_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale(*availableSize, *desiredSize);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) :449
void SizingContainer__CalcScale1_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, bool* autoWidth, bool* autoHeight, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale1(*availableSize, *desiredSize, *autoWidth, *autoHeight);
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) :620
void SizingContainer__ExpandFillSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ExpandFillSize(*size, *lp);
}

// public generated SizingContainer New() :351
void SizingContainer__New1_fn(SizingContainer** __retval)
{
    *__retval = SizingContainer::New1();
}

// private float get_PaddingHeight() :396
void SizingContainer__get_PaddingHeight_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingHeight();
}

// private float get_PaddingWidth() :395
void SizingContainer__get_PaddingWidth_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingWidth();
}

// public bool SetAlignment(Fuse.Elements.Alignment a) :374
void SizingContainer__SetAlignment_fn(SizingContainer* __this, int* a, bool* __retval)
{
    *__retval = __this->SetAlignment(*a);
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) :366
void SizingContainer__SetStretchDirection_fn(SizingContainer* __this, int* dir, bool* __retval)
{
    *__retval = __this->SetStretchDirection(*dir);
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) :358
void SizingContainer__SetStretchMode_fn(SizingContainer* __this, int* mode, bool* __retval)
{
    *__retval = __this->SetStretchMode(*mode);
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) :382
void SizingContainer__SetStretchSizing_fn(SizingContainer* __this, int* ss, bool* __retval)
{
    *__retval = __this->SetStretchSizing(*ss);
}

// private float2 SnapSize(float2 sz) :444
void SizingContainer__SnapSize_fn(SizingContainer* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapSize(*sz);
}

// public generated SizingContainer() [instance] :351
void SizingContainer::ctor_()
{
    stretchMode = 5;
    align = 10;
    stretchSizing = 1;
    absoluteZoom = 1.0f;
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) [instance] :575
::g::Uno::Float4 SizingContainer::CalcClip(::g::Uno::Float2 availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::g::Uno::Float2__New2(0.0f, 0.0f);
        *contentActualSize = ::g::Uno::Float2__New1(0.0f);
        return ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::g::Uno::Float2 tl = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2((ind1 = padding, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), *origin), *contentActualSize));
    ::g::Uno::Float2 br = ::g::Uno::Math::Min3(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize, *origin), (ind2 = padding, ::g::Uno::Float2__New2(ind2.Z, ind2.W))), *contentActualSize));
    float dx = padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = ((*contentActualSize).X - dx);
        (*origin).X = padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + padding.Z;

    if (dx > 0.0f)
        (*contentActualSize).X = ((*contentActualSize).X - dx);

    float dy = padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);
        (*origin).Y = padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + padding.W;

    if (dy > 0.0f)
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);

    return ::g::Uno::Float4__New2(tl.X, tl.Y, br.X, br.Y);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) [instance] :403
::g::Uno::Float2 SizingContainer::CalcContentSize(::g::Uno::Float2 size, ::g::Uno::Int2 pixelSize)
{
    switch (stretchMode)
    {
        case 1:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
        }
        case 2:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            ::g::Uno::Float2 exact = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
            ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(size, exact);

            if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                return exact;

            break;
        }
        default:
            break;
    }

    if (!snapToPixels)
        return size;

    return SnapSize(size);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) [instance] :533
::g::Uno::Float2 SizingContainer::CalcOrigin(::g::Uno::Float2 availableSize, ::g::Uno::Float2 contentActualSize)
{
    ::g::Uno::Float2 origin = ::g::Uno::Float2__New1(0.0f);

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(align))
    {
        case 0:
        case 1:
        {
            origin.X = padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = (((((availableSize.X - padding.Item(0)) - padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + padding.Item(0));
            break;
        }
        case 3:
        {
            origin.X = ((availableSize.X - padding.Item(2)) - contentActualSize.X);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(align))
    {
        case 0:
        case 4:
        {
            origin.Y = padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = (((((availableSize.Y - padding.Item(1)) - padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + padding.Item(1));
            break;
        }
        case 12:
        {
            origin.Y = ((availableSize.Y - padding.Item(3)) - contentActualSize.Y);
            break;
        }
    }

    if (snapToPixels)
        origin = SnapSize(origin);

    return origin;
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) [instance] :398
::g::Uno::Float2 SizingContainer::CalcScale(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize)
{
    return CalcScale1(availableSize, desiredSize, false, false);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) [instance] :449
::g::Uno::Float2 SizingContainer::CalcScale1(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::g::Uno::Float2 d = availableSize;
    d.X = (d.X - PaddingWidth());
    d.Y = (d.Y - PaddingHeight());
    ::g::Uno::Float2 scale = ::g::Uno::Float2__New1(1.0f);

    if ((autoWidth && autoHeight) && !(((stretchMode == 0) || (stretchMode == 1)) || (stretchMode == 2)))
    {
        if (stretchSizing == 0)
            scale = ::g::Uno::Float2__New1(0.0f);
        else
            scale = ::g::Uno::Float2__New1(1.0f);
    }
    else
    {
        ::g::Uno::Float2 s = ::g::Uno::Float2__New2((desiredSize.X < 1e-05f) ? 0.0f : d.X / desiredSize.X, (desiredSize.Y < 1e-05f) ? 0.0f : d.Y / desiredSize.Y);

        switch (stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::g::Uno::Float2__New1(1.0f);
                break;
            }
            case 4:
            case 3:
            {
                scale = autoWidth ? ::g::Uno::Float2__New1(s.Y) : autoHeight ? ::g::Uno::Float2__New1(s.X) : s;
                break;
            }
            case 5:
            {
                float sm = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Min1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm);
                break;
            }
            case 6:
            {
                float sm1 = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Max1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm1);
                break;
            }
        }
    }

    switch (stretchDirection)
    {
        case 0:
            break;
        case 2:
        {
            scale.X = ::g::Uno::Math::Min1(scale.X, 1.0f);
            scale.Y = ::g::Uno::Math::Min1(scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::g::Uno::Math::Max1(1.0f, scale.X);
            scale.Y = ::g::Uno::Math::Max1(1.0f, scale.Y);
            break;
        }
    }

    if ((snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
        scale = ::g::Uno::Float2__op_Division2(SnapSize(::g::Uno::Float2__op_Multiply2(scale, desiredSize)), desiredSize);

    return scale;
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) [instance] :620
::g::Uno::Float2 SizingContainer::ExpandFillSize(::g::Uno::Float2 size, ::g::Fuse::LayoutParams lp)
{
    bool autoWidth = !lp.HasX();
    bool autoHeight = !lp.HasY();
    ::g::Uno::Float2 scale = CalcScale1(lp.Size(), size, autoWidth, autoHeight);
    ::g::Uno::Float2 res = ::g::Uno::Float2__op_Multiply2(scale, size);
    bool recalc = false;

    if (lp.HasMaxX() && (res.X > lp.MaxX()))
    {
        res.X = lp.MaxX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMaxY() && (res.Y > lp.MaxY()))
    {
        res.Y = lp.MaxY();
        recalc = true;
        autoHeight = false;
    }

    if (lp.HasMinX() && (res.X < lp.MinX()))
    {
        res.X = lp.MinX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMinY() && (res.Y < lp.MinY()))
    {
        res.Y = lp.MinY();
        recalc = true;
        autoHeight = false;
    }

    if (recalc)
    {
        scale = CalcScale1(res, size, autoWidth, autoHeight);
        res = ::g::Uno::Float2__op_Multiply2(scale, size);
    }

    return res;
}

// private float get_PaddingHeight() [instance] :396
float SizingContainer::PaddingHeight()
{
    return padding.Item(1) + padding.Item(3);
}

// private float get_PaddingWidth() [instance] :395
float SizingContainer::PaddingWidth()
{
    return padding.Item(0) + padding.Item(2);
}

// public bool SetAlignment(Fuse.Elements.Alignment a) [instance] :374
bool SizingContainer::SetAlignment(int a)
{
    if (a == align)
        return false;

    align = a;
    return true;
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) [instance] :366
bool SizingContainer::SetStretchDirection(int dir)
{
    if (dir == stretchDirection)
        return false;

    stretchDirection = dir;
    return true;
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) [instance] :358
bool SizingContainer::SetStretchMode(int mode)
{
    if (mode == stretchMode)
        return false;

    stretchMode = mode;
    return true;
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) [instance] :382
bool SizingContainer::SetStretchSizing(int ss)
{
    if (ss == stretchSizing)
        return false;

    stretchSizing = ss;
    return true;
}

// private float2 SnapSize(float2 sz) [instance] :444
::g::Uno::Float2 SizingContainer::SnapSize(::g::Uno::Float2 sz)
{
    return ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(sz, absoluteZoom)), absoluteZoom);
}

// public generated SizingContainer New() [static] :351
SizingContainer* SizingContainer::New1()
{
    SizingContainer* obj3 = (SizingContainer*)uNew(SizingContainer_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// public static class Statistics :697
// {
static void Statistics_build(uType* type)
{
}

uClassType* Statistics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Statistics", options);
    type->fp_build_ = Statistics_build;
    return type;
}

// public static double ContinuousFilterAlpha(double elapsed, double period) :708
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ContinuousFilterAlpha(*elapsed, *period);
}

// public static double ContinuousFilterAlpha(double elapsed, double period) [static] :708
double Statistics::ContinuousFilterAlpha(double elapsed, double period)
{
    return 1.0 - ::g::Uno::Math::Pow(2.7182818284590451, -elapsed / period);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/internal/$.uno
// ------------------------------------------------------------

// internal static class VectorUtil :722
// {
static void VectorUtil_build(uType* type)
{
}

uClassType* VectorUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.VectorUtil", options);
    type->fp_build_ = VectorUtil_build;
    return type;
}

// public static float Angle(float2 a, float2 b) :753
void VectorUtil__Angle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::Angle(*a, *b);
}

// public static float DistanceLine(float4 line, float2 p) :761
void VectorUtil__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval)
{
    *__retval = VectorUtil::DistanceLine(*line, *p);
}

// public static float2 Projection(float2 a, float2 b) :727
void VectorUtil__Projection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Projection(*a, *b);
}

// public static float2 Rejection(float2 a, float2 b) :743
void VectorUtil__Rejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Rejection(*a, *b);
}

// public static float ScalarProjection(float2 a, float2 b) :735
void VectorUtil__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::ScalarProjection(*a, *b);
}

// public static float Angle(float2 a, float2 b) [static] :753
float VectorUtil::Angle(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Math::Acos1(::g::Uno::Vector::Dot(a, b) / (::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b)));
}

// public static float DistanceLine(float4 line, float2 p) [static] :761
float VectorUtil::DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p)
{
    return ::g::Uno::Vector::Length(VectorUtil::Rejection(::g::Uno::Float2__op_Subtraction2(p, ::g::Uno::Float2__New2(line.X, line.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(line.Z, line.W), ::g::Uno::Float2__New2(line.X, line.Y))));
}

// public static float2 Projection(float2 a, float2 b) [static] :727
::g::Uno::Float2 VectorUtil::Projection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__op_Multiply(::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Dot(b, b), b);
}

// public static float2 Rejection(float2 a, float2 b) [static] :743
::g::Uno::Float2 VectorUtil::Rejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    ::g::Uno::Float2 a1 = VectorUtil::Projection(a, b);
    return ::g::Uno::Float2__op_Subtraction2(a, a1);
}

// public static float ScalarProjection(float2 a, float2 b) [static] :735
float VectorUtil::ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Length(b);
}
// }

}}} // ::g::Fuse::Internal
