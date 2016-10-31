// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/fonts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public abstract class FontFace :329
// {
struct FontFace_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Uno::Content::Fonts::FontFace*);
};

FontFace_type* FontFace_typeof();

struct FontFace : uObject
{
    void Dispose() { (((FontFace_type*)__type)->fp_Dispose)(this); }
};
// }

}}}} // ::g::Uno::Content::Fonts
