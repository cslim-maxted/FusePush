// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Device.h>
#include <_root.MainView.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.PushNotifications.Push.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :7
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("var Observable = require('FuseJS/Observable');\n"
        "\t\t    var Device     = require('Device');\n"
        "\n"
        "\t\t    function requestPushReg(regID) {\n"
        "\n"
        "\t\t\t\tvar Environment = require('FuseJS/Environment');\n"
        "\t\t\t\tvar platform = \"\";\n"
        "\t\t\t\tvar version = Environment.mobileOSVersion;\n"
        "\t\t\t\t\n"
        "\t\t\t\tif (Environment.ios) platform = \"IOS\";\n"
        "\t\t\t\telse if(Environment.android) platform = \"AND\";\n"
        "\n"
        "\t\t\t\tvar xhr = new XMLHttpRequest();\n"
        "\t\t\t\tvar params = \"push_token=\"+regID+\"&device_id=\"+Device.UUID+\"&device_os=\"+platform+\n"
        "\t\t\t\t\"&app_ver=\"+version;\n"
        "\t\t\t\tconsole.log(\"params: \"+params);\n"
        "\n"
        "\n"
        "\t\t\t\txhr.open(\"POST\", \"http://61.97.121.198/fuse_push/register.php\" , true);\n"
        "\t\t\t\txhr.setRequestHeader(\"Content-type\", \"application/x-www-form-urlencoded\");\n"
        "\t\t\t\txhr.onreadystatechange = function() {\n"
        "  \t\t\t\t\tif (xhr.readyState == 4) {\n"
        "    \t\t\t\t\t// JSON.parse does not evaluate the attacker's scripts.\n"
        "    \t\t\t\t\tconsole.log(xhr.responseText);\n"
        "    \t\t\t\t\tvar resp = JSON.parse(xhr.responseText);\n"
        "    \t\t\t\t\tconsole.log(resp._state_);\n"
        "  \t\t\t\t\t}\n"
        "\t\t\t\t}\n"
        "\t\t\t\txhr.send(params);\n"
        "\t\t    }\n"
        "\n"
        "\t        var push = require(\"FuseJS/Push\");\n"
        "\n"
        "\t\t    push.onRegistrationSucceeded = function(regID) {\n"
        "\t\t        console.log(\"Reg Succeeded: \" + regID);\n"
        "\n"
        "\t\t\t    // \353\224\224\353\260\224\354\235\264\354\212\244 \354\240\225\353\263\264 \n"
        "\t\t        console.log('UUID:',   Device.UUID);\n"
        "\t\t        console.log('locale:', Device.locale);\n"
        "\t\t        console.log('system:', Device.system + \" \" + Device.systemVersion);\n"
        "\t\t        console.log('SDK:',    Device.SDKVersion);\n"
        "\t\t        console.log('device:', Device.vendor + \" \" + Device.model);\n"
        "\t\t        console.log('cores:',  Device.cores);\n"
        "\t\t        console.log('retina:', Device.isRetina);\n"
        "\t\t\t\n"
        "\t\t\t\trequestPushReg(regID);\n"
        "\t\t    };\n"
        "\n"
        "\t\t    push.onRegistrationFailed = function(reason) {\n"
        "\t\t        console.log(\"Reg Failed: \" + reason);\n"
        "\t\t    };\n"
        "\n"
        "\t\t    push.onReceivedMessage = function(payload) {\n"
        "\t\t        console.log(\"Recieved Push Notification: \" + payload);\n"
        "\t\t    };\n"
        "\n"
        "\n"
        "\t        module.exports = {\n"
        "\t            name:     Device.vendor + \" \" + Device.model,\n"
        "\t            uuid:     Device.UUID,\n"
        "\t            locale:   Device.locale,\n"
        "\t            cores:    Device.cores,\n"
        "\t            isRetina: Device.isRetina\n"
        "\t        };");
    ::STRINGS[1] = uString::Const("MainView.ux");
    ::STRINGS[2] = uString::Const("\355\221\270\354\213\234 \355\205\214\354\212\244\355\212\270!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(12,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 14;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :11
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :15
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :11
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;

// public MainView() [instance] :11
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :15
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp1 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp2 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp3 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp4 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::PushNotifications::Push* temp5 = ::g::Fuse::PushNotifications::Push::New2();
    ::g::Polyfills::Window::WindowModule* temp6 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp7 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp8 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp9 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp10 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp11 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp12 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp13 = ::g::FuseJS::UserEvents::New2();
    ::g::Device* temp14 = ::g::Device::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp16 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp17 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::ScrollView* temp18 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp16->Code(::STRINGS[0/*"var Observa...*/]);
    temp16->LineNumber(3);
    temp16->FileName(::STRINGS[1/*"MainView.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    temp18->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->Value(::STRINGS[2/*"푸시 테스트!"*/]);
    temp20->FontSize(30.0f);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public MainView New() [static] :11
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
