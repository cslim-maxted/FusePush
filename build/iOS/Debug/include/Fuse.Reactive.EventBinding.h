// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ContextBinding.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding__CallClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class EventBinding :1097
// {
::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof();
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj);
void EventBinding__OnUnrooted_fn(EventBinding* __this);
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this);

struct EventBinding : ::g::Fuse::Reactive::ContextBinding
{
    uStrong< ::g::Fuse::Scripting::Function*> _function;
    uStrong< ::g::Uno::Collections::List*> _queuedEvents;

    void ProcessQueuedEvents();
};
// }

}}} // ::g::Fuse::Reactive
