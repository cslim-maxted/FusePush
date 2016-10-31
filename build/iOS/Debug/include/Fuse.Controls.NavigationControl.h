// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__PageData;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class NavigationControl :348
// {
struct NavigationControl_type : ::g::Fuse::Controls::Control_type
{
    void(*fp_CreateTriggers)(::g::Fuse::Controls::NavigationControl*, ::g::Fuse::Elements::Element*, ::g::Fuse::Controls::NavigationControl__PageData*);
    void(*fp_UpdateInteraction)(::g::Fuse::Controls::NavigationControl*);
    void(*fp_UpdateProgress)(::g::Fuse::Controls::NavigationControl*, ::g::Fuse::Elements::Element*, ::g::Fuse::Navigation::NavigationPageState*, ::g::Fuse::Controls::NavigationControl__PageData*);
};

NavigationControl_type* NavigationControl_typeof();
void NavigationControl__get_Active_fn(NavigationControl* __this, ::g::Fuse::Visual** __retval);
void NavigationControl__set_Active_fn(NavigationControl* __this, ::g::Fuse::Visual* value);
void NavigationControl__CleanupTriggers_fn(NavigationControl* __this, ::g::Fuse::Elements::Element* page, NavigationControl__PageData* data);
void NavigationControl__GetPageData_fn(::g::Fuse::Elements::Element* elm, bool* create, NavigationControl__PageData** __retval);
void NavigationControl__GetTransition_fn(::g::Fuse::Visual* elm, int* __retval);
void NavigationControl__get_IsRouterOutlet_fn(NavigationControl* __this, bool* __retval);
void NavigationControl__set_IsRouterOutlet_fn(NavigationControl* __this, bool* value);
void NavigationControl__get_Navigation_fn(NavigationControl* __this, ::g::Fuse::Navigation::VisualNavigation** __retval);
void NavigationControl__OnChildAdded_fn(NavigationControl* __this, ::g::Fuse::Node* n);
void NavigationControl__OnChildRemoved_fn(NavigationControl* __this, ::g::Fuse::Node* n);
void NavigationControl__OnPageProgressChanged_fn(NavigationControl* __this, uObject* page, ::g::Fuse::Navigation::NavigationArgs* args);
void NavigationControl__OnRooted_fn(NavigationControl* __this);
void NavigationControl__OnUnrooted_fn(NavigationControl* __this);
void NavigationControl__PageTransition_fn(NavigationControl* __this, ::g::Fuse::Visual* elm, int* __retval);
void NavigationControl__get_RouterOutletType_fn(NavigationControl* __this, int* __retval);
void NavigationControl__get_Transition_fn(NavigationControl* __this, int* __retval);
void NavigationControl__set_Transition_fn(NavigationControl* __this, int* value);
void NavigationControl__UpdateChild_fn(NavigationControl* __this, ::g::Fuse::Elements::Element* c);
void NavigationControl__UpdateInteraction_fn(NavigationControl* __this);
void NavigationControl__UpdateProgress_fn(NavigationControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState* state, NavigationControl__PageData* pd);

struct NavigationControl : ::g::Fuse::Controls::Panel
{
    bool _isRouterOutlet;
    uStrong< ::g::Fuse::Navigation::VisualNavigation*> _navigation;
    static uSStrong< ::g::Fuse::PropertyHandle*> _pageDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _pageDataProperty() { return NavigationControl_typeof()->Init(), _pageDataProperty_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _propTransition_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propTransition() { return NavigationControl_typeof()->Init(), _propTransition_; }
    int _transition;

    ::g::Fuse::Visual* Active();
    void Active(::g::Fuse::Visual* value);
    void CleanupTriggers(::g::Fuse::Elements::Element* page, NavigationControl__PageData* data);
    void CreateTriggers(::g::Fuse::Elements::Element* c, NavigationControl__PageData* pd) { (((NavigationControl_type*)__type)->fp_CreateTriggers)(this, c, pd); }
    bool IsRouterOutlet();
    void IsRouterOutlet(bool value);
    ::g::Fuse::Navigation::VisualNavigation* Navigation();
    void OnPageProgressChanged(uObject* page, ::g::Fuse::Navigation::NavigationArgs* args);
    int PageTransition(::g::Fuse::Visual* elm);
    int RouterOutletType();
    int Transition();
    void Transition(int value);
    void UpdateChild(::g::Fuse::Elements::Element* c);
    void UpdateInteraction() { (((NavigationControl_type*)__type)->fp_UpdateInteraction)(this); }
    void UpdateProgress(::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__PageData* pd);
    static NavigationControl__PageData* GetPageData(::g::Fuse::Elements::Element* elm, bool create);
    static int GetTransition(::g::Fuse::Visual* elm);
    static void UpdateInteraction(NavigationControl* __this) { NavigationControl__UpdateInteraction_fn(__this); }
    static void UpdateProgress(NavigationControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__PageData* pd);
};

}}} // ::g::Fuse::Controls

#include <Fuse.Navigation.NavigationPageState.h>

namespace g{
namespace Fuse{
namespace Controls{

inline void NavigationControl::UpdateProgress(::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__PageData* pd) { (((NavigationControl_type*)__type)->fp_UpdateProgress)(this, page, &state, pd); }
inline void NavigationControl::UpdateProgress(NavigationControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__PageData* pd) { NavigationControl__UpdateProgress_fn(__this, page, &state, pd); }
// }

}}} // ::g::Fuse::Controls
