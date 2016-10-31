// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Sphere.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct MeshBatcher;}}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelDrawable;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Mesh :849
// {
struct Mesh_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Mesh_type* Mesh_typeof();
void Mesh__get_Batches_fn(Mesh* __this, uArray** __retval);
void Mesh__get_BoundingBox_fn(Mesh* __this, ::g::Uno::Geometry::Box* __retval);
void Mesh__get_BoundingSphere_fn(Mesh* __this, ::g::Uno::Geometry::Sphere* __retval);
void Mesh__Dispose_fn(Mesh* __this);
void Mesh__Flush_fn(Mesh* __this);
void Mesh__get_ModelMesh_fn(Mesh* __this, ::g::Uno::Content::Models::ModelMesh** __retval);

struct Mesh : uObject
{
    uStrong< ::g::Uno::Content::Models::ModelDrawable*> _drawable;
    ::g::Uno::Geometry::Box _meshBox;
    bool _meshBoxDirty;
    ::g::Uno::Geometry::Sphere _meshSphere;
    bool _meshSphereDirty;
    uStrong< ::g::Fuse::Drawing::Batching::MeshBatcher*> batcher;
    uStrong<uArray*> batches;
    bool isDirty;

    uArray* Batches();
    ::g::Uno::Geometry::Box BoundingBox();
    ::g::Uno::Geometry::Sphere BoundingSphere();
    void Dispose();
    void Flush();
    ::g::Uno::Content::Models::ModelMesh* ModelMesh();
};
// }

}}} // ::g::Fuse::Entities
