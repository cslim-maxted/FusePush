// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/.uno/ux11/com.maxted.fusetest.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct commaxtedfusetest_FuseControlsButton_Text_Property;}

namespace g{

// internal sealed class commaxtedfusetest_FuseControlsButton_Text_Property :1
// {
::g::Uno::UX::Property1_type* commaxtedfusetest_FuseControlsButton_Text_Property_typeof();
void commaxtedfusetest_FuseControlsButton_Text_Property__ctor_2_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name);
void commaxtedfusetest_FuseControlsButton_Text_Property__Get_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, uString** __retval);
void commaxtedfusetest_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name, commaxtedfusetest_FuseControlsButton_Text_Property** __retval);
void commaxtedfusetest_FuseControlsButton_Text_Property__get_Object_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void commaxtedfusetest_FuseControlsButton_Text_Property__Set_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin);
void commaxtedfusetest_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn(commaxtedfusetest_FuseControlsButton_Text_Property* __this, bool* __retval);

struct commaxtedfusetest_FuseControlsButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Button*> _obj;

    void ctor_2(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name);
    static commaxtedfusetest_FuseControlsButton_Text_Property* New1(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
