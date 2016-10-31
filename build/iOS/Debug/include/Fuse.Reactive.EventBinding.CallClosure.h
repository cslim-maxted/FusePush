// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding__CallClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class EventBinding.CallClosure :1135
// {
uType* EventBinding__CallClosure_typeof();
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this);

struct EventBinding__CallClosure : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _args;
    uStrong<uObject*> _data;
    uStrong< ::g::Fuse::Node*> _node;
    ::g::Uno::UX::Selector _sender;
    uStrong< ::g::Fuse::Scripting::Function*> Function;

    void Call();
};
// }

}}} // ::g::Fuse::Reactive
