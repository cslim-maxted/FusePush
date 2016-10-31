// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.commaxtedfusetest_FuseControlsButton_Text_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.PushNotifications.Push.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
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
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[6];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :9
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("buttonText");
    ::STRINGS[2] = uString::Const("onClick");
    ::STRINGS[3] = uString::Const("var Observable = require('FuseJS/Observable');\n"
        "\t\t    var buttonText = Observable('Button');\n"
        "\t\t    var clickCount = 0;\n"
        "\n"
        "\t\t    function onClick() {\n"
        "\t\t        clickCount += 1;\n"
        "\t\t        buttonText.value = 'Clicks: ' + clickCount;\n"
        "\t\t    }\n"
        "\n"
        "\t\t    module.exports = {\n"
        "\t\t        buttonText: buttonText,\n"
        "\t\t        onClick: onClick\n"
        "\t\t    }\n"
        "\n"
        "\t        var push = require(\"FuseJS/Push\");\n"
        "\n"
        "\t\t    push.onRegistrationSucceeded = function(regID) {\n"
        "\t\t        console.log(\"Reg Succeeded: \" + regID);\n"
        "\n"
        "\t\t        //console.log(\"deviceInfo.getDeviceId: \" + deviceInfo.getDeviceId);\n"
        "\t\t\t\t//console.log(\"deviceInfo.getDeviceOsVer: \" + deviceInfo.getDeviceOsVer);\n"
        "\t\t\t\t//console.log(\"deviceInfo.getAppVersion: \" + deviceInfo.getAppVersion);\n"
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
        "\t\t    // \355\221\270\354\213\234 \353\223\261\353\241\235\n"
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
        "\t\t\t\tvar params = \"push_token=\"+regID+\"&device_id=test&device_os=\"+platform+\n"
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
        "\n"
        "\t\t    \t/*\n"
        "\t\t        var status = 0;\n"
        "\t\t\t\tvar response_ok = false;\n"
        "\n"
        "\t\t\t\t// FormData()\353\245\274 \354\202\254\354\232\251\355\225\240 \354\210\230 \354\227\206\353\213\244\353\213\210...\n"
        "\t\t\t\t// https://www.fusetools.com/community/forums/bug_reports/multipartform-data_support_in_fetch?page=1&highlight=eb1994d9-2a10-4da7-892c-79facd92ba9f#post-eb1994d9-2a10-4da7-892c-79facd92ba9f\n"
        "\n"
        "\t\t\t\tvar params = new FormData();\n"
        "\t\t\t\tparams.append(\"push_token\",regID);\n"
        "\t\t\t\tparams.append(\"device_id\", \"test\");\n"
        "\t\t\t\tparams.append(\"device_os\", \"test\");\n"
        "\t\t\t\tparams.append(\"app_ver\", \"0.0.1\");\n"
        "\n"
        "\t\t\t\tconsole.log(JSON.stringify(params));\n"
        "\n"
        "\t\t\t\tfetch('http://61.97.121.198/fuse_push/register.php', {\n"
        "\t\t\t\t    method: 'POST',\n"
        "\t\t\t\t    headers: { \"Content-type\": \"application/json\"},\n"
        "\t\t\t\t    body: JSON.stringify(params)\n"
        "\t\t\t\t}).then(function(response) {\n"
        "\t\t\t\t    status = response.status;  // Get the HTTP status code\n"
        "\t\t\t\t    response_ok = response.ok; // Is response.status in the 200-range?\n"
        "\t\t\t\t    return response.json();    // This returns a promise\n"
        "\t\t\t\t}).then(function(responseObject) {\n"
        "\t\t\t\t    // Do something with the result\n"
        "\t\t\t\t    console.log(\"Recieved Push reg: \" + JSON.stringify(responseObject));\n"
        "\t\t\t\t}).catch(function(err) {\n"
        "\t\t\t\t    // An error occurred somewhere in the Promise chain\n"
        "\t\t\t\t});\n"
        "\t\t\t\t*/\n"
        "\t\t    }");
    ::STRINGS[4] = uString::Const("MainView.ux");
    ::STRINGS[5] = uString::Const("Hello, world!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp_Text_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic);
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
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :13
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :17
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :13
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;

// public MainView() [instance] :13
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :17
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp1 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp2 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp3 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp4 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp5 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::PushNotifications::Push* temp6 = ::g::Fuse::PushNotifications::Push::New2();
    ::g::Polyfills::Window::WindowModule* temp7 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp8 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp9 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp10 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp11 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp12 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp13 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp14 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Controls::Button* temp = ::g::Fuse::Controls::Button::New5();
    temp_Text_inst = ::g::commaxtedfusetest_FuseControlsButton_Text_Property::New1(temp, MainView::__selector0());
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp16 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp17 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::ScrollView* temp18 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Slider* temp21 = ::g::Fuse::Controls::Slider::New5();
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Text_inst, ::STRINGS[1/*"buttonText"*/]);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"onClick"*/]);
    ::g::Fuse::Controls::Switch* temp23 = ::g::Fuse::Controls::Switch::New5();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp16->Code(::STRINGS[3/*"var Observa...*/]);
    temp16->LineNumber(3);
    temp16->FileName(::STRINGS[4/*"MainView.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    temp18->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp20->Value(::STRINGS[5/*"Hello, world!"*/]);
    temp20->FontSize(30.0f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp23->Alignment(1);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public MainView New() [static] :13
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
