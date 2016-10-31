// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/actions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Resume;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Resume :464
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof();
void Resume__Perform_fn(Resume* __this, ::g::Fuse::Node* target);

struct Resume : ::g::Fuse::Triggers::Actions::PlaybackAction
{
};
// }

}}}} // ::g::Fuse::Triggers::Actions
