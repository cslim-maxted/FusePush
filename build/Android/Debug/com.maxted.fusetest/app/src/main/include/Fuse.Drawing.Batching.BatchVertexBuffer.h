// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchVertexBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public sealed class BatchVertexBuffer :347
// {
uType* BatchVertexBuffer_typeof();
void BatchVertexBuffer__ctor__fn(BatchVertexBuffer* __this, int* type, int* maxVertices1, bool* staticBatch);
void BatchVertexBuffer__ctor_1_fn(BatchVertexBuffer* __this, int* type, ::g::Uno::Buffer* data);
void BatchVertexBuffer__get_Buffer_fn(BatchVertexBuffer* __this, ::g::Uno::Buffer** __retval);
void BatchVertexBuffer__get_DataType_fn(BatchVertexBuffer* __this, int* __retval);
void BatchVertexBuffer__set_DataType_fn(BatchVertexBuffer* __this, int* value);
void BatchVertexBuffer__Flush_fn(BatchVertexBuffer* __this);
void BatchVertexBuffer__New1_fn(int* type, int* maxVertices1, bool* staticBatch, BatchVertexBuffer** __retval);
void BatchVertexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchVertexBuffer** __retval);
void BatchVertexBuffer__get_StrideInBytes_fn(BatchVertexBuffer* __this, int* __retval);
void BatchVertexBuffer__get_VertexBuffer_fn(BatchVertexBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval);
void BatchVertexBuffer__Write2_fn(BatchVertexBuffer* __this, ::g::Uno::Byte4* value);
void BatchVertexBuffer__Write3_fn(BatchVertexBuffer* __this, ::g::Uno::Float2* value);
void BatchVertexBuffer__Write4_fn(BatchVertexBuffer* __this, ::g::Uno::Float3* value);
void BatchVertexBuffer__Write5_fn(BatchVertexBuffer* __this, ::g::Uno::Float4* value);
void BatchVertexBuffer__Write17_fn(BatchVertexBuffer* __this, uint16_t* value);

struct BatchVertexBuffer : uObject
{
    int _position;
    uStrong< ::g::Uno::Buffer*> buf;
    int dataType;
    bool isDirty;
    int maxVertices;
    int usage;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> vbo;

    void ctor_(int type, int maxVertices1, bool staticBatch);
    void ctor_1(int type, ::g::Uno::Buffer* data);
    ::g::Uno::Buffer* Buffer();
    int DataType();
    void DataType(int value);
    void Flush();
    int StrideInBytes();
    ::g::Uno::Graphics::VertexBuffer* VertexBuffer();
    void Write2(::g::Uno::Byte4 value);
    void Write3(::g::Uno::Float2 value);
    void Write4(::g::Uno::Float3 value);
    void Write5(::g::Uno::Float4 value);
    void Write17(uint16_t value);
    static BatchVertexBuffer* New1(int type, int maxVertices1, bool staticBatch);
    static BatchVertexBuffer* New2(int type, ::g::Uno::Buffer* data);
};
// }

}}}} // ::g::Fuse::Drawing::Batching
