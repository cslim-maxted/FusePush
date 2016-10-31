// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FontCache;}}}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class FontCache :489
// {
uType* FontCache_typeof();
void FontCache__GetFontFromFile_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval);

struct FontCache : uObject
{
    static uSStrong<uDelegate*> GetFontFromFileHandler_;
    static uSStrong<uDelegate*>& GetFontFromFileHandler() { return GetFontFromFileHandler_; }

    static uObject* GetFontFromFile(::g::Uno::UX::FileSource* fileSource, float fontSize);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
