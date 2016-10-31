// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class BusyTask :84
// {
uType* BusyTask_typeof();
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n);
void BusyTask__done_fn(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args);
void BusyTask__Done_fn(BusyTask* __this);
void BusyTask__New1_fn(::g::Fuse::Node* n, BusyTask** __retval);
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n);
void BusyTask__OnUnrooted_fn(BusyTask* __this);

struct BusyTask : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return BusyTask_typeof()->Init(), _listeners_; }
    uStrong< ::g::Fuse::Node*> _node;
    static uSStrong< ::g::Uno::Collections::List*> _tasks_;
    static uSStrong< ::g::Uno::Collections::List*>& _tasks() { return BusyTask_typeof()->Init(), _tasks_; }

    void ctor_(::g::Fuse::Node* n);
    void Done();
    void OnUnrooted();
    static void done(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args);
    static BusyTask* New1(::g::Fuse::Node* n);
    static void OnBusyChanged(::g::Fuse::Node* n);
};
// }

}}} // ::g::Fuse::Triggers
