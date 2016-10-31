// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelDrawable.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.IndexTypeHelpers.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.SByte.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
static uString* STRINGS[1];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class IndexArray :9
// {
static void IndexArray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Models::IndexArray, _buffer), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(::g::Uno::Content::Models::IndexArray, _type), 0);
}

uType* IndexArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(IndexArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.IndexArray", options);
    type->fp_build_ = IndexArray_build;
    return type;
}

// public IndexArray(uint[] data) :45
void IndexArray__ctor_1_fn(IndexArray* __this, uArray* data)
{
    __this->ctor_1(data);
}

// public IndexArray(Uno.Graphics.IndexType type, Uno.Buffer buffer) :29
void IndexArray__ctor_2_fn(IndexArray* __this, int* type, ::g::Uno::Buffer* buffer)
{
    __this->ctor_2(*type, buffer);
}

// public Uno.Buffer get_Buffer() :21
void IndexArray__get_Buffer_fn(IndexArray* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public int get_Count() :26
void IndexArray__get_Count_fn(IndexArray* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public int GetInt(int index) :50
void IndexArray__GetInt_fn(IndexArray* __this, int* index, int* __retval)
{
    *__retval = __this->GetInt(*index);
}

// public IndexArray New(uint[] data) :45
void IndexArray__New2_fn(uArray* data, IndexArray** __retval)
{
    *__retval = IndexArray::New2(data);
}

// public Uno.Graphics.IndexType get_Type() :16
void IndexArray__get_Type_fn(IndexArray* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public IndexArray(uint[] data) [instance] :45
void IndexArray::ctor_1(uArray* data)
{
    ctor_2(4, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer8(data));
}

// public IndexArray(Uno.Graphics.IndexType type, Uno.Buffer buffer) [instance] :29
void IndexArray::ctor_2(int type, ::g::Uno::Buffer* buffer)
{
    _buffer = buffer;
    _type = type;
}

// public Uno.Buffer get_Buffer() [instance] :21
::g::Uno::Buffer* IndexArray::Buffer()
{
    return _buffer;
}

// public int get_Count() [instance] :26
int IndexArray::Count()
{
    return uPtr(_buffer)->SizeInBytes() / ::g::Uno::Graphics::IndexTypeHelpers::GetStrideInBytes(_type);
}

// public int GetInt(int index) [instance] :50
int IndexArray::GetInt(int index)
{
    switch (_type)
    {
        case 1:
            return (int)uPtr(_buffer)->GetByte(index);
        case 2:
            return (int)uPtr(_buffer)->GetUShort(index * 2, true);
        case 4:
            return (int)uPtr(_buffer)->GetUInt(index * 4, true);
        default:
            return 0;
    }
}

// public Uno.Graphics.IndexType get_Type() [instance] :16
int IndexArray::Type()
{
    return _type;
}

// public IndexArray New(uint[] data) [static] :45
IndexArray* IndexArray::New2(uArray* data)
{
    IndexArray* obj4 = (IndexArray*)uNew(IndexArray_typeof());
    obj4->ctor_1(data);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelDrawable :220
// {
static void ModelDrawable_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Models::ModelMesh_typeof(), offsetof(::g::Uno::Content::Models::ModelDrawable, _mesh), 0);
}

uType* ModelDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ModelDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelDrawable", options);
    type->fp_build_ = ModelDrawable_build;
    return type;
}

// public Uno.Content.Models.ModelMesh get_Mesh() :223
void ModelDrawable__get_Mesh_fn(ModelDrawable* __this, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = __this->Mesh();
}

// public Uno.Content.Models.ModelMesh get_Mesh() [instance] :223
::g::Uno::Content::Models::ModelMesh* ModelDrawable::Mesh()
{
    return _mesh;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelMesh :612
// {
static void ModelMesh_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Position");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[3] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof());
    type->SetFields(0,
        ::g::Uno::Content::Models::IndexArray_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _indices), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _name), 0,
        ::g::Uno::Graphics::PrimitiveType_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _primitiveType), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()), offsetof(::g::Uno::Content::Models::ModelMesh, _vertexAttributes), 0);
}

uType* ModelMesh_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ModelMesh);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelMesh", options);
    type->fp_build_ = ModelMesh_build;
    return type;
}

// public ModelMesh(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) :639
void ModelMesh__ctor__fn(ModelMesh* __this, uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    __this->ctor_(name, *type, vertexAttributes, indices);
}

// public int get_IndexCount() :649
void ModelMesh__get_IndexCount_fn(ModelMesh* __this, int* __retval)
{
    *__retval = __this->IndexCount();
}

// public Uno.Content.Models.IndexArray get_Indices() :621
void ModelMesh__get_Indices_fn(ModelMesh* __this, ::g::Uno::Content::Models::IndexArray** __retval)
{
    *__retval = __this->Indices();
}

// public string get_Name() :615
void ModelMesh__get_Name_fn(ModelMesh* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ModelMesh New(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) :639
void ModelMesh__New1_fn(uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices, ModelMesh** __retval)
{
    *__retval = ModelMesh::New1(name, *type, vertexAttributes, indices);
}

// public Uno.Content.Models.VertexAttributeArray get_Positions() :675
void ModelMesh__get_Positions_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval)
{
    *__retval = __this->Positions();
}

// public Uno.Graphics.PrimitiveType get_PrimitiveType() :618
void ModelMesh__get_PrimitiveType_fn(ModelMesh* __this, int* __retval)
{
    *__retval = __this->PrimitiveType();
}

// public Uno.Content.Models.VertexAttributeArray TryGetVertexAttribute(string name) :632
void ModelMesh__TryGetVertexAttribute_fn(ModelMesh* __this, uString* name, ::g::Uno::Content::Models::VertexAttributeArray** __retval)
{
    *__retval = __this->TryGetVertexAttribute(name);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>> get_VertexAttributes() :625
void ModelMesh__get_VertexAttributes_fn(ModelMesh* __this, uObject** __retval)
{
    *__retval = __this->VertexAttributes();
}

// public int get_VertexCount() :654
void ModelMesh__get_VertexCount_fn(ModelMesh* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public ModelMesh(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) [instance] :639
void ModelMesh::ctor_(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    _name = name;
    _primitiveType = type;
    _vertexAttributes = vertexAttributes;
    _indices = indices;
}

// public int get_IndexCount() [instance] :649
int ModelMesh::IndexCount()
{
    return (Indices() != NULL) ? uPtr(Indices())->Count() : -1;
}

// public Uno.Content.Models.IndexArray get_Indices() [instance] :621
::g::Uno::Content::Models::IndexArray* ModelMesh::Indices()
{
    return _indices;
}

// public string get_Name() [instance] :615
uString* ModelMesh::Name()
{
    return _name;
}

// public Uno.Content.Models.VertexAttributeArray get_Positions() [instance] :675
::g::Uno::Content::Models::VertexAttributeArray* ModelMesh::Positions()
{
    return TryGetVertexAttribute(::STRINGS[0/*"Position"*/]);
}

// public Uno.Graphics.PrimitiveType get_PrimitiveType() [instance] :618
int ModelMesh::PrimitiveType()
{
    return _primitiveType;
}

// public Uno.Content.Models.VertexAttributeArray TryGetVertexAttribute(string name) [instance] :632
::g::Uno::Content::Models::VertexAttributeArray* ModelMesh::TryGetVertexAttribute(uString* name)
{
    bool ret4;
    ::g::Uno::Content::Models::VertexAttributeArray* result;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_vertexAttributes), name, (void**)(&result), &ret4);
    return result;
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>> get_VertexAttributes() [instance] :625
uObject* ModelMesh::VertexAttributes()
{
    return (uObject*)_vertexAttributes;
}

// public int get_VertexCount() [instance] :654
int ModelMesh::VertexCount()
{
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret5;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(VertexAttributes()), ::TYPES[0/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > attrib = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret5), ret5);
        return uPtr(attrib.Value(::TYPES[3/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]))->Count();
    }

    return 0;
}

// public ModelMesh New(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) [static] :639
ModelMesh* ModelMesh::New1(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    ModelMesh* obj2 = (ModelMesh*)uNew(ModelMesh_typeof());
    obj2->ctor_(name, type, vertexAttributes, indices);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class VertexAttributeArray :1501
// {
static void VertexAttributeArray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Models::VertexAttributeArray, _buffer), 0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Uno::Content::Models::VertexAttributeArray, _type), 0);
}

uType* VertexAttributeArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(VertexAttributeArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.VertexAttributeArray", options);
    type->fp_build_ = VertexAttributeArray_build;
    return type;
}

// public Uno.Buffer get_Buffer() :1513
void VertexAttributeArray__get_Buffer_fn(VertexAttributeArray* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public int get_Count() :1518
void VertexAttributeArray__get_Count_fn(VertexAttributeArray* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public byte4 GetByte4(int index) :1598
void VertexAttributeArray__GetByte4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval)
{
    *__retval = __this->GetByte4(*index);
}

// public byte4 GetByte4Normalized(int index) :1587
void VertexAttributeArray__GetByte4Normalized_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval)
{
    *__retval = __this->GetByte4Normalized(*index);
}

// public float4 GetFloat4(int index) :1609
void VertexAttributeArray__GetFloat4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Float4* __retval)
{
    *__retval = __this->GetFloat4(*index);
}

// public Uno.Graphics.VertexAttributeType get_Type() :1508
void VertexAttributeArray__get_Type_fn(VertexAttributeArray* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public Uno.Buffer get_Buffer() [instance] :1513
::g::Uno::Buffer* VertexAttributeArray::Buffer()
{
    return _buffer;
}

// public int get_Count() [instance] :1518
int VertexAttributeArray::Count()
{
    return uPtr(_buffer)->SizeInBytes() / ::g::Uno::Graphics::VertexAttributeTypeHelpers::GetStrideInBytes(_type);
}

// public byte4 GetByte4(int index) [instance] :1598
::g::Uno::Byte4 VertexAttributeArray::GetByte4(int index)
{
    if (_type == 19)
        return uPtr(_buffer)->GetByte4(index * 4);
    else
    {
        ::g::Uno::Float4 v = GetFloat4(index);
        return ::g::Uno::Byte4__New2((uint8_t)v.X, (uint8_t)v.Y, (uint8_t)v.Z, (uint8_t)v.W);
    }
}

// public byte4 GetByte4Normalized(int index) [instance] :1587
::g::Uno::Byte4 VertexAttributeArray::GetByte4Normalized(int index)
{
    if (_type == 20)
        return uPtr(_buffer)->GetByte4(index * 4);
    else
    {
        ::g::Uno::Float4 v = ::g::Uno::Float4__op_Multiply1(GetFloat4(index), 255.0f);
        return ::g::Uno::Byte4__New2((uint8_t)v.X, (uint8_t)v.Y, (uint8_t)v.Z, (uint8_t)v.W);
    }
}

// public float4 GetFloat4(int index) [instance] :1609
::g::Uno::Float4 VertexAttributeArray::GetFloat4(int index)
{
    switch (_type)
    {
        case 1:
        {
            float v = uPtr(_buffer)->GetFloat(index * 4, true);
            return ::g::Uno::Float4__New2(v, 0.0f, 0.0f, 0.0f);
        }
        case 2:
        {
            ::g::Uno::Float2 v1 = uPtr(_buffer)->GetFloat2((index * 4) * 2, true);
            return ::g::Uno::Float4__New6(v1, 0.0f, 0.0f);
        }
        case 3:
        {
            ::g::Uno::Float3 v2 = uPtr(_buffer)->GetFloat3((index * 4) * 3, true);
            return ::g::Uno::Float4__New8(v2, 0.0f);
        }
        case 4:
        {
            ::g::Uno::Float4 v3 = uPtr(_buffer)->GetFloat4((index * 4) * 4, true);
            return v3;
        }
        case 5:
        {
            int16_t v4 = uPtr(_buffer)->GetShort(index * 2, true);
            return ::g::Uno::Float4__New2((float)v4, 0.0f, 0.0f, 0.0f);
        }
        case 6:
        {
            int16_t v5 = uPtr(_buffer)->GetShort(index * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v5, 0.0f, 0.0f, 0.0f), ::g::Uno::Float4__New1(3.051851e-05f));
        }
        case 7:
        {
            ::g::Uno::Short2 v6 = uPtr(_buffer)->GetShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__New2((float)v6.X, (float)v6.Y, 0.0f, 0.0f);
        }
        case 8:
        {
            ::g::Uno::Short2 v7 = uPtr(_buffer)->GetShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v7.X, (float)v7.Y, 0.0f, 0.0f), ::g::Uno::Float4__New1(3.051851e-05f));
        }
        case 9:
        {
            ::g::Uno::Short4 v8 = uPtr(_buffer)->GetShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__New2((float)v8.X, (float)v8.Y, (float)v8.Z, (float)v8.W);
        }
        case 10:
        {
            ::g::Uno::Short4 v9 = uPtr(_buffer)->GetShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v9.X, (float)v9.Y, (float)v9.Z, (float)v9.W), ::g::Uno::Float4__New1(3.051851e-05f));
        }
        case 11:
        {
            uint16_t v10 = uPtr(_buffer)->GetUShort(index * 2, true);
            return ::g::Uno::Float4__New2((float)v10, 0.0f, 0.0f, 0.0f);
        }
        case 12:
        {
            uint16_t v11 = uPtr(_buffer)->GetUShort(index * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v11, 0.0f, 0.0f, 0.0f), ::g::Uno::Float4__New1(1.52590219e-05f));
        }
        case 13:
        {
            ::g::Uno::UShort2 v12 = uPtr(_buffer)->GetUShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__New2((float)v12.X, (float)v12.Y, 0.0f, 0.0f);
        }
        case 14:
        {
            ::g::Uno::UShort2 v13 = uPtr(_buffer)->GetUShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v13.X, (float)v13.Y, 0.0f, 0.0f), ::g::Uno::Float4__New1(1.52590219e-05f));
        }
        case 15:
        {
            ::g::Uno::UShort4 v14 = uPtr(_buffer)->GetUShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__New2((float)v14.X, (float)v14.Y, (float)v14.Z, (float)v14.W);
        }
        case 16:
        {
            ::g::Uno::UShort4 v15 = uPtr(_buffer)->GetUShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v15.X, (float)v15.Y, (float)v15.Z, (float)v15.W), ::g::Uno::Float4__New1(1.52590219e-05f));
        }
        case 17:
        {
            ::g::Uno::SByte4 v16 = uPtr(_buffer)->GetSByte4(index * 4);
            return ::g::Uno::Float4__New2((float)v16.X, (float)v16.Y, (float)v16.Z, (float)v16.W);
        }
        case 18:
        {
            ::g::Uno::SByte4 v17 = uPtr(_buffer)->GetSByte4(index * 4);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v17.X, (float)v17.Y, (float)v17.Z, (float)v17.W), ::g::Uno::Float4__New1(0.007874016f));
        }
        case 19:
        {
            ::g::Uno::Byte4 v18 = uPtr(_buffer)->GetByte4(index * 4);
            return ::g::Uno::Float4__New2((float)v18.X, (float)v18.Y, (float)v18.Z, (float)v18.W);
        }
        case 20:
        {
            ::g::Uno::Byte4 v19 = uPtr(_buffer)->GetByte4(index * 4);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v19.X, (float)v19.Y, (float)v19.Z, (float)v19.W), ::g::Uno::Float4__New1(0.003921569f));
        }
        default:
            return ::g::Uno::Float4__New1(0.0f);
    }
}

// public Uno.Graphics.VertexAttributeType get_Type() [instance] :1508
int VertexAttributeArray::Type()
{
    return _type;
}
// }

}}}} // ::g::Uno::Content::Models
