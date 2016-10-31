// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchIndexBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchVertexBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public sealed class Batch :11
// {
uType* Batch_typeof();
void Batch__ctor__fn(Batch* __this, int* maxVertices1, int* maxIndices1, bool* staticBatch1);
void Batch__get_Binormals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_Binormals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_BoneIndexBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_BoneIndexBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_BoneWeightBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_BoneWeightBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_Colors_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_Colors_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_IndexBuffer_fn(Batch* __this, ::g::Uno::Graphics::IndexBuffer** __retval);
void Batch__get_IndexType_fn(Batch* __this, int* __retval);
void Batch__get_Indices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchIndexBuffer** __retval);
void Batch__set_Indices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchIndexBuffer* value);
void Batch__get_InstanceIndices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_InstanceIndices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__New1_fn(int* maxVertices1, int* maxIndices1, bool* staticBatch1, Batch** __retval);
void Batch__get_Normals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_Normals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_Positions_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_Positions_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_Tangents_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_Tangents_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord0s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord0s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord1s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord1s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord2s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord2s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord3s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord3s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord4s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord4s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord5s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord5s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord6s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord6s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_TexCoord7s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void Batch__set_TexCoord7s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
void Batch__get_VertexCount_fn(Batch* __this, int* __retval);
void Batch__set_VertexCount_fn(Batch* __this, int* value);

struct Batch : uObject
{
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> binormals;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> boneIndices;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> boneWeights;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> colors;
    int explicitVertexCount;
    bool hasExplicitVertexCount;
    uStrong< ::g::Fuse::Drawing::Batching::BatchIndexBuffer*> indexBuffer;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> instanceIndex;
    int maxIndices;
    int maxVertices;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> normals;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> positions;
    bool staticBatch;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> tangents;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord0s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord1s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord2s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord3s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord4s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord5s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord6s;
    uStrong< ::g::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord7s;

    void ctor_(int maxVertices1, int maxIndices1, bool staticBatch1);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* Binormals();
    void Binormals(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* BoneIndexBuffer();
    void BoneIndexBuffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* BoneWeightBuffer();
    void BoneWeightBuffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* Colors();
    void Colors(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Uno::Graphics::IndexBuffer* IndexBuffer();
    int IndexType();
    ::g::Fuse::Drawing::Batching::BatchIndexBuffer* Indices();
    void Indices(::g::Fuse::Drawing::Batching::BatchIndexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* InstanceIndices();
    void InstanceIndices(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* Normals();
    void Normals(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* Positions();
    void Positions(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* Tangents();
    void Tangents(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord0s();
    void TexCoord0s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord1s();
    void TexCoord1s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord2s();
    void TexCoord2s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord3s();
    void TexCoord3s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord4s();
    void TexCoord4s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord5s();
    void TexCoord5s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord6s();
    void TexCoord6s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord7s();
    void TexCoord7s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value);
    int VertexCount();
    void VertexCount(int value);
    static Batch* New1(int maxVertices1, int maxIndices1, bool staticBatch1);
};
// }

}}}} // ::g::Fuse::Drawing::Batching
