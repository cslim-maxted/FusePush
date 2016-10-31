// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{struct RenderNode;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class RenderNode :1807
// {
::g::Fuse::Visual_type* RenderNode_typeof();
void RenderNode__CalcIsLocalFlat_fn(RenderNode* __this, bool* __retval);
void RenderNode__Draw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc);
void RenderNode__OnDraw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc);
void RenderNode__OnRooted_fn(RenderNode* __this);
void RenderNode__OnUnrooted_fn(RenderNode* __this);
void RenderNode__get_ParentWorldTransformInternal_fn(RenderNode* __this, ::g::Fuse::FastMatrix** __retval);

struct RenderNode : ::g::Fuse::Visual
{
    void OnDraw(::g::Fuse::DrawContext* dc);
};
// }

}}} // ::g::Fuse::Entities
