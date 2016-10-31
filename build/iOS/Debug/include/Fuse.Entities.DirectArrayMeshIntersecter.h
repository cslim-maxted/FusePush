// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.TriangleMeshIntersecter.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Entities{struct DirectArrayMeshIntersecter;}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class DirectArrayMeshIntersecter :2681
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* DirectArrayMeshIntersecter_typeof();
void DirectArrayMeshIntersecter__GetTriangle_fn(DirectArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval);

struct DirectArrayMeshIntersecter : ::g::Fuse::Entities::TriangleMeshIntersecter
{
    uStrong<uArray*> _positions;
};
// }

}}} // ::g::Fuse::Entities
