// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEntities_bundle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Batching.Batch.h>
#include <Fuse.Drawing.Batching.BatchHelpers.h>
#include <Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <Fuse.Drawing.Batching.MeshBatcher.h>
#include <Fuse.Entities.DefaultMaterial.h>
#include <Fuse.Entities.DirectArrayMeshIntersecter.h>
#include <Fuse.Entities.Entity.h>
#include <Fuse.Entities.Entry.h>
#include <Fuse.Entities.IndexedArrayMeshIntersecter.h>
#include <Fuse.Entities.Material.h>
#include <Fuse.Entities.Mesh.h>
#include <Fuse.Entities.MeshBatchingEngine.h>
#include <Fuse.Entities.MeshHitTestMode.h>
#include <Fuse.Entities.MeshRenderer.h>
#include <Fuse.Entities.ModelMeshCollision.Direct.h>
#include <Fuse.Entities.ModelMeshCollision.h>
#include <Fuse.Entities.ModelMeshCollision.Indexed.h>
#include <Fuse.Entities.ModelMeshHelpers.h>
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.Entities.TriangleMeshIntersecter.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelDrawable.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Geometry.Sphere.h>
#include <Uno.Geometry.Triangle.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Quaternion.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.Vector.h>
static uString* STRINGS[6];
static uType* TYPES[28];

namespace g{
namespace Fuse{
namespace Entities{

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class DefaultMaterial :24
// {
static void DefaultMaterial_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _DiffuseColor), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _DiffuseMap), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _NormalMap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _Offset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _Shininess), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _SpecularColor), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _SpecularMap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _Tiling), 0);
}

uType* DefaultMaterial_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::Material_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(DefaultMaterial);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.DefaultMaterial", options);
    type->fp_build_ = DefaultMaterial_build;
    return type;
}

// public generated float3 get_DiffuseColor() :29
void DefaultMaterial__get_DiffuseColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->DiffuseColor();
}

// public generated void set_DiffuseColor(float3 value) :29
void DefaultMaterial__set_DiffuseColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value)
{
    __this->DiffuseColor(*value);
}

// public generated texture2D get_DiffuseMap() :52
void DefaultMaterial__get_DiffuseMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->DiffuseMap();
}

// public generated void set_DiffuseMap(texture2D value) :52
void DefaultMaterial__set_DiffuseMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->DiffuseMap(value);
}

// public generated texture2D get_NormalMap() :55
void DefaultMaterial__get_NormalMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->NormalMap();
}

// public generated void set_NormalMap(texture2D value) :55
void DefaultMaterial__set_NormalMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->NormalMap(value);
}

// public generated float2 get_Offset() :41
void DefaultMaterial__get_Offset_fn(DefaultMaterial* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// public generated void set_Offset(float2 value) :41
void DefaultMaterial__set_Offset_fn(DefaultMaterial* __this, ::g::Uno::Float2* value)
{
    __this->Offset(*value);
}

// public generated float get_Shininess() :35
void DefaultMaterial__get_Shininess_fn(DefaultMaterial* __this, float* __retval)
{
    *__retval = __this->Shininess();
}

// public generated void set_Shininess(float value) :35
void DefaultMaterial__set_Shininess_fn(DefaultMaterial* __this, float* value)
{
    __this->Shininess(*value);
}

// public generated float3 get_SpecularColor() :32
void DefaultMaterial__get_SpecularColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->SpecularColor();
}

// public generated void set_SpecularColor(float3 value) :32
void DefaultMaterial__set_SpecularColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value)
{
    __this->SpecularColor(*value);
}

// public generated texture2D get_SpecularMap() :58
void DefaultMaterial__get_SpecularMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->SpecularMap();
}

// public generated void set_SpecularMap(texture2D value) :58
void DefaultMaterial__set_SpecularMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->SpecularMap(value);
}

// public generated float2 get_Tiling() :38
void DefaultMaterial__get_Tiling_fn(DefaultMaterial* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Tiling();
}

// public generated void set_Tiling(float2 value) :38
void DefaultMaterial__set_Tiling_fn(DefaultMaterial* __this, ::g::Uno::Float2* value)
{
    __this->Tiling(*value);
}

// public generated float3 get_DiffuseColor() [instance] :29
::g::Uno::Float3 DefaultMaterial::DiffuseColor()
{
    return _DiffuseColor;
}

// public generated void set_DiffuseColor(float3 value) [instance] :29
void DefaultMaterial::DiffuseColor(::g::Uno::Float3 value)
{
    _DiffuseColor = value;
}

// public generated texture2D get_DiffuseMap() [instance] :52
::g::Uno::Graphics::Texture2D* DefaultMaterial::DiffuseMap()
{
    return _DiffuseMap;
}

// public generated void set_DiffuseMap(texture2D value) [instance] :52
void DefaultMaterial::DiffuseMap(::g::Uno::Graphics::Texture2D* value)
{
    _DiffuseMap = value;
}

// public generated texture2D get_NormalMap() [instance] :55
::g::Uno::Graphics::Texture2D* DefaultMaterial::NormalMap()
{
    return _NormalMap;
}

// public generated void set_NormalMap(texture2D value) [instance] :55
void DefaultMaterial::NormalMap(::g::Uno::Graphics::Texture2D* value)
{
    _NormalMap = value;
}

// public generated float2 get_Offset() [instance] :41
::g::Uno::Float2 DefaultMaterial::Offset()
{
    return _Offset;
}

// public generated void set_Offset(float2 value) [instance] :41
void DefaultMaterial::Offset(::g::Uno::Float2 value)
{
    _Offset = value;
}

// public generated float get_Shininess() [instance] :35
float DefaultMaterial::Shininess()
{
    return _Shininess;
}

// public generated void set_Shininess(float value) [instance] :35
void DefaultMaterial::Shininess(float value)
{
    _Shininess = value;
}

// public generated float3 get_SpecularColor() [instance] :32
::g::Uno::Float3 DefaultMaterial::SpecularColor()
{
    return _SpecularColor;
}

// public generated void set_SpecularColor(float3 value) [instance] :32
void DefaultMaterial::SpecularColor(::g::Uno::Float3 value)
{
    _SpecularColor = value;
}

// public generated texture2D get_SpecularMap() [instance] :58
::g::Uno::Graphics::Texture2D* DefaultMaterial::SpecularMap()
{
    return _SpecularMap;
}

// public generated void set_SpecularMap(texture2D value) [instance] :58
void DefaultMaterial::SpecularMap(::g::Uno::Graphics::Texture2D* value)
{
    _SpecularMap = value;
}

// public generated float2 get_Tiling() [instance] :38
::g::Uno::Float2 DefaultMaterial::Tiling()
{
    return _Tiling;
}

// public generated void set_Tiling(float2 value) [instance] :38
void DefaultMaterial::Tiling(::g::Uno::Float2 value)
{
    _Tiling = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// private sealed class ModelMeshCollision.Direct :1486
// {
static void ModelMeshCollision__Direct_build(uType* type)
{
    ::STRINGS[0] = uString::Const("positions can not be null");
    type->SetFields(1,
        ::g::Uno::Content::Models::VertexAttributeArray_typeof(), offsetof(::g::Fuse::Entities::ModelMeshCollision__Direct, _positions), 0);
}

::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Direct_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::TriangleMeshIntersecter_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ModelMeshCollision__Direct);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.ModelMeshCollision.Direct", options);
    type->fp_build_ = ModelMeshCollision__Direct_build;
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))ModelMeshCollision__Direct__GetTriangle_fn;
    return type;
}

// public Direct(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) :1490
void ModelMeshCollision__Direct__ctor_1_fn(ModelMeshCollision__Direct* __this, ::g::Uno::Content::Models::VertexAttributeArray* positions, int* vertexCount)
{
    __this->ctor_1(positions, *vertexCount);
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :1498
void ModelMeshCollision__Direct__GetTriangle_fn(ModelMeshCollision__Direct* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1((ind1 = uPtr(__this->_positions)->GetFloat4(i), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), (ind2 = uPtr(__this->_positions)->GetFloat4(i + 1), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), (ind3 = uPtr(__this->_positions)->GetFloat4(i + 2), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z))), void();
}

// public Direct New(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) :1490
void ModelMeshCollision__Direct__New1_fn(::g::Uno::Content::Models::VertexAttributeArray* positions, int* vertexCount, ModelMeshCollision__Direct** __retval)
{
    *__retval = ModelMeshCollision__Direct::New1(positions, *vertexCount);
}

// public Direct(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) [instance] :1490
void ModelMeshCollision__Direct::ctor_1(::g::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount)
{
    ctor_(vertexCount / 3);

    if (positions == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"positions c...*/]));

    _positions = positions;
}

// public Direct New(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) [static] :1490
ModelMeshCollision__Direct* ModelMeshCollision__Direct::New1(::g::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount)
{
    ModelMeshCollision__Direct* obj4 = (ModelMeshCollision__Direct*)uNew(ModelMeshCollision__Direct_typeof());
    obj4->ctor_1(positions, vertexCount);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// internal sealed class DirectArrayMeshIntersecter :2681
// {
static void DirectArrayMeshIntersecter_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Float3_typeof()->Array(), offsetof(::g::Fuse::Entities::DirectArrayMeshIntersecter, _positions), 0);
}

::g::Fuse::Entities::TriangleMeshIntersecter_type* DirectArrayMeshIntersecter_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::TriangleMeshIntersecter_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DirectArrayMeshIntersecter);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.DirectArrayMeshIntersecter", options);
    type->fp_build_ = DirectArrayMeshIntersecter_build;
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))DirectArrayMeshIntersecter__GetTriangle_fn;
    return type;
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :2693
void DirectArrayMeshIntersecter__GetTriangle_fn(DirectArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1(uPtr(__this->_positions)->Item< ::g::Uno::Float3>(i), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(i + 1), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(i + 2)), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class Entity :350
// {
static void Entity_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[3] = ::g::Fuse::Entities::Transform3D_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Visual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Visual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface7));
    type->SetFields(55,
        ::g::Fuse::Entities::MeshRenderer_typeof(), offsetof(::g::Fuse::Entities::Entity, _MeshRenderer), 0);
}

::g::Fuse::Visual_type* Entity_typeof()
{
    static uSStrong< ::g::Fuse::Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 56;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Entity);
    options.TypeSize = sizeof(::g::Fuse::Visual_type);
    type = (::g::Fuse::Visual_type*)uClassType::New("Fuse.Entities.Entity", options);
    type->fp_build_ = Entity_build;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))Entity__Draw_fn;
    type->fp_get_HitTestBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Entity__get_HitTestBounds_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed void Draw(Fuse.DrawContext dc) :372
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Node* ret3;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

        if (v != NULL)
            uPtr(v)->Draw(dc);
    }
}

// public override sealed Fuse.VisualBounds get_HitTestBounds() :482
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Infinite(), void();
}

// public generated Fuse.Entities.MeshRenderer get_MeshRenderer() :477
void Entity__get_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer** __retval)
{
    *__retval = __this->MeshRenderer();
}

// private generated void set_MeshRenderer(Fuse.Entities.MeshRenderer value) :477
void Entity__set_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer* value)
{
    __this->MeshRenderer(value);
}

// public Fuse.Entities.Entity get_ParentEntity() :407
void Entity__get_ParentEntity_fn(Entity* __this, Entity** __retval)
{
    *__retval = __this->ParentEntity();
}

// public Fuse.Entities.Transform3D get_Transform() :466
void Entity__get_Transform_fn(Entity* __this, ::g::Fuse::Entities::Transform3D** __retval)
{
    *__retval = __this->Transform();
}

// public float4 get_WorldRotationQuaternion() :416
void Entity__get_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->WorldRotationQuaternion();
}

// public void set_WorldRotationQuaternion(float4 value) :424
void Entity__set_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* value)
{
    __this->WorldRotationQuaternion(*value);
}

// public generated Fuse.Entities.MeshRenderer get_MeshRenderer() [instance] :477
::g::Fuse::Entities::MeshRenderer* Entity::MeshRenderer()
{
    return _MeshRenderer;
}

// private generated void set_MeshRenderer(Fuse.Entities.MeshRenderer value) [instance] :477
void Entity::MeshRenderer(::g::Fuse::Entities::MeshRenderer* value)
{
    _MeshRenderer = value;
}

// public Fuse.Entities.Entity get_ParentEntity() [instance] :407
Entity* Entity::ParentEntity()
{
    return uAs<Entity*>(Parent(), Entity_typeof());
}

// public Fuse.Entities.Transform3D get_Transform() [instance] :466
::g::Fuse::Entities::Transform3D* Entity::Transform()
{
    ::g::Fuse::Node* ret12;
    ::g::Fuse::Node* ret13;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); (i--) > 0; )
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret12), ret12), ::TYPES[3/*Fuse.Entities.Transform3D*/]))
            return uCast< ::g::Fuse::Entities::Transform3D*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret13), ret13), ::TYPES[3/*Fuse.Entities.Transform3D*/]);

    return NULL;
}

// public float4 get_WorldRotationQuaternion() [instance] :416
::g::Uno::Float4 Entity::WorldRotationQuaternion()
{
    ::g::Uno::Float3 scale, translation;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Matrix::Decompose(WorldTransform(), &scale, &rotation, &translation);
    return rotation;
}

// public void set_WorldRotationQuaternion(float4 value) [instance] :424
void Entity::WorldRotationQuaternion(::g::Uno::Float4 value)
{
    ::g::Uno::Float4 parentToAbs = (ParentEntity() != NULL) ? uPtr(ParentEntity())->WorldRotationQuaternion() : ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    ::g::Uno::Float4 absToParent = ::g::Uno::Vector::Normalize2(::g::Uno::Quaternion::Invert(parentToAbs));
    uPtr(Transform())->RotationQuaternion(::g::Uno::Quaternion::Mul(value, absToParent));
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// internal struct Entry :961
// {
static void Entry_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Entities::Mesh_typeof(), offsetof(::g::Fuse::Entities::Entry, Mesh), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Entities::Entry, World), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Entities::Entry, WorldInverse), 0);
}

uStructType* Entry_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Entry);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Entities.Entry", options);
    type->fp_build_ = Entry_build;
    return type;
}

// public Entry(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) :966
void Entry__ctor__fn(Entry* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* t, ::g::Uno::Float4x4* worldInverse)
{
    __this->ctor_(m, *t, *worldInverse);
}

// public Entry New(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) :966
void Entry__New1_fn(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* t, ::g::Uno::Float4x4* worldInverse, Entry* __retval)
{
    *__retval = Entry__New1(m, *t, *worldInverse);
}

// public Entry(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) [instance] :966
void Entry::ctor_(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 t, ::g::Uno::Float4x4 worldInverse)
{
    Mesh = m;
    World = t;
    WorldInverse = worldInverse;
}

// public Entry New(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) [static] :966
Entry Entry__New1(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 t, ::g::Uno::Float4x4 worldInverse)
{
    Entry obj1;
    obj1.ctor_(m, t, worldInverse);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// private sealed class ModelMeshCollision.Indexed :1461
// {
static void ModelMeshCollision__Indexed_build(uType* type)
{
    ::STRINGS[0] = uString::Const("positions can not be null");
    ::STRINGS[1] = uString::Const("indices can not be null");
    type->SetFields(1,
        ::g::Uno::Content::Models::IndexArray_typeof(), offsetof(::g::Fuse::Entities::ModelMeshCollision__Indexed, _indices), 0,
        ::g::Uno::Content::Models::VertexAttributeArray_typeof(), offsetof(::g::Fuse::Entities::ModelMeshCollision__Indexed, _positions), 0);
}

::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Indexed_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::TriangleMeshIntersecter_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ModelMeshCollision__Indexed);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.ModelMeshCollision.Indexed", options);
    type->fp_build_ = ModelMeshCollision__Indexed_build;
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))ModelMeshCollision__Indexed__GetTriangle_fn;
    return type;
}

// public Indexed(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) :1466
void ModelMeshCollision__Indexed__ctor_1_fn(ModelMeshCollision__Indexed* __this, ::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int* indexCount)
{
    __this->ctor_1(positions, indices, *indexCount);
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :1476
void ModelMeshCollision__Indexed__GetTriangle_fn(ModelMeshCollision__Indexed* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1((ind1 = uPtr(__this->_positions)->GetFloat4(uPtr(__this->_indices)->GetInt(i)), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), (ind2 = uPtr(__this->_positions)->GetFloat4(uPtr(__this->_indices)->GetInt(i + 1)), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), (ind3 = uPtr(__this->_positions)->GetFloat4(uPtr(__this->_indices)->GetInt(i + 2)), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z))), void();
}

// public Indexed New(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) :1466
void ModelMeshCollision__Indexed__New1_fn(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int* indexCount, ModelMeshCollision__Indexed** __retval)
{
    *__retval = ModelMeshCollision__Indexed::New1(positions, indices, *indexCount);
}

// public Indexed(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) [instance] :1466
void ModelMeshCollision__Indexed::ctor_1(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ctor_(indexCount / 3);

    if (positions == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"positions c...*/]));

    if (indices == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"indices can...*/]));

    _positions = positions;
    _indices = indices;
}

// public Indexed New(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) [static] :1466
ModelMeshCollision__Indexed* ModelMeshCollision__Indexed::New1(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ModelMeshCollision__Indexed* obj4 = (ModelMeshCollision__Indexed*)uNew(ModelMeshCollision__Indexed_typeof());
    obj4->ctor_1(positions, indices, indexCount);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// internal sealed class IndexedArrayMeshIntersecter :2703
// {
static void IndexedArrayMeshIntersecter_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Int_typeof()->Array(), offsetof(::g::Fuse::Entities::IndexedArrayMeshIntersecter, _indices), 0,
        ::g::Uno::Float3_typeof()->Array(), offsetof(::g::Fuse::Entities::IndexedArrayMeshIntersecter, _positions), 0);
}

::g::Fuse::Entities::TriangleMeshIntersecter_type* IndexedArrayMeshIntersecter_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::TriangleMeshIntersecter_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IndexedArrayMeshIntersecter);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.IndexedArrayMeshIntersecter", options);
    type->fp_build_ = IndexedArrayMeshIntersecter_build;
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))IndexedArrayMeshIntersecter__GetTriangle_fn;
    return type;
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :2718
void IndexedArrayMeshIntersecter__GetTriangle_fn(IndexedArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1(uPtr(__this->_positions)->Item< ::g::Uno::Float3>(uPtr(__this->_indices)->Item<int>(i)), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(uPtr(__this->_indices)->Item<int>(i + 1)), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(uPtr(__this->_indices)->Item<int>(i + 2))), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class Material :819
// {
static void Material_build(uType* type)
{
    type->SetFields(1);
}

uType* Material_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Material);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Material", options);
    type->fp_build_ = Material_build;
    return type;
}

// public bool Draw(Fuse.Entities.Mesh m, float4x4 transform) :826
void Material__Draw_fn(Material* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* transform, bool* __retval)
{
    *__retval = __this->Draw(m, *transform);
}

// public bool get_IsBatchable() :823
void Material__get_IsBatchable_fn(Material* __this, bool* __retval)
{
    *__retval = __this->IsBatchable();
}

// public bool Draw(Fuse.Entities.Mesh m, float4x4 transform) [instance] :826
bool Material::Draw(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 transform)
{
    return false;
}

// public bool get_IsBatchable() [instance] :823
bool Material::IsBatchable()
{
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class Mesh :849
// {
static void Mesh_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Drawing::Batching::Batch_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Batching::Batch_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mesh_type, interface0));
    type->SetFields(0,
        ::g::Uno::Content::Models::ModelDrawable_typeof(), offsetof(::g::Fuse::Entities::Mesh, _drawable), 0,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshBox), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshBoxDirty), 0,
        ::g::Uno::Geometry::Sphere_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshSphere), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshSphereDirty), 0,
        ::g::Fuse::Drawing::Batching::MeshBatcher_typeof(), offsetof(::g::Fuse::Entities::Mesh, batcher), 0,
        ::g::Fuse::Drawing::Batching::Batch_typeof()->Array(), offsetof(::g::Fuse::Entities::Mesh, batches), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Mesh, isDirty), 0);
}

Mesh_type* Mesh_typeof()
{
    static uSStrong<Mesh_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mesh);
    options.TypeSize = sizeof(Mesh_type);
    type = (Mesh_type*)uClassType::New("Fuse.Entities.Mesh", options);
    type->fp_build_ = Mesh_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Mesh__Dispose_fn;
    return type;
}

// public Fuse.Drawing.Batching.Batch[] get_Batches() :899
void Mesh__get_Batches_fn(Mesh* __this, uArray** __retval)
{
    *__retval = __this->Batches();
}

// public Uno.Geometry.Box get_BoundingBox() :870
void Mesh__get_BoundingBox_fn(Mesh* __this, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = __this->BoundingBox();
}

// public Uno.Geometry.Sphere get_BoundingSphere() :886
void Mesh__get_BoundingSphere_fn(Mesh* __this, ::g::Uno::Geometry::Sphere* __retval)
{
    *__retval = __this->BoundingSphere();
}

// public void Dispose() :863
void Mesh__Dispose_fn(Mesh* __this)
{
    __this->Dispose();
}

// public void Flush() :925
void Mesh__Flush_fn(Mesh* __this)
{
    __this->Flush();
}

// internal Uno.Content.Models.ModelMesh get_ModelMesh() :854
void Mesh__get_ModelMesh_fn(Mesh* __this, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = __this->ModelMesh();
}

// public Fuse.Drawing.Batching.Batch[] get_Batches() [instance] :899
uArray* Mesh::Batches()
{
    if (isDirty)
        Flush();

    uArray* ind1 = batches;
    return (ind1 != NULL) ? ind1 : (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[5/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.Batching.Batch>*/], uPtr(batcher)->Batches());
}

// public Uno.Geometry.Box get_BoundingBox() [instance] :870
::g::Uno::Geometry::Box Mesh::BoundingBox()
{
    if (_meshBoxDirty)
    {
        _meshBox = ::g::Fuse::Entities::ModelMeshHelpers::CalculateAABB(ModelMesh());
        _meshBoxDirty = false;
    }

    return _meshBox;
}

// public Uno.Geometry.Sphere get_BoundingSphere() [instance] :886
::g::Uno::Geometry::Sphere Mesh::BoundingSphere()
{
    if (_meshSphereDirty)
    {
        _meshSphere = ::g::Fuse::Entities::ModelMeshHelpers::CalculateBoundingSphere(ModelMesh());
        _meshSphereDirty = false;
    }

    return _meshSphere;
}

// public void Dispose() [instance] :863
void Mesh::Dispose()
{
}

// public void Flush() [instance] :925
void Mesh::Flush()
{
    if (!isDirty)
        return;

    if (((ModelMesh() != NULL) && (uPtr(ModelMesh())->Indices() != NULL)) && (uPtr(uPtr(ModelMesh())->Indices())->Type() == 4))
    {
        batcher = ::g::Fuse::Drawing::Batching::MeshBatcher::New1();
        uPtr(batcher)->AddMesh(ModelMesh());
        uPtr(batcher)->Flush();
        batches = NULL;
    }
    else
    {
        batcher = NULL;
        batches = uArray::Init< ::g::Fuse::Drawing::Batching::Batch*>(::TYPES[4/*Fuse.Drawing.Batching.Batch[]*/], 1, (::g::Fuse::Drawing::Batching::Batch*)::g::Fuse::Drawing::Batching::BatchHelpers::CreateSingleBatch(ModelMesh()));
    }

    isDirty = false;
    _meshBoxDirty = true;
    _meshSphereDirty = true;
}

// internal Uno.Content.Models.ModelMesh get_ModelMesh() [instance] :854
::g::Uno::Content::Models::ModelMesh* Mesh::ModelMesh()
{
    return uPtr(_drawable)->Mesh();
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class MeshBatchingEngine :974
// {
static void MeshBatchingEngine_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Fuse::Drawing::Batching::MeshBatcher_typeof());
    ::TYPES[8] = ::g::Uno::Float4x4_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof());
    ::TYPES[10] = ::g::Fuse::Entities::DefaultMaterial_typeof();
    ::TYPES[11] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[12] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[13] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Batching::Batch_typeof());
    ::TYPES[14] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof());
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[16] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[17] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[18] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[19] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    type->SetInterfaces(
        ::g::Fuse::IFlush_typeof(), offsetof(MeshBatchingEngine_type, interface0));
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, _draw_7fcd3d8c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, _draw_d0a2ecf2), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Fuse::Drawing::Batching::MeshBatcher_typeof()), offsetof(::g::Fuse::Entities::MeshBatchingEngine, batchers), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof())), offsetof(::g::Fuse::Entities::MeshBatchingEngine, drawLists), 0,
        ::g::Uno::Float4x4_typeof()->Array(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, normalArray), 0,
        ::g::Uno::Float4x4_typeof()->Array(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, worldArray), 0,
        MeshBatchingEngine_typeof(), (uintptr_t)&::g::Fuse::Entities::MeshBatchingEngine::_singleton_, uFieldFlagsStatic);
}

MeshBatchingEngine_type* MeshBatchingEngine_typeof()
{
    static uSStrong<MeshBatchingEngine_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MeshBatchingEngine);
    options.TypeSize = sizeof(MeshBatchingEngine_type);
    type = (MeshBatchingEngine_type*)uClassType::New("Fuse.Entities.MeshBatchingEngine", options);
    type->fp_build_ = MeshBatchingEngine_build;
    type->fp_ctor_ = (void*)MeshBatchingEngine__New1_fn;
    type->interface0.fp_Flush = (void(*)(uObject*, ::g::Fuse::DrawContext*))MeshBatchingEngine__Flush_fn;
    return type;
}

// public generated MeshBatchingEngine() :974
void MeshBatchingEngine__ctor__fn(MeshBatchingEngine* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Entities.Mesh mesh, float4x4 transform, Fuse.Entities.Material material) :985
void MeshBatchingEngine__Draw_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4* transform, ::g::Fuse::Entities::Material* material)
{
    __this->Draw(dc, mesh, *transform, material);
}

// private void DrawBatch(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.Batch batch, float4x4 world, float4x4 worldInverse) :1185
void MeshBatchingEngine__DrawBatch_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::Batch* batch, ::g::Uno::Float4x4* world, ::g::Uno::Float4x4* worldInverse)
{
    __this->DrawBatch(dc, material, batch, *world, *worldInverse);
}

// private void DrawBatched(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.MeshBatcher batcher, Uno.Collections.List<Fuse.Entities.Entry> entries) :1118
void MeshBatchingEngine__DrawBatched_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::MeshBatcher* batcher, ::g::Uno::Collections::List* entries)
{
    __this->DrawBatched(dc, material, batcher, entries);
}

// private void DrawIndividual(Fuse.DrawContext dc, Fuse.Entities.Material m, Uno.Collections.List<Fuse.Entities.Entry> entries) :1169
void MeshBatchingEngine__DrawIndividual_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Uno::Collections::List* entries)
{
    __this->DrawIndividual(dc, m, entries);
}

// private void DrawList(Fuse.DrawContext dc, Fuse.Entities.Material material, Uno.Collections.List<Fuse.Entities.Entry> entries) :1014
void MeshBatchingEngine__DrawList_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Uno::Collections::List* entries)
{
    __this->DrawList(dc, material, entries);
}

// private void DrawMesh(Fuse.DrawContext dc, Fuse.Entities.Material m, Fuse.Entities.Mesh mesh, float4x4 world, float4x4 worldInverse) :1177
void MeshBatchingEngine__DrawMesh_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4* world, ::g::Uno::Float4x4* worldInverse)
{
    __this->DrawMesh(dc, m, mesh, *world, *worldInverse);
}

// private Fuse.Drawing.Batching.MeshBatcher FindOrCreateBatcher(Fuse.Entities.Mesh mesh) :1052
void MeshBatchingEngine__FindOrCreateBatcher_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* mesh, ::g::Fuse::Drawing::Batching::MeshBatcher** __retval)
{
    *__retval = __this->FindOrCreateBatcher(mesh);
}

// public void Flush(Fuse.DrawContext dc) :1004
void MeshBatchingEngine__Flush_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Flush(dc);
}

// private generated void init_DrawCalls() :974
void MeshBatchingEngine__init_DrawCalls_fn(MeshBatchingEngine* __this)
{
    __this->init_DrawCalls();
}

// private int MeshVertexCount(Fuse.Entities.Mesh mesh) :1047
void MeshBatchingEngine__MeshVertexCount_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* mesh, int* __retval)
{
    *__retval = __this->MeshVertexCount(mesh);
}

// public generated MeshBatchingEngine New() :974
void MeshBatchingEngine__New1_fn(MeshBatchingEngine** __retval)
{
    *__retval = MeshBatchingEngine::New1();
}

// public static Fuse.Entities.MeshBatchingEngine get_Singleton() :979
void MeshBatchingEngine__get_Singleton_fn(MeshBatchingEngine** __retval)
{
    *__retval = MeshBatchingEngine::Singleton();
}

uSStrong<MeshBatchingEngine*> MeshBatchingEngine::_singleton_;

// public generated MeshBatchingEngine() [instance] :974
void MeshBatchingEngine::ctor_()
{
    drawLists = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
    batchers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Fuse.Drawing.Batching.MeshBatcher>*/]));
    worldArray = uArray::New(::TYPES[8/*float4x4[]*/], 16);
    normalArray = uArray::New(::TYPES[8/*float4x4[]*/], 16);
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Entities.Mesh mesh, float4x4 transform, Fuse.Entities.Material material) [instance] :985
void MeshBatchingEngine::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4 transform, ::g::Fuse::Entities::Material* material)
{
    bool ret9;

    if (!uPtr(material)->IsBatchable())
        Flush(dc);

    ::g::Uno::Collections::List* list;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(drawLists), material, (void**)(&list), &ret9), ret9))
    {
        list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[9/*Uno.Collections.List<Fuse.Entities.Entry>*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(drawLists), material, list);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(list), uCRef(::g::Fuse::Entities::Entry__New1(mesh, transform, ::g::Uno::Matrix::Invert2(transform))));
    uPtr(dc)->AddFlushListener((uObject*)this);
}

// private void DrawBatch(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.Batch batch, float4x4 world, float4x4 worldInverse) [instance] :1185
void MeshBatchingEngine::DrawBatch(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::Batch* batch, ::g::Uno::Float4x4 world, ::g::Uno::Float4x4 worldInverse)
{
    if (uIs(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))
    {
        _draw_7fcd3d8c.Const(0, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap() != NULL);
        _draw_7fcd3d8c.Const(1, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->NormalMap() != NULL);
        _draw_7fcd3d8c.Const(2, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap() != NULL);
        _draw_7fcd3d8c.Use();
        _draw_7fcd3d8c.Attrib1(3, uPtr(uPtr(batch)->Positions())->DataType(), uPtr(uPtr(batch)->Positions())->VertexBuffer(), uPtr(uPtr(batch)->Positions())->StrideInBytes(), 0);
        _draw_7fcd3d8c.Attrib1(4, uPtr(batch->TexCoord0s())->DataType(), uPtr(batch->TexCoord0s())->VertexBuffer(), uPtr(batch->TexCoord0s())->StrideInBytes(), 0);
        _draw_7fcd3d8c.Attrib1(5, uPtr(batch->Tangents())->DataType(), uPtr(batch->Tangents())->VertexBuffer(), uPtr(batch->Tangents())->StrideInBytes(), 0);
        _draw_7fcd3d8c.Attrib1(6, uPtr(batch->Normals())->DataType(), uPtr(batch->Normals())->VertexBuffer(), uPtr(batch->Normals())->StrideInBytes(), 0);
        _draw_7fcd3d8c.Uniform2(7, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->Tiling());
        _draw_7fcd3d8c.Uniform2(8, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->Offset());
        _draw_7fcd3d8c.Uniform6(9, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->DiffuseColor());
        _draw_7fcd3d8c.Uniform6(10, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->SpecularColor());
        _draw_7fcd3d8c.Uniform12(11, world);
        _draw_7fcd3d8c.Uniform6(12, (((dc != NULL) ? (uObject*)uPtr(dc)->Viewport() : NULL) != NULL) ? ::g::Fuse::IRenderViewport::ViewOrigin(uInterface(uPtr((dc != NULL) ? (uObject*)uPtr(dc)->Viewport() : NULL), ::TYPES[11/*Fuse.IRenderViewport*/])) : ::g::Uno::Float3__New2(100.0f, 100.0f, 100.0f));
        _draw_7fcd3d8c.Uniform(13, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->Shininess());
        _draw_7fcd3d8c.Uniform12(14, ::g::Uno::Matrix::Mul8(world, (((dc != NULL) ? (uObject*)dc->Viewport() : NULL) != NULL) ? ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr((dc != NULL) ? (uObject*)dc->Viewport() : NULL), ::TYPES[11/*Fuse.IRenderViewport*/])) : ::g::Uno::Matrix::Mul8((((dc != NULL) ? (uObject*)dc->Viewport() : NULL) != NULL) ? ::g::Fuse::ICommonViewport::ViewTransform(uInterface(uPtr((dc != NULL) ? (uObject*)dc->Viewport() : NULL), ::TYPES[12/*Fuse.ICommonViewport*/])) : ::g::Uno::Float4x4__Identity(), (((dc != NULL) ? (uObject*)dc->Viewport() : NULL) != NULL) ? ::g::Fuse::IRenderViewport::ProjectionTransform(uInterface(uPtr((dc != NULL) ? (uObject*)dc->Viewport() : NULL), ::TYPES[11/*Fuse.IRenderViewport*/])) : ::g::Uno::Float4x4__Identity())));
        _draw_7fcd3d8c.Uniform12(15, ::g::Uno::Matrix::Transpose2(worldInverse));
        _draw_7fcd3d8c.Sampler3(16, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
        _draw_7fcd3d8c.Sampler3(17, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->NormalMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
        _draw_7fcd3d8c.Sampler3(18, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
        _draw_7fcd3d8c.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
    }
}

// private void DrawBatched(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.MeshBatcher batcher, Uno.Collections.List<Fuse.Entities.Entry> entries) [instance] :1118
void MeshBatchingEngine::DrawBatched(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::MeshBatcher* batcher, ::g::Uno::Collections::List* entries)
{
    ::g::Fuse::Entities::Entry ret10;
    ::g::Fuse::Entities::Entry ret11;
    ::g::Fuse::Drawing::Batching::Batch* ret12;
    ::g::Fuse::Entities::Entry ret13;

    for (int k = 0; k < 16; k++)
        uPtr(worldArray)->Item< ::g::Uno::Float4x4>(k) = ::g::Uno::Float4x4__New1(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);

    int bc = 0;

    for (int i = 0; i < uPtr(entries)->Count(); i++)
    {
        uPtr(worldArray)->Item< ::g::Uno::Float4x4>(bc) = (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret10), ret10).World;
        uPtr(normalArray)->Item< ::g::Uno::Float4x4>(bc) = (::g::Uno::Collections::List__get_Item_fn(entries, uCRef<int>(i), &ret11), ret11).WorldInverse;
        bc++;

        if ((bc >= (uPtr(batcher)->EntryCount() - 1)) || (i == (entries->Count() - 1)))
        {
            ::g::Fuse::Drawing::Batching::Batch* batch = (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[13/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Drawing.Batching.Batch>*/], uPtr(batcher)->Batches(), &ret12), ret12);

            if (batch != NULL)
            {
                int vc = bc * MeshVertexCount((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(0), &ret13), ret13).Mesh);

                if (uIs(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))
                {
                    _draw_d0a2ecf2.Const(0, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap() != NULL);
                    _draw_d0a2ecf2.Const(1, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->NormalMap() != NULL);
                    _draw_d0a2ecf2.Const(2, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap() != NULL);
                    _draw_d0a2ecf2.Use();
                    _draw_d0a2ecf2.Attrib1(3, uPtr(uPtr(batch)->Positions())->DataType(), uPtr(uPtr(batch)->Positions())->VertexBuffer(), uPtr(uPtr(batch)->Positions())->StrideInBytes(), 0);
                    _draw_d0a2ecf2.Attrib1(4, uPtr(batch->InstanceIndices())->DataType(), uPtr(batch->InstanceIndices())->VertexBuffer(), uPtr(batch->InstanceIndices())->StrideInBytes(), 0);
                    _draw_d0a2ecf2.Attrib1(5, uPtr(batch->TexCoord0s())->DataType(), uPtr(batch->TexCoord0s())->VertexBuffer(), uPtr(batch->TexCoord0s())->StrideInBytes(), 0);
                    _draw_d0a2ecf2.Attrib1(6, uPtr(batch->Tangents())->DataType(), uPtr(batch->Tangents())->VertexBuffer(), uPtr(batch->Tangents())->StrideInBytes(), 0);
                    _draw_d0a2ecf2.Attrib1(7, uPtr(batch->Normals())->DataType(), uPtr(batch->Normals())->VertexBuffer(), uPtr(batch->Normals())->StrideInBytes(), 0);
                    _draw_d0a2ecf2.Uniform13(8, uArray::Init< ::g::Uno::Float4x4>(::TYPES[8/*float4x4[]*/], 16, uPtr(worldArray)->Item< ::g::Uno::Float4x4>(0), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(1), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(2), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(3), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(4), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(5), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(6), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(7), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(8), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(9), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(10), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(11), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(12), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(13), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(14), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(15)));
                    _draw_d0a2ecf2.Uniform2(9, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->Tiling());
                    _draw_d0a2ecf2.Uniform2(10, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->Offset());
                    _draw_d0a2ecf2.Uniform6(11, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->DiffuseColor());
                    _draw_d0a2ecf2.Uniform13(12, uArray::Init< ::g::Uno::Float4x4>(::TYPES[8/*float4x4[]*/], 16, uPtr(normalArray)->Item< ::g::Uno::Float4x4>(0), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(1), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(2), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(3), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(4), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(5), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(6), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(7), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(8), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(9), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(10), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(11), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(12), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(13), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(14), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(15)));
                    _draw_d0a2ecf2.Uniform6(13, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->SpecularColor());
                    _draw_d0a2ecf2.Uniform6(14, (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IRenderViewport::ViewOrigin(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[11/*Fuse.IRenderViewport*/])) : ::g::Uno::Float3__New2(100.0f, 100.0f, 100.0f));
                    _draw_d0a2ecf2.Uniform(15, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->Shininess());
                    _draw_d0a2ecf2.Uniform12(16, (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[11/*Fuse.IRenderViewport*/])) : ::g::Uno::Matrix::Mul8((((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::ICommonViewport::ViewTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[12/*Fuse.ICommonViewport*/])) : ::g::Uno::Float4x4__Identity(), (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IRenderViewport::ProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[11/*Fuse.IRenderViewport*/])) : ::g::Uno::Float4x4__Identity()));
                    _draw_d0a2ecf2.Sampler3(17, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
                    _draw_d0a2ecf2.Sampler3(18, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->NormalMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
                    _draw_d0a2ecf2.Sampler3(19, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[10/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
                    _draw_d0a2ecf2.Draw(vc, batch->IndexType(), batch->IndexBuffer());
                }
            }

            bc = 0;

            for (int k1 = 0; k1 < 16; k1++)
                uPtr(worldArray)->Item< ::g::Uno::Float4x4>(k1) = ::g::Uno::Float4x4__New1(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        }
    }
}

// private void DrawIndividual(Fuse.DrawContext dc, Fuse.Entities.Material m, Uno.Collections.List<Fuse.Entities.Entry> entries) [instance] :1169
void MeshBatchingEngine::DrawIndividual(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Uno::Collections::List* entries)
{
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Entities::Entry> ret14;

    for (::g::Uno::Collections::List__Enumerator< ::g::Fuse::Entities::Entry> enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(entries), &ret14), ret14); enum3.MoveNext(::TYPES[14/*Uno.Collections.List<Fuse.Entities.Entry>.Enumerator*/]); )
    {
        ::g::Fuse::Entities::Entry e = enum3.Current(::TYPES[14/*Uno.Collections.List<Fuse.Entities.Entry>.Enumerator*/]);
        DrawMesh(dc, m, e.Mesh, e.World, e.WorldInverse);
    }
}

// private void DrawList(Fuse.DrawContext dc, Fuse.Entities.Material material, Uno.Collections.List<Fuse.Entities.Entry> entries) [instance] :1014
void MeshBatchingEngine::DrawList(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Uno::Collections::List* entries)
{
    bool ret15;
    ::g::Fuse::Entities::Entry ret16;
    ::g::Fuse::Entities::Entry ret17;
    ::g::Uno::Collections::List* ret18;
    ::g::Fuse::Entities::Entry ret19;
    ::g::Fuse::Entities::Entry ret20;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Mesh*>, uStrong< ::g::Uno::Collections::List*> > ret21;

    if (uPtr(entries)->Count() > 2)
    {
        ::g::Uno::Collections::Dictionary* meshCounts = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]);

        for (int i = 0; i < uPtr(entries)->Count(); i++)
        {
            if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(meshCounts), (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret16), ret16).Mesh, &ret15), ret15))
                ::g::Uno::Collections::Dictionary__Add_fn(uPtr(meshCounts), (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret17), ret17).Mesh, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[9/*Uno.Collections.List<Fuse.Entities.Entry>*/]));

            ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(meshCounts), (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret19), ret19).Mesh, &ret18), ret18)), uCRef((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret20), ret20)));
        }

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Mesh*>, uStrong< ::g::Uno::Collections::List*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(meshCounts, &ret21), ret21); enum2.MoveNext(::TYPES[16/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Entities::Mesh*>, uStrong< ::g::Uno::Collections::List*> > p = enum2.Current(::TYPES[16/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]);

            if ((uPtr(uPtr(p.Key(::TYPES[17/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]))->ModelMesh())->VertexCount() > 20000) || (uPtr(p.Value(::TYPES[17/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]))->Count() < 3))
                DrawIndividual(dc, material, p.Value(::TYPES[17/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
            else
            {
                ::g::Fuse::Drawing::Batching::MeshBatcher* batcher = FindOrCreateBatcher(p.Key(::TYPES[17/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
                DrawBatched(dc, material, batcher, p.Value(::TYPES[17/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
            }
        }
    }
    else
        DrawIndividual(dc, material, entries);
}

// private void DrawMesh(Fuse.DrawContext dc, Fuse.Entities.Material m, Fuse.Entities.Mesh mesh, float4x4 world, float4x4 worldInverse) [instance] :1177
void MeshBatchingEngine::DrawMesh(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4 world, ::g::Uno::Float4x4 worldInverse)
{
    uArray* array4;
    int index5;
    int length6;

    for (array4 = uPtr(mesh)->Batches(), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
    {
        ::g::Fuse::Drawing::Batching::Batch* b = uPtr(array4)->Strong< ::g::Fuse::Drawing::Batching::Batch*>(index5);
        DrawBatch(dc, m, b, world, worldInverse);
    }
}

// private Fuse.Drawing.Batching.MeshBatcher FindOrCreateBatcher(Fuse.Entities.Mesh mesh) [instance] :1052
::g::Fuse::Drawing::Batching::MeshBatcher* MeshBatchingEngine::FindOrCreateBatcher(::g::Fuse::Entities::Mesh* mesh)
{
    bool ret22;
    ::g::Fuse::Drawing::Batching::MeshBatcher* batcher;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(batchers), mesh, (void**)(&batcher), &ret22), ret22))
    {
        batcher = ::g::Fuse::Drawing::Batching::MeshBatcher::New1();
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(batchers), mesh, batcher);
        int instanceCount = ::g::Uno::Math::Min8(16, 65535 / ::g::Uno::Math::Max8(1, MeshVertexCount(mesh)));

        for (int i = 0; i < instanceCount; i++)
            uPtr(batcher)->AddMesh(uPtr(mesh)->ModelMesh());

        batcher->Flush();
    }

    return batcher;
}

// public void Flush(Fuse.DrawContext dc) [instance] :1004
void MeshBatchingEngine::Flush(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Material*>, uStrong< ::g::Uno::Collections::List*> > ret23;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Material*>, uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(drawLists), &ret23), ret23); enum1.MoveNext(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Entities::Material*>, uStrong< ::g::Uno::Collections::List*> > p = enum1.Current(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]);
        DrawList(dc, p.Key(::TYPES[19/*Uno.Collections.KeyValuePair<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>*/]), p.Value(::TYPES[19/*Uno.Collections.KeyValuePair<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
    }

    uPtr(drawLists)->Clear();
}

// private generated void init_DrawCalls() [instance] :974
void MeshBatchingEngine::init_DrawCalls()
{
    _draw_d0a2ecf2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::MeshBatchingEngine64346c9e());
    _draw_7fcd3d8c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::MeshBatchingEngine7f2c79e4());
}

// private int MeshVertexCount(Fuse.Entities.Mesh mesh) [instance] :1047
int MeshBatchingEngine::MeshVertexCount(::g::Fuse::Entities::Mesh* mesh)
{
    return (uPtr(uPtr(mesh)->ModelMesh())->IndexCount() != -1) ? uPtr(uPtr(mesh)->ModelMesh())->IndexCount() : uPtr(uPtr(mesh)->ModelMesh())->VertexCount();
}

// public generated MeshBatchingEngine New() [static] :974
MeshBatchingEngine* MeshBatchingEngine::New1()
{
    MeshBatchingEngine* obj8 = (MeshBatchingEngine*)uNew(MeshBatchingEngine_typeof());
    obj8->ctor_();
    return obj8;
}

// public static Fuse.Entities.MeshBatchingEngine get_Singleton() [static] :979
MeshBatchingEngine* MeshBatchingEngine::Singleton()
{
    MeshBatchingEngine* ind7 = MeshBatchingEngine::_singleton_;
    return (ind7 != NULL) ? ind7 : (MeshBatchingEngine*)(MeshBatchingEngine::_singleton_ = MeshBatchingEngine::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public enum MeshHitTestMode :1218
uEnumType* MeshHitTestMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Entities.MeshHitTestMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "BoundingBox", 1LL,
        "BoundingSphere", 2LL,
        "Precise", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class MeshRenderer :1226
// {
static void MeshRenderer_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Entities::Entity_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Visual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Visual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface7));
    type->SetFields(55,
        ::g::Fuse::Entities::MeshHitTestMode_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _hitTestMode), 0,
        ::g::Fuse::Entities::Material_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _material), 0,
        ::g::Fuse::Entities::Mesh_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _mesh), 0);
}

::g::Fuse::Visual_type* MeshRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 58;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(MeshRenderer);
    options.TypeSize = sizeof(::g::Fuse::Visual_type);
    type = (::g::Fuse::Visual_type*)uClassType::New("Fuse.Entities.MeshRenderer", options);
    type->fp_build_ = MeshRenderer_build;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))MeshRenderer__Draw_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))MeshRenderer__get_HitTestLocalBounds_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*))MeshRenderer__OnHitTest_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed void Draw(Fuse.DrawContext dc) :1347
void MeshRenderer__Draw_fn(MeshRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Validate();

    if (__this->_mesh == NULL)
        return;

    if (__this->Material() == NULL)
        return;

    ::g::Uno::Float4x4 m = uPtr(__this->Entity())->WorldTransform();

    if (!uPtr(__this->Material())->Draw(__this->_mesh, m))
    {
        uPtr(::g::Fuse::Entities::MeshBatchingEngine::Singleton())->Draw(dc, __this->_mesh, m, __this->Material());
        uPtr(dc)->Flush();
    }
}

// public Fuse.Entities.Entity get_Entity() :1241
void MeshRenderer__get_Entity_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Entity();
}

// protected override sealed Fuse.VisualBounds get_HitTestLocalBounds() :1279
void MeshRenderer__get_HitTestLocalBounds_fn(MeshRenderer* __this, ::g::Fuse::VisualBounds** __retval)
{
    if ((__this->HitTestMode() == 0) || (__this->_mesh == NULL))
        return *__retval = ::g::Fuse::VisualBounds::Empty(), void();

    return *__retval = ::g::Fuse::VisualBounds::Infinite(), void();
}

// public Fuse.Entities.MeshHitTestMode get_HitTestMode() :1246
void MeshRenderer__get_HitTestMode_fn(MeshRenderer* __this, int* __retval)
{
    *__retval = __this->HitTestMode();
}

// public void set_HitTestMode(Fuse.Entities.MeshHitTestMode value) :1247
void MeshRenderer__set_HitTestMode_fn(MeshRenderer* __this, int* value)
{
    __this->HitTestMode(*value);
}

// public Fuse.Entities.Material get_Material() :1257
void MeshRenderer__get_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material** __retval)
{
    *__retval = __this->Material();
}

// public void set_Material(Fuse.Entities.Material value) :1271
void MeshRenderer__set_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material* value)
{
    __this->Material(value);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext args) :1287
void MeshRenderer__OnHitTest_fn(MeshRenderer* __this, ::g::Fuse::HitTestContext* args)
{
    if (__this->HitTestMode() == 0)
        return;

    if (__this->_mesh == NULL)
        return;

    ::g::Uno::Geometry::Ray worldRay = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(__this->Viewport()), ::TYPES[20/*Fuse.IViewport*/]), uPtr(args)->WindowPoint());
    ::g::Uno::Geometry::Ray objRay = ::g::Uno::Geometry::Ray__Transform(worldRay, uPtr(__this->Entity())->WorldTransformInverse());
    float distance;
    bool hit = ::g::Uno::Geometry::Collision::RayIntersectsBox(objRay, uPtr(__this->_mesh)->BoundingBox(), &distance);

    if (hit)
    {
        if (__this->HitTestMode() == 2)
            hit = ::g::Uno::Geometry::Collision::RayIntersectsSphere(objRay, uPtr(__this->_mesh)->BoundingSphere(), &distance);
        else if (__this->HitTestMode() == 3)
            hit = ::g::Fuse::Entities::ModelMeshCollision::RayIntersectsModelMesh(objRay, uPtr(__this->_mesh)->ModelMesh(), &distance);

        ::g::Uno::Float3 hitPoint = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(objRay.Position, ::g::Uno::Float3__op_Multiply1(objRay.Direction, distance)), uPtr(__this->Entity())->WorldTransform());
        float dist = ::g::Uno::Vector::Length1(::g::Uno::Float3__op_Subtraction2(hitPoint, uPtr(args)->WorldRay().Position));

        if (hit)
            uPtr(args)->Hit1(__this->Entity(), dist);
    }
}

// protected void Validate() :1345
void MeshRenderer__Validate_fn(MeshRenderer* __this)
{
    __this->Validate();
}

// public Fuse.Entities.Entity get_Entity() [instance] :1241
::g::Fuse::Entities::Entity* MeshRenderer::Entity()
{
    return uCast< ::g::Fuse::Entities::Entity*>(Parent(), ::TYPES[21/*Fuse.Entities.Entity*/]);
}

// public Fuse.Entities.MeshHitTestMode get_HitTestMode() [instance] :1246
int MeshRenderer::HitTestMode()
{
    return _hitTestMode;
}

// public void set_HitTestMode(Fuse.Entities.MeshHitTestMode value) [instance] :1247
void MeshRenderer::HitTestMode(int value)
{
    _hitTestMode = value;
}

// public Fuse.Entities.Material get_Material() [instance] :1257
::g::Fuse::Entities::Material* MeshRenderer::Material()
{
    if (_material != NULL)
        return _material;

    ::g::Fuse::Entities::Entity* e = Entity();

    while (e != NULL)
    {
        e = uPtr(e)->ParentEntity();

        if ((e != NULL) && (e->MeshRenderer() != NULL))
            return uPtr(uPtr(e)->MeshRenderer())->Material();
    }

    return NULL;
}

// public void set_Material(Fuse.Entities.Material value) [instance] :1271
void MeshRenderer::Material(::g::Fuse::Entities::Material* value)
{
    _material = value;
}

// protected void Validate() [instance] :1345
void MeshRenderer::Validate()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// internal sealed class ModelMeshCollision :1448
// {
static void ModelMeshCollision_build(uType* type)
{
    ::STRINGS[2] = uString::Const("modelMesh can not be null");
}

uType* ModelMeshCollision_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModelMeshCollision);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.ModelMeshCollision", options);
    type->fp_build_ = ModelMeshCollision_build;
    return type;
}

// public static bool RayIntersectsModelMesh(Uno.Geometry.Ray objRay, Uno.Content.Models.ModelMesh modelMesh, float& outDistance) :1450
void ModelMeshCollision__RayIntersectsModelMesh_fn(::g::Uno::Geometry::Ray* objRay, ::g::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance, bool* __retval)
{
    *__retval = ModelMeshCollision::RayIntersectsModelMesh(*objRay, modelMesh, outDistance);
}

// public static bool RayIntersectsModelMesh(Uno.Geometry.Ray objRay, Uno.Content.Models.ModelMesh modelMesh, float& outDistance) [static] :1450
bool ModelMeshCollision::RayIntersectsModelMesh(::g::Uno::Geometry::Ray objRay, ::g::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance)
{
    if (modelMesh == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"modelMesh c...*/]));

    bool useIndices = uPtr(modelMesh)->IndexCount() > 0;
    return useIndices ? ModelMeshCollision__Indexed::New1(modelMesh->Positions(), modelMesh->Indices(), modelMesh->IndexCount())->IntersectsRay(objRay, outDistance) : ModelMeshCollision__Direct::New1(modelMesh->Positions(), modelMesh->VertexCount())->IntersectsRay(objRay, outDistance);
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// internal static class ModelMeshHelpers :1519
// {
static void ModelMeshHelpers_build(uType* type)
{
}

uClassType* ModelMeshHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Entities.ModelMeshHelpers", options);
    type->fp_build_ = ModelMeshHelpers_build;
    return type;
}

// public static Uno.Geometry.Box CalculateAABB(Uno.Content.Models.ModelMesh modelMesh) :1521
void ModelMeshHelpers__CalculateAABB_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = ModelMeshHelpers::CalculateAABB(modelMesh);
}

// public static Uno.Geometry.Sphere CalculateBoundingSphere(Uno.Content.Models.ModelMesh modelMesh) :1535
void ModelMeshHelpers__CalculateBoundingSphere_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, ::g::Uno::Geometry::Sphere* __retval)
{
    *__retval = ModelMeshHelpers::CalculateBoundingSphere(modelMesh);
}

// public static Uno.Geometry.Box CalculateAABB(Uno.Content.Models.ModelMesh modelMesh) [static] :1521
::g::Uno::Geometry::Box ModelMeshHelpers::CalculateAABB(::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    ::g::Uno::Content::Models::VertexAttributeArray* positions = uPtr(modelMesh)->Positions();
    ::g::Uno::Float3 min = ::g::Uno::Float3__New2(3.402823e+38f, 3.402823e+38f, 3.402823e+38f);
    ::g::Uno::Float3 max = ::g::Uno::Float3__New2(-3.402823e+38f, -3.402823e+38f, -3.402823e+38f);

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::g::Uno::Float4 ind1 = uPtr(positions)->GetFloat4(v);
        ::g::Uno::Float3 p = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
        min = ::g::Uno::Float3__New2(::g::Uno::Math::Min1(min.X, p.X), ::g::Uno::Math::Min1(min.Y, p.Y), ::g::Uno::Math::Min1(min.Z, p.Z));
        max = ::g::Uno::Float3__New2(::g::Uno::Math::Max1(max.X, p.X), ::g::Uno::Math::Max1(max.Y, p.Y), ::g::Uno::Math::Max1(max.Z, p.Z));
    }

    return ::g::Uno::Geometry::Box__New1(min, max);
}

// public static Uno.Geometry.Sphere CalculateBoundingSphere(Uno.Content.Models.ModelMesh modelMesh) [static] :1535
::g::Uno::Geometry::Sphere ModelMeshHelpers::CalculateBoundingSphere(::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    ::g::Uno::Content::Models::VertexAttributeArray* positions = uPtr(modelMesh)->Positions();
    ::g::Uno::Float3 center = ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f);
    float radius = 0.0f;

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::g::Uno::Float4 ind2 = uPtr(positions)->GetFloat4(v);
        ::g::Uno::Float3 p = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
        float dist = ::g::Uno::Vector::Distance1(p, center);
        radius = ::g::Uno::Math::Max1(dist, radius);
    }

    return ::g::Uno::Geometry::Sphere__New1(center, radius);
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class RenderNode :1807
// {
static void RenderNode_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Visual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Visual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Visual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Visual_type, interface7));
    type->SetFields(55);
}

::g::Fuse::Visual_type* RenderNode_typeof()
{
    static uSStrong< ::g::Fuse::Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 55;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(RenderNode);
    options.TypeSize = sizeof(::g::Fuse::Visual_type);
    type = (::g::Fuse::Visual_type*)uClassType::New("Fuse.Entities.RenderNode", options);
    type->fp_build_ = RenderNode_build;
    type->fp_CalcIsLocalFlat = (void(*)(::g::Fuse::Visual*, bool*))RenderNode__CalcIsLocalFlat_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))RenderNode__Draw_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RenderNode__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RenderNode__OnUnrooted_fn;
    type->fp_get_ParentWorldTransformInternal = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix**))RenderNode__get_ParentWorldTransformInternal_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal override sealed bool CalcIsLocalFlat() :1839
void RenderNode__CalcIsLocalFlat_fn(RenderNode* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed void Draw(Fuse.DrawContext dc) :1822
void RenderNode__Draw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc)
{
    __this->OnDraw(dc);
}

// protected void OnDraw(Fuse.DrawContext dc) :1827
void RenderNode__OnDraw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc)
{
    __this->OnDraw(dc);
}

// protected override sealed void OnRooted() :1809
void RenderNode__OnRooted_fn(RenderNode* __this)
{
    ::g::Fuse::Visual__OnRooted_fn(__this);
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, __this), 0);
}

// protected override sealed void OnUnrooted() :1816
void RenderNode__OnUnrooted_fn(RenderNode* __this)
{
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, __this), 0);
    ::g::Fuse::Visual__OnUnrooted_fn(__this);
}

// internal override sealed Fuse.FastMatrix get_ParentWorldTransformInternal() :1835
void RenderNode__get_ParentWorldTransformInternal_fn(RenderNode* __this, ::g::Fuse::FastMatrix** __retval)
{
    return *__retval = ::g::Fuse::FastMatrix::Identity(), void();
}

// protected void OnDraw(Fuse.DrawContext dc) [instance] :1827
void RenderNode::OnDraw(::g::Fuse::DrawContext* dc)
{
    for (int i = 0; i < ZOrderChildCount(); i++)
        uPtr(GetZOrderChild(i))->Draw(dc);
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// public partial sealed class Transform3D :2478
// {
// static Transform3D() :2619
static void Transform3D__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(Transform3D_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[24/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[25/*Fuse.Scripting.ScriptMethod<Fuse.Entities.Transform3D>*/], ::STRINGS[3/*"lookAt"*/], uDelegate::New(::TYPES[26/*Uno.Action<Fuse.Scripting.Context, Fuse.Entities.Transform3D, object[]>*/], (void*)Transform3D__lookAt_fn), 2)));
}

static void Transform3D_build(uType* type)
{
    ::STRINGS[3] = uString::Const("lookAt");
    ::STRINGS[4] = uString::Const("Transform3D.lookAt requires 2 arguments");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno");
    ::TYPES[23] = ::g::Uno::Type_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[25] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Transform3D_typeof());
    ::TYPES[26] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), Transform3D_typeof(), uObject_typeof()->Array());
    ::TYPES[27] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(1, ::g::Uno::Float3_typeof());
    ::TYPES[21] = ::g::Fuse::Entities::Entity_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface3));
    type->SetFields(14,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, rotationDegrees), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Transform3D, rotationQuaternion), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, scale), 0);
}

::g::Fuse::Transform_type* Transform3D_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Transform3D);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Entities.Transform3D", options);
    type->fp_build_ = Transform3D_build;
    type->fp_cctor_ = Transform3D__cctor_1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Transform3D__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Transform3D__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Transform3D__PrependTo_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :2487
void Transform3D__AppendTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;

    if (::g::Uno::Float3__op_Inequality(__this->Scaling(), ::g::Uno::Float3__New1(1.0f)))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), __this->Scaling(), weight_));

    if (::g::Uno::Float4__op_Inequality(__this->RotationQuaternion(), ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)))
        uPtr(m)->AppendRotationQuaternion(::g::Uno::Float4__op_Multiply1(__this->RotationQuaternion(), weight_));

    if (::g::Uno::Float3__op_Inequality(__this->Position(), ::g::Uno::Float3__New1(0.0f)))
        uPtr(m)->AppendTranslation1(::g::Uno::Float3__op_Multiply1(__this->Position(), weight_));
}

// public Fuse.Entities.Entity get_Entity() :2485
void Transform3D__get_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Entity();
}

// public void InvalidateLocal() :2480
void Transform3D__InvalidateLocal_fn(Transform3D* __this)
{
    __this->InvalidateLocal();
}

// public override sealed bool get_IsFlat() :2598
void Transform3D__get_IsFlat_fn(Transform3D* __this, bool* __retval)
{
    return *__retval = ((::g::Uno::Math::Abs1(__this->RotationDegrees().X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->RotationDegrees().Y) < 1e-05f)) && (::g::Uno::Math::Abs1(__this->Position().Z) < 1e-05f), void();
}

// private static void lookAt(Fuse.Scripting.Context c, Fuse.Entities.Transform3D s, object[] args) :2625
void Transform3D__lookAt_fn(::g::Fuse::Scripting::Context* c, Transform3D* s, uArray* args)
{
    Transform3D::lookAt(c, s, args);
}

// public void LookAt(float3 worldTarget, float3 worldUp) :2586
void Transform3D__LookAt_fn(Transform3D* __this, ::g::Uno::Float3* worldTarget, ::g::Uno::Float3* worldUp)
{
    __this->LookAt(*worldTarget, *worldUp);
}

// public float3 get_Position() :2529
void Transform3D__get_Position_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float3 value) :2533
void Transform3D__set_Position_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->Position(*value);
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :2494
void Transform3D__PrependTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m)
{
    if (::g::Uno::Float3__op_Inequality(__this->Position(), ::g::Uno::Float3__New1(0.0f)))
        uPtr(m)->PrependTranslation1(__this->Position());

    if (::g::Uno::Float4__op_Inequality(__this->RotationQuaternion(), ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)))
        uPtr(m)->PrependRotationQuaternion(__this->RotationQuaternion());

    if (::g::Uno::Float3__op_Inequality(__this->Scaling(), ::g::Uno::Float3__New1(1.0f)))
        uPtr(m)->PrependScale1(__this->Scaling());
}

// public float3 get_RotationDegrees() :2561
void Transform3D__get_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public void set_RotationDegrees(float3 value) :2565
void Transform3D__set_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->RotationDegrees(*value);
}

// public float4 get_RotationQuaternion() :2546
void Transform3D__get_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->RotationQuaternion();
}

// public void set_RotationQuaternion(float4 value) :2550
void Transform3D__set_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* value)
{
    __this->RotationQuaternion(*value);
}

// public float3 get_Scaling() :2575
void Transform3D__get_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Scaling();
}

// public void set_Scaling(float3 value) :2579
void Transform3D__set_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->Scaling(*value);
}

// public Fuse.Entities.Entity get_Entity() [instance] :2485
::g::Fuse::Entities::Entity* Transform3D::Entity()
{
    return uAs< ::g::Fuse::Entities::Entity*>(Parent(), ::TYPES[21/*Fuse.Entities.Entity*/]);
}

// public void InvalidateLocal() [instance] :2480
void Transform3D::InvalidateLocal()
{
    OnMatrixChanged(NULL, NULL);
}

// public void LookAt(float3 worldTarget, float3 worldUp) [instance] :2586
void Transform3D::LookAt(::g::Uno::Float3 worldTarget, ::g::Uno::Float3 worldUp)
{
    ::g::Uno::Float4x4 view = ::g::Uno::Matrix::LookAtRH(uPtr(Entity())->WorldPosition(), worldTarget, worldUp);
    ::g::Uno::Float3 pos, scale1;
    ::g::Uno::Float4 rot;
    ::g::Uno::Matrix::Decompose(view, &scale1, &rot, &pos);
    uPtr(Entity())->WorldRotationQuaternion(::g::Uno::Quaternion::Invert(rot));
}

// public float3 get_Position() [instance] :2529
::g::Uno::Float3 Transform3D::Position()
{
    return position;
}

// public void set_Position(float3 value) [instance] :2533
void Transform3D::Position(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3__op_Inequality(position, value))
    {
        position = value;
        InvalidateLocal();
    }
}

// public float3 get_RotationDegrees() [instance] :2561
::g::Uno::Float3 Transform3D::RotationDegrees()
{
    return rotationDegrees;
}

// public void set_RotationDegrees(float3 value) [instance] :2565
void Transform3D::RotationDegrees(::g::Uno::Float3 value)
{
    rotationDegrees = value;
    rotationQuaternion = ::g::Uno::Quaternion::FromEulerAngleDegrees1(value);
    InvalidateLocal();
}

// public float4 get_RotationQuaternion() [instance] :2546
::g::Uno::Float4 Transform3D::RotationQuaternion()
{
    return rotationQuaternion;
}

// public void set_RotationQuaternion(float4 value) [instance] :2550
void Transform3D::RotationQuaternion(::g::Uno::Float4 value)
{
    rotationQuaternion = value;
    rotationDegrees = ::g::Uno::Quaternion::ToEulerAngleDegrees(value);
    InvalidateLocal();
}

// public float3 get_Scaling() [instance] :2575
::g::Uno::Float3 Transform3D::Scaling()
{
    return scale;
}

// public void set_Scaling(float3 value) [instance] :2579
void Transform3D::Scaling(::g::Uno::Float3 value)
{
    scale = value;
    InvalidateLocal();
}

// private static void lookAt(Fuse.Scripting.Context c, Fuse.Entities.Transform3D s, object[] args) [static] :2625
void Transform3D::lookAt(::g::Fuse::Scripting::Context* c, Transform3D* s, uArray* args)
{
    Transform3D_typeof()->Init();
    ::g::Uno::Float3 ret3;
    ::g::Uno::Float3 ret4;

    if (uPtr(args)->Length() != 2)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[4/*"Transform3D...*/], s, ::STRINGS[5/*"/usr/local/...*/], 2629, ::STRINGS[3/*"lookAt"*/]);
        return;
    }

    ::g::Uno::Float3 where = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[27/*Fuse.Scripting.Marshal.ToType<float3>*/], uPtr(args)->Strong<uObject*>(0), &ret3), ret3);
    ::g::Uno::Float3 up = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[27/*Fuse.Scripting.Marshal.ToType<float3>*/], args->Strong<uObject*>(1), &ret4), ret4);
    uPtr(s)->LookAt(where, up);
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno
// --------------------------------------------------------

// internal abstract class TriangleMeshIntersecter :2650
// {
static void TriangleMeshIntersecter_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::TriangleMeshIntersecter, _count), 0);
}

TriangleMeshIntersecter_type* TriangleMeshIntersecter_typeof()
{
    static uSStrong<TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TriangleMeshIntersecter);
    options.TypeSize = sizeof(TriangleMeshIntersecter_type);
    type = (TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.TriangleMeshIntersecter", options);
    type->fp_build_ = TriangleMeshIntersecter_build;
    return type;
}

// protected TriangleMeshIntersecter(int count) :2654
void TriangleMeshIntersecter__ctor__fn(TriangleMeshIntersecter* __this, int* count)
{
    __this->ctor_(*count);
}

// public bool IntersectsRay(Uno.Geometry.Ray objRay, float& outDistance) :2659
void TriangleMeshIntersecter__IntersectsRay_fn(TriangleMeshIntersecter* __this, ::g::Uno::Geometry::Ray* objRay, float* outDistance, bool* __retval)
{
    *__retval = __this->IntersectsRay(*objRay, outDistance);
}

// protected TriangleMeshIntersecter(int count) [instance] :2654
void TriangleMeshIntersecter::ctor_(int count)
{
    _count = count;
}

// public bool IntersectsRay(Uno.Geometry.Ray objRay, float& outDistance) [instance] :2659
bool TriangleMeshIntersecter::IntersectsRay(::g::Uno::Geometry::Ray objRay, float* outDistance)
{
    float minDistance = 3.402823e+38f;
    bool hit = false;

    for (int t = 0; t < _count; t++)
    {
        float distance;

        if (::g::Uno::Geometry::Collision::RayIntersectsTriangle(objRay, GetTriangle(t), &distance))
        {
            hit = true;

            if (distance < minDistance)
                minDistance = distance;
        }
    }

    *outDistance = minDistance;
    return hit;
}
// }

}}} // ::g::Fuse::Entities
