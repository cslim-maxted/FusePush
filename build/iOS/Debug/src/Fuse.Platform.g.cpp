// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Int.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Platform{

// /usr/local/share/uno/Packages/Fuse.Platform/0.38.6/$.uno
// --------------------------------------------------------

// public enum ApplicationState :39
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/0.38.6/$.uno
// --------------------------------------------------------

// public static class Lifecycle :56
// {
// static Lifecycle() :68
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof()), (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof()), (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof()), (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof()), (uintptr_t)&::g::Fuse::Platform::Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof()), (uintptr_t)&::g::Fuse::Platform::Lifecycle::Started1_, uFieldFlagsStatic,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof()), (uintptr_t)&::g::Fuse::Platform::Lifecycle::Terminating1_, uFieldFlagsStatic);
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :65
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :65
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :62
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :62
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :63
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :63
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :64
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :64
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) :106
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) :85
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) :92
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) :99
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform2.ApplicationState newState) :78
void Lifecycle__OnStarted_fn(int* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) :113
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :61
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :61
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State() :59
void Lifecycle__get_State_fn(int* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :66
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :66
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) [static] :106
void Lifecycle::OnEnteringBackground(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) [static] :85
void Lifecycle::OnEnteringForeground(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) [static] :92
void Lifecycle::OnEnteringInteractive(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) [static] :99
void Lifecycle::OnExitedInteractive(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnStarted(Uno.Platform2.ApplicationState newState) [static] :78
void Lifecycle::OnStarted(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) [static] :113
void Lifecycle::OnTerminating(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static] :59
int Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform2::Application::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :65
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :65
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :62
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :62
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :63
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :63
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :64
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :64
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :61
void Lifecycle::add_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :61
void Lifecycle::remove_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :66
void Lifecycle::add_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :66
void Lifecycle::remove_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1(), value), ::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

}}} // ::g::Fuse::Platform
