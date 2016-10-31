// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.38.6/input/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerPressedArgs :796
// {
uType* PointerPressedArgs_typeof();
void PointerPressedArgs__ctor_3_fn(PointerPressedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
void PointerPressedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerPressedArgs** __retval);

struct PointerPressedArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
    static PointerPressedArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
