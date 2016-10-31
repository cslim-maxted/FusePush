// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class FileImageSource :64
// {
::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof();
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval);
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value);
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void FileImageSource__OnPinChanged_fn(FileImageSource* __this);
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval);
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval);
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval);

struct FileImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Fuse::Resources::ProxyImageSource*> _proxy;

    void DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    float Density();
    void Density(float value);
};
// }

}}} // ::g::Fuse::Resources
