// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/content/models/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class VertexAttributeArray :1501
// {
uType* VertexAttributeArray_typeof();
void VertexAttributeArray__get_Buffer_fn(VertexAttributeArray* __this, ::g::Uno::Buffer** __retval);
void VertexAttributeArray__get_Count_fn(VertexAttributeArray* __this, int* __retval);
void VertexAttributeArray__GetByte4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval);
void VertexAttributeArray__GetByte4Normalized_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval);
void VertexAttributeArray__GetFloat4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Float4* __retval);
void VertexAttributeArray__get_Type_fn(VertexAttributeArray* __this, int* __retval);

struct VertexAttributeArray : uObject
{
    uStrong< ::g::Uno::Buffer*> _buffer;
    int _type;

    ::g::Uno::Buffer* Buffer();
    int Count();
    ::g::Uno::Byte4 GetByte4(int index);
    ::g::Uno::Byte4 GetByte4Normalized(int index);
    ::g::Uno::Float4 GetFloat4(int index);
    int Type();
};
// }

}}}} // ::g::Uno::Content::Models
