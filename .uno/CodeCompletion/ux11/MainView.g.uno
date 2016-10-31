[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MainView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Reactive.FuseJS.TimerModule();
        var temp1 = new Fuse.Reactive.FuseJS.Http();
        var temp2 = new Fuse.Triggers.BusyTaskModule();
        var temp3 = new Fuse.FileSystem.FileSystemModule();
        var temp4 = new Fuse.Storage.StorageModule();
        var temp5 = new Fuse.PushNotifications.Push();
        var temp6 = new Polyfills.Window.WindowModule();
        var temp7 = new FuseJS.Globals();
        var temp8 = new FuseJS.Lifecycle();
        var temp9 = new FuseJS.Environment();
        var temp10 = new FuseJS.Base64();
        var temp11 = new FuseJS.Bundle();
        var temp12 = new FuseJS.FileReaderImpl();
        var temp13 = new FuseJS.UserEvents();
        var temp14 = new Device();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp15 = new Fuse.Controls.DockPanel();
        var temp16 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp17 = new Fuse.Controls.StatusBarBackground();
        var temp18 = new Fuse.Controls.ScrollView();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Controls.Text();
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp17);
        temp15.Children.Add(temp18);
        temp16.Code = "var Observable = require('FuseJS/Observable');\n\t\t    var Device     = require('Device');\n\t        var push = require(\"FuseJS/Push\");\n\n\t\t    push.onRegistrationSucceeded = function(regID) {\n\t\t        console.log(\"Reg Succeeded: \" + regID);\n\n\t\t\t    // 디바이스 정보 \n\t\t        console.log('UUID:',   Device.UUID);\n\t\t        console.log('locale:', Device.locale);\n\t\t        console.log('system:', Device.system + \" \" + Device.systemVersion);\n\t\t        console.log('SDK:',    Device.SDKVersion);\n\t\t        console.log('device:', Device.vendor + \" \" + Device.model);\n\t\t        console.log('cores:',  Device.cores);\n\t\t        console.log('retina:', Device.isRetina);\n\t\t\t\n\t\t\t\trequestPushReg(regID);\n\t\t    };\n\n\t\t    // 푸시 라이프사이클\n\t\t    push.onRegistrationFailed = function(reason) {\n\t\t        console.log(\"Reg Failed: \" + reason);\n\t\t    };\n\n\t\t    push.onReceivedMessage = function(payload) {\n\t\t        console.log(\"Recieved Push Notification: \" + payload);\n\t\t    };\n\n\t\t    function requestPushReg(regID) {\n\n\t\t\t\tvar Environment = require('FuseJS/Environment');\n\t\t\t\tvar platform = \"\";\n\t\t\t\tvar version = Environment.mobileOSVersion;\n\t\t\t\t\n\t\t\t\tif (Environment.ios) platform = \"IOS\";\n\t\t\t\telse if(Environment.android) platform = \"AND\";\n\n\t\t\t\tvar xhr = new XMLHttpRequest();\n\t\t\t\tvar params = \"push_token=\"+regID+\"&device_id=\"+Device.UUID+\"&device_os=\"+platform+\n\t\t\t\t\"&app_ver=\"+version;\n\t\t\t\tconsole.log(\"params: \"+params);\n\n\n\t\t\t\txhr.open(\"POST\", \"http://61.97.121.198/fuse_push/register.php\" , true);\n\t\t\t\txhr.setRequestHeader(\"Content-type\", \"application/x-www-form-urlencoded\");\n\t\t\t\txhr.onreadystatechange = function() {\n  \t\t\t\t\tif (xhr.readyState == 4) {\n    \t\t\t\t\t// JSON.parse does not evaluate the attacker's scripts.\n    \t\t\t\t\tconsole.log(xhr.responseText);\n    \t\t\t\t\tvar resp = JSON.parse(xhr.responseText);\n    \t\t\t\t\tconsole.log(resp._state_);\n  \t\t\t\t\t}\n\t\t\t\t}\n\t\t\t\txhr.send(params);\n\t\t    }\n\n\t        module.exports = {\n\t            name:     Device.vendor + \" \" + Device.model,\n\t            uuid:     Device.UUID,\n\t            locale:   Device.locale,\n\t            cores:    Device.cores,\n\t            isRetina: Device.isRetina\n\t        };";
        temp16.LineNumber = 3;
        temp16.FileName = "MainView.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Top);
        temp18.ClipToBounds = true;
        temp18.Children.Add(temp19);
        temp19.Children.Add(temp20);
        temp20.Value = "푸시 테스트!";
        temp20.FontSize = 30f;
        __g_nametable.This = this;
        this.Children.Add(temp15);
    }
}
