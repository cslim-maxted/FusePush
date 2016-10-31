// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Device.h>
#include <Fuse.AppBase.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <KeychainItemWrapper/KeychainItemWrapper.h>
#include <sys/sysctl.h>
#include <sys/types.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[11];
static uType* TYPES[6];

namespace g{

// public sealed class Device :30
// {
// static Device() :30
static void Device__cctor__fn(uType* __type)
{
    Device::cachedNumProcessorCores_ = 0.0;
}

static void Device_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Device");
    ::STRINGS[1] = uString::Const("vendor");
    ::STRINGS[2] = uString::Const("model");
    ::STRINGS[3] = uString::Const("system");
    ::STRINGS[4] = uString::Const("systemVersion");
    ::STRINGS[5] = uString::Const("SDKVersion");
    ::STRINGS[6] = uString::Const("cores");
    ::STRINGS[7] = uString::Const("displayScale");
    ::STRINGS[8] = uString::Const("isRetina");
    ::STRINGS[9] = uString::Const("UUID");
    ::STRINGS[10] = uString::Const("locale");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[1] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof());
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[4] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof());
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        Device_typeof(), (uintptr_t)&::g::Device::_instance_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedModelName_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Device::cachedNumProcessorCores_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedSDKVersion_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedSystemName_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedSystemVersion_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedUUID_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedVendorName_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Device_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Device);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Device", options);
    type->fp_build_ = Device_build;
    type->fp_ctor_ = (void*)Device__New2_fn;
    type->fp_cctor_ = Device__cctor__fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Device() :42
void Device__ctor_2_fn(Device* __this)
{
    __this->ctor_2();
}

// private static extern string GetCurrentLocale() :266
void Device__GetCurrentLocale_fn(uString** __retval)
{
    *__retval = Device::GetCurrentLocale();
}

// private static extern string GetModel() :303
void Device__GetModel_fn(uString** __retval)
{
    *__retval = Device::GetModel();
}

// private static extern int GetNumProcessorCores() :335
void Device__GetNumProcessorCores_fn(int* __retval)
{
    *__retval = Device::GetNumProcessorCores();
}

// private static extern string GetSDKVersion() :329
void Device__GetSDKVersion_fn(uString** __retval)
{
    *__retval = Device::GetSDKVersion();
}

// private static extern string GetSystem() :317
void Device__GetSystem_fn(uString** __retval)
{
    *__retval = Device::GetSystem();
}

// private static extern string GetSystemVersion() :323
void Device__GetSystemVersion_fn(uString** __retval)
{
    *__retval = Device::GetSystemVersion();
}

// private static extern string GetUUID() :167
void Device__GetUUID_fn(uString** __retval)
{
    *__retval = Device::GetUUID();
}

// private static extern string GetVendor() :297
void Device__GetVendor_fn(uString** __retval)
{
    *__retval = Device::GetVendor();
}

// public static bool IsRetina() :110
void Device__IsRetina_fn(bool* __retval)
{
    *__retval = Device::IsRetina();
}

// public static string Model() :75
void Device__Model_fn(uString** __retval)
{
    *__retval = Device::Model();
}

// public Device New() :42
void Device__New2_fn(Device** __retval)
{
    *__retval = Device::New2();
}

// public static double NumProcessorCores() :103
void Device__NumProcessorCores_fn(double* __retval)
{
    *__retval = Device::NumProcessorCores();
}

// public static double PixelsPerPoint() :114
void Device__PixelsPerPoint_fn(double* __retval)
{
    *__retval = Device::PixelsPerPoint();
}

// public static string SDKVersion() :96
void Device__SDKVersion_fn(uString** __retval)
{
    *__retval = Device::SDKVersion();
}

// public static string System() :82
void Device__System_fn(uString** __retval)
{
    *__retval = Device::System();
}

// public static string SystemVersion() :89
void Device__SystemVersion_fn(uString** __retval)
{
    *__retval = Device::SystemVersion();
}

// public static string UUID() :61
void Device__UUID_fn(uString** __retval)
{
    *__retval = Device::UUID();
}

// public static string Vendor() :68
void Device__Vendor_fn(uString** __retval)
{
    *__retval = Device::Vendor();
}

uSStrong<Device*> Device::_instance_;
uSStrong<uString*> Device::cachedModelName_;
double Device::cachedNumProcessorCores_;
uSStrong<uString*> Device::cachedSDKVersion_;
uSStrong<uString*> Device::cachedSystemName_;
uSStrong<uString*> Device::cachedSystemVersion_;
uSStrong<uString*> Device::cachedUUID_;
uSStrong<uString*> Device::cachedVendorName_;

// public Device() [instance] :42
void Device::ctor_2()
{
    ctor_1();

    if (Device::_instance() != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Device::_instance() = this, ::STRINGS[0/*"Device"*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[1/*"vendor"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__Vendor_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[2/*"model"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__Model_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[3/*"system"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__System_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[4/*"systemVersion"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__SystemVersion_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[5/*"SDKVersion"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__SDKVersion_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<double, object>*/], ::STRINGS[6/*"cores"*/], uDelegate::New(::TYPES[3/*Uno.Func<double>*/], (void*)Device__NumProcessorCores_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<double, object>*/], ::STRINGS[7/*"displayScale"*/], uDelegate::New(::TYPES[3/*Uno.Func<double>*/], (void*)Device__PixelsPerPoint_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[4/*Fuse.Scripting.NativeProperty<bool, object>*/], ::STRINGS[8/*"isRetina"*/], uDelegate::New(::TYPES[5/*Uno.Func<bool>*/], (void*)Device__IsRetina_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[9/*"UUID"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__UUID_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[10/*"locale"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__GetCurrentLocale_fn), NULL, NULL));
}

// private static extern string GetCurrentLocale() [static] :266
uString* Device::GetCurrentLocale()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            NSString* language = NSLocale.preferredLanguages[0];
            
                    if (language.length <= 2) {
                        NSLocale* locale        = NSLocale.currentLocale;
                        NSString* localeId      = locale.localeIdentifier;
                        NSRange underscoreIndex = [localeId rangeOfString: @"_" options: NSBackwardsSearch];
                        NSRange atSignIndex     = [localeId rangeOfString: @"@"];
            
                        if (underscoreIndex.location != NSNotFound) {
                            if (atSignIndex.length == 0)
                                language = [NSString stringWithFormat: @"%@%@", language, [localeId substringFromIndex: underscoreIndex.location]];
                            else {
                                NSRange localeRange = NSMakeRange(underscoreIndex.location, atSignIndex.location - underscoreIndex.location);
                                language = [NSString stringWithFormat: @"%@%@", language, [localeId substringWithRange: localeRange]];
                            }
                        }
                    }
            
                    return [language stringByReplacingOccurrencesOfString: @"_" withString: @"-"];
        } ());
        
    }
    
}

// private static extern string GetModel() [static] :303
uString* Device::GetModel()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            size_t hardwareModelSize;
                    sysctlbyname("hw.machine", NULL, &hardwareModelSize, NULL, 0);
                    char* hardwareModel = (char*)malloc(hardwareModelSize);
            
                    sysctlbyname("hw.machine", hardwareModel, &hardwareModelSize, NULL, 0);
                    NSString* model = [NSString stringWithUTF8String: hardwareModel];
                    free(hardwareModel);
            
                    return model;
        } ());
        
    }
    
}

// private static extern int GetNumProcessorCores() [static] :335
int Device::GetNumProcessorCores()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        uint32_t ncpu = 0;
                size_t size = sizeof(uint32_t);
                if (sysctlbyname("hw.logicalcpu", &ncpu, &size, NULL, 0) != 0) {
                    if (sysctlbyname("hw.ncpu", &ncpu, &size, NULL, 0) != 0) {
                        ncpu = 1;
                    }
                }
        
                return (int32_t)ncpu;
    }
    
}

// private static extern string GetSDKVersion() [static] :329
uString* Device::GetSDKVersion()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return UIDevice.currentDevice.systemVersion;
        } ());
        
    }
    
}

// private static extern string GetSystem() [static] :317
uString* Device::GetSystem()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return @"iOS";
        } ());
        
    }
    
}

// private static extern string GetSystemVersion() [static] :323
uString* Device::GetSystemVersion()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return UIDevice.currentDevice.systemVersion;
        } ());
        
    }
    
}

// private static extern string GetUUID() [static] :167
uString* Device::GetUUID()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            //return [NSUUID.UUID UUIDString]; // iOS >= 6.x
            
                    // keyChain 저장 
                    KeychainItemWrapper *wrapper = [[KeychainItemWrapper alloc] initWithIdentifier:@"UUID" accessGroup:nil];
                    
                    NSString *uuid = [wrapper objectForKey:(__bridge id)(kSecAttrAccount)];
                    
                    if( uuid == nil || uuid.length == 0)
                    {
                        // if there is not UUID in keychain, make UUID and save it.
                        CFUUIDRef uuidRef = CFUUIDCreate(NULL);
                        CFStringRef uuidStringRef = CFUUIDCreateString(NULL, uuidRef);
                        CFRelease(uuidRef);
                        uuid = [NSString stringWithString:(__bridge NSString *) uuidStringRef];
                        CFRelease(uuidStringRef);
                        
                        // save UUID in keychain
                        [wrapper setObject:uuid forKey:(__bridge id)(kSecAttrAccount)];
                    }
            
                    return uuid;
        } ());
        
    }
    
}

// private static extern string GetVendor() [static] :297
uString* Device::GetVendor()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return @"Apple";
        } ());
        
    }
    
}

// public static bool IsRetina() [static] :110
bool Device::IsRetina()
{
    Device_typeof()->Init();
    return Device::PixelsPerPoint() > 1.0;
}

// public static string Model() [static] :75
uString* Device::Model()
{
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedModelName(), NULL))
        Device::cachedModelName() = Device::GetModel();

    return Device::cachedModelName();
}

// public Device New() [static] :42
Device* Device::New2()
{
    Device* obj1 = (Device*)uNew(Device_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static double NumProcessorCores() [static] :103
double Device::NumProcessorCores()
{
    Device_typeof()->Init();

    if (Device::cachedNumProcessorCores() == 0.0)
        Device::cachedNumProcessorCores() = (double)Device::GetNumProcessorCores();

    return Device::cachedNumProcessorCores();
}

// public static double PixelsPerPoint() [static] :114
double Device::PixelsPerPoint()
{
    Device_typeof()->Init();
    return (double)uPtr(uPtr(::g::Fuse::AppBase::Current1())->RootViewport())->PixelsPerPoint();
}

// public static string SDKVersion() [static] :96
uString* Device::SDKVersion()
{
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedSDKVersion(), NULL))
        Device::cachedSDKVersion() = Device::GetSDKVersion();

    return Device::cachedSDKVersion();
}

// public static string System() [static] :82
uString* Device::System()
{
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedSystemName(), NULL))
        Device::cachedSystemName() = Device::GetSystem();

    return Device::cachedSystemName();
}

// public static string SystemVersion() [static] :89
uString* Device::SystemVersion()
{
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedSystemVersion(), NULL))
        Device::cachedSystemVersion() = Device::GetSystemVersion();

    return Device::cachedSystemVersion();
}

// public static string UUID() [static] :61
uString* Device::UUID()
{
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedUUID(), NULL))
        Device::cachedUUID() = Device::GetUUID();

    return Device::cachedUUID();
}

// public static string Vendor() [static] :68
uString* Device::Vendor()
{
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedVendorName(), NULL))
        Device::cachedVendorName() = Device::GetVendor();

    return Device::cachedVendorName();
}
// }

} // ::g
