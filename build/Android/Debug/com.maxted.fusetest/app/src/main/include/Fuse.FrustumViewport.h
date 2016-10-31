// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// internal sealed class FrustumViewport :2672
// {
uType* FrustumViewport_typeof();
void FrustumViewport__ctor__fn(FrustumViewport* __this);
void FrustumViewport__LocalPlaneIntersection_fn(::g::Uno::Geometry::Ray* local, ::g::Uno::Float2* __retval);
void FrustumViewport__New1_fn(FrustumViewport** __retval);
void FrustumViewport__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float4x4* viewProjectionInverse, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum);
void FrustumViewport__WorldToLocalRay_fn(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct FrustumViewport : uObject
{
    ::g::Uno::Float4x4 ProjectionTransform;
    ::g::Uno::Float4x4 ProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewProjectionTransform;
    ::g::Uno::Float4x4 ViewProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewTransform;
    ::g::Uno::Float4x4 ViewTransformInverse;

    void ctor_();
    void Update(uObject* viewport, uObject* frustum);
    static ::g::Uno::Float2 LocalPlaneIntersection(::g::Uno::Geometry::Ray local);
    static FrustumViewport* New1();
    static ::g::Uno::Geometry::Ray PointToWorldRay(uObject* viewport, ::g::Uno::Float4x4 viewProjectionInverse, ::g::Uno::Float2 pointPos);
    static ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
};
// }

}} // ::g::Fuse
