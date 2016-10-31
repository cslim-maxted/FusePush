// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.Slider.h>
#include <Fuse.Controls.Native.iOS.Switch.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// public sealed extern class Slider :2152
// {
static void Slider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface0));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :2157
void Slider__ctor__fn(Slider* __this, uObject* host)
{
    __this->ctor_(host);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :2157
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// public void set_Progress(double value) :2154
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :2157
void Slider::ctor_(uObject* host)
{
}

// public void set_Progress(double value) [instance] :2154
void Slider::Progress(double value)
{
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :2157
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno
// -------------------------------------------------------------------

// public sealed extern class Switch :2232
// {
static void Switch_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface0));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->interface0.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :2238
void Switch__ctor__fn(Switch* __this, uObject* host)
{
    __this->ctor_(host);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :2238
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// public void set_Value(bool value) :2234
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :2238
void Switch::ctor_(uObject* host)
{
}

// public void set_Value(bool value) [instance] :2234
void Switch::Value(bool value)
{
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :2238
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
