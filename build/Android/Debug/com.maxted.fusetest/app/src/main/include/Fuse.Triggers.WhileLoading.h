// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileLoading;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileLoading :3244
// {
::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof();
void WhileLoading__IsLoading_fn(::g::Fuse::Visual* n, bool* __retval);
void WhileLoading__OnRooted_fn(WhileLoading* __this);
void WhileLoading__SetState_fn(::g::Fuse::Visual* n, bool* loading);

struct WhileLoading : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileLoadingProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileLoadingProp() { return WhileLoading_typeof()->Init(), _whileLoadingProp_; }

    static bool IsLoading(::g::Fuse::Visual* n);
    static void SetState(::g::Fuse::Visual* n, bool loading);
};
// }

}}} // ::g::Fuse::Triggers
