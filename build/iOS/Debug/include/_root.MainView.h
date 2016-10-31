// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }

    void ctor_3();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
