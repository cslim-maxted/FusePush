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
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class MeshRenderer :1226
// {
::g::Fuse::Visual_type* MeshRenderer_typeof();
void MeshRenderer__Draw_fn(MeshRenderer* __this, ::g::Fuse::DrawContext* dc);
void MeshRenderer__get_Entity_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity** __retval);
void MeshRenderer__get_HitTestLocalBounds_fn(MeshRenderer* __this, ::g::Fuse::VisualBounds** __retval);
void MeshRenderer__get_HitTestMode_fn(MeshRenderer* __this, int* __retval);
void MeshRenderer__set_HitTestMode_fn(MeshRenderer* __this, int* value);
void MeshRenderer__get_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material** __retval);
void MeshRenderer__set_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material* value);
void MeshRenderer__OnHitTest_fn(MeshRenderer* __this, ::g::Fuse::HitTestContext* args);
void MeshRenderer__Validate_fn(MeshRenderer* __this);

struct MeshRenderer : ::g::Fuse::Visual
{
    int _hitTestMode;
    uStrong< ::g::Fuse::Entities::Material*> _material;
    uStrong< ::g::Fuse::Entities::Mesh*> _mesh;

    ::g::Fuse::Entities::Entity* Entity();
    int HitTestMode();
    void HitTestMode(int value);
    ::g::Fuse::Entities::Material* Material();
    void Material(::g::Fuse::Entities::Material* value);
    void Validate();
};
// }

}}} // ::g::Fuse::Entities
