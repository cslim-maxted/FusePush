// This file was generated based on /Users/cslim/Documents/Fuse/com.maxted.fusetest/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{struct Device;}

namespace g{

// public sealed class Device :30
// {
::g::Fuse::Scripting::NativeModule_type* Device_typeof();
void Device__ctor_2_fn(Device* __this);
void Device__GetCurrentLocale_fn(uString** __retval);
void Device__GetModel_fn(uString** __retval);
void Device__GetNumProcessorCores_fn(int* __retval);
void Device__GetSDKVersion_fn(uString** __retval);
void Device__GetSystem_fn(uString** __retval);
void Device__GetSystemVersion_fn(uString** __retval);
void Device__GetUUID_fn(uString** __retval);
void Device__GetVendor_fn(uString** __retval);
void Device__IsRetina_fn(bool* __retval);
void Device__Model_fn(uString** __retval);
void Device__New2_fn(Device** __retval);
void Device__NumProcessorCores_fn(double* __retval);
void Device__PixelsPerPoint_fn(double* __retval);
void Device__SDKVersion_fn(uString** __retval);
void Device__System_fn(uString** __retval);
void Device__SystemVersion_fn(uString** __retval);
void Device__UUID_fn(uString** __retval);
void Device__Vendor_fn(uString** __retval);

struct Device : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Device*> _instance_;
    static uSStrong<Device*>& _instance() { return Device_typeof()->Init(), _instance_; }
    static uSStrong<uString*> cachedModelName_;
    static uSStrong<uString*>& cachedModelName() { return Device_typeof()->Init(), cachedModelName_; }
    static double cachedNumProcessorCores_;
    static double& cachedNumProcessorCores() { return Device_typeof()->Init(), cachedNumProcessorCores_; }
    static uSStrong<uString*> cachedSDKVersion_;
    static uSStrong<uString*>& cachedSDKVersion() { return Device_typeof()->Init(), cachedSDKVersion_; }
    static uSStrong<uString*> cachedSystemName_;
    static uSStrong<uString*>& cachedSystemName() { return Device_typeof()->Init(), cachedSystemName_; }
    static uSStrong<uString*> cachedSystemVersion_;
    static uSStrong<uString*>& cachedSystemVersion() { return Device_typeof()->Init(), cachedSystemVersion_; }
    static uSStrong<uString*> cachedUUID_;
    static uSStrong<uString*>& cachedUUID() { return Device_typeof()->Init(), cachedUUID_; }
    static uSStrong<uString*> cachedVendorName_;
    static uSStrong<uString*>& cachedVendorName() { return Device_typeof()->Init(), cachedVendorName_; }

    void ctor_2();
    static uString* GetCurrentLocale();
    static uString* GetModel();
    static int GetNumProcessorCores();
    static uString* GetSDKVersion();
    static uString* GetSystem();
    static uString* GetSystemVersion();
    static uString* GetUUID();
    static uString* GetVendor();
    static bool IsRetina();
    static uString* Model();
    static Device* New2();
    static double NumProcessorCores();
    static double PixelsPerPoint();
    static uString* SDKVersion();
    static uString* System();
    static uString* SystemVersion();
    static uString* UUID();
    static uString* Vendor();
};
// }

} // ::g
