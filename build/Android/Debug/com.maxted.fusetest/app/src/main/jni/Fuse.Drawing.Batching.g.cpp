// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Batching.Batch.h>
#include <Fuse.Drawing.Batching.BatchHelpers.h>
#include <Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <Fuse.Drawing.Batching.Entry.h>
#include <Fuse.Drawing.Batching.MeshBatcher.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.IndexTypeHelpers.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
static uString* STRINGS[20];
static uType* TYPES[11];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno
// ----------------------------------------------------------------

// public sealed class Batch :11
// {
static void Batch_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Graphics::IndexBuffer_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, binormals), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, boneIndices), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, boneWeights), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, colors), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, explicitVertexCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, hasExplicitVertexCount), 0,
        ::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, indexBuffer), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, instanceIndex), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, maxIndices), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, maxVertices), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, normals), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, positions), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, staticBatch), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, tangents), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord0s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord1s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord2s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord3s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord4s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord5s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord6s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord7s), 0);
}

uType* Batch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Batch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.Batch", options);
    type->fp_build_ = Batch_build;
    return type;
}

// public Batch(int maxVertices, int maxIndices, bool staticBatch) :16
void Batch__ctor__fn(Batch* __this, int* maxVertices1, int* maxIndices1, bool* staticBatch1)
{
    __this->ctor_(*maxVertices1, *maxIndices1, *staticBatch1);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Binormals() :59
void Batch__get_Binormals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Binormals();
}

// public void set_Binormals(Fuse.Drawing.Batching.BatchVertexBuffer value) :59
void Batch__set_Binormals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Binormals(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneIndexBuffer() :63
void Batch__get_BoneIndexBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->BoneIndexBuffer();
}

// public void set_BoneIndexBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :63
void Batch__set_BoneIndexBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->BoneIndexBuffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneWeightBuffer() :64
void Batch__get_BoneWeightBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->BoneWeightBuffer();
}

// public void set_BoneWeightBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :64
void Batch__set_BoneWeightBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->BoneWeightBuffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Colors() :61
void Batch__get_Colors_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Colors();
}

// public void set_Colors(Fuse.Drawing.Batching.BatchVertexBuffer value) :61
void Batch__set_Colors_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Colors(value);
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() :116
void Batch__get_IndexBuffer_fn(Batch* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->IndexBuffer();
}

// public Uno.Graphics.IndexType get_IndexType() :121
void Batch__get_IndexType_fn(Batch* __this, int* __retval)
{
    *__retval = __this->IndexType();
}

// public Fuse.Drawing.Batching.BatchIndexBuffer get_Indices() :85
void Batch__get_Indices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchIndexBuffer** __retval)
{
    *__retval = __this->Indices();
}

// public void set_Indices(Fuse.Drawing.Batching.BatchIndexBuffer value) :85
void Batch__set_Indices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchIndexBuffer* value)
{
    __this->Indices(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_InstanceIndices() :62
void Batch__get_InstanceIndices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->InstanceIndices();
}

// public void set_InstanceIndices(Fuse.Drawing.Batching.BatchVertexBuffer value) :62
void Batch__set_InstanceIndices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->InstanceIndices(value);
}

// public Batch New(int maxVertices, int maxIndices, bool staticBatch) :16
void Batch__New1_fn(int* maxVertices1, int* maxIndices1, bool* staticBatch1, Batch** __retval)
{
    *__retval = Batch::New1(*maxVertices1, *maxIndices1, *staticBatch1);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Normals() :58
void Batch__get_Normals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Normals();
}

// public void set_Normals(Fuse.Drawing.Batching.BatchVertexBuffer value) :58
void Batch__set_Normals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Normals(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Positions() :49
void Batch__get_Positions_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Positions();
}

// public void set_Positions(Fuse.Drawing.Batching.BatchVertexBuffer value) :49
void Batch__set_Positions_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Positions(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Tangents() :60
void Batch__get_Tangents_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Tangents();
}

// public void set_Tangents(Fuse.Drawing.Batching.BatchVertexBuffer value) :60
void Batch__set_Tangents_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Tangents(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord0s() :50
void Batch__get_TexCoord0s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord0s();
}

// public void set_TexCoord0s(Fuse.Drawing.Batching.BatchVertexBuffer value) :50
void Batch__set_TexCoord0s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord0s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord1s() :51
void Batch__get_TexCoord1s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord1s();
}

// public void set_TexCoord1s(Fuse.Drawing.Batching.BatchVertexBuffer value) :51
void Batch__set_TexCoord1s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord1s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord2s() :52
void Batch__get_TexCoord2s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord2s();
}

// public void set_TexCoord2s(Fuse.Drawing.Batching.BatchVertexBuffer value) :52
void Batch__set_TexCoord2s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord2s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord3s() :53
void Batch__get_TexCoord3s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord3s();
}

// public void set_TexCoord3s(Fuse.Drawing.Batching.BatchVertexBuffer value) :53
void Batch__set_TexCoord3s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord3s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord4s() :54
void Batch__get_TexCoord4s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord4s();
}

// public void set_TexCoord4s(Fuse.Drawing.Batching.BatchVertexBuffer value) :54
void Batch__set_TexCoord4s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord4s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord5s() :55
void Batch__get_TexCoord5s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord5s();
}

// public void set_TexCoord5s(Fuse.Drawing.Batching.BatchVertexBuffer value) :55
void Batch__set_TexCoord5s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord5s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord6s() :56
void Batch__get_TexCoord6s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord6s();
}

// public void set_TexCoord6s(Fuse.Drawing.Batching.BatchVertexBuffer value) :56
void Batch__set_TexCoord6s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord6s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord7s() :57
void Batch__get_TexCoord7s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord7s();
}

// public void set_TexCoord7s(Fuse.Drawing.Batching.BatchVertexBuffer value) :57
void Batch__set_TexCoord7s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord7s(value);
}

// public int get_VertexCount() :79
void Batch__get_VertexCount_fn(Batch* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public void set_VertexCount(int value) :80
void Batch__set_VertexCount_fn(Batch* __this, int* value)
{
    __this->VertexCount(*value);
}

// public Batch(int maxVertices, int maxIndices, bool staticBatch) [instance] :16
void Batch::ctor_(int maxVertices1, int maxIndices1, bool staticBatch1)
{
    maxVertices = maxVertices1;
    maxIndices = maxIndices1;
    staticBatch = staticBatch1;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Binormals() [instance] :59
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Binormals()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind11 = binormals;
    return (ind11 != NULL) ? ind11 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(binormals = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(3, maxVertices, staticBatch));
}

// public void set_Binormals(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :59
void Batch::Binormals(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    binormals = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneIndexBuffer() [instance] :63
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::BoneIndexBuffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind15 = boneIndices;
    return (ind15 != NULL) ? ind15 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(boneIndices = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(19, maxVertices, staticBatch));
}

// public void set_BoneIndexBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :63
void Batch::BoneIndexBuffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    boneIndices = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneWeightBuffer() [instance] :64
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::BoneWeightBuffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind16 = boneWeights;
    return (ind16 != NULL) ? ind16 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(boneWeights = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(20, maxVertices, staticBatch));
}

// public void set_BoneWeightBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :64
void Batch::BoneWeightBuffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    boneWeights = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Colors() [instance] :61
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Colors()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind13 = colors;
    return (ind13 != NULL) ? ind13 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(colors = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Colors(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :61
void Batch::Colors(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    colors = value;
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() [instance] :116
::g::Uno::Graphics::IndexBuffer* Batch::IndexBuffer()
{
    return (indexBuffer == NULL) ? uCast< ::g::Uno::Graphics::IndexBuffer*>(NULL, ::TYPES[0/*Uno.Graphics.IndexBuffer*/]) : (::g::Uno::Graphics::IndexBuffer*)uPtr(Indices())->IndexBuffer();
}

// public Uno.Graphics.IndexType get_IndexType() [instance] :121
int Batch::IndexType()
{
    return (indexBuffer == NULL) ? 0 : uPtr(Indices())->DataType();
}

// public Fuse.Drawing.Batching.BatchIndexBuffer get_Indices() [instance] :85
::g::Fuse::Drawing::Batching::BatchIndexBuffer* Batch::Indices()
{
    ::g::Fuse::Drawing::Batching::BatchIndexBuffer* ind25 = indexBuffer;
    return (ind25 != NULL) ? ind25 : (::g::Fuse::Drawing::Batching::BatchIndexBuffer*)(indexBuffer = ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New1(2, maxIndices, staticBatch));
}

// public void set_Indices(Fuse.Drawing.Batching.BatchIndexBuffer value) [instance] :85
void Batch::Indices(::g::Fuse::Drawing::Batching::BatchIndexBuffer* value)
{
    indexBuffer = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_InstanceIndices() [instance] :62
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::InstanceIndices()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind14 = instanceIndex;
    return (ind14 != NULL) ? ind14 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(instanceIndex = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(11, maxVertices, staticBatch));
}

// public void set_InstanceIndices(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :62
void Batch::InstanceIndices(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    instanceIndex = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Normals() [instance] :58
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Normals()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind10 = normals;
    return (ind10 != NULL) ? ind10 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(normals = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(3, maxVertices, staticBatch));
}

// public void set_Normals(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :58
void Batch::Normals(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    normals = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Positions() [instance] :49
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Positions()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind1 = positions;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(positions = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(3, maxVertices, staticBatch));
}

// public void set_Positions(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :49
void Batch::Positions(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    positions = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Tangents() [instance] :60
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Tangents()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind12 = tangents;
    return (ind12 != NULL) ? ind12 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(tangents = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Tangents(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :60
void Batch::Tangents(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    tangents = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord0s() [instance] :50
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord0s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind2 = texCoord0s;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord0s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord0s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :50
void Batch::TexCoord0s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord0s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord1s() [instance] :51
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord1s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind3 = texCoord1s;
    return (ind3 != NULL) ? ind3 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord1s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord1s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :51
void Batch::TexCoord1s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord1s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord2s() [instance] :52
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord2s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind4 = texCoord2s;
    return (ind4 != NULL) ? ind4 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord2s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord2s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :52
void Batch::TexCoord2s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord2s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord3s() [instance] :53
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord3s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind5 = texCoord3s;
    return (ind5 != NULL) ? ind5 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord3s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord3s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :53
void Batch::TexCoord3s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord3s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord4s() [instance] :54
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord4s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind6 = texCoord4s;
    return (ind6 != NULL) ? ind6 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord4s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord4s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :54
void Batch::TexCoord4s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord4s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord5s() [instance] :55
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord5s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind7 = texCoord5s;
    return (ind7 != NULL) ? ind7 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord5s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord5s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :55
void Batch::TexCoord5s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord5s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord6s() [instance] :56
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord6s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind8 = texCoord6s;
    return (ind8 != NULL) ? ind8 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord6s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord6s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :56
void Batch::TexCoord6s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord6s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord7s() [instance] :57
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord7s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind9 = texCoord7s;
    return (ind9 != NULL) ? ind9 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord7s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord7s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :57
void Batch::TexCoord7s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord7s = value;
}

// public int get_VertexCount() [instance] :79
int Batch::VertexCount()
{
    return hasExplicitVertexCount ? explicitVertexCount : maxIndices;
}

// public void set_VertexCount(int value) [instance] :80
void Batch::VertexCount(int value)
{
    hasExplicitVertexCount = true;
    explicitVertexCount = value;
}

// public Batch New(int maxVertices, int maxIndices, bool staticBatch) [static] :16
Batch* Batch::New1(int maxVertices1, int maxIndices1, bool staticBatch1)
{
    Batch* obj26 = (Batch*)uNew(Batch_typeof());
    obj26->ctor_(maxVertices1, maxIndices1, staticBatch1);
    return obj26;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno
// ----------------------------------------------------------------

// public static class BatchHelpers :137
// {
static void BatchHelpers_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported index type");
    ::STRINGS[1] = uString::Const("Unsupported vertex attribute type");
    ::STRINGS[2] = uString::Const("Position");
    ::STRINGS[3] = uString::Const("TexCoord");
    ::STRINGS[4] = uString::Const("TexCoord1");
    ::STRINGS[5] = uString::Const("TexCoord2");
    ::STRINGS[6] = uString::Const("TexCoord3");
    ::STRINGS[7] = uString::Const("TexCoord4");
    ::STRINGS[8] = uString::Const("TexCoord5");
    ::STRINGS[9] = uString::Const("TexCoord6");
    ::STRINGS[10] = uString::Const("TexCoord7");
    ::STRINGS[11] = uString::Const("Normal");
    ::STRINGS[12] = uString::Const("Tangent");
    ::STRINGS[13] = uString::Const("Binormal");
    ::STRINGS[14] = uString::Const("Color");
    ::STRINGS[15] = uString::Const("TransformIndex");
    ::STRINGS[16] = uString::Const("BoneWeights");
    ::STRINGS[17] = uString::Const("BoneIndices");
    ::TYPES[1] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[4] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof());
}

uClassType* BatchHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Batching.BatchHelpers", options);
    type->fp_build_ = BatchHelpers_build;
    return type;
}

// public static Fuse.Drawing.Batching.BatchIndexBuffer CreateBatchIndexBuffer(Uno.Content.Models.IndexArray array) :208
void BatchHelpers__CreateBatchIndexBuffer_fn(::g::Uno::Content::Models::IndexArray* array, ::g::Fuse::Drawing::Batching::BatchIndexBuffer** __retval)
{
    *__retval = BatchHelpers::CreateBatchIndexBuffer(array);
}

// public static Fuse.Drawing.Batching.BatchVertexBuffer CreateBatchVertexBuffer(Uno.Content.Models.VertexAttributeArray array) :179
void BatchHelpers__CreateBatchVertexBuffer_fn(::g::Uno::Content::Models::VertexAttributeArray* array, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = BatchHelpers::CreateBatchVertexBuffer(array);
}

// public static Fuse.Drawing.Batching.Batch CreateSingleBatch(Uno.Content.Models.ModelMesh m) :139
void BatchHelpers__CreateSingleBatch_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Fuse::Drawing::Batching::Batch** __retval)
{
    *__retval = BatchHelpers::CreateSingleBatch(m);
}

// public static Fuse.Drawing.Batching.BatchIndexBuffer CreateBatchIndexBuffer(Uno.Content.Models.IndexArray array) [static] :208
::g::Fuse::Drawing::Batching::BatchIndexBuffer* BatchHelpers::CreateBatchIndexBuffer(::g::Uno::Content::Models::IndexArray* array)
{
    switch (uPtr(array)->Type())
    {
        case 1:
            return ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 2:
            return ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 4:
            return ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Unsupported...*/]));
    }
}

// public static Fuse.Drawing.Batching.BatchVertexBuffer CreateBatchVertexBuffer(Uno.Content.Models.VertexAttributeArray array) [static] :179
::g::Fuse::Drawing::Batching::BatchVertexBuffer* BatchHelpers::CreateBatchVertexBuffer(::g::Uno::Content::Models::VertexAttributeArray* array)
{
    switch (uPtr(array)->Type())
    {
        case 1:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 2:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 3:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 4:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 17:
        case 18:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 19:
        case 20:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Unsupported...*/]));
    }
}

// public static Fuse.Drawing.Batching.Batch CreateSingleBatch(Uno.Content.Models.ModelMesh m) [static] :139
::g::Fuse::Drawing::Batching::Batch* BatchHelpers::CreateSingleBatch(::g::Uno::Content::Models::ModelMesh* m)
{
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret2;
    ::g::Fuse::Drawing::Batching::Batch* b;

    if (uPtr(m)->Indices() != NULL)
    {
        b = ::g::Fuse::Drawing::Batching::Batch::New1(uPtr(m)->VertexCount(), uPtr(m)->IndexCount(), true);
        b->Indices(BatchHelpers::CreateBatchIndexBuffer(m->Indices()));
    }
    else
    {
        b = ::g::Fuse::Drawing::Batching::Batch::New1(uPtr(m)->VertexCount(), uPtr(m)->VertexCount(), true);

        for (int i = 0; i < m->VertexCount(); i++)
            uPtr(uPtr(b)->Indices())->Write1((uint16_t)i);
    }

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(m)->VertexAttributes()), ::TYPES[1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret2), ret2);

        if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[2/*"Position"*/]))
            uPtr(b)->Positions(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[3/*"TexCoord"*/]))
            uPtr(b)->TexCoord0s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[4/*"TexCoord1"*/]))
            uPtr(b)->TexCoord1s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[5/*"TexCoord2"*/]))
            uPtr(b)->TexCoord2s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[6/*"TexCoord3"*/]))
            uPtr(b)->TexCoord3s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[7/*"TexCoord4"*/]))
            uPtr(b)->TexCoord4s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[8/*"TexCoord5"*/]))
            uPtr(b)->TexCoord5s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[9/*"TexCoord6"*/]))
            uPtr(b)->TexCoord6s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[10/*"TexCoord7"*/]))
            uPtr(b)->TexCoord7s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[11/*"Normal"*/]))
            uPtr(b)->Normals(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[12/*"Tangent"*/]))
            uPtr(b)->Tangents(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[13/*"Binormal"*/]))
            uPtr(b)->Binormals(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[14/*"Color"*/]))
            uPtr(b)->Colors(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[15/*"TransformIn...*/]))
            uPtr(b)->InstanceIndices(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[16/*"BoneWeights"*/]))
            uPtr(b)->BoneWeightBuffer(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[17/*"BoneIndices"*/]))
            uPtr(b)->BoneIndexBuffer(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
    }

    return b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno
// ----------------------------------------------------------------

// public sealed class BatchIndexBuffer :238
// {
static void BatchIndexBuffer_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Index type cannot be changed after buffer is written to");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, _position), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, buf), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, dataType), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, ibo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, isDirty), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, maxIndices), 0,
        ::g::Uno::Graphics::BufferUsage_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, usage), 0);
}

uType* BatchIndexBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BatchIndexBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.BatchIndexBuffer", options);
    type->fp_build_ = BatchIndexBuffer_build;
    return type;
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) :257
void BatchIndexBuffer__ctor__fn(BatchIndexBuffer* __this, int* type, int* maxIndices1, bool* staticBatch)
{
    __this->ctor_(*type, *maxIndices1, *staticBatch);
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, Uno.Buffer data) :264
void BatchIndexBuffer__ctor_1_fn(BatchIndexBuffer* __this, int* type, ::g::Uno::Buffer* data)
{
    __this->ctor_1(*type, data);
}

// public Uno.Buffer get_Buffer() :276
void BatchIndexBuffer__get_Buffer_fn(BatchIndexBuffer* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public Uno.Graphics.IndexType get_DataType() :243
void BatchIndexBuffer__get_DataType_fn(BatchIndexBuffer* __this, int* __retval)
{
    *__retval = __this->DataType();
}

// public void set_DataType(Uno.Graphics.IndexType value) :244
void BatchIndexBuffer__set_DataType_fn(BatchIndexBuffer* __this, int* value)
{
    __this->DataType(*value);
}

// public void Flush() :320
void BatchIndexBuffer__Flush_fn(BatchIndexBuffer* __this)
{
    __this->Flush();
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() :306
void BatchIndexBuffer__get_IndexBuffer_fn(BatchIndexBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->IndexBuffer();
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) :257
void BatchIndexBuffer__New1_fn(int* type, int* maxIndices1, bool* staticBatch, BatchIndexBuffer** __retval)
{
    *__retval = BatchIndexBuffer::New1(*type, *maxIndices1, *staticBatch);
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, Uno.Buffer data) :264
void BatchIndexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchIndexBuffer** __retval)
{
    *__retval = BatchIndexBuffer::New2(*type, data);
}

// public int get_StrideInBytes() :251
void BatchIndexBuffer__get_StrideInBytes_fn(BatchIndexBuffer* __this, int* __retval)
{
    *__retval = __this->StrideInBytes();
}

// public void Write(ushort value) :296
void BatchIndexBuffer__Write1_fn(BatchIndexBuffer* __this, uint16_t* value)
{
    __this->Write1(*value);
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) [instance] :257
void BatchIndexBuffer::ctor_(int type, int maxIndices1, bool staticBatch)
{
    isDirty = true;
    dataType = type;
    maxIndices = maxIndices1;
    usage = (staticBatch ? 0 : 1);
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, Uno.Buffer data) [instance] :264
void BatchIndexBuffer::ctor_1(int type, ::g::Uno::Buffer* data)
{
    isDirty = true;
    DataType(type);
    usage = 0;
    buf = ::g::Uno::Buffer::New4(uPtr(data)->SizeInBytes());

    for (int i = 0; i < uPtr(buf)->SizeInBytes(); i++)
        uPtr(buf)->Item(i, uPtr(data)->Item(i));
}

// public Uno.Buffer get_Buffer() [instance] :276
::g::Uno::Buffer* BatchIndexBuffer::Buffer()
{
    if (buf == NULL)
        buf = ::g::Uno::Buffer::New4(maxIndices * StrideInBytes());

    return buf;
}

// public Uno.Graphics.IndexType get_DataType() [instance] :243
int BatchIndexBuffer::DataType()
{
    return dataType;
}

// public void set_DataType(Uno.Graphics.IndexType value) [instance] :244
void BatchIndexBuffer::DataType(int value)
{
    if (buf != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Index type ...*/]));

    dataType = value;
}

// public void Flush() [instance] :320
void BatchIndexBuffer::Flush()
{
    if ((buf != NULL) && isDirty)
    {
        uPtr(ibo)->Update(buf);
        isDirty = false;
    }
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() [instance] :306
::g::Uno::Graphics::IndexBuffer* BatchIndexBuffer::IndexBuffer()
{
    if (buf == NULL)
        return NULL;

    if (ibo == NULL)
        ibo = ::g::Uno::Graphics::IndexBuffer::New1(uPtr(Buffer())->SizeInBytes(), usage);

    Flush();
    return ibo;
}

// public int get_StrideInBytes() [instance] :251
int BatchIndexBuffer::StrideInBytes()
{
    return ::g::Uno::Graphics::IndexTypeHelpers::GetStrideInBytes(DataType());
}

// public void Write(ushort value) [instance] :296
void BatchIndexBuffer::Write1(uint16_t value)
{
    uPtr(Buffer())->Set23(_position, value, true);
    _position = (_position + 2);
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) [static] :257
BatchIndexBuffer* BatchIndexBuffer::New1(int type, int maxIndices1, bool staticBatch)
{
    BatchIndexBuffer* obj1 = (BatchIndexBuffer*)uNew(BatchIndexBuffer_typeof());
    obj1->ctor_(type, maxIndices1, staticBatch);
    return obj1;
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, Uno.Buffer data) [static] :264
BatchIndexBuffer* BatchIndexBuffer::New2(int type, ::g::Uno::Buffer* data)
{
    BatchIndexBuffer* obj2 = (BatchIndexBuffer*)uNew(BatchIndexBuffer_typeof());
    obj2->ctor_1(type, data);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno
// ----------------------------------------------------------------

// public sealed class BatchVertexBuffer :347
// {
static void BatchVertexBuffer_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Vertex attribute type cannot be changed after Bufferfer is written to");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, _position), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, buf), 0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, dataType), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, isDirty), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, maxVertices), 0,
        ::g::Uno::Graphics::BufferUsage_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, usage), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, vbo), 0);
}

uType* BatchVertexBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BatchVertexBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.BatchVertexBuffer", options);
    type->fp_build_ = BatchVertexBuffer_build;
    return type;
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) :365
void BatchVertexBuffer__ctor__fn(BatchVertexBuffer* __this, int* type, int* maxVertices1, bool* staticBatch)
{
    __this->ctor_(*type, *maxVertices1, *staticBatch);
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) :372
void BatchVertexBuffer__ctor_1_fn(BatchVertexBuffer* __this, int* type, ::g::Uno::Buffer* data)
{
    __this->ctor_1(*type, data);
}

// public Uno.Buffer get_Buffer() :386
void BatchVertexBuffer__get_Buffer_fn(BatchVertexBuffer* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public Uno.Graphics.VertexAttributeType get_DataType() :352
void BatchVertexBuffer__get_DataType_fn(BatchVertexBuffer* __this, int* __retval)
{
    *__retval = __this->DataType();
}

// public void set_DataType(Uno.Graphics.VertexAttributeType value) :353
void BatchVertexBuffer__set_DataType_fn(BatchVertexBuffer* __this, int* value)
{
    __this->DataType(*value);
}

// public void Flush() :533
void BatchVertexBuffer__Flush_fn(BatchVertexBuffer* __this)
{
    __this->Flush();
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) :365
void BatchVertexBuffer__New1_fn(int* type, int* maxVertices1, bool* staticBatch, BatchVertexBuffer** __retval)
{
    *__retval = BatchVertexBuffer::New1(*type, *maxVertices1, *staticBatch);
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) :372
void BatchVertexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchVertexBuffer** __retval)
{
    *__retval = BatchVertexBuffer::New2(*type, data);
}

// public int get_StrideInBytes() :360
void BatchVertexBuffer__get_StrideInBytes_fn(BatchVertexBuffer* __this, int* __retval)
{
    *__retval = __this->StrideInBytes();
}

// public Uno.Graphics.VertexBuffer get_VertexBuffer() :396
void BatchVertexBuffer__get_VertexBuffer_fn(BatchVertexBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval)
{
    *__retval = __this->VertexBuffer();
}

// public void Write(byte4 value) :442
void BatchVertexBuffer__Write2_fn(BatchVertexBuffer* __this, ::g::Uno::Byte4* value)
{
    __this->Write2(*value);
}

// public void Write(float2 value) :412
void BatchVertexBuffer__Write3_fn(BatchVertexBuffer* __this, ::g::Uno::Float2* value)
{
    __this->Write3(*value);
}

// public void Write(float3 value) :418
void BatchVertexBuffer__Write4_fn(BatchVertexBuffer* __this, ::g::Uno::Float3* value)
{
    __this->Write4(*value);
}

// public void Write(float4 value) :424
void BatchVertexBuffer__Write5_fn(BatchVertexBuffer* __this, ::g::Uno::Float4* value)
{
    __this->Write5(*value);
}

// public void Write(ushort value) :466
void BatchVertexBuffer__Write17_fn(BatchVertexBuffer* __this, uint16_t* value)
{
    __this->Write17(*value);
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) [instance] :365
void BatchVertexBuffer::ctor_(int type, int maxVertices1, bool staticBatch)
{
    isDirty = true;
    DataType(type);
    maxVertices = maxVertices1;
    usage = (staticBatch ? 0 : 1);
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) [instance] :372
void BatchVertexBuffer::ctor_1(int type, ::g::Uno::Buffer* data)
{
    isDirty = true;
    DataType(type);
    usage = 0;
    buf = ::g::Uno::Buffer::New4(uPtr(data)->SizeInBytes());

    for (int i = 0; i < uPtr(buf)->SizeInBytes(); i++)
        uPtr(buf)->Item(i, uPtr(data)->Item(i));
}

// public Uno.Buffer get_Buffer() [instance] :386
::g::Uno::Buffer* BatchVertexBuffer::Buffer()
{
    if (buf == NULL)
        buf = ::g::Uno::Buffer::New4(maxVertices * StrideInBytes());

    return buf;
}

// public Uno.Graphics.VertexAttributeType get_DataType() [instance] :352
int BatchVertexBuffer::DataType()
{
    return dataType;
}

// public void set_DataType(Uno.Graphics.VertexAttributeType value) [instance] :353
void BatchVertexBuffer::DataType(int value)
{
    if (buf != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Vertex attr...*/]));

    dataType = value;
}

// public void Flush() [instance] :533
void BatchVertexBuffer::Flush()
{
    if ((buf != NULL) && isDirty)
    {
        if (vbo == NULL)
            vbo = ::g::Uno::Graphics::VertexBuffer::New1(uPtr(Buffer())->SizeInBytes(), usage);

        uPtr(vbo)->Update(buf);
        isDirty = false;
    }
}

// public int get_StrideInBytes() [instance] :360
int BatchVertexBuffer::StrideInBytes()
{
    return ::g::Uno::Graphics::VertexAttributeTypeHelpers::GetStrideInBytes(DataType());
}

// public Uno.Graphics.VertexBuffer get_VertexBuffer() [instance] :396
::g::Uno::Graphics::VertexBuffer* BatchVertexBuffer::VertexBuffer()
{
    if (Buffer() == NULL)
        return NULL;

    Flush();
    return vbo;
}

// public void Write(byte4 value) [instance] :442
void BatchVertexBuffer::Write2(::g::Uno::Byte4 value)
{
    uPtr(Buffer())->Set2(_position, value);
    _position = (_position + 4);
}

// public void Write(float2 value) [instance] :412
void BatchVertexBuffer::Write3(::g::Uno::Float2 value)
{
    uPtr(Buffer())->Set5(_position, value, true);
    _position = (_position + 8);
}

// public void Write(float3 value) [instance] :418
void BatchVertexBuffer::Write4(::g::Uno::Float3 value)
{
    uPtr(Buffer())->Set6(_position, value, true);
    _position = (_position + 12);
}

// public void Write(float4 value) [instance] :424
void BatchVertexBuffer::Write5(::g::Uno::Float4 value)
{
    uPtr(Buffer())->Set8(_position, value, true);
    _position = (_position + 16);
}

// public void Write(ushort value) [instance] :466
void BatchVertexBuffer::Write17(uint16_t value)
{
    uPtr(Buffer())->Set23(_position, value, true);
    _position = (_position + 2);
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) [static] :365
BatchVertexBuffer* BatchVertexBuffer::New1(int type, int maxVertices1, bool staticBatch)
{
    BatchVertexBuffer* obj1 = (BatchVertexBuffer*)uNew(BatchVertexBuffer_typeof());
    obj1->ctor_(type, maxVertices1, staticBatch);
    return obj1;
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) [static] :372
BatchVertexBuffer* BatchVertexBuffer::New2(int type, ::g::Uno::Buffer* data)
{
    BatchVertexBuffer* obj2 = (BatchVertexBuffer*)uNew(BatchVertexBuffer_typeof());
    obj2->ctor_1(type, data);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno
// ----------------------------------------------------------------

// internal sealed class Entry :562
// {
static void Entry_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Entry, InstanceIndex), 0,
        ::g::Uno::Content::Models::ModelMesh_typeof(), offsetof(::g::Fuse::Drawing::Batching::Entry, Mesh), 0);
}

uType* Entry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Entry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.Entry", options);
    type->fp_build_ = Entry_build;
    return type;
}

// public Entry(Uno.Content.Models.ModelMesh m, int instanceId) :566
void Entry__ctor__fn(Entry* __this, ::g::Uno::Content::Models::ModelMesh* m, int* instanceId)
{
    __this->ctor_(m, *instanceId);
}

// public Entry New(Uno.Content.Models.ModelMesh m, int instanceId) :566
void Entry__New1_fn(::g::Uno::Content::Models::ModelMesh* m, int* instanceId, Entry** __retval)
{
    *__retval = Entry::New1(m, *instanceId);
}

// public Entry(Uno.Content.Models.ModelMesh m, int instanceId) [instance] :566
void Entry::ctor_(::g::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    Mesh = m;
    InstanceIndex = instanceId;
}

// public Entry New(Uno.Content.Models.ModelMesh m, int instanceId) [static] :566
Entry* Entry::New1(::g::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    Entry* obj1 = (Entry*)uNew(Entry_typeof());
    obj1->ctor_(m, instanceId);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno
// ----------------------------------------------------------------

// public sealed class MeshBatcher :569
// {
static void MeshBatcher_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Position");
    ::STRINGS[3] = uString::Const("TexCoord");
    ::STRINGS[4] = uString::Const("TexCoord1");
    ::STRINGS[5] = uString::Const("TexCoord2");
    ::STRINGS[6] = uString::Const("TexCoord3");
    ::STRINGS[7] = uString::Const("TexCoord4");
    ::STRINGS[8] = uString::Const("TexCoord5");
    ::STRINGS[9] = uString::Const("TexCoord6");
    ::STRINGS[10] = uString::Const("TexCoord7");
    ::STRINGS[11] = uString::Const("Normal");
    ::STRINGS[12] = uString::Const("Tangent");
    ::STRINGS[13] = uString::Const("Binormal");
    ::STRINGS[14] = uString::Const("Color");
    ::STRINGS[16] = uString::Const("BoneWeights");
    ::STRINGS[17] = uString::Const("BoneIndices");
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Batching::Entry_typeof());
    ::TYPES[6] = ::g::Uno::UInt_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[4] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof());
    ::TYPES[8] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Batching::Batch_typeof());
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[10] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Batching::Batch_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Batching::Batch_typeof()->Array(), offsetof(::g::Fuse::Drawing::Batching::MeshBatcher, batches), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Batching::Entry_typeof()), offsetof(::g::Fuse::Drawing::Batching::MeshBatcher, entries), 0);
}

uType* MeshBatcher_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MeshBatcher);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.MeshBatcher", options);
    type->fp_build_ = MeshBatcher_build;
    type->fp_ctor_ = (void*)MeshBatcher__New1_fn;
    return type;
}

// public MeshBatcher() :590
void MeshBatcher__ctor__fn(MeshBatcher* __this)
{
    __this->ctor_();
}

// private int AddEntry(Fuse.Drawing.Batching.Entry e) :602
void MeshBatcher__AddEntry_fn(MeshBatcher* __this, ::g::Fuse::Drawing::Batching::Entry* e, int* __retval)
{
    *__retval = __this->AddEntry(e);
}

// public int AddMesh(Uno.Content.Models.ModelMesh mesh) :592
void MeshBatcher__AddMesh_fn(MeshBatcher* __this, ::g::Uno::Content::Models::ModelMesh* mesh, int* __retval)
{
    *__retval = __this->AddMesh(mesh);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Batching.Batch> get_Batches() :584
void MeshBatcher__get_Batches_fn(MeshBatcher* __this, uObject** __retval)
{
    *__retval = __this->Batches();
}

// private static Uno.Content.Models.ModelMesh CreateFakeIndexBuffer(Uno.Content.Models.ModelMesh m) :751
void MeshBatcher__CreateFakeIndexBuffer_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshBatcher::CreateFakeIndexBuffer(m);
}

// public int get_EntryCount() :578
void MeshBatcher__get_EntryCount_fn(MeshBatcher* __this, int* __retval)
{
    *__retval = __this->EntryCount();
}

// public void Flush() :609
void MeshBatcher__Flush_fn(MeshBatcher* __this)
{
    __this->Flush();
}

// public MeshBatcher New() :590
void MeshBatcher__New1_fn(MeshBatcher** __retval)
{
    *__retval = MeshBatcher::New1();
}

// public MeshBatcher() [instance] :590
void MeshBatcher::ctor_()
{
    entries = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Drawing.Batching.Entry>*/]));
}

// private int AddEntry(Fuse.Drawing.Batching.Entry e) [instance] :602
int MeshBatcher::AddEntry(::g::Fuse::Drawing::Batching::Entry* e)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(entries), e);
    return uPtr(e)->InstanceIndex;
}

// public int AddMesh(Uno.Content.Models.ModelMesh mesh) [instance] :592
int MeshBatcher::AddMesh(::g::Uno::Content::Models::ModelMesh* mesh)
{
    return AddEntry(::g::Fuse::Drawing::Batching::Entry::New1(mesh, uPtr(entries)->Count()));
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Batching.Batch> get_Batches() [instance] :584
uObject* MeshBatcher::Batches()
{
    Flush();
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[10/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Batching.Batch>*/], batches));
}

// public int get_EntryCount() [instance] :578
int MeshBatcher::EntryCount()
{
    return uPtr(entries)->Count();
}

// public void Flush() [instance] :609
void MeshBatcher::Flush()
{
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Fuse::Drawing::Batching::Entry* ret16;
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret17;
    bool ret18;
    ::g::Fuse::Drawing::Batching::Entry* ret19;

    if (batches != NULL)
        return;

    ::g::Uno::Content::Models::VertexAttributeArray* position, *texcoord, *texcoord1, *texcoord2, *texcoord3, *texcoord4, *texcoord5, *texcoord6, *texcoord7, *normal, *tangent, *binormal, *color, *boneWeights, *boneIndex;
    ::g::Uno::Collections::List* batches1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[8/*Uno.Collections.List<Fuse.Drawing.Batching.Batch>*/]);
    ::g::Fuse::Drawing::Batching::Batch* b = NULL;
    int virtualIndexBase = 0;
    ::g::Uno::Collections::Dictionary* virtualIndexToRealIndex = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<int, int>*/]);
    int batchVertexCount = 0;
    int batchIndexCount = 0;
    int batchVertexCutoff = 0;
    int batchIndexCutoff = 0;

    for (int e = 0; e < uPtr(entries)->Count(); e++)
    {
        ::g::Uno::Content::Models::ModelMesh* m = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(e), &ret16), ret16))->Mesh;
        position = texcoord = texcoord1 = texcoord2 = texcoord3 = texcoord4 = texcoord5 = texcoord6 = texcoord7 = normal = tangent = binormal = color = boneWeights = boneIndex = NULL;

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(m)->VertexAttributes()), ::TYPES[1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret17), ret17);

            if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[2/*"Position"*/]))
                position = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[3/*"TexCoord"*/]))
                texcoord = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[4/*"TexCoord1"*/]))
                texcoord1 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[5/*"TexCoord2"*/]))
                texcoord2 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[6/*"TexCoord3"*/]))
                texcoord3 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[7/*"TexCoord4"*/]))
                texcoord4 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[8/*"TexCoord5"*/]))
                texcoord5 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[9/*"TexCoord6"*/]))
                texcoord6 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[10/*"TexCoord7"*/]))
                texcoord7 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[11/*"Normal"*/]))
                normal = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[12/*"Tangent"*/]))
                tangent = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[13/*"Binormal"*/]))
                binormal = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[14/*"Color"*/]))
                color = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[16/*"BoneWeights"*/]))
                boneWeights = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[17/*"BoneIndices"*/]))
                boneIndex = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
        }

        if (m->Indices() == NULL)
            m = MeshBatcher::CreateFakeIndexBuffer(m);

        for (int i = 0; i < uPtr(m)->IndexCount(); i++)
        {
            if ((batchVertexCount >= batchVertexCutoff) || (batchIndexCount >= batchIndexCutoff))
            {
                batchVertexCutoff = 65535;
                batchIndexCutoff = 100000;
                b = ::g::Fuse::Drawing::Batching::Batch::New1(batchVertexCutoff, batchIndexCutoff, true);
                ::g::Uno::Collections::List__Add_fn(uPtr(batches1), b);
                virtualIndexToRealIndex = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<int, int>*/]);
                batchVertexCount = 0;
                batchIndexCount = 0;
            }

            int originalIndex = uPtr(uPtr(m)->Indices())->GetInt(i);
            int virtualIndex = virtualIndexBase + originalIndex;
            int newIndex;

            if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(virtualIndexToRealIndex), uCRef<int>(virtualIndex), &newIndex, &ret18), ret18))
            {
                newIndex = batchVertexCount;
                ::g::Uno::Collections::Dictionary__Add_fn(uPtr(virtualIndexToRealIndex), uCRef<int>(virtualIndex), uCRef<int>(newIndex));

                if (position != NULL)
                    uPtr(uPtr(b)->Positions())->Write4((ind3 = uPtr(position)->GetFloat4(originalIndex), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)));

                if (texcoord != NULL)
                    uPtr(uPtr(b)->TexCoord0s())->Write3((ind4 = uPtr(texcoord)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind4.X, ind4.Y)));

                if (texcoord1 != NULL)
                    uPtr(uPtr(b)->TexCoord1s())->Write3((ind5 = uPtr(texcoord1)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind5.X, ind5.Y)));

                if (texcoord2 != NULL)
                    uPtr(uPtr(b)->TexCoord2s())->Write3((ind6 = uPtr(texcoord2)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind6.X, ind6.Y)));

                if (texcoord3 != NULL)
                    uPtr(uPtr(b)->TexCoord3s())->Write3((ind7 = uPtr(texcoord3)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind7.X, ind7.Y)));

                if (texcoord4 != NULL)
                    uPtr(uPtr(b)->TexCoord4s())->Write3((ind8 = uPtr(texcoord4)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind8.X, ind8.Y)));

                if (texcoord5 != NULL)
                    uPtr(uPtr(b)->TexCoord5s())->Write3((ind9 = uPtr(texcoord5)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind9.X, ind9.Y)));

                if (texcoord6 != NULL)
                    uPtr(uPtr(b)->TexCoord6s())->Write3((ind10 = uPtr(texcoord6)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind10.X, ind10.Y)));

                if (texcoord7 != NULL)
                    uPtr(uPtr(b)->TexCoord7s())->Write3((ind11 = uPtr(texcoord7)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind11.X, ind11.Y)));

                if (normal != NULL)
                    uPtr(uPtr(b)->Normals())->Write4((ind12 = uPtr(normal)->GetFloat4(originalIndex), ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z)));

                if (tangent != NULL)
                    uPtr(uPtr(b)->Tangents())->Write5(uPtr(tangent)->GetFloat4(originalIndex));

                if (binormal != NULL)
                    uPtr(uPtr(b)->Binormals())->Write4((ind13 = uPtr(binormal)->GetFloat4(originalIndex), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)));

                if (color != NULL)
                    uPtr(uPtr(b)->Colors())->Write5(uPtr(color)->GetFloat4(originalIndex));

                if (boneWeights != NULL)
                    uPtr(uPtr(b)->BoneWeightBuffer())->Write2(uPtr(boneWeights)->GetByte4Normalized(originalIndex));

                if (boneIndex != NULL)
                    uPtr(uPtr(b)->BoneIndexBuffer())->Write2(uPtr(boneIndex)->GetByte4(originalIndex));

                uPtr(uPtr(b)->InstanceIndices())->Write17((uint16_t)uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(e), &ret19), ret19))->InstanceIndex);
                batchVertexCount++;
            }

            uPtr(uPtr(b)->Indices())->Write1((uint16_t)newIndex);
            batchIndexCount++;
        }

        virtualIndexBase = virtualIndexBase + uPtr(m)->VertexCount();
    }

    batches = ((uArray*)batches1->ToArray());
}

// private static Uno.Content.Models.ModelMesh CreateFakeIndexBuffer(Uno.Content.Models.ModelMesh m) [static] :751
::g::Uno::Content::Models::ModelMesh* MeshBatcher::CreateFakeIndexBuffer(::g::Uno::Content::Models::ModelMesh* m)
{
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret15;
    uArray* d = uArray::New(::TYPES[6/*uint[]*/], uPtr(m)->VertexCount());

    for (int i = 0; i < d->Length(); i++)
        uPtr(d)->Item<uint32_t>(i) = (uint32_t)i;

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(m->VertexAttributes()), ::TYPES[1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret15), ret15);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(dict), v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]));
    }

    return ::g::Uno::Content::Models::ModelMesh::New1(m->Name(), m->PrimitiveType(), dict, ::g::Uno::Content::Models::IndexArray::New2(d));
}

// public MeshBatcher New() [static] :590
MeshBatcher* MeshBatcher::New1()
{
    MeshBatcher* obj14 = (MeshBatcher*)uNew(MeshBatcher_typeof());
    obj14->ctor_();
    return obj14;
}
// }

}}}} // ::g::Fuse::Drawing::Batching
