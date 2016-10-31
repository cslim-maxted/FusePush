// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/0.38.6/brushes/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.ISolidColor.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct StaticSolidColor;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class StaticSolidColor :424
// {
struct StaticSolidColor_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Fuse::Drawing::ISolidColor interface0;
};

StaticSolidColor_type* StaticSolidColor_typeof();
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval);
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval);

struct StaticSolidColor : ::g::Fuse::Drawing::StaticBrush
{
    ::g::Uno::Float4 _color;

    ::g::Uno::Float4 Color();
};
// }

}}} // ::g::Fuse::Drawing
