// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/BufferStream.h>
#include <uBase/Bundle.h>
#include <Uno.Content.Fonts.CppFontFace.h>
#include <Uno.Content.Fonts.CppFontFaceHandle.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno/Support.h>

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/fonts/$.uno
// ---------------------------------------------------------------------------

// internal sealed extern class CppFontFace :196
// {
static void CppFontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Content::Fonts::FontFace_type, interface0));
    type->SetFields(0,
        ::g::Uno::Content::Fonts::CppFontFaceHandle_typeof(), offsetof(::g::Uno::Content::Fonts::CppFontFace, _handle), 0);
}

::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::FontFace_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppFontFace);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::FontFace_type);
    type = (::g::Uno::Content::Fonts::FontFace_type*)uClassType::New("Uno.Content.Fonts.CppFontFace", options);
    type->fp_build_ = CppFontFace_build;
    type->fp_Dispose = (void(*)(::g::Uno::Content::Fonts::FontFace*))CppFontFace__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CppFontFace__Dispose_fn;
    return type;
}

// public override sealed void Dispose() :222
void CppFontFace__Dispose_fn(CppFontFace* __this)
{
    __this->_handle->Release();
                __this->_handle = 0;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/fonts/$.uno
// ---------------------------------------------------------------------------

// internal extern struct CppFontFaceHandle :188
// {
static void CppFontFaceHandle_build(uType* type)
{
}

uStructType* CppFontFaceHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uImage::FontFace*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.CppFontFaceHandle", options);
    type->fp_build_ = CppFontFaceHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/fonts/$.uno
// ---------------------------------------------------------------------------

// public abstract class FontFace :329
// {
static void FontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FontFace_type, interface0));
}

FontFace_type* FontFace_typeof()
{
    static uSStrong<FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FontFace);
    options.TypeSize = sizeof(FontFace_type);
    type = (FontFace_type*)uClassType::New("Uno.Content.Fonts.FontFace", options);
    type->fp_build_ = FontFace_build;
    return type;
}
// }

}}}} // ::g::Uno::Content::Fonts
