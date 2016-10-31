// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct FontCache;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct BundleFileSource;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class FontCache :362
// {
uClassType* FontCache_typeof();
void FontCache__CGFontRelease_fn(::CGFontRef* cgFont);
void FontCache__CoreGraphicsFontRefFromPath_fn(uString* path, ::CGFontRef* __retval);
void FontCache__CreateFontFromName_fn(uString* fontName, float* fontSize, uObject** __retval);
void FontCache__GetDefaultFont_fn(float* fontSize, uObject** __retval);
void FontCache__GetFontFromFile_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval);
void FontCache__GetFromBundleFileSource_fn(::g::Uno::UX::BundleFileSource* bundleFileSource, float* fontSize, uObject** __retval);
void FontCache__GetFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval);
void FontCache__GetPathForBundle_fn(uString* bundlePath, uString** __retval);
void FontCache__GetPostScriptNameOfCGFontRef_fn(::CGFontRef* font, uString** __retval);
void FontCache__RegisterFont_fn(::CGFontRef* font, bool* __retval);

struct FontCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _fontNameCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _fontNameCache() { return FontCache_typeof()->Init(), _fontNameCache_; }

    static void CGFontRelease(::CGFontRef cgFont);
    static ::CGFontRef CoreGraphicsFontRefFromPath(uString* path);
    static uObject* CreateFontFromName(uString* fontName, float fontSize);
    static uObject* GetDefaultFont(float fontSize);
    static uObject* GetFontFromFile(::g::Uno::UX::FileSource* fileSource, float fontSize);
    static uObject* GetFromBundleFileSource(::g::Uno::UX::BundleFileSource* bundleFileSource, float fontSize);
    static uObject* GetFromFileSource(::g::Uno::UX::FileSource* fileSource, float fontSize);
    static uString* GetPathForBundle(uString* bundlePath);
    static uString* GetPostScriptNameOfCGFontRef(::CGFontRef font);
    static bool RegisterFont(::CGFontRef font);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
