// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ImageSourceErrorArgs :511
// {
uType* ImageSourceErrorArgs_typeof();
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource);
void ImageSourceErrorArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceErrorArgs** __retval);
void ImageSourceErrorArgs__Post_fn(ImageSourceErrorArgs* __this);

struct ImageSourceErrorArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Resources::ImageSource*> _imageSource;
    uStrong< ::g::Uno::Exception*> ExceptionCause;
    uStrong<uString*> Reason;

    void ctor_1(::g::Fuse::Resources::ImageSource* imageSource);
    void Post();
    static ImageSourceErrorArgs* New2(::g::Fuse::Resources::ImageSource* imageSource);
};
// }

}}} // ::g::Fuse::Resources
