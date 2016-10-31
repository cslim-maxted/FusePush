// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/models/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelDrawable;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class ModelDrawable :220
// {
uType* ModelDrawable_typeof();
void ModelDrawable__get_Mesh_fn(ModelDrawable* __this, ::g::Uno::Content::Models::ModelMesh** __retval);

struct ModelDrawable : uObject
{
    uStrong< ::g::Uno::Content::Models::ModelMesh*> _mesh;

    ::g::Uno::Content::Models::ModelMesh* Mesh();
};
// }

}}}} // ::g::Uno::Content::Models
