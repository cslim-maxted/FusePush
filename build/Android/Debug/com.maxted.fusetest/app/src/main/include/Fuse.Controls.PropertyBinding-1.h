// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct PropertyBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PropertyBinding<T> :684
// {
struct PropertyBinding_type : ::g::Fuse::Binding_type
{
    ::g::Uno::UX::IPropertyListener interface0;
};

PropertyBinding_type* PropertyBinding_typeof();
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property1* target, ::g::Uno::UX::Property1* source);
void PropertyBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, ::g::Uno::UX::Property1* source, PropertyBinding** __retval);
void PropertyBinding__OnRooted_fn(PropertyBinding* __this);
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this);
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property1** __retval);
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property1* value);
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property1** __retval);
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property1* value);
void PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(PropertyBinding* __this, ::g::Uno::UX::PropertyObject* src, ::g::Uno::UX::Selector* prop);

struct PropertyBinding : ::g::Fuse::Binding
{
    uStrong< ::g::Uno::UX::Property1*> _Source;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_1(::g::Uno::UX::Property1* target, ::g::Uno::UX::Property1* source);
    ::g::Uno::UX::Property1* Source();
    void Source(::g::Uno::UX::Property1* value);
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    static PropertyBinding* New1(uType* __type, ::g::Uno::UX::Property1* target, ::g::Uno::UX::Property1* source);
};
// }

}}} // ::g::Fuse::Controls
