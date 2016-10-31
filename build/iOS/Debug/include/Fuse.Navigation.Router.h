// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public partial sealed class Router :1699
// {
struct Router_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Navigation::IBaseNavigation interface4;
};

Router_type* Router_typeof();
void Router__get_BackButtonAction_fn(Router* __this, int* __retval);
void Router__set_BackButtonAction_fn(Router* __this, int* value);
void Router__get_CanGoBack_fn(Router* __this, bool* __retval);
void Router__FindOutlet_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval);
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval);
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this);
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* active, ::g::Fuse::Navigation::Route** __retval);
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval);
void Router__GetRoute_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__GoBack_fn(Router* __this);
void Router__GoBack1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__Goto_fn(Router* __this, ::g::Fuse::Navigation::Route* route);
void Router__Goto1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__GotoMasterRoute_fn(Router* __this);
void Router__GoUp_fn(Router* __this);
void Router__HasOtherRouter_fn(Router* __this, ::g::Fuse::Visual* n, bool* __retval);
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value);
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value);
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval);
void Router__set_IsMasterRouter_fn(Router* __this, bool* value);
void Router__OnHistoryChanged_fn(Router* __this, ::g::Fuse::Navigation::Route* current);
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
void Router__OnRooted_fn(Router* __this);
void Router__OnUnrooted_fn(Router* __this);
void Router__OnUpFromRoot_fn(Router* __this);
void Router__ParseRoute_fn(::g::Fuse::Scripting::Context* c, uArray* args, int* pos, ::g::Fuse::Navigation::Route** __retval);
void Router__Pop_fn(Router* __this);
void Router__Push_fn(Router* __this, ::g::Fuse::Navigation::Route* route);
void Router__Push1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, bool* userRequest, ::g::Fuse::Navigation::Route** __retval);
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, ::g::Fuse::Navigation::Route** __retval);
void Router__ValidateParameter_fn(::g::Fuse::Scripting::Context* c, uObject* arg, int* depth, bool* __retval);

struct Router : ::g::Fuse::Node
{
    int _backButtonAction;
    uStrong< ::g::Uno::Collections::List*> _history;
    bool _isMasterRouter;
    static uSStrong< ::g::Fuse::Navigation::Route*> _masterCurrent_;
    static uSStrong< ::g::Fuse::Navigation::Route*>& _masterCurrent() { return Router_typeof()->Init(), _masterCurrent_; }
    static uSStrong< ::g::Uno::Collections::List*> _masterHistory_;
    static uSStrong< ::g::Uno::Collections::List*>& _masterHistory() { return Router_typeof()->Init(), _masterHistory_; }
    uStrong<uDelegate*> HistoryChanged1;

    int BackButtonAction();
    void BackButtonAction(int value);
    bool CanGoBack();
    uObject* FindOutlet(::g::Fuse::Node* active);
    ::g::Fuse::Navigation::Route* GetCurrent(::g::Fuse::Visual* active);
    ::g::Fuse::Navigation::Route* GetCurrentRoute();
    void GoBack();
    void Goto(::g::Fuse::Navigation::Route* route);
    void GotoMasterRoute();
    void GoUp();
    bool HasOtherRouter(::g::Fuse::Visual* n);
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    bool IsMasterRouter();
    void IsMasterRouter(bool value);
    void OnHistoryChanged(::g::Fuse::Navigation::Route* current);
    void OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
    void OnUpFromRoot();
    void Pop();
    void Push(::g::Fuse::Navigation::Route* route);
    ::g::Fuse::Navigation::Route* SetRoute(::g::Fuse::Navigation::Route* r, int gotoMode, int operation, bool userRequest);
    ::g::Fuse::Navigation::Route* SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int gotoMode, int operation);
    static void GetRoute(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void GoBack1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void Goto1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static ::g::Fuse::Navigation::Route* ParseRoute(::g::Fuse::Scripting::Context* c, uArray* args, int pos);
    static void Push1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static bool ValidateParameter(::g::Fuse::Scripting::Context* c, uObject* arg, int depth);
};
// }

}}} // ::g::Fuse::Navigation
