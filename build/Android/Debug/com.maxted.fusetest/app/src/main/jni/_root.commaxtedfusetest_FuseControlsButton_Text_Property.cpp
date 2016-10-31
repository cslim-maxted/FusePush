// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/.uno/ux11/com.maxted.fusetest.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.commaxtedfusetest_FuseControlsButton_Text_Property.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class commaxtedfusetest_FuseControlsButton_Text_Property :1
// {
static void commaxtedfusetest_FuseControlsButton_Text_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::commaxtedfusetest_FuseControlsButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* commaxtedfusetest_FuseControlsButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(commaxtedfusetest_FuseControlsButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("commaxtedfusetest_FuseControlsButton_Text_Property", options);
    type->fp_build_ = commaxtedfusetest_FuseControlsButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))commaxtedfusetest_FuseControlsButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))commaxtedfusetest_FuseControlsButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))commaxtedfusetest_FuseControlsButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))commaxtedfusetest_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public commaxtedfusetest_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) :4
void commaxtedfusetest_FuseControlsButton_Text_Property__ctor_2_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :6
void commaxtedfusetest_FuseControlsButton_Text_Property__Get_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public commaxtedfusetest_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) :4
void commaxtedfusetest_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name, commaxtedfusetest_FuseControlsButton_Text_Property** __retval)
{
    *__retval = commaxtedfusetest_FuseControlsButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void commaxtedfusetest_FuseControlsButton_Text_Property__get_Object_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :7
void commaxtedfusetest_FuseControlsButton_Text_Property__Set_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void commaxtedfusetest_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public commaxtedfusetest_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) [instance] :4
void commaxtedfusetest_FuseControlsButton_Text_Property::ctor_2(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public commaxtedfusetest_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) [static] :4
commaxtedfusetest_FuseControlsButton_Text_Property* commaxtedfusetest_FuseControlsButton_Text_Property::New1(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    commaxtedfusetest_FuseControlsButton_Text_Property* obj1 = (commaxtedfusetest_FuseControlsButton_Text_Property*)uNew(commaxtedfusetest_FuseControlsButton_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
