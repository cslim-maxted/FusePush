// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :89
// {
// static ImageLoader() :89
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/]));
}

static void ImageLoader_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::ImageLoader::_imageHandleCache_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) :275
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static] :275
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader_typeof()->Init();
    bool ret5;
    bool ret6;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret6);
}
// }

}}}} // ::g::Fuse::Controls::Native
