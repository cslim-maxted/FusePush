// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollPositionChangedArgs.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LinearRangeBehavior.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[9];
static uType* TYPES[25];

namespace g{
namespace Fuse{
namespace Gestures{

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class Clicked :32
// {
static void Clicked_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicked, Handler1), 0);
}

::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->fp_build_ = Clicked_build;
    type->fp_ctor_ = (void*)Clicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Clicked__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Clicked() :32
void Clicked__ctor_5_fn(Clicked* __this)
{
    __this->ctor_5();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) :47
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::AddHandler(visual, handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Visual visual) :34
void Clicked__GetClicked_fn(::g::Fuse::Visual* visual, Clicked** __retval)
{
    *__retval = Clicked::GetClicked(visual);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :62
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :62
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :32
void Clicked__New2_fn(Clicked** __retval)
{
    *__retval = Clicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :76
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted() :64
void Clicked__OnRooted_fn(Clicked* __this)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted() :70
void Clicked__OnUnrooted_fn(Clicked* __this)
{
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated Clicked() [instance] :32
void Clicked::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :62
void Clicked::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[3/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :62
void Clicked::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[3/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :76
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    if (!IsRootingCompleted())
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static] :47
void Clicked::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked* c = Clicked::GetClicked(visual);
    uPtr(c)->add_Handler(handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Visual visual) [static] :34
Clicked* Clicked::GetClicked(::g::Fuse::Visual* visual)
{
    ::g::Fuse::Node* ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* b = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[1/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2);

        if (uIs(b, Clicked_typeof()))
            return uCast<Clicked*>(b, Clicked_typeof());
    }

    Clicked* c = Clicked::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), c);
    return c;
}

// public generated Clicked New() [static] :32
Clicked* Clicked::New2()
{
    Clicked* obj1 = (Clicked*)uNew(Clicked_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class ClickedArgs :9
// {
static void ClickedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->fp_build_ = ClickedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, visual);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :11
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ctor_3(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :11
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :14
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class Clicker :47
// {
// static Clicker() :47
static void Clicker__cctor__fn(uType* __type)
{
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Clicker_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _clickCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maybeTap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _tapCount), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _visual), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, ClickedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, LongPressedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, PressingEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Clicker::_clickerProperty_, uFieldFlagsStatic);
}

uType* Clicker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_build_ = Clicker_build;
    type->fp_cctor_ = Clicker__cctor__fn;
    return type;
}

// private Clicker(Fuse.Visual visual) :62
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm) :68
void Clicker__AttachClicker_fn(::g::Fuse::Visual* elm, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :84
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :237
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :179
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Visual visual) :62
void Clicker__New1_fn(::g::Fuse::Visual* visual, Clicker** __retval)
{
    *__retval = Clicker::New1(visual);
}

// private void OnLostCapture() :256
void Clicker__OnLostCapture_fn(Clicker* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :151
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :121
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :187
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :94
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :101
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :247
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

// private void Update() :226
void Clicker__Update_fn(Clicker* __this)
{
    __this->Update();
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Visual visual) [instance] :62
void Clicker::ctor_(::g::Fuse::Visual* visual)
{
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _down = -1;
    _visual = visual;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::add_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :84
void Clicker::Detach()
{
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_visual)->Properties())->Clear(Clicker::_clickerProperty());
    }
}

// private void DoneCapture() [instance] :237
void Clicker::DoneCapture()
{
    _down = -1;
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :179
bool Clicker::NeedCapture()
{
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnLostCapture() [instance] :256
void Clicker::OnLostCapture()
{
    DoneCapture();
    _tapCount = 0;
    _clickCount = 0;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :151
void Clicker::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _startCoord));
    double deltaTime = args->Timestamp() - _startTime;

    if ((distance > _maxTapDistanceMoved) || (deltaTime > (double)_maxTapTimeHeld))
        _maybeTap = false;

    if (!NeedCapture())
    {
        uPtr(args)->ReleaseSoftCapture(this);
        DoneCapture();
    }

    bool hoverNow = uPtr(_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != _hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
            uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        _hovering = hoverNow;
    }

    _lastArgs = args;
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :121
void Clicker::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if ((_down != -1) || !uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Clicker__OnLostCapture_fn, this), NULL))
        return;

    double delta = uPtr(args)->Timestamp() - _lastUpTime;

    if (delta > (double)_maxDoubleInterval)
    {
        _tapCount = 0;
        _clickCount = 0;
    }

    _down = args->PointIndex();
    _startCoord = args->WindowPoint();
    _startTime = args->Timestamp();
    _maybeTap = true;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL))
    {
        _hasUpdate = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
    }

    if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    _lastArgs = args;
    _hovering = true;
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :187
void Clicker::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    uPtr(args)->ReleaseSoftCapture(this);
    double deltaTime = args->Timestamp() - _startTime;

    if (_maybeTap && (deltaTime <= (double)_maxTapTimeHeld))
    {
        _tapCount++;

        if (::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL))
            uPtr(TappedEvent1)->Invoke(2, args, uCRef<int>(_tapCount));
    }
    else
        _tapCount = 0;

    bool hoverNow = uPtr(_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        _clickCount++;

        if (::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL))
            uPtr(ClickedEvent1)->Invoke(2, args, uCRef<int>(_clickCount));
    }
    else
        _clickCount = 0;

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    _hovering = false;
    DoneCapture();
    _lastUpTime = args->Timestamp();
    _lastArgs = args;
}

// private void OnRooted() [instance] :94
void Clicker::OnRooted()
{
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _visual, uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _visual, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _visual, uDelegate::New(::TYPES[7/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :101
void Clicker::OnUnrooted()
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _visual, uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _visual, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _visual, uDelegate::New(::TYPES[7/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::add_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::remove_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :247
void Clicker::ReleaseUpdate()
{
    if (_hasUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::add_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::remove_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void Update() [instance] :226
void Clicker::Update()
{
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseSoftCapture(_down, this);
        DoneCapture();
    }
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm) [static] :68
Clicker* Clicker::AttachClicker(::g::Fuse::Visual* elm)
{
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty(), &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty(), nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Visual visual) [static] :62
Clicker* Clicker::New1(::g::Fuse::Visual* visual)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :11
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// public abstract class ClickerTrigger :13
// {
static void ClickerTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::ClickerTrigger, Clicker), 0);
}

::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->fp_build_ = ClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ClickerTrigger() :13
void ClickerTrigger__ctor_4_fn(ClickerTrigger* __this)
{
    __this->ctor_4();
}

// protected override void OnRooted() :16
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
}

// protected override void OnUnrooted() :22
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this)
{
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated ClickerTrigger() [instance] :13
void ClickerTrigger::ctor_4()
{
    ctor_3();
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class DegreeSpan :579
// {
static void DegreeSpan_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b) :584
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :590
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :584
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :584
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :590
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :584
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public enum Edge :1826
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class KeepFocusInView :240
// {
static void KeepFocusInView_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(16);
}

::g::Fuse::Node_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->fp_build_ = KeepFocusInView_build;
    type->fp_ctor_ = (void*)KeepFocusInView__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated KeepFocusInView() :240
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this)
{
    __this->ctor_4();
}

// public generated KeepFocusInView New() :240
void KeepFocusInView__New3_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :256
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :261
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted() :242
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this)
{
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[8/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[9/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted() :249
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this)
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[8/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[9/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this);
}

// public generated KeepFocusInView() [instance] :240
void KeepFocusInView::ctor_4()
{
    ctor_3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :256
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    Target(::g::Fuse::Input::Focus::FocusedVisual());
}

// private void OnLostFocus(object s, object a) [instance] :261
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :240
KeepFocusInView* KeepFocusInView::New3()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public class KeepInViewCommon :142
// {
static void KeepInViewCommon_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _attached), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _rootElement), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _target), 0);
}

::g::Fuse::Node_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->fp_build_ = KeepInViewCommon_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal KeepInViewCommon() :144
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this)
{
    __this->ctor_3();
}

// private void AttachElement() :213
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// protected override void OnRooted() :181
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[11/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[10/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted() :193
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this)
{
    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[10/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseElement() :204
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :150
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :151
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :223
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :144
void KeepInViewCommon::ctor_3()
{
    ctor_2();
}

// private void AttachElement() [instance] :213
void KeepInViewCommon::AttachElement()
{
    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[10/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :204
void KeepInViewCommon::ReleaseElement()
{
    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[10/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :150
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :151
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    ::g::Fuse::Elements::Element* prev = _target;
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[11/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    if (v == NULL)
    {
        if (prev != NULL)
            uPtr(prev)->OnBringIntoView(NULL);

        _target = NULL;
    }
    else
        AttachElement();
}

// private void Update(object s, object a) [instance] :223
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/rangecontrols/$.uno
// ---------------------------------------------------------------------------------

// public sealed class LinearRangeBehavior :394
// {
// static LinearRangeBehavior() :394
static void LinearRangeBehavior__cctor_1_fn(uType* __type)
{
    LinearRangeBehavior::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[12/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    LinearRangeBehavior::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[12/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void LinearRangeBehavior_build(uType* type)
{
    ::STRINGS[0] = uString::Const("RangeControl");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.38.6/rangecontrols/$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[12] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[13] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _down), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _initialValue), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _orientation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _startCoord), 0,
        ::g::Fuse::Controls::RangeControl_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, Control), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_verticalGesture_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* LinearRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(LinearRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.LinearRangeBehavior", options);
    type->fp_build_ = LinearRangeBehavior_build;
    type->fp_ctor_ = (void*)LinearRangeBehavior__New2_fn;
    type->fp_cctor_ = LinearRangeBehavior__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated LinearRangeBehavior() :394
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this)
{
    __this->ctor_3();
}

// private Fuse.Controls.RangeControl FindRangeControl() :396
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval)
{
    *__retval = __this->FindRangeControl();
}

// private Fuse.Gestures.SwipeGestureHelper get_Gesture() :443
void LinearRangeBehavior__get_Gesture_fn(LinearRangeBehavior* __this, ::g::Fuse::Gestures::SwipeGestureHelper** __retval)
{
    *__retval = __this->Gesture();
}

// public generated LinearRangeBehavior New() :394
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval)
{
    *__retval = LinearRangeBehavior::New2();
}

// private void OnLostCapture() :446
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) :473
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    __this->OnPointerMoved(sender, c);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) :457
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    __this->OnPointerPressed(sender, c);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) :489
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    __this->OnPointerReleased(sender, c);
}

// protected override sealed void OnRooted() :412
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Control = __this->FindRangeControl();

    if (__this->Control == NULL)
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[0/*"RangeControl"*/], __this->Parent(), __this, ::STRINGS[1/*"/usr/local/...*/], 418, ::STRINGS[2/*"OnRooted"*/]);

    ::g::Fuse::Input::Pointer::AddHandlers(__this->Control, uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[7/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted() :423
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this)
{
    if (__this->Control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->Control, uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[7/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    __this->Control = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Layouts.Orientation get_Orientation() :408
void LinearRangeBehavior__get_Orientation_fn(LinearRangeBehavior* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :409
void LinearRangeBehavior__set_Orientation_fn(LinearRangeBehavior* __this, int* value)
{
    __this->Orientation(*value);
}

// private double PositionToValue(float2 pos) :513
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval)
{
    *__retval = __this->PositionToValue(*pos);
}

// private void UpdateValue(float2 pos) :508
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos)
{
    __this->UpdateValue(*pos);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_verticalGesture_;

// public generated LinearRangeBehavior() [instance] :394
void LinearRangeBehavior::ctor_3()
{
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _initialValue = 0.0;
    _down = -1;
    ctor_2();
}

// private Fuse.Controls.RangeControl FindRangeControl() [instance] :396
::g::Fuse::Controls::RangeControl* LinearRangeBehavior::FindRangeControl()
{
    ::g::Fuse::Visual* p = Parent();

    while ((p != NULL) && !uIs(p, ::TYPES[13/*Fuse.Controls.RangeControl*/]))
        p = uPtr(p)->Parent();

    return uAs< ::g::Fuse::Controls::RangeControl*>(p, ::TYPES[13/*Fuse.Controls.RangeControl*/]);
}

// private Fuse.Gestures.SwipeGestureHelper get_Gesture() [instance] :443
::g::Fuse::Gestures::SwipeGestureHelper* LinearRangeBehavior::Gesture()
{
    return (Orientation() == 0) ? (::g::Fuse::Gestures::SwipeGestureHelper*)LinearRangeBehavior::_horizontalGesture() : (::g::Fuse::Gestures::SwipeGestureHelper*)LinearRangeBehavior::_verticalGesture();
}

// private void OnLostCapture() [instance] :446
void LinearRangeBehavior::OnLostCapture()
{
    _down = -1;
    uPtr(Control)->Value(_initialValue);
    uPtr(Control)->EndInteraction(this);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) [instance] :473
void LinearRangeBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        if (uPtr(Gesture())->IsWithinBounds(::g::Uno::Float2__op_Subtraction2(uPtr(c)->WindowPoint(), _startCoord)))
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL);
    }
    else if (uPtr(c)->IsHardCapturedTo(this))
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) [instance] :457
void LinearRangeBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    if (_down == -1)
    {
        if (uPtr(c)->TrySoftCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL))
        {
            ::g::Fuse::Input::Focus::GiveTo(Control);
            uPtr(Control)->BeginInteraction(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this));
            _startCoord = uPtr(c)->WindowPoint();
            _down = c->PointIndex();
            _initialValue = uPtr(Control)->Value();
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) [instance] :489
void LinearRangeBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsHardCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseHardCapture(this);
    }

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseSoftCapture(this);
    }

    uPtr(Control)->EndInteraction(this);
    _down = -1;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :408
int LinearRangeBehavior::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :409
void LinearRangeBehavior::Orientation(int value)
{
    _orientation = value;
}

// private double PositionToValue(float2 pos) [instance] :513
double LinearRangeBehavior::PositionToValue(::g::Uno::Float2 pos)
{
    if (Orientation() == 1)
        return (double)(pos.Y / uPtr(Control)->ActualSize().Y);

    return (double)(pos.X / uPtr(Control)->ActualSize().X);
}

// private void UpdateValue(float2 pos) [instance] :508
void LinearRangeBehavior::UpdateValue(::g::Uno::Float2 pos)
{
    uPtr(Control)->RelativeValue(PositionToValue(pos));
}

// public generated LinearRangeBehavior New() [static] :394
LinearRangeBehavior* LinearRangeBehavior::New2()
{
    LinearRangeBehavior* obj1 = (LinearRangeBehavior*)uNew(LinearRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/$.uno
// -------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :497
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/$.uno
// -------------------------------------------------------------------

// public class Scroller :133
// {
// static Scroller() :133
static void Scroller__cctor_1_fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[12/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[12/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void Scroller_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Scroller can only be used in a ScrollView");
    ::STRINGS[4] = uString::Const("Invalid tear-down of pointer events");
    ::TYPES[12] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[14] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[15] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[16] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[17] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[18] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[19] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Scroller_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Scroller_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Scroller_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Scroller_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Scroller_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _isHardCapture), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevTime), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _region), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _scrollable), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _updateFirstFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _userScroll), 0,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_verticalGesture_, uFieldFlagsStatic);
}

Scroller_type* Scroller_typeof()
{
    static uSStrong<Scroller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(Scroller_type);
    type = (Scroller_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->fp_build_ = Scroller_build;
    type->fp_cctor_ = Scroller__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Scroller() :133
void Scroller__ctor_3_fn(Scroller* __this)
{
    __this->ctor_3();
}

// public void CheckLimits() :400
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :235
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// private void EndInteraction() :311
void Scroller__EndInteraction_fn(Scroller* __this)
{
    __this->EndInteraction();
}

// private float2 FromWindow(float2 p) :296
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public void Goto(float2 position) :427
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) :331
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->HardCapture(args);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) :504
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time)
{
    __this->MoveUser(*flags, *time);
}

// private void OnLostCapture() :301
void Scroller__OnLostCapture_fn(Scroller* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :340
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :268
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :377
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :409
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted() :151
void Scroller__OnRooted_fn(Scroller* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->Parent(), ::TYPES[18/*Fuse.Controls.ScrollView*/]);

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Scroller ca...*/]));

    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::TYPES[19/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[20/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scroller__OnScrollPositionChanged_fn, __this));
    __this->_region = uPtr(uPtr(__this->_scrollable)->Motion())->AcquireSimulation();
    __this->UpdatePointerEvents(false);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) :477
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted() :166
void Scroller__OnUnrooted_fn(Scroller* __this)
{
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::TYPES[19/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[20/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scroller__OnScrollPositionChanged_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);

    if (__this->_region != NULL)
    {
        uPtr(uPtr(__this->_scrollable)->Motion())->ReleaseSimulation();
        __this->_region = NULL;
    }

    __this->_scrollable = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdated() :456
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// private void PerformBringIntoView() :417
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :473
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
}

// private void UpdatePointerEvents([bool forceOff]) :207
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :444
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll() :194
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :195
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public generated Scroller() [instance] :133
void Scroller::ctor_3()
{
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[14/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _delayStart = true;
    _userScroll = true;
    _down = -1;
    ctor_2();
}

// public void CheckLimits() [instance] :400
void Scroller::CheckLimits()
{
    UpdateScrollMax();

    if ((_region != NULL) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[15/*Fuse.Motion.Simulation.Simulation*/])))
        Goto(uPtr(_scrollable)->ScrollPosition());
}

// private void CheckNeedUpdated([bool off]) [instance] :235
void Scroller::CheckNeedUpdated(bool off)
{
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[15/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
        _updateFirstFrame = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private void EndInteraction() [instance] :311
void Scroller::EndInteraction()
{
    _down = -1;
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
    uPtr(_scrollable)->EndInteraction(this);
}

// private float2 FromWindow(float2 p) [instance] :296
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :427
void Scroller::Goto(::g::Uno::Float2 position)
{
    if (_scrollable == NULL)
        return;

    position = uPtr(_scrollable)->Constrain(position);
    UpdateScrollMax();

    if (_region != NULL)
    {
        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[15/*Fuse.Motion.Simulation.Simulation*/])))
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), position);
    }

    CheckNeedUpdated(false);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) [instance] :331
bool Scroller::HardCapture(::g::Fuse::Input::PointerEventArgs* args)
{
    _isHardCapture = uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

    if (!_isHardCapture)
        OnLostCapture();

    uPtr(_scrollable)->BeginInteraction(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this));
    return _isHardCapture;
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) [instance] :504
void Scroller::MoveUser(int flags, double time)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double elapsed = time - _prevTime;
    _prevTime = time;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), diff);
    }

    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((double)(float)elapsed), uCRef<int>((!((flags & 1) == 1) ? 1 : 0) | (((flags & 2) == 2) ? 2 : 0)));
}

// private void OnLostCapture() [instance] :301
void Scroller::OnLostCapture()
{
    if (IsRootingCompleted())
    {
        EndInteraction();

        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :340
void Scroller::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
        OnLostCapture();

    if (!_isHardCapture)
    {
        _softCaptureCurrent = uPtr(args)->WindowPoint();
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_softCaptureCurrent, _softCaptureStart);

        if (uPtr(_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::g::Uno::Vector::Length(diff) > 10.0f)
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }
    }

    _pointerPos = uPtr(args)->WindowPoint();
    MoveUser((!_delayStart || _isHardCapture) ? 1 : 0, args->Timestamp());
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :268
void Scroller::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Uno::Float2 ret2;

    if (_down == -1)
    {
        bool captured = false;
        _isHardCapture = false;

        if (::g::Uno::Vector::Length((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2)) > 100.0f)
            captured = HardCapture(args);
        else
            captured = uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

        if (captured)
        {
            _softCaptureStart = (_softCaptureCurrent = uPtr(args)->WindowPoint());
            _down = args->PointIndex();
            _pointerPos = args->WindowPoint();
            _prevPos = (_startPos = _pointerPos);
            _prevTime = args->Timestamp();
            ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :377
void Scroller::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret3;

    if (_down == uPtr(args)->PointIndex())
    {
        if (_delayStart && !_isHardCapture)
        {
            OnLostCapture();
            return;
        }

        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        {
            _pointerPos = uPtr(args)->WindowPoint();
            MoveUser(3, args->Timestamp());
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation(uPtr(_scrollable)->ConstrainExtents((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3))));
        }

        EndInteraction();
    }
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :409
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    _pendingBringIntoView = uPtr(args)->Visual();
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 1, ::g::Fuse::LayoutPriority::Post());
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) [instance] :477
void Scroller::OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;

    if (uPtr(args)->Origin() == this)
        return;

    if (uPtr(args)->IsAdjustment() && ::g::Uno::Float2__op_Inequality(uPtr(args)->ArrangeOffset(), ::g::Uno::Float2__New1(0.0f)))
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__op_Addition2((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret4), ret4), uPtr(args)->ArrangeOffset())));

    if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        return;

    if (!uPtr(args)->IsAdjustment())
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret5), ret5));

    CheckNeedUpdated(true);
}

// private void OnUpdated() [instance] :456
void Scroller::OnUpdated()
{
    ::g::Uno::Float2 ret6;

    if (_updateFirstFrame)
    {
        _updateFirstFrame = false;
        return;
    }

    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[15/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[16/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6), (uObject*)this);
    CheckNeedUpdated(true);
}

// private void PerformBringIntoView() [instance] :417
void Scroller::PerformBringIntoView()
{
    if ((_pendingBringIntoView == NULL) || !uPtr(_pendingBringIntoView)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = uPtr(_scrollable)->GetVisualScrollPosition(_pendingBringIntoView);
    Goto(pos);
    _pendingBringIntoView = NULL;
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :207
void Scroller::UpdatePointerEvents(bool forceOff)
{
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && _userScroll;

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[7/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else if (_scrollable != NULL)
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[7/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Invalid tea...*/]));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :444
void Scroller::UpdateScrollMax()
{
    if (_scrollable == NULL)
        return;

    if (_region != NULL)
    {
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[17/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
    }
}

// public bool get_UserScroll() [instance] :194
bool Scroller::UserScroll()
{
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :195
void Scroller::UserScroll(bool value)
{
    if (_userScroll != value)
    {
        _userScroll = value;
        UpdatePointerEvents(false);
        OnLostCapture();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/$.uno
// -------------------------------------------------------------------

// public sealed class ScrollTo :52
// {
static void ScrollTo_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _hasPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _hasRelativePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ScrollTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollTo", options);
    type->fp_build_ = ScrollTo_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollTo__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :90
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() == NULL)
        return;

    if (__this->_hasRelativePosition)
        uPtr(__this->Target())->Goto(::g::Uno::Float2__op_Addition2(uPtr(__this->Target())->MinScroll(), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(__this->Target())->MaxScroll(), uPtr(__this->Target())->MinScroll()), __this->_relativePosition)));
    else if (__this->_hasPosition)
        uPtr(__this->Target())->Goto(__this->_position);
}

// public generated Fuse.Controls.ScrollView get_Target() :55
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :55
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :55
::g::Fuse::Controls::ScrollView* ScrollTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :55
void ScrollTo::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class SetSwipeActive :1150
// {
static void SetSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Value), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->fp_build_ = SetSwipeActive_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    return type;
}

// public generated bool get_Bypass() :1159
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :1159
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// protected override sealed void Perform(Fuse.Node target) :1161
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :1153
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :1153
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :1156
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :1156
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated bool get_Bypass() [instance] :1159
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :1159
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :1153
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :1153
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance] :1156
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance] :1156
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public enum SwipeDirection :784
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class SwipeGesture :827
// {
// static SwipeGesture() :827
static void SwipeGesture__cctor_1_fn(uType* __type)
{
    SwipeGesture::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"IsActive"*/]);
}

static void SwipeGesture_build(uType* type)
{
    ::STRINGS[5] = uString::Const("IsActive");
    ::STRINGS[6] = uString::Const("Element");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipeGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipeGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipeGesture_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeGesture_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _direction), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasEdge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hitSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _lengthNode), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _type), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::SwipeGesture::_isActiveName_, uFieldFlagsStatic);
}

SwipeGesture_type* SwipeGesture_typeof()
{
    static uSStrong<SwipeGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(SwipeGesture_type);
    type = (SwipeGesture_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->fp_build_ = SwipeGesture_build;
    type->fp_ctor_ = (void*)SwipeGesture__New2_fn;
    type->fp_cctor_ = SwipeGesture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated SwipeGesture() :827
void SwipeGesture__ctor_3_fn(SwipeGesture* __this)
{
    __this->ctor_3();
}

// private void ConstructRegion() :937
void SwipeGesture__ConstructRegion_fn(SwipeGesture* __this)
{
    __this->ConstructRegion();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :873
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :874
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public float get_HitSize() :919
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value) :920
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive() :1043
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :1044
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public float get_Length() :894
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :895
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode() :907
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :908
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public generated SwipeGesture New() :827
void SwipeGesture__New2_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New2();
}

// protected override sealed void OnRooted() :923
void SwipeGesture__OnRooted_fn(SwipeGesture* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[11/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[6/*"Element"*/], __this->Parent(), __this, ::STRINGS[7/*"/usr/local/...*/], 929, ::STRINGS[2/*"OnRooted"*/]);
        return;
    }

    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
}

// protected override sealed void OnUnrooted() :1020
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this)
{
    if (__this->_swiper != NULL)
    {
        if (__this->_region != NULL)
        {
            uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
            __this->_region = NULL;
            uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        }

        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :1012
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) :1053
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :1047
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :838
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :839
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1004
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_region) && ::g::Uno::UX::Selector__op_Equality(prop_, SwipeGesture::_isActiveName()))
        __this->IsActive(uPtr(__this->_region)->IsActive());
}

::g::Uno::UX::Selector SwipeGesture::_isActiveName_;

// public generated SwipeGesture() [instance] :827
void SwipeGesture::ctor_3()
{
    _length = 100.0f;
    _hitSize = 100.0f;
    ctor_2();
}

// private void ConstructRegion() [instance] :937
void SwipeGesture::ConstructRegion()
{
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New2();

    if (_hasEdge)
    {
        uPtr(_region)->Area = 1;

        switch (_edge)
        {
            case 0:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 1;
                break;
            }
            case 2:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 2;
                break;
            }
            case 1:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 3;
                break;
            }
            case 3:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 4;
                break;
            }
        }
    }
    else
    {
        uPtr(_region)->Area = 0;

        switch (Direction())
        {
            case 0:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 101;
                break;
            }
            case 1:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 102;
                break;
            }
            case 2:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 103;
                break;
            }
            case 3:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 104;
                break;
            }
        }
    }

    uPtr(_region)->SetProgress((double)(IsActive() ? 1 : 0), false);
    uPtr(_region)->Length = (double)Length();
    uPtr(_region)->LengthElement = LengthNode();
    uPtr(_region)->AreaVectorDistance = HitSize();
    uPtr(_region)->AddPropertyListener((uObject*)this);
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() != 1);
    uPtr(_region)->AutoTrigger = ((Type() == 2) || (Type() == 3));
    uPtr(_region)->Continuous = (Type() == 2);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :873
int SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :874
void SwipeGesture::Direction(int value)
{
    _direction = value;
    _hasDirection = true;
}

// public float get_HitSize() [instance] :919
float SwipeGesture::HitSize()
{
    return _hitSize;
}

// public void set_HitSize(float value) [instance] :920
void SwipeGesture::HitSize(float value)
{
    _hitSize = value;
}

// public bool get_IsActive() [instance] :1043
bool SwipeGesture::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :1044
void SwipeGesture::IsActive(bool value)
{
    SetIsActive(value, NULL);
}

// public float get_Length() [instance] :894
float SwipeGesture::Length()
{
    return _length;
}

// public void set_Length(float value) [instance] :895
void SwipeGesture::Length(float value)
{
    _length = value;
}

// public Fuse.Elements.Element get_LengthNode() [instance] :907
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :908
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    _lengthNode = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :1012
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    if (_region == NULL)
        ConstructRegion();

    return _region;
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) [instance] :1053
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    if ((value == _isActive) || (origin == this))
        return;

    _isActive = value;
    OnPropertyChanged1(SwipeGesture::_isActiveName(), origin);

    if (_region != NULL)
        uPtr(_swiper)->SetActivation(_region, value, bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :1047
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :838
int SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :839
void SwipeGesture::Type(int value)
{
    _type = value;
}

// public generated SwipeGesture New() [static] :827
SwipeGesture* SwipeGesture::New2()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class SwipeGestureHelper :618
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _spans), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :624
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :630
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :624
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :624
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :630
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :624
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public enum SwipeType :793
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL,
        "Continuous", 2LL,
        "Auto", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class SwipingAnimation :1096
// {
// static SwipingAnimation() :1096
static void SwipingAnimation__cctor_1_fn(uType* __type)
{
    SwipingAnimation::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Progress"*/]);
}

static void SwipingAnimation_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Progress");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipingAnimation_type, interface5));
    type->SetFields(27,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _Source), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::SwipingAnimation::_progressName_, uFieldFlagsStatic);
}

SwipingAnimation_type* SwipingAnimation_typeof()
{
    static uSStrong<SwipingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(SwipingAnimation_type);
    type = (SwipingAnimation_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->fp_build_ = SwipingAnimation_build;
    type->fp_cctor_ = SwipingAnimation__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) :1104
void SwipingAnimation__ctor_4_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_4(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) :1104
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New2(source);
}

// private void OnProgressChanged(double progress) :1130
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted() :1109
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted() :1117
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this)
{
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :1099
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :1099
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop) :1124
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, SwipingAnimation::_progressName()))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

::g::Uno::UX::Selector SwipingAnimation::_progressName_;

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance] :1104
void SwipingAnimation::ctor_4(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_3();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance] :1130
void SwipingAnimation::OnProgressChanged1(double progress)
{
    double diff = progress - uPtr(uPtr(Source())->Region())->StableProgress();
    Seek(progress, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :1099
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :1099
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static] :1104
SwipingAnimation* SwipingAnimation::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_4(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class Tapped :1359
// {
static void Tapped_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[21] = ::g::Fuse::Gestures::TappedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::TappedHandler_typeof(), offsetof(::g::Fuse::Gestures::Tapped, Handler1), 0);
}

::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->fp_build_ = Tapped_build;
    type->fp_ctor_ = (void*)Tapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Tapped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Tapped() :1365
void Tapped__ctor_5_fn(Tapped* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :1363
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :1363
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :1365
void Tapped__New2_fn(Tapped** __retval)
{
    *__retval = Tapped::New2();
}

// protected override sealed void OnRooted() :1372
void Tapped__OnRooted_fn(Tapped* __this)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1384
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted() :1378
void Tapped__OnUnrooted_fn(Tapped* __this)
{
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public Tapped() [instance] :1365
void Tapped::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :1363
void Tapped::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[21/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :1363
void Tapped::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[21/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1384
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, Parent()));
}

// public Tapped New() [static] :1365
Tapped* Tapped::New2()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class TappedArgs :1333
// {
static void TappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->fp_build_ = TappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1335
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1335
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, visual);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :1335
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ctor_3(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :1335
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :1341
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class ToggleSwipeActive :1183
// {
static void ToggleSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::ToggleSwipeActive, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->fp_build_ = ToggleSwipeActive_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :1188
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :1186
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :1186
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :1186
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :1186
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhilePressed :555
// {
static void WhilePressed_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[24] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _inside), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pointerType), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, Clicker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _Capture), 0);
}

::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->fp_build_ = WhilePressed_build;
    type->fp_ctor_ = (void*)WhilePressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhilePressed() :555
void WhilePressed__ctor_5_fn(WhilePressed* __this)
{
    __this->ctor_5();
}

// public generated bool get_Capture() :557
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value) :557
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a) :631
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New() :555
void WhilePressed__New2_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New2();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) :610
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args) :619
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :625
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted() :568
void WhilePressed__OnRooted_fn(WhilePressed* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[23/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->SetActive(false);
}

// protected override sealed void OnUnrooted() :590
void WhilePressed__OnUnrooted_fn(WhilePressed* __this)
{
    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[23/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[5/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Uno.Platform.PointerType get_PointerType() :564
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value) :565
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated WhilePressed() [instance] :555
void WhilePressed::ctor_5()
{
    ctor_4();
}

// public generated bool get_Capture() [instance] :557
bool WhilePressed::Capture()
{
    return _Capture;
}

// public generated void set_Capture(bool value) [instance] :557
void WhilePressed::Capture(bool value)
{
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance] :631
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    SetActive((_inside && uPtr(Parent())->IsContextEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance] :610
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance] :619
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance] :625
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :564
int WhilePressed::PointerType()
{
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance] :565
void WhilePressed::PointerType(int value)
{
    _pointerType = value;
}

// public generated WhilePressed New() [static] :555
WhilePressed* WhilePressed::New2()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
