// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.38.6/input/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct FocusLostArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class FocusLostArgs :27
// {
uType* FocusLostArgs_typeof();
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Visual* visual);
void FocusLostArgs__New3_fn(::g::Fuse::Visual* visual, FocusLostArgs** __retval);

struct FocusLostArgs : ::g::Fuse::VisualEventArgs
{
    void ctor_2(::g::Fuse::Visual* visual);
    static FocusLostArgs* New3(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
