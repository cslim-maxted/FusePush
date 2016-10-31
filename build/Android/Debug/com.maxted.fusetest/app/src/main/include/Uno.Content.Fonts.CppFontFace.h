// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/fonts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct CppFontFace;}}}}
namespace uImage { class FontFace; }

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// internal sealed extern class CppFontFace :196
// {
::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof();
void CppFontFace__Dispose_fn(CppFontFace* __this);

struct CppFontFace : ::g::Uno::Content::Fonts::FontFace
{
    uImage::FontFace* _handle;
};
// }

}}}} // ::g::Uno::Content::Fonts
