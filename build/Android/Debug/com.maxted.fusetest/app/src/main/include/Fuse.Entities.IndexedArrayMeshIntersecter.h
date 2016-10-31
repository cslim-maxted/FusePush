// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.TriangleMeshIntersecter.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Entities{struct IndexedArrayMeshIntersecter;}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class IndexedArrayMeshIntersecter :2703
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* IndexedArrayMeshIntersecter_typeof();
void IndexedArrayMeshIntersecter__GetTriangle_fn(IndexedArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval);

struct IndexedArrayMeshIntersecter : ::g::Fuse::Entities::TriangleMeshIntersecter
{
    uStrong<uArray*> _indices;
    uStrong<uArray*> _positions;
};
// }

}}} // ::g::Fuse::Entities
