// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Internal{

// internal abstract interface IImageContainerOwner :14
// {
uInterfaceType* IImageContainerOwner_typeof();

struct IImageContainerOwner
{
    void(*fp_OnSourceChanged)(uObject*);
    static void OnSourceChanged(const uInterface& __this) { __this.VTable<IImageContainerOwner>()->fp_OnSourceChanged(__this); }
};
// }

}}} // ::g::Fuse::Internal
