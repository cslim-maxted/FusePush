// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Geometry.Sphere.h>
#include <Uno.Geometry.Triangle.h>
#include <Uno.Math.h>
#include <Uno.Vector.h>

namespace g{
namespace Uno{
namespace Geometry{

// /usr/local/share/uno/Packages/Uno.Geometry/0.38.0/$.uno
// -------------------------------------------------------

// public struct Box :5
// {
static void Box_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Minimum), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Maximum), 0);
}

uStructType* Box_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Box);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Box", options);
    type->fp_build_ = Box_build;
    return type;
}

// public Box(float3 min, float3 max) :9
void Box__ctor__fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max)
{
    __this->ctor_(*min, *max);
}

// public Box New(float3 min, float3 max) :9
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval)
{
    *__retval = Box__New1(*min, *max);
}

// public Box(float3 min, float3 max) [instance] :9
void Box::ctor_(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Minimum = min;
    Maximum = max;
}

// public Box New(float3 min, float3 max) [static] :9
Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Box obj9;
    obj9.ctor_(min, max);
    return obj9;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.38.0/$.uno
// -------------------------------------------------------

// public static class Collision :42
// {
static void Collision_build(uType* type)
{
}

uClassType* Collision_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Geometry.Collision", options);
    type->fp_build_ = Collision_build;
    return type;
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) :431
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsBox(*ray, *box, distance);
}

// public static bool RayIntersectsSphere(Uno.Geometry.Ray ray, Uno.Geometry.Sphere sphere, float& distance) :548
void Collision__RayIntersectsSphere_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Sphere* sphere, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsSphere(*ray, *sphere, distance);
}

// public static bool RayIntersectsTriangle(Uno.Geometry.Ray ray, Uno.Geometry.Triangle triangle, float& distance) :343
void Collision__RayIntersectsTriangle_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Triangle* triangle, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsTriangle(*ray, *triangle, distance);
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) [static] :431
bool Collision::RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance)
{
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::g::Uno::Math::Abs1(ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::g::Uno::Math::Max1(t1, *distance);
        tmax = ::g::Uno::Math::Min1(t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse1 = 1.0f / ray.Direction.Y;
        float t11 = (box.Minimum.Y - ray.Position.Y) * inverse1;
        float t21 = (box.Maximum.Y - ray.Position.Y) * inverse1;

        if (t11 > t21)
        {
            float temp1 = t11;
            t11 = t21;
            t21 = temp1;
        }

        *distance = ::g::Uno::Math::Max1(t11, *distance);
        tmax = ::g::Uno::Math::Min1(t21, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse2 = 1.0f / ray.Direction.Z;
        float t12 = (box.Minimum.Z - ray.Position.Z) * inverse2;
        float t22 = (box.Maximum.Z - ray.Position.Z) * inverse2;

        if (t12 > t22)
        {
            float temp2 = t12;
            t12 = t22;
            t22 = temp2;
        }

        *distance = ::g::Uno::Math::Max1(t12, *distance);
        tmax = ::g::Uno::Math::Min1(t22, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}

// public static bool RayIntersectsSphere(Uno.Geometry.Ray ray, Uno.Geometry.Sphere sphere, float& distance) [static] :548
bool Collision::RayIntersectsSphere(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Sphere sphere, float* distance)
{
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Subtraction2(ray.Position, sphere.Center);
    float b = ::g::Uno::Vector::Dot1(v, ray.Direction);
    float c = ::g::Uno::Vector::Dot1(v, v) - (sphere.Radius * sphere.Radius);

    if ((c > 0.0f) && (b > 0.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float discriminant = (b * b) - c;

    if (discriminant < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = -b - ::g::Uno::Math::Sqrt1(discriminant);

    if (*distance < 0.0f)
        *distance = 0.0f;

    return true;
}

// public static bool RayIntersectsTriangle(Uno.Geometry.Ray ray, Uno.Geometry.Triangle triangle, float& distance) [static] :343
bool Collision::RayIntersectsTriangle(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Triangle triangle, float* distance)
{
    ::g::Uno::Float3 edge1 = ::g::Uno::Float3__op_Subtraction2(triangle.B, triangle.A);
    ::g::Uno::Float3 edge2 = ::g::Uno::Float3__op_Subtraction2(triangle.C, triangle.A);
    ::g::Uno::Float3 directioncrossedge2 = ::g::Uno::Vector::Cross(ray.Direction, edge2);
    float determinant;
    determinant = ::g::Uno::Vector::Dot1(edge1, directioncrossedge2);

    if ((determinant > -1e-05f) && (determinant < 1e-05f))
    {
        *distance = 0.0f;
        return false;
    }

    float inversedeterminant = 1.0f / determinant;
    ::g::Uno::Float3 distanceVector = ::g::Uno::Float3__op_Subtraction2(ray.Position, triangle.A);
    float triangleU;
    triangleU = ::g::Uno::Vector::Dot1(distanceVector, directioncrossedge2);
    triangleU = triangleU * inversedeterminant;

    if ((triangleU < 0.0f) || (triangleU > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    ::g::Uno::Float3 distancecrossedge1 = ::g::Uno::Vector::Cross(distanceVector, edge1);
    float triangleV;
    triangleV = ::g::Uno::Vector::Dot1(ray.Direction, distancecrossedge1);
    triangleV = triangleV * inversedeterminant;

    if ((triangleV < 0.0f) || ((triangleU + triangleV) > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float raydistance;
    raydistance = ::g::Uno::Vector::Dot1(edge2, distancecrossedge1);
    raydistance = raydistance * inversedeterminant;

    if (raydistance < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = raydistance;
    return true;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.38.0/$.uno
// -------------------------------------------------------

// public struct Ray :1604
// {
static void Ray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Direction), 0);
}

uStructType* Ray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Ray);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Ray", options);
    type->fp_build_ = Ray_build;
    return type;
}

// public Ray(float3 pos, float3 dir) :1609
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir)
{
    __this->ctor_(*pos, *dir);
}

// public Ray New(float3 pos, float3 dir) :1609
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval)
{
    *__retval = Ray__New1(*pos, *dir);
}

// public static Uno.Geometry.Ray Transform(Uno.Geometry.Ray ray, float4x4 transform) :1620
void Ray__Transform_fn(Ray* ray, ::g::Uno::Float4x4* transform, Ray* __retval)
{
    *__retval = Ray__Transform(*ray, *transform);
}

// public Ray(float3 pos, float3 dir) [instance] :1609
void Ray::ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Position = pos;
    Direction = dir;
}

// public Ray New(float3 pos, float3 dir) [static] :1609
Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Ray obj2;
    obj2.ctor_(pos, dir);
    return obj2;
}

// public static Uno.Geometry.Ray Transform(Uno.Geometry.Ray ray, float4x4 transform) [static] :1620
Ray Ray__Transform(Ray ray, ::g::Uno::Float4x4 transform)
{
    ::g::Uno::Float4 ind1;
    return Ray__New1((ind1 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New8(ray.Position, 1.0f), transform), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(ray.Direction, transform)));
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.38.0/$.uno
// -------------------------------------------------------

// public struct Sphere :1632
// {
static void Sphere_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Sphere, Center), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Sphere, Radius), 0);
}

uStructType* Sphere_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Sphere);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Sphere", options);
    type->fp_build_ = Sphere_build;
    return type;
}

// public Sphere(float3 center, float radius) :1637
void Sphere__ctor__fn(Sphere* __this, ::g::Uno::Float3* center, float* radius)
{
    __this->ctor_(*center, *radius);
}

// public Sphere New(float3 center, float radius) :1637
void Sphere__New1_fn(::g::Uno::Float3* center, float* radius, Sphere* __retval)
{
    *__retval = Sphere__New1(*center, *radius);
}

// public Sphere(float3 center, float radius) [instance] :1637
void Sphere::ctor_(::g::Uno::Float3 center, float radius)
{
    Center = center;
    Radius = radius;
}

// public Sphere New(float3 center, float radius) [static] :1637
Sphere Sphere__New1(::g::Uno::Float3 center, float radius)
{
    Sphere obj2;
    obj2.ctor_(center, radius);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.38.0/$.uno
// -------------------------------------------------------

// public struct Triangle :1731
// {
static void Triangle_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Triangle, A), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Triangle, B), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Triangle, C), 0);
}

uStructType* Triangle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Triangle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Triangle", options);
    type->fp_build_ = Triangle_build;
    return type;
}

// public Triangle(float3 a, float3 b, float3 c) :1737
void Triangle__ctor__fn(Triangle* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* c)
{
    __this->ctor_(*a, *b, *c);
}

// public Triangle New(float3 a, float3 b, float3 c) :1737
void Triangle__New1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* c, Triangle* __retval)
{
    *__retval = Triangle__New1(*a, *b, *c);
}

// public Triangle(float3 a, float3 b, float3 c) [instance] :1737
void Triangle::ctor_(::g::Uno::Float3 a, ::g::Uno::Float3 b, ::g::Uno::Float3 c)
{
    A = a;
    B = b;
    C = c;
}

// public Triangle New(float3 a, float3 b, float3 c) [static] :1737
Triangle Triangle__New1(::g::Uno::Float3 a, ::g::Uno::Float3 b, ::g::Uno::Float3 c)
{
    Triangle obj1;
    obj1.ctor_(a, b, c);
    return obj1;
}
// }

}}} // ::g::Uno::Geometry
