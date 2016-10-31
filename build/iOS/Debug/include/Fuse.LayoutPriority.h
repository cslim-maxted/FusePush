// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct LayoutPriority;}}

namespace g{
namespace Fuse{

// public static class LayoutPriority :9814
// {
uClassType* LayoutPriority_typeof();

struct LayoutPriority : uObject
{
    static int Placement_;
    static int& Placement() { return LayoutPriority_typeof()->Init(), Placement_; }
    static int Post_;
    static int& Post() { return LayoutPriority_typeof()->Init(), Post_; }
};
// }

}} // ::g::Fuse
