// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Scaling.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransition.PositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ResizeChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ScaleChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransitioned.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.PulseTrigger-1.PulseHandler.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Scrolled.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Fuse.Triggers.ScrolledWhere.h>
#include <Fuse.Triggers.ScrollRegion.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.GotoImpl.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Timeline.State.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.TriggerBypassMode.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileValueStatic.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[43];
static uType* TYPES[45];

namespace g{
namespace Fuse{
namespace Triggers{

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class BusyTask :84
// {
// static BusyTask() :196
static void BusyTask__cctor__fn(uType* __type)
{
    BusyTask::_tasks_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Triggers.BusyTask>*/]));
    BusyTask::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<Fuse.Node, Uno.Collections.List<Uno.Action>>*/]));
    ::g::Fuse::Scripting::ScriptClass::Register(BusyTask_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[3/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.BusyTask>*/], ::STRINGS[0/*"done"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.BusyTask, object[]>*/], (void*)BusyTask__done_fn), 2)));
}

static void BusyTask_build(uType* type)
{
    ::STRINGS[0] = uString::Const("done");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(BusyTask_typeof());
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()));
    ::TYPES[2] = ::g::Uno::Type_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(BusyTask_typeof());
    ::TYPES[5] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), BusyTask_typeof(), uObject_typeof()->Array());
    ::TYPES[6] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::BusyTask, _node), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof())), (uintptr_t)&::g::Fuse::Triggers::BusyTask::_listeners_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(BusyTask_typeof()), (uintptr_t)&::g::Fuse::Triggers::BusyTask::_tasks_, uFieldFlagsStatic);
}

uType* BusyTask_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BusyTask);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.BusyTask", options);
    type->fp_build_ = BusyTask_build;
    type->fp_cctor_ = BusyTask__cctor__fn;
    return type;
}

// public BusyTask(Fuse.Node n) :90
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n)
{
    __this->ctor_(n);
}

// private static void done(Fuse.Scripting.Context c, Fuse.Triggers.BusyTask bt, object[] args) :207
void BusyTask__done_fn(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args)
{
    BusyTask::done(c, bt, args);
}

// public void Done() :102
void BusyTask__Done_fn(BusyTask* __this)
{
    __this->Done();
}

// public BusyTask New(Fuse.Node n) :90
void BusyTask__New1_fn(::g::Fuse::Node* n, BusyTask** __retval)
{
    *__retval = BusyTask::New1(n);
}

// private static void OnBusyChanged(Fuse.Node n) :160
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n)
{
    BusyTask::OnBusyChanged(n);
}

// private void OnUnrooted() :174
void BusyTask__OnUnrooted_fn(BusyTask* __this)
{
    __this->OnUnrooted();
}

uSStrong< ::g::Uno::Collections::Dictionary*> BusyTask::_listeners_;
uSStrong< ::g::Uno::Collections::List*> BusyTask::_tasks_;

// public BusyTask(Fuse.Node n) [instance] :90
void BusyTask::ctor_(::g::Fuse::Node* n)
{
    _node = n;

    if (uPtr(_node)->IsRootingStarted())
    {
        uPtr(_node)->add_Unrooted(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)BusyTask__OnUnrooted_fn, this));
        ::g::Uno::Collections::List__Add_fn(uPtr(BusyTask::_tasks()), this);
        BusyTask::OnBusyChanged(n);
    }
}

// public void Done() [instance] :102
void BusyTask::Done()
{
    bool ret4;
    bool ret5;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(BusyTask::_tasks()), this, &ret4), ret4))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(BusyTask::_tasks()), this, &ret5);
        BusyTask::OnBusyChanged(_node);
    }
}

// private void OnUnrooted() [instance] :174
void BusyTask::OnUnrooted()
{
    uPtr(_node)->remove_Unrooted(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)BusyTask__OnUnrooted_fn, this));
    BusyTask::OnBusyChanged(_node);
}

// private static void done(Fuse.Scripting.Context c, Fuse.Triggers.BusyTask bt, object[] args) [static] :207
void BusyTask::done(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args)
{
    BusyTask_typeof()->Init();
    uPtr(bt)->Done();
}

// public BusyTask New(Fuse.Node n) [static] :90
BusyTask* BusyTask::New1(::g::Fuse::Node* n)
{
    BusyTask* obj1 = (BusyTask*)uNew(BusyTask_typeof());
    obj1->ctor_(n);
    return obj1;
}

// private static void OnBusyChanged(Fuse.Node n) [static] :160
void BusyTask::OnBusyChanged(::g::Fuse::Node* n)
{
    BusyTask_typeof()->Init();
    bool ret8;
    ::g::Uno::Collections::List* ret9;
    uDelegate* ret10;

    while (n != NULL)
    {
        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BusyTask::_listeners()), n, &ret8), ret8))
        {
            ::g::Uno::Collections::List* listeners = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners()), n, &ret9), ret9);

            for (int i = 0; i < uPtr(listeners)->Count(); i++)
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(listeners), uCRef<int>(i), &ret10), ret10))->InvokeVoid();
        }

        n = uPtr(n)->Parent();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class BusyTaskModule :295
// {
static void BusyTaskModule_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/BusyTask");
    ::STRINGS[2] = uString::Const("create");
    ::STRINGS[3] = uString::Const("new BusyTask() - must provide 1 argument");
    ::STRINGS[4] = uString::Const("new BusyTask() - argument must be an UX node");
    ::TYPES[7] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        BusyTaskModule_typeof(), (uintptr_t)&::g::Fuse::Triggers::BusyTaskModule::_module_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* BusyTaskModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BusyTaskModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Triggers.BusyTaskModule", options);
    type->fp_build_ = BusyTaskModule_build;
    type->fp_ctor_ = (void*)BusyTaskModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public BusyTaskModule() :299
void BusyTaskModule__ctor_2_fn(BusyTaskModule* __this)
{
    __this->ctor_2();
}

// private object create(Fuse.Scripting.Context c, object[] args) :309
void BusyTaskModule__create_fn(BusyTaskModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->create(c, args);
}

// public BusyTaskModule New() :299
void BusyTaskModule__New2_fn(BusyTaskModule** __retval)
{
    *__retval = BusyTaskModule::New2();
}

uSStrong<BusyTaskModule*> BusyTaskModule::_module_;

// public BusyTaskModule() [instance] :299
void BusyTaskModule::ctor_2()
{
    ctor_1();

    if (BusyTaskModule::_module_ == NULL)
    {
        BusyTaskModule::_module_ = this;
        ::g::Uno::UX::Resource::SetGlobalKey(this, ::STRINGS[1/*"FuseJS/Busy...*/]);
    }

    SetModuleFunction(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"create"*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.NativeCallback*/], (void*)BusyTaskModule__create_fn, this)));
}

// private object create(Fuse.Scripting.Context c, object[] args) [instance] :309
uObject* BusyTaskModule::create(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[3/*"new BusyTas...*/]));

    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(::g::Fuse::Scripting::Context::Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[8/*Fuse.Node*/]);

    if (n == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[4/*"new BusyTas...*/]));

    return uPtr(c)->Unwrap(::g::Fuse::Triggers::BusyTask::New1(n));
}

// public BusyTaskModule New() [static] :299
BusyTaskModule* BusyTaskModule::New2()
{
    BusyTaskModule* obj1 = (BusyTaskModule*)uNew(BusyTaskModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// private sealed class StateGroup.GotoImpl :1500
// {
static void StateGroup__GotoImpl_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    type->SetFields(0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::StateGroup__GotoImpl, Group), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup__GotoImpl, Next), 0);
}

uType* StateGroup__GotoImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StateGroup__GotoImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.StateGroup.GotoImpl", options);
    type->fp_build_ = StateGroup__GotoImpl_build;
    type->fp_ctor_ = (void*)StateGroup__GotoImpl__New1_fn;
    return type;
}

// public generated GotoImpl() :1500
void StateGroup__GotoImpl__ctor__fn(StateGroup__GotoImpl* __this)
{
    __this->ctor_();
}

// public void Go() :1505
void StateGroup__GotoImpl__Go_fn(StateGroup__GotoImpl* __this)
{
    __this->Go();
}

// public generated GotoImpl New() :1500
void StateGroup__GotoImpl__New1_fn(StateGroup__GotoImpl** __retval)
{
    *__retval = StateGroup__GotoImpl::New1();
}

// public generated GotoImpl() [instance] :1500
void StateGroup__GotoImpl::ctor_()
{
}

// public void Go() [instance] :1505
void StateGroup__GotoImpl::Go()
{
    ::g::Fuse::Triggers::State* ret4;
    ::g::Fuse::Triggers::State* ret5;

    switch (uPtr(Group)->Transition())
    {
        case 0:
        {
            for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Group)->_states), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator*/])); )
            {
                ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret4), ret4);
                uPtr(state)->On(state == Next);
            }

            break;
        }
        case 1:
        {
            for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Group)->_states), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[10/*Uno.Collections.IEnumerator*/])); )
            {
                ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret5), ret5);
                uPtr(state1)->On(false);
            }

            uPtr(Group)->CheckAllDone();
            break;
        }
    }
}

// public generated GotoImpl New() [static] :1500
StateGroup__GotoImpl* StateGroup__GotoImpl::New1()
{
    StateGroup__GotoImpl* obj3 = (StateGroup__GotoImpl*)uNew(StateGroup__GotoImpl_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/actions/$.uno
// ----------------------------------------------------------------

// public abstract interface IMediaPlayback :279
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/actions/$.uno
// ----------------------------------------------------------------

// public abstract interface IPlayback :265
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract interface IProgress :920
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract interface IPulseTrigger :1672
// {
uInterfaceType* IPulseTrigger_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPulseTrigger", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/triggers/$.uno
// ----------------------------------------------------------------------------

// public abstract interface IScrolledLength :638
// {
uInterfaceType* IScrolledLength_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IScrolledLength", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract interface IValue<T> :605
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// public static class LayoutTransition :26
// {
// static LayoutTransition() :26
static void LayoutTransition__cctor__fn(uType* __type)
{
    LayoutTransition::_transitioned_ = ::g::Fuse::Triggers::LayoutTransitioned::New1();
    LayoutTransition::PositionLayoutChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::WorldPositionChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::_worldPositionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::PositionChange_ = (uObject*)LayoutTransition__PositionChangeMode::New1();
    LayoutTransition::_positionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::SizeLayoutChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ResizeSizeChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ScalingSizeChange_ = (uObject*)LayoutTransition__ScaleChangeMode::New1();
    LayoutTransition::_sizeChange_ = ::g::Fuse::Properties::CreateHandle();
}

static void LayoutTransition_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_positionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_sizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::LayoutTransitioned_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_transitioned_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_worldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uFieldFlagsStatic);
}

uClassType* LayoutTransition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.LayoutTransition", options);
    type->fp_build_ = LayoutTransition_build;
    type->fp_cctor_ = LayoutTransition__cctor__fn;
    return type;
}

// internal static bool GetPositionChange(Fuse.Visual n, float2& oldPos, float2& newPos) :79
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval)
{
    *__retval = LayoutTransition::GetPositionChange(n, oldPos, newPos);
}

// internal static bool GetSizeChange(Fuse.Visual n, float2& oldSize, float2& newSize) :141
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval)
{
    *__retval = LayoutTransition::GetSizeChange(n, oldSize, newSize);
}

// internal static float3 GetWorldPositionChange(Fuse.Visual n) :49
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float3* __retval)
{
    *__retval = LayoutTransition::GetWorldPositionChange(n);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) :89
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition::SetPositionChange(n, *oldPos, *newPos);
}

// internal static void SetSizeChange(Fuse.Visual n, float2 oldSize, float2 newSize) :136
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition::SetSizeChange(n, *oldSize, *newSize);
}

// internal static void SetWorldPositionChange(Fuse.Visual n, float3 change) :56
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float3* change)
{
    LayoutTransition::SetWorldPositionChange(n, *change);
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() :30
void LayoutTransition__get_Transitioned_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = LayoutTransition::Transitioned();
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_positionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_sizeChange_;
uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> LayoutTransition::_transitioned_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_worldPositionChange_;
uSStrong<uObject*> LayoutTransition::PositionChange_;
uSStrong<uObject*> LayoutTransition::PositionLayoutChange_;
uSStrong<uObject*> LayoutTransition::ResizeSizeChange_;
uSStrong<uObject*> LayoutTransition::ScalingSizeChange_;
uSStrong<uObject*> LayoutTransition::SizeLayoutChange_;
uSStrong<uObject*> LayoutTransition::WorldPositionChange_;

// internal static bool GetPositionChange(Fuse.Visual n, float2& oldPos, float2& newPos) [static] :79
bool LayoutTransition::GetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange());
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Visual n, float2& oldSize, float2& newSize) [static] :141
bool LayoutTransition::GetSizeChange(::g::Fuse::Visual* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange(), &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), res);
        *oldSize = ::g::Uno::Float2__New2(f.X, f.Y);
        *newSize = ::g::Uno::Float2__New2(f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::g::Uno::Float2__New1(0.0f);
        *newSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }
}

// internal static float3 GetWorldPositionChange(Fuse.Visual n) [static] :49
::g::Uno::Float3 LayoutTransition::GetWorldPositionChange(::g::Fuse::Visual* n)
{
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange());

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) [static] :89
void LayoutTransition::SetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange(), uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Visual n, float2 oldSize, float2 newSize) [static] :136
void LayoutTransition::SetSizeChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange(), uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Visual n, float3 change) [static] :56
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float3 change)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange(), uBox(::g::Uno::Float3_typeof(), change));
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static] :30
::g::Fuse::VisualEvent* LayoutTransition::Transitioned()
{
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// internal sealed class LayoutTransitioned :17
// {
static void LayoutTransitioned_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitioned);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Triggers.LayoutTransitioned", options);
    type->fp_build_ = LayoutTransitioned_build;
    type->fp_ctor_ = (void*)LayoutTransitioned__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))LayoutTransitioned__Invoke_fn;
    return type;
}

// public generated LayoutTransitioned() :17
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Triggers.LayoutTransitionedHandler handler, object sender, Fuse.Triggers.LayoutTransitionedArgs args) :19
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated LayoutTransitioned New() :17
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval)
{
    *__retval = LayoutTransitioned::New1();
}

// public generated LayoutTransitioned() [instance] :17
void LayoutTransitioned::ctor_1()
{
    ctor_();
}

// public generated LayoutTransitioned New() [static] :17
LayoutTransitioned* LayoutTransitioned::New1()
{
    LayoutTransitioned* obj1 = (LayoutTransitioned*)uNew(LayoutTransitioned_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// internal sealed class LayoutTransitionedArgs :10
// {
static void LayoutTransitionedArgs_build(uType* type)
{
    type->SetFields(2);
}

uType* LayoutTransitionedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitionedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.LayoutTransitionedArgs", options);
    type->fp_build_ = LayoutTransitionedArgs_build;
    return type;
}

// public LayoutTransitionedArgs(Fuse.Visual node) :12
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Visual* node)
{
    __this->ctor_2(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) :12
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Visual* node, LayoutTransitionedArgs** __retval)
{
    *__retval = LayoutTransitionedArgs::New3(node);
}

// public LayoutTransitionedArgs(Fuse.Visual node) [instance] :12
void LayoutTransitionedArgs::ctor_2(::g::Fuse::Visual* node)
{
    ctor_1(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) [static] :12
LayoutTransitionedArgs* LayoutTransitionedArgs::New3(::g::Fuse::Visual* node)
{
    LayoutTransitionedArgs* obj1 = (LayoutTransitionedArgs*)uNew(LayoutTransitionedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// internal delegate void LayoutTransitionedHandler(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :16
uDelegateType* LayoutTransitionedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.LayoutTransitionedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// private sealed class LayoutTransition.PositionChangeMode :61
// {
static void LayoutTransition__PositionChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface1));
}

LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__PositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__PositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__PositionChangeMode_type);
    type = (LayoutTransition__PositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.PositionChangeMode", options);
    type->fp_build_ = LayoutTransition__PositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__PositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__PositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__PositionChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__PositionChangeMode__Unsubscribe_fn;
    return type;
}

// public generated PositionChangeMode() :61
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :63
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated PositionChangeMode New() :61
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval)
{
    *__retval = LayoutTransition__PositionChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :71
void LayoutTransition__PositionChangeMode__Subscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :72
void LayoutTransition__PositionChangeMode__Unsubscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated PositionChangeMode() [instance] :61
void LayoutTransition__PositionChangeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :63
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    ::g::Uno::Float2 oldPos, newPos;

    if (!::g::Fuse::Triggers::LayoutTransition::GetPositionChange(uPtr(t)->RelativeNode(), &oldPos, &newPos))
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Subtraction2(oldPos, newPos), 0.0f), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :71
uObject* LayoutTransition__PositionChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :72
void LayoutTransition__PositionChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated PositionChangeMode New() [static] :61
LayoutTransition__PositionChangeMode* LayoutTransition__PositionChangeMode::New1()
{
    LayoutTransition__PositionChangeMode* obj1 = (LayoutTransition__PositionChangeMode*)uNew(LayoutTransition__PositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public delegate void PulseTrigger<ArgsT>.PulseHandler(object sender, ArgsT args) :1045
uDelegateType* PulseTrigger__PulseHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.PulseTrigger`1.PulseHandler", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class PulseTrigger<ArgsT> :1042
// {
static void PulseTrigger_build(uType* type)
{
    ::TYPES[12] = PulseTrigger__PulseHandler_typeof();
    type->SetPrecalc(
        PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::PulseTrigger, Handler1), 0);
}

::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PulseTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PulseTrigger`1", options);
    type->fp_build_ = PulseTrigger_build;
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

// public generated void add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) :1050
void PulseTrigger__add_Handler_fn(PulseTrigger* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) :1050
void PulseTrigger__remove_Handler_fn(PulseTrigger* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected void Pulse(ArgsT args) :1052
void PulseTrigger__Pulse1_fn(PulseTrigger* __this, ::g::Uno::EventArgs* args)
{
    __this->Pulse1(args);
}

// public generated void add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) [instance] :1050
void PulseTrigger::add_Handler(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(PulseTrigger_typeof())->Precalced(0/*Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler*/),
    };
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), __types[0]);
}

// public generated void remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) [instance] :1050
void PulseTrigger::remove_Handler(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(PulseTrigger_typeof())->Precalced(0/*Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler*/),
    };
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), __types[0]);
}

// protected void Pulse(ArgsT args) [instance] :1052
void PulseTrigger::Pulse1(::g::Uno::EventArgs* args)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public class RemovingAnimation :1222
// {
static void RemovingAnimation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Double removal of Visual");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno");
    ::STRINGS[7] = uString::Const("Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual");
    ::STRINGS[8] = uString::Const("Unexpected done");
    ::STRINGS[9] = uString::Const("OnDone");
    ::TYPES[6] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RemovingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RemovingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RemovingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RemovingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(RemovingAnimation_type, interface4),
        ::g::Fuse::IBeginRemoveVisualListener_typeof(), offsetof(RemovingAnimation_type, interface5));
    type->SetFields(27,
        ::g::Fuse::PendingRemoveVisual_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation, _args), 0);
}

RemovingAnimation_type* RemovingAnimation_typeof()
{
    static uSStrong<RemovingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(RemovingAnimation);
    options.TypeSize = sizeof(RemovingAnimation_type);
    type = (RemovingAnimation_type*)uClassType::New("Fuse.Triggers.RemovingAnimation", options);
    type->fp_build_ = RemovingAnimation_build;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RemovingAnimation__OnUnrooted_fn;
    type->interface5.fp_OnBeginRemoveVisual = (void(*)(uObject*, ::g::Fuse::PendingRemoveVisual*))RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn;
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

// public generated RemovingAnimation() :1222
void RemovingAnimation__ctor_4_fn(RemovingAnimation* __this)
{
    __this->ctor_4();
}

// private void Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual(Fuse.PendingRemoveVisual pr) :1226
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr)
{
    if (__this->_args != NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[5/*"Double remo...*/], __this, ::STRINGS[6/*"/usr/local/...*/], 1230, ::STRINGS[7/*"Fuse.IBegin...*/]);
        return;
    }

    __this->_args = pr;
    uPtr(__this->_args)->AddSubscriber();
    __this->Activate(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)RemovingAnimation__OnDone_fn, __this));
}

// private void OnDone() :1239
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this)
{
    __this->OnDone();
}

// protected override sealed void OnUnrooted() :1251
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);

    if (__this->_args != NULL)
    {
        uPtr(__this->_args)->RemoveSubscriber();
        __this->_args = NULL;
    }
}

// public generated RemovingAnimation() [instance] :1222
void RemovingAnimation::ctor_4()
{
    ctor_3();
}

// private void OnDone() [instance] :1239
void RemovingAnimation::OnDone()
{
    if (_args == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[8/*"Unexpected ...*/], this, ::STRINGS[6/*"/usr/local/...*/], 1243, ::STRINGS[9/*"OnDone"*/]);
        return;
    }

    uPtr(_args)->RemoveSubscriber();
    _args = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// private sealed class LayoutTransition.ResizeChangeMode :95
// {
static void LayoutTransition__ResizeChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface0));
}

LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransition__ResizeChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ResizeChangeMode_type);
    type = (LayoutTransition__ResizeChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ResizeChangeMode", options);
    type->fp_build_ = LayoutTransition__ResizeChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))LayoutTransition__ResizeChangeMode__GetSizeChange_fn;
    return type;
}

// public generated ResizeChangeMode() :95
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this)
{
    __this->ctor_();
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) :97
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(n, relative, baseSize, deltaSize);
}

// public generated ResizeChangeMode New() :95
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval)
{
    *__retval = LayoutTransition__ResizeChangeMode::New1();
}

// public generated ResizeChangeMode() [instance] :95
void LayoutTransition__ResizeChangeMode::ctor_()
{
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) [instance] :97
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    ::g::Uno::Float2 oldSize, newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(n, &oldSize, &newSize);
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(oldSize, newSize);
    *baseSize = newSize;
    return b;
}

// public generated ResizeChangeMode New() [static] :95
LayoutTransition__ResizeChangeMode* LayoutTransition__ResizeChangeMode::New1()
{
    LayoutTransition__ResizeChangeMode* obj1 = (LayoutTransition__ResizeChangeMode*)uNew(LayoutTransition__ResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// private sealed class LayoutTransition.ScaleChangeMode :109
// {
static void LayoutTransition__ScaleChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface1));
}

LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ScaleChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ScaleChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ScaleChangeMode_type);
    type = (LayoutTransition__ScaleChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ScaleChangeMode", options);
    type->fp_build_ = LayoutTransition__ScaleChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ScaleChangeMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))LayoutTransition__ScaleChangeMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__ScaleChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__ScaleChangeMode__Unsubscribe_fn;
    return type;
}

// public generated ScaleChangeMode() :109
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling v) :111
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(v);
}

// public generated ScaleChangeMode New() :109
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval)
{
    *__retval = LayoutTransition__ScaleChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :123
void LayoutTransition__ScaleChangeMode__Subscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :124
void LayoutTransition__ScaleChangeMode__Unsubscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated ScaleChangeMode() [instance] :109
void LayoutTransition__ScaleChangeMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance] :111
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
    ::g::Uno::Float2 oldSize, newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(uPtr(v)->RelativeNode(), &oldSize, &newSize);

    if ((!b || (newSize.Y < 1e-05f)) || (newSize.X < 1e-05f))
        return uPtr(v)->Vector();

    ::g::Uno::Float2 n = ::g::Uno::Float2__op_Division2(oldSize, newSize);
    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(n, 1.0f), v->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :123
uObject* LayoutTransition__ScaleChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :124
void LayoutTransition__ScaleChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated ScaleChangeMode New() [static] :109
LayoutTransition__ScaleChangeMode* LayoutTransition__ScaleChangeMode::New1()
{
    LayoutTransition__ScaleChangeMode* obj1 = (LayoutTransition__ScaleChangeMode*)uNew(LayoutTransition__ScaleChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/triggers/$.uno
// ----------------------------------------------------------------------------

// public partial sealed class Scrolled :215
// {
// static Scrolled() :217
static void Scrolled__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(Scrolled_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[3/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[13/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Scrolled>*/], ::STRINGS[10/*"check"*/], uDelegate::New(::TYPES[14/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Scrolled, object[]>*/], (void*)Scrolled__check_fn), 2)));
}

static void Scrolled_build(uType* type)
{
    ::STRINGS[10] = uString::Const("check");
    ::STRINGS[11] = uString::Const("reset takes no parameters");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/triggers/$.uno");
    ::STRINGS[13] = uString::Const("Scrolled could not find a Scrollable control.");
    ::STRINGS[14] = uString::Const("OnRooted");
    ::TYPES[2] = ::g::Uno::Type_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[13] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Scrolled_typeof());
    ::TYPES[14] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), Scrolled_typeof(), uObject_typeof()->Array());
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Fuse::Visual_typeof()->MakeMethod(1, ::g::Fuse::Controls::ScrollViewBase_typeof());
    ::TYPES[16] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Triggers::ScrolledArgs_typeof()));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Scrolled, _inZone), 0,
        ::g::Fuse::Triggers::ScrollRegion_typeof(), offsetof(::g::Fuse::Triggers::Scrolled, _region), 0,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(::g::Fuse::Triggers::Scrolled, _scrollable), 0);
}

::g::Fuse::Triggers::Trigger_type* Scrolled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Scrolled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Scrolled", options);
    type->fp_build_ = Scrolled_build;
    type->fp_cctor_ = Scrolled__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scrolled__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scrolled__OnUnrooted_fn;
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

// private static void check(Fuse.Scripting.Context c, Fuse.Triggers.Scrolled s, object[] args) :230
void Scrolled__check_fn(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args)
{
    Scrolled::check(c, s, args);
}

// private void Check() :310
void Scrolled__Check_fn(Scrolled* __this)
{
    __this->Check();
}

// protected override sealed void OnRooted() :274
void Scrolled__OnRooted_fn(Scrolled* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollViewBase*)uPtr(__this->Parent())->FindByType(::TYPES[15/*Fuse.Visual.FindByType<Fuse.Controls.ScrollViewBase>*/]));

    if (__this->_scrollable == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"Scrolled co...*/], __this, ::STRINGS[12/*"/usr/local/...*/], 280, ::STRINGS[14/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[16/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scrolled__OnScrollPositionChanged_fn, __this));
    __this->_inZone = uPtr(__this->_region)->IsInZone(__this->_scrollable);
}

// private void OnScrollPositionChanged(object s, object args) :298
void Scrolled__OnScrollPositionChanged_fn(Scrolled* __this, uObject* s, uObject* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted() :288
void Scrolled__OnUnrooted_fn(Scrolled* __this)
{
    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[16/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scrolled__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Check() [instance] :310
void Scrolled::Check()
{
    if ((_scrollable != NULL) && uPtr(_region)->IsInZone(_scrollable))
        Pulse1(::g::Fuse::Triggers::ScrolledArgs::New2());
}

// private void OnScrollPositionChanged(object s, object args) [instance] :298
void Scrolled::OnScrollPositionChanged(uObject* s, uObject* args)
{
    bool inz = uPtr(_region)->IsInZone(_scrollable);

    if (inz == _inZone)
        return;

    _inZone = inz;

    if (_inZone)
        Pulse1(::g::Fuse::Triggers::ScrolledArgs::New2());
}

// private static void check(Fuse.Scripting.Context c, Fuse.Triggers.Scrolled s, object[] args) [static] :230
void Scrolled::check(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args)
{
    Scrolled_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[11/*"reset takes...*/], s, ::STRINGS[12/*"/usr/local/...*/], 234, ::STRINGS[10/*"check"*/]);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)Scrolled__Check_fn, uPtr(s)), 1, ::g::Fuse::LayoutPriority::Post());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/triggers/$.uno
// ----------------------------------------------------------------------------

// public sealed class ScrolledArgs :253
// {
static void ScrolledArgs_build(uType* type)
{
}

uType* ScrolledArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.ObjectSize = sizeof(ScrolledArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.ScrolledArgs", options);
    type->fp_build_ = ScrolledArgs_build;
    type->fp_ctor_ = (void*)ScrolledArgs__New2_fn;
    return type;
}

// public generated ScrolledArgs() :253
void ScrolledArgs__ctor_1_fn(ScrolledArgs* __this)
{
    __this->ctor_1();
}

// public generated ScrolledArgs New() :253
void ScrolledArgs__New2_fn(ScrolledArgs** __retval)
{
    *__retval = ScrolledArgs::New2();
}

// public generated ScrolledArgs() [instance] :253
void ScrolledArgs::ctor_1()
{
    ctor_();
}

// public generated ScrolledArgs New() [static] :253
ScrolledArgs* ScrolledArgs::New2()
{
    ScrolledArgs* obj1 = (ScrolledArgs*)uNew(ScrolledArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/triggers/$.uno
// ----------------------------------------------------------------------------

// public enum ScrolledWhere :696
uEnumType* ScrolledWhere_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrolledWhere", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Start", 1LL,
        "End", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.38.6/triggers/$.uno
// ----------------------------------------------------------------------------

// internal sealed class ScrollRegion :706
// {
static void ScrollRegion_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Triggers::IScrolledLength_typeof();
    type->SetFields(0,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(::g::Fuse::Triggers::ScrollRegion, RelativeTo), 0,
        ::g::Fuse::Triggers::ScrolledWhere_typeof(), offsetof(::g::Fuse::Triggers::ScrollRegion, To), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollRegion, Within), 0);
}

uType* ScrollRegion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScrollRegion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.ScrollRegion", options);
    type->fp_build_ = ScrollRegion_build;
    return type;
}

// private float2 CalcWithin(Fuse.Controls.ScrollViewBase scrollable) :735
void ScrollRegion__CalcWithin_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcWithin(scrollable);
}

// public bool IsInZone(Fuse.Controls.ScrollViewBase scrollable) :740
void ScrollRegion__IsInZone_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, bool* __retval)
{
    *__retval = __this->IsInZone(scrollable);
}

// private float2 CalcWithin(Fuse.Controls.ScrollViewBase scrollable) [instance] :735
::g::Uno::Float2 ScrollRegion::CalcWithin(::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Fuse::Triggers::IScrolledLength::GetPoints(uInterface(uPtr(RelativeTo), ::TYPES[17/*Fuse.Triggers.IScrolledLength*/]), Within, scrollable);
}

// public bool IsInZone(Fuse.Controls.ScrollViewBase scrollable) [instance] :740
bool ScrollRegion::IsInZone(::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    ::g::Uno::Float2 w = CalcWithin(scrollable);
    float sw = uPtr(scrollable)->ToScalarPosition(w);
    float sp = scrollable->ToScalarPosition(scrollable->ScrollPosition());

    switch (To)
    {
        case 0:
            return false;
        case 1:
        {
            float smin = uPtr(scrollable)->ToScalarPosition(uPtr(scrollable)->MinScroll());
            return sp <= (smin + sw);
        }
        case 2:
        {
            float smax = uPtr(scrollable)->ToScalarPosition(uPtr(scrollable)->MaxScroll());
            return sp >= (smax - sw);
        }
    }

    return false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// private enum Timeline.State :1723
uEnumType* Timeline__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Timeline.State", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public partial sealed class State :1556
// {
// static State() :1558
static void State__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(State_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[3/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[18/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.State>*/], ::STRINGS[15/*"goto"*/], uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.State, object[]>*/], (void*)State__goto__fn), 2)));
}

static void State_build(uType* type)
{
    ::STRINGS[15] = uString::Const("goto");
    ::STRINGS[16] = uString::Const("Cannot call `Goto` on an unrooted `State`");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno");
    ::STRINGS[17] = uString::Const("Goto");
    ::TYPES[2] = ::g::Uno::Type_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(State_typeof());
    ::TYPES[19] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), State_typeof(), uObject_typeof()->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::State, _on), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::State, _stateGroup), 0);
}

::g::Fuse::Triggers::Trigger_type* State_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.State", options);
    type->fp_build_ = State_build;
    type->fp_cctor_ = State__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))State__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))State__OnUnrooted_fn;
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

// public void Goto() :1646
void State__Goto_fn(State* __this)
{
    __this->Goto();
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.State n, object[] args) :1572
void State__goto__fn(::g::Fuse::Scripting::Context* c, State* n, uArray* args)
{
    State::goto_(c, n, args);
}

// public bool get_On() :1607
void State__get_On_fn(State* __this, bool* __retval)
{
    *__retval = __this->On();
}

// public void set_On(bool value) :1608
void State__set_On_fn(State* __this, bool* value)
{
    __this->On(*value);
}

// protected override sealed void OnRooted() :1623
void State__OnRooted_fn(State* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->_on)
        __this->Activate(NULL);
}

// protected override sealed void OnUnrooted() :1637
void State__OnUnrooted_fn(State* __this)
{
    if (__this->OverrideContextParent == __this->_stateGroup)
        __this->OverrideContextParent = NULL;

    __this->_stateGroup = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public new double get_Progress() :1644
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) :1631
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup)
{
    __this->RootStateGroup(stateGroup);
}

// public void Goto() [instance] :1646
void State::Goto()
{
    if (_stateGroup == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[16/*"Cannot call...*/], NULL, ::STRINGS[6/*"/usr/local/...*/], 1650, ::STRINGS[17/*"Goto"*/]);
        return;
    }

    uPtr(_stateGroup)->Goto(this);
}

// public bool get_On() [instance] :1607
bool State::On()
{
    return _on;
}

// public void set_On(bool value) [instance] :1608
void State::On(bool value)
{
    if (_on == value)
        return;

    _on = value;

    if (Parent() != NULL)
    {
        if (_on)
            Activate(NULL);
        else
            Deactivate();
    }
}

// public new double get_Progress() [instance] :1644
double State::Progress1()
{
    return Progress();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) [instance] :1631
void State::RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup)
{
    ::g::Fuse::Node* ind1;
    OverrideContextParent = (ind1 = OverrideContextParent, ((ind1 != NULL) ? ind1 : stateGroup));
    _stateGroup = stateGroup;
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.State n, object[] args) [static] :1572
void State::goto_(::g::Fuse::Scripting::Context* c, State* n, uArray* args)
{
    State_typeof()->Init();
    uPtr(n)->Goto();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public partial sealed class StateGroup :1273
// {
// static StateGroup() :1275
static void StateGroup__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(StateGroup_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[3/*Fuse.Scripting.ScriptMember[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[20/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.StateGroup>*/], ::STRINGS[15/*"goto"*/], uDelegate::New(::TYPES[21/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.StateGroup, object[]>*/], (void*)StateGroup__goto__fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[20/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.StateGroup>*/], ::STRINGS[18/*"gotoNext"*/], uDelegate::New(::TYPES[21/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.StateGroup, object[]>*/], (void*)StateGroup__gotoNext_fn), 2)));
}

static void StateGroup_build(uType* type)
{
    ::STRINGS[15] = uString::Const("goto");
    ::STRINGS[18] = uString::Const("gotoNext");
    ::STRINGS[19] = uString::Const("StateGroup.goto requires 1 argument");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno");
    ::STRINGS[20] = uString::Const("goto_");
    ::STRINGS[21] = uString::Const("Unable to find State with Name: ");
    ::STRINGS[22] = uString::Const("gotoName");
    ::TYPES[2] = ::g::Uno::Type_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[20] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(StateGroup_typeof());
    ::TYPES[21] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), StateGroup_typeof(), uObject_typeof()->Array());
    ::TYPES[9] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Uno::String_typeof();
    ::TYPES[23] = ::g::Fuse::Triggers::State_typeof();
    ::TYPES[24] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[25] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[26] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Triggers::Trigger_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _active), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), offsetof(::g::Fuse::Triggers::StateGroup, _states), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _transition), 0);
}

::g::Fuse::Node_type* StateGroup_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->fp_build_ = StateGroup_build;
    type->fp_cctor_ = StateGroup__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
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

// public Fuse.Triggers.State get_Active() :1407
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Triggers.State value) :1408
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Active(value);
}

// private int get_ActiveIndex() :1431
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->ActiveIndex();
}

// private void set_ActiveIndex(int value) :1438
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value)
{
    __this->ActiveIndex(*value);
}

// private void CheckAllDone() :1529
void StateGroup__CheckAllDone_fn(StateGroup* __this)
{
    __this->CheckAllDone();
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) :1449
void StateGroup__FindObjectByName_fn(StateGroup* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(*name, acceptor);
}

// internal void Goto(Fuse.Triggers.State next) :1492
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next)
{
    __this->Goto(next);
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) :1309
void StateGroup__goto__fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup::goto_(c, n, args);
}

// private static void gotoName(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, string name) :1288
void StateGroup__gotoName_fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uString* name)
{
    StateGroup::gotoName(c, n, name);
}

// private static void gotoNext(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) :1329
void StateGroup__gotoNext_fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup::gotoNext(c, n, args);
}

// public void GotoNextState() :1444
void StateGroup__GotoNextState_fn(StateGroup* __this)
{
    __this->GotoNextState();
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) :1523
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which)
{
    __this->OnPlaybackDone(which);
}

// protected override sealed void OnRooted() :1476
void StateGroup__OnRooted_fn(StateGroup* __this)
{
    ::g::Fuse::Triggers::State* ret10;
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Node__OnRooted_fn(__this);

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret10), ret10);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[10/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
        uPtr(state)->On(state == __this->_active);
        state->add_PlaybackDone(uDelegate::New(::TYPES[27/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->RootStateGroup(__this);
        uPtr(__this->Parent())->Add1(state);
    }
}

// protected override sealed void OnUnrooted() :1465
void StateGroup__OnUnrooted_fn(StateGroup* __this)
{
    ::g::Fuse::Triggers::State* ret12;
    ::g::Fuse::Node__OnUnrooted_fn(__this);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[10/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
        uPtr(state)->remove_PlaybackDone(uDelegate::New(::TYPES[27/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        uPtr(__this->Parent())->Remove1(state);
    }
}

// private static bool StateAcceptor(object o) :1283
void StateGroup__StateAcceptor_fn(uObject* o, bool* __retval)
{
    *__retval = StateGroup::StateAcceptor(o);
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() :1402
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval)
{
    *__retval = __this->States();
}

// public Fuse.Triggers.StateTransition get_Transition() :1461
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Triggers.StateTransition value) :1462
void StateGroup__set_Transition_fn(StateGroup* __this, int* value)
{
    __this->Transition(*value);
}

// public Fuse.Triggers.State get_Active() [instance] :1407
::g::Fuse::Triggers::State* StateGroup::Active()
{
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance] :1408
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance] :1431
int StateGroup::ActiveIndex()
{
    ::g::Fuse::Triggers::State* ret13;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(i), &ret13), ret13))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance] :1438
void StateGroup::ActiveIndex(int value)
{
    ::g::Fuse::Triggers::State* ret14;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(value), &ret14), ret14));
}

// private void CheckAllDone() [instance] :1529
void StateGroup::CheckAllDone()
{
    ::g::Fuse::Triggers::State* ret7;
    bool all = true;

    for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[10/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret7), ret7);

        if (uPtr(state)->Progress1() > 0.0)
            all = false;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) [instance] :1449
uObject* StateGroup::FindObjectByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    ::g::Fuse::Triggers::State* ret8;
    bool ret9;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

        if (::g::Uno::UX::Selector__op_Equality(uPtr(s)->Name(), name) && (uPtr(acceptor)->Invoke(&ret9, 1, s), ret9))
            return s;
    }

    return NULL;
}

// internal void Goto(Fuse.Triggers.State next) [instance] :1492
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    StateGroup__GotoImpl* collection4;
    _active = next;
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)StateGroup__GotoImpl__Go_fn, uPtr((collection4 = StateGroup__GotoImpl::New1(), uPtr(collection4)->Next = next, uPtr(collection4)->Group = this, collection4))), -1, 0);
}

// public void GotoNextState() [instance] :1444
void StateGroup::GotoNextState()
{
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) [instance] :1523
void StateGroup::OnPlaybackDone(::g::Fuse::Triggers::Trigger* which)
{
    if (Transition() == 1)
        CheckAllDone();
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance] :1402
uObject* StateGroup::States()
{
    return _states;
}

// public Fuse.Triggers.StateTransition get_Transition() [instance] :1461
int StateGroup::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance] :1462
void StateGroup::Transition(int value)
{
    _transition = value;
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) [static] :1309
void StateGroup::goto_(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"StateGroup....*/], n, ::STRINGS[6/*"/usr/local/...*/], 1313, ::STRINGS[20/*"goto_"*/]);
        return;
    }

    if (uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::TYPES[22/*string*/]))
        StateGroup::gotoName(c, n, uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[22/*string*/]));
    else
        uPtr(n)->Goto(uAs< ::g::Fuse::Triggers::State*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[23/*Fuse.Triggers.State*/]));
}

// private static void gotoName(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, string name) [static] :1288
void StateGroup::gotoName(::g::Fuse::Scripting::Context* c, StateGroup* n, uString* name)
{
    StateGroup_typeof()->Init();
    ::g::Fuse::Triggers::State* state = uAs< ::g::Fuse::Triggers::State*>(uPtr(n)->FindObjectByName(::g::Uno::UX::Selector__op_Implicit(name), uDelegate::New(::TYPES[24/*Uno.Predicate<object>*/], (void*)StateGroup__StateAcceptor_fn)), ::TYPES[23/*Fuse.Triggers.State*/]);

    if (state == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[21/*"Unable to f...*/], name), n, ::STRINGS[6/*"/usr/local/...*/], 1293, ::STRINGS[22/*"gotoName"*/]);
        return;
    }

    n->Goto(state);
}

// private static void gotoNext(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) [static] :1329
void StateGroup::gotoNext(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup_typeof()->Init();
    uPtr(n)->GotoNextState();
}

// private static bool StateAcceptor(object o) [static] :1283
bool StateGroup::StateAcceptor(uObject* o)
{
    StateGroup_typeof()->Init();
    return uIs(o, ::TYPES[23/*Fuse.Triggers.State*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public enum StateTransition :1346
uEnumType* StateTransition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.StateTransition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public partial sealed class Timeline :1714
// {
// static Timeline() :1913
static void Timeline__cctor_1_fn(uType* __type)
{
    Timeline::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"Progress"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(Timeline_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[3/*Fuse.Scripting.ScriptMember[]*/], 9, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[24/*"pause"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pause_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[25/*"pulse"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulse_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[26/*"pulseBackward"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulseBackward_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[27/*"pulseForward"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulseForward_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[28/*"play"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__resume_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[29/*"playTo"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__playTo_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[30/*"resume"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__resume_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[31/*"seek"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__seek_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[28/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[32/*"stop"*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__stop_fn), 2)));
}

static void Timeline_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Progress");
    ::STRINGS[24] = uString::Const("pause");
    ::STRINGS[25] = uString::Const("pulse");
    ::STRINGS[26] = uString::Const("pulseBackward");
    ::STRINGS[27] = uString::Const("pulseForward");
    ::STRINGS[28] = uString::Const("play");
    ::STRINGS[29] = uString::Const("playTo");
    ::STRINGS[30] = uString::Const("resume");
    ::STRINGS[31] = uString::Const("seek");
    ::STRINGS[32] = uString::Const("stop");
    ::STRINGS[33] = uString::Const("Timeline.seek requires 1 argument");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno");
    ::TYPES[2] = ::g::Uno::Type_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[28] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Timeline_typeof());
    ::TYPES[29] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), Timeline_typeof(), uObject_typeof()->Array());
    ::TYPES[30] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[31] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[32] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Timeline_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Timeline_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Timeline_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Timeline_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(Timeline_type, interface4),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Timeline_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(Timeline_type, interface6),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Timeline_type, interface7));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasInitialProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasTargetProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _initialProgress), 0,
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _progressOrigin), 0,
        Timeline__State_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _state), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _targetProgress), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Triggers::Timeline, ProgressChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Triggers::Timeline::_progressName_, uFieldFlagsStatic);
}

Timeline_type* Timeline_typeof()
{
    static uSStrong<Timeline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Timeline);
    options.TypeSize = sizeof(Timeline_type);
    type = (Timeline_type*)uClassType::New("Fuse.Triggers.Timeline", options);
    type->fp_build_ = Timeline_build;
    type->fp_cctor_ = Timeline__cctor_1_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Timeline__OnRooted_fn;
    type->interface5.fp_Stop = (void(*)(uObject*))Timeline__Stop1_fn;
    type->interface5.fp_PlayTo = (void(*)(uObject*, double*))Timeline__PlayTo1_fn;
    type->interface5.fp_Pause = (void(*)(uObject*))Timeline__Pause_fn;
    type->interface5.fp_Resume = (void(*)(uObject*))Timeline__Resume_fn;
    type->interface5.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface5.fp_set_Progress = (void(*)(uObject*, double*))Timeline__set_Progress_fn;
    type->interface5.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Timeline__get_CanPlayTo_fn;
    type->interface5.fp_get_CanStop = (void(*)(uObject*, bool*))Timeline__get_CanStop_fn;
    type->interface5.fp_get_CanPause = (void(*)(uObject*, bool*))Timeline__get_CanPause_fn;
    type->interface5.fp_get_CanResume = (void(*)(uObject*, bool*))Timeline__get_CanResume_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))Timeline__Pulse1_fn;
    type->interface7.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface7.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__add_ProgressChanged_fn;
    type->interface7.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__remove_ProgressChanged_fn;
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

// private void BypassOff() :1886
void Timeline__BypassOff_fn(Timeline* __this)
{
    __this->BypassOff();
}

// public bool get_CanPause() :1833
void Timeline__get_CanPause_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :1829
void Timeline__get_CanPlayTo_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :1835
void Timeline__get_CanResume_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :1831
void Timeline__get_CanStop_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// protected override sealed void OnProgressChanged() :1866
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    ::g::Uno::UX::ValueChangedArgs* ret3;
    uObject* ind1 = __this->_progressOrigin;
    uObject* sender = (ind1 != NULL) ? ind1 : uAs<uObject*>(__this, ::TYPES[30/*Uno.UX.IPropertyListener*/]);
    __this->OnPropertyChanged1(Timeline::_progressName(), sender);

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, sender, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[31/*Uno.UX.ValueChangedArgs<double>*/], uCRef(__this->Progress1()), &ret3), ret3));
}

// protected override sealed void OnRooted() :1768
void Timeline__OnRooted_fn(Timeline* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_initialProgress, 0);

        if ((__this->Bypass() == 0) && !__this->_hasInitialProgress)
            __this->BypassSeek(__this->TargetProgress(), 0);

        if (__this->_state == 0)
            __this->Play(__this->TargetProgress());
    }
}

// private static void pause(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2004
void Timeline__pause_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pause(c, n, args);
}

// public void Pause() :1811
void Timeline__Pause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Play(double progress) :1803
void Timeline__Play_fn(Timeline* __this, double* progress)
{
    __this->Play(*progress);
}

// public Fuse.Animations.PlayMode get_PlayMode() :1764
void Timeline__get_PlayMode_fn(Timeline* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :1765
void Timeline__set_PlayMode_fn(Timeline* __this, int* value)
{
    __this->PlayMode(*value);
}

// private static void playTo(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :1966
void Timeline__playTo_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::playTo(c, n, args);
}

// public void PlayTo(double progress) :1797
void Timeline__PlayTo1_fn(Timeline* __this, double* progress)
{
    __this->PlayTo1(*progress);
}

// public new double get_Progress() :1840
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public new void set_Progress(double value) :1841
void Timeline__set_Progress_fn(Timeline* __this, double* value)
{
    __this->Progress1(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1785
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1785
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private static void pulse(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :1933
void Timeline__pulse_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pulse(c, n, args);
}

// public new void Pulse() :1875
void Timeline__Pulse1_fn(Timeline* __this)
{
    __this->Pulse1();
}

// private static void pulseBackward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :1953
void Timeline__pulseBackward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pulseBackward(c, n, args);
}

// public new void PulseBackward() :1892
void Timeline__PulseBackward1_fn(Timeline* __this)
{
    __this->PulseBackward1();
}

// private static void pulseForward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :1943
void Timeline__pulseForward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pulseForward(c, n, args);
}

// public void PulseForward() :1880
void Timeline__PulseForward_fn(Timeline* __this)
{
    __this->PulseForward();
}

// private static void resume(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :1994
void Timeline__resume_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::resume(c, n, args);
}

// public void Resume() :1820
void Timeline__Resume_fn(Timeline* __this)
{
    __this->Resume();
}

// private static void seek(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2015
void Timeline__seek_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::seek(c, n, args);
}

// private static void stop(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :1983
void Timeline__stop_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::stop(c, n, args);
}

// public void Stop() :1787
void Timeline__Stop1_fn(Timeline* __this)
{
    __this->Stop1();
}

// public double get_TargetProgress() :1746
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->TargetProgress();
}

// public void set_TargetProgress(double value) :1753
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value)
{
    __this->TargetProgress(*value);
}

::g::Uno::UX::Selector Timeline::_progressName_;

// private void BypassOff() [instance] :1886
void Timeline::BypassOff()
{
    _targetProgress = 0.0;
    BypassDeactivate();
}

// public bool get_CanPause() [instance] :1833
bool Timeline::CanPause()
{
    return true;
}

// public bool get_CanPlayTo() [instance] :1829
bool Timeline::CanPlayTo()
{
    return true;
}

// public bool get_CanResume() [instance] :1835
bool Timeline::CanResume()
{
    return true;
}

// public bool get_CanStop() [instance] :1831
bool Timeline::CanStop()
{
    return true;
}

// public void Pause() [instance] :1811
void Timeline::Pause()
{
    if (IsRootingCompleted())
    {
        _state = 1;
        Seek(Progress1(), 0);
    }
}

// private void Play(double progress) [instance] :1803
void Timeline::Play(double progress)
{
    _state = 0;
    PlayTo(progress, (progress >= Progress1()) ? 0 : 1);
    _targetProgress = progress;
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :1764
int Timeline::PlayMode()
{
    return uPtr(Animation())->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :1765
void Timeline::PlayMode(int value)
{
    uPtr(Animation())->PlayMode(value);
}

// public void PlayTo(double progress) [instance] :1797
void Timeline::PlayTo1(double progress)
{
    if (IsRootingCompleted())
        Play(progress);
}

// public new double get_Progress() [instance] :1840
double Timeline::Progress1()
{
    return Progress();
}

// public new void set_Progress(double value) [instance] :1841
void Timeline::Progress1(double value)
{
    Seek(value, 0);
    _targetProgress = value;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :1785
void Timeline::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[32/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :1785
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[32/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public new void Pulse() [instance] :1875
void Timeline::Pulse1()
{
    Pulse();
}

// public new void PulseBackward() [instance] :1892
void Timeline::PulseBackward1()
{
    BypassActivate();
    _targetProgress = 0.0;
    DirectDeactivate();
}

// public void PulseForward() [instance] :1880
void Timeline::PulseForward()
{
    _targetProgress = 1.0;
    DirectActivate(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)Timeline__BypassOff_fn, this));
}

// public void Resume() [instance] :1820
void Timeline::Resume()
{
    if (IsRootingCompleted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void Stop() [instance] :1787
void Timeline::Stop1()
{
    if (IsRootingCompleted())
    {
        Seek(Progress1(), 0);
        _targetProgress = Progress1();
        _state = 1;
    }
}

// public double get_TargetProgress() [instance] :1746
double Timeline::TargetProgress()
{
    if (!_hasTargetProgress && (PlayMode() == 1))
        return 1.0;

    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance] :1753
void Timeline::TargetProgress(double value)
{
    _targetProgress = value;
    _hasTargetProgress = true;

    if (IsRootingCompleted() && (_state == 0))
        PlayTo1(_targetProgress);
}

// private static void pause(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2004
void Timeline::pause(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Pause();
}

// private static void playTo(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :1966
void Timeline::playTo(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Timeline.se...*/], n, ::STRINGS[6/*"/usr/local/...*/], 1970, ::STRINGS[29/*"playTo"*/]);
        return;
    }

    uPtr(n)->PlayTo1(::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void pulse(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :1933
void Timeline::pulse(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Pulse1();
}

// private static void pulseBackward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :1953
void Timeline::pulseBackward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->PulseBackward1();
}

// private static void pulseForward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :1943
void Timeline::pulseForward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->PulseForward();
}

// private static void resume(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :1994
void Timeline::resume(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Resume();
}

// private static void seek(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2015
void Timeline::seek(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Timeline.se...*/], n, ::STRINGS[6/*"/usr/local/...*/], 2019, ::STRINGS[31/*"seek"*/]);
        return;
    }

    uPtr(n)->Progress1(::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void stop(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :1983
void Timeline::stop(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Stop1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class Trigger :2087
// {
static void Trigger_build(uType* type)
{
    ::STRINGS[34] = uString::Const("AddContent called prior to having a Parent");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno");
    ::STRINGS[35] = uString::Const("AddContent");
    ::STRINGS[36] = uString::Const("Could not locate trigger in parent, content not added: ");
    ::STRINGS[37] = uString::Const("Trigger.OnPlaybackdone called with _animState == null");
    ::STRINGS[38] = uString::Const("Fuse.Animations.IPlayerFeedback.OnPlaybackDone");
    ::STRINGS[39] = uString::Const("Trigger started prior to being rooted: ");
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[34] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[36] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[37] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[38] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[39] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[40] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(Trigger_type, interface4));
    type->SetFields(13,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _actions), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animation), 0,
        ::g::Fuse::Animations::TriggerAnimationState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animState), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneOn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _isStarted), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _lastPlayDirection), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _nodes), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootCaptureIndex1), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootPlayDirection), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _startAtZero), 0,
        ::g::Fuse::Triggers::TriggerBypassMode_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _Bypass), 0,
        ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof()), offsetof(::g::Fuse::Triggers::Trigger, PlaybackDone1), 0);
}

Trigger_type* Trigger_typeof()
{
    static uSStrong<Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Trigger);
    options.TypeSize = sizeof(Trigger_type);
    type = (Trigger_type*)uClassType::New("Fuse.Triggers.Trigger", options);
    type->fp_build_ = Trigger_build;
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Trigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated Trigger() :2087
void Trigger__ctor_3_fn(Trigger* __this)
{
    __this->ctor_3();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() :2214
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Actions();
}

// protected void Activate([Uno.Action done]) :2446
void Trigger__Activate_fn(Trigger* __this, uDelegate* done)
{
    __this->Activate(done);
}

// protected void AddContent(Fuse.Node target) :2254
void Trigger__AddContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->AddContent(target);
}

// public Fuse.Animations.TriggerAnimation get_Animation() :2125
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) :2130
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :2200
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() :2177
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->BackwardAnimation();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) :2178
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->BackwardAnimation(value);
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() :2114
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) :2114
void Trigger__set_Bypass_fn(Trigger* __this, int* value)
{
    __this->Bypass(*value);
}

// protected void BypassActivate() :2457
void Trigger__BypassActivate_fn(Trigger* __this)
{
    __this->BypassActivate();
}

// protected void BypassDeactivate() :2491
void Trigger__BypassDeactivate_fn(Trigger* __this)
{
    __this->BypassDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :2710
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->BypassSeek(*progress, *direction);
}

// private void CleanupStableState() :2381
void Trigger__CleanupStableState_fn(Trigger* __this)
{
    __this->CleanupStableState();
}

// private void CleanupState() :2568
void Trigger__CleanupState_fn(Trigger* __this)
{
    __this->CleanupState();
}

// private void CreateState() :2578
void Trigger__CreateState_fn(Trigger* __this)
{
    __this->CreateState();
}

// protected void Deactivate() :2474
void Trigger__Deactivate_fn(Trigger* __this)
{
    __this->Deactivate();
}

// protected void DirectActivate([Uno.Action done]) :2464
void Trigger__DirectActivate_fn(Trigger* __this, uDelegate* done)
{
    __this->DirectActivate(done);
}

// protected void DirectDeactivate() :2485
void Trigger__DirectDeactivate_fn(Trigger* __this)
{
    __this->DirectDeactivate();
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :2705
void Trigger__DirectSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->DirectSeek(*progress, *direction);
}

// private void EnsureAnimationLength() :2597
void Trigger__EnsureAnimationLength_fn(Trigger* __this)
{
    __this->EnsureAnimationLength();
}

// private bool EnsureState(double progress) :2587
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval)
{
    *__retval = __this->EnsureState(*progress);
}

// private void Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object s) :2343
void Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn(Trigger* __this, uObject* s)
{
    __this->SetPlayDirection(0);

    if (::g::Uno::Delegate::op_Inequality(__this->PlaybackDone1, NULL))
        uPtr(__this->PlaybackDone1)->InvokeVoid(__this);

    if (__this->_animState == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[37/*"Trigger.OnP...*/], __this, ::STRINGS[6/*"/usr/local/...*/], 2352, ::STRINGS[38/*"Fuse.Animat...*/]);
        return;
    }

    uDelegate* perform = NULL;

    if (::g::Uno::Delegate::op_Inequality(__this->_doneAction, NULL))
    {
        if ((__this->_doneOn && uPtr(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && uPtr(__this->_animState)->ProgressFullOff()))
            perform = __this->_doneAction;

        __this->_doneAction = NULL;
    }

    __this->CleanupStableState();

    if (::g::Uno::Delegate::op_Inequality(perform, NULL))
        uPtr(perform)->InvokeVoid();
}

// private void Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object s) :2644
void Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(Trigger* __this, uObject* s)
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret5;
    double prev = uPtr(__this->_animState)->PreviousProgress();
    double cur = uPtr(__this->_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
        return;

    __this->OnProgressChanged();
    __this->SetPlayDirection((diff > 0.0) ? 1 : (diff < 0.0) ? -1 : 0);

    if (__this->_actions == NULL)
        return;

    int dir = (diff > 0.0) ? 0 : 1;

    for (int i = 0; i < uPtr(__this->_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_actions), uCRef<int>(i), &ret5), ret5);

        if (!uPtr(action)->IsProgressTriggered())
            continue;

        float tp = uPtr(action)->ProgressWhen((float)uPtr(__this->_animState)->CurrentAnimatorsDuration());
        bool call = (dir == 0) ? (((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0)) : (((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
            uPtr(action)->PerformFromNode(__this->Parent());
    }
}

// private void Fuse.Animations.IPlayerFeedback.OnStable(object s) :2376
void Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn(Trigger* __this, uObject* s)
{
    __this->CleanupStableState();
}

// public bool get_HasActions() :2223
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasActions();
}

// public bool get_HasAnimators() :2204
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// public bool get_HasBackwardAnimation() :2186
void Trigger__get_HasBackwardAnimation_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasBackwardAnimation();
}

// protected void InversePulse() :2528
void Trigger__InversePulse_fn(Trigger* __this)
{
    __this->InversePulse();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() :2232
void Trigger__get_Nodes_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Nodes();
}

// protected void OnNodeAdded(Fuse.Node n) :2239
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeAdded(n);
}

// protected void OnNodeRemoved(Fuse.Node n) :2248
void Trigger__OnNodeRemoved_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeRemoved(n);
}

// protected virtual void OnProgressChanged() :2640
void Trigger__OnProgressChanged_fn(Trigger* __this)
{
}

// protected override void OnRooted() :2730
void Trigger__OnRooted_fn(Trigger* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootCaptureIndex1 = ::g::Fuse::Node::RootCaptureIndex();

    if (__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_rootProgress, 0);

        if (__this->_rootPlayDirection != 0)
            __this->PlayEnd((__this->_rootPlayDirection > 0) ? true : false, __this->_doneAction);
    }
    else
    {
        __this->_lastPlayDirection = 0;
        __this->_doneAction = NULL;
        __this->_doneOn = false;

        if (__this->_startAtZero)
        {
            __this->Start();
            __this->EnsureState(0.0);
        }
    }
}

// protected override void OnUnrooted() :2762
void Trigger__OnUnrooted_fn(Trigger* __this)
{
    __this->Stop(true);
    __this->CleanupState();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :2101
void Trigger__add_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->add_PlaybackDone(value);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :2101
void Trigger__remove_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->remove_PlaybackDone(value);
}

// protected void PlayEnd(bool on, [Uno.Action done]) :2544
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done)
{
    __this->PlayEnd(*on, done);
}

// private void PlayOn() :2533
void Trigger__PlayOn_fn(Trigger* __this)
{
    __this->PlayOn();
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) :2681
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant)
{
    __this->PlayTo(*progress, *variant);
}

// protected double get_Progress() :2308
void Trigger__get_Progress_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// protected void Pulse() :2504
void Trigger__Pulse_fn(Trigger* __this)
{
    __this->Pulse();
}

// protected void RemoveContent(Fuse.Node target) :2283
void Trigger__RemoveContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->RemoveContent(target);
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) :2694
void Trigger__Seek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->Seek(*progress, *direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :2716
void Trigger__SeekImpl_fn(Trigger* __this, double* progress, int* direction, int* flags)
{
    __this->SeekImpl(*progress, *direction, *flags);
}

// private void SetDone(Uno.Action done, bool on) :2294
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on)
{
    __this->SetDone(done, *on);
}

// private void SetPlayDirection(int next) :2321
void Trigger__SetPlayDirection_fn(Trigger* __this, int* next)
{
    __this->SetPlayDirection(*next);
}

// private bool get_ShouldBypass() :2423
void Trigger__get_ShouldBypass_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldBypass();
}

// private bool get_ShouldIgnore() :2414
void Trigger__get_ShouldIgnore_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldIgnore();
}

// protected void Start() :2389
void Trigger__Start_fn(Trigger* __this)
{
    __this->Start();
}

// protected void Stop([bool force]) :2400
void Trigger__Stop_fn(Trigger* __this, bool* force)
{
    __this->Stop(*force);
}

// private void StopAction() :2497
void Trigger__StopAction_fn(Trigger* __this)
{
    __this->StopAction();
}

// protected generated Trigger() [instance] :2087
void Trigger::ctor_3()
{
    ctor_2();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance] :2214
uObject* Trigger::Actions()
{
    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[38/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/]));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance] :2446
void Trigger::Activate(uDelegate* done)
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassActivate();
    else
        DirectActivate(done);
}

// protected void AddContent(Fuse.Node target) [instance] :2254
void Trigger::AddContent(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;
    int ret2;
    ::g::Fuse::Node* ret3;

    if ((_nodes == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])) == 0))
        return;

    if (Parent() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[34/*"AddContent ...*/], this, ::STRINGS[6/*"/usr/local/...*/], 2261, ::STRINGS[35/*"AddContent"*/]);
        return;
    }

    int where = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[34/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret2), ret2);

    if (where == -1)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[36/*"Could not l...*/], this), this, ::STRINGS[6/*"/usr/local/...*/], 2269, ::STRINGS[35/*"AddContent"*/]);
        return;
    }

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3);
        uPtr(n)->OverrideContextParent = (ind1 = uPtr(n)->OverrideContextParent, ((ind1 != NULL) ? ind1 : this));
    }

    uPtr(Parent())->InsertNodes(where, (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_nodes), ::TYPES[36/*Uno.Collections.IEnumerable<Fuse.Node>*/])));
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance] :2125
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2130
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :2200
uObject* Trigger::Animators()
{
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance] :2177
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance] :2178
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uPtr(Animation())->Backward(value);
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() [instance] :2114
int Trigger::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance] :2114
void Trigger::Bypass(int value)
{
    _Bypass = value;
}

// protected void BypassActivate() [instance] :2457
void Trigger::BypassActivate()
{
    BypassSeek(1.0, 0);
    PlayOn();
}

// protected void BypassDeactivate() [instance] :2491
void Trigger::BypassDeactivate()
{
    BypassSeek(0.0, 0);
    DirectDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :2710
void Trigger::BypassSeek(double progress, int direction)
{
    SeekImpl(progress, direction, 3);
}

// private void CleanupStableState() [instance] :2381
void Trigger::CleanupStableState()
{
    if ((_animState == NULL) || !uPtr(_animState)->IsStable())
        return;

    if (uPtr(_animState)->ProgressFullOff() && !_startAtZero)
        CleanupState();
}

// private void CleanupState() [instance] :2568
void Trigger::CleanupState()
{
    if (_animState != NULL)
    {
        uPtr(_animState)->Feedback = NULL;
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance] :2578
void Trigger::CreateState()
{
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(Parent());
    uPtr(_animState)->Feedback = (uObject*)this;
}

// protected void Deactivate() [instance] :2474
void Trigger::Deactivate()
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassDeactivate();
    else
        DirectDeactivate();
}

// protected void DirectActivate([Uno.Action done]) [instance] :2464
void Trigger::DirectActivate(uDelegate* done)
{
    PlayEnd(true, done);
}

// protected void DirectDeactivate() [instance] :2485
void Trigger::DirectDeactivate()
{
    PlayEnd(false, uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)Trigger__StopAction_fn, this));
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :2705
void Trigger::DirectSeek(double progress, int direction)
{
    SeekImpl(progress, direction, 1);
}

// private void EnsureAnimationLength() [instance] :2597
void Trigger::EnsureAnimationLength()
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret4;

    if (!HasActions())
        return;

    double animFore = uPtr(Animation())->GetAnimatorsDuration(0);
    double animBack = uPtr(Animation())->GetAnimatorsDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret4), ret4);
        float when = uPtr(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
            actFore = ::g::Uno::Math::Max((double)when, actFore);

        if ((action->Direction() == 1) || (action->Direction() == 2))
            actBack = ::g::Uno::Math::Max((double)when, actBack);
    }

    if ((actFore <= animFore) && (actBack <= animBack))
        return;

    ::g::Fuse::Animations::Nothing* n = ::g::Fuse::Animations::Nothing::New2();
    n->Delay(actFore);
    n->DelayBack(actBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[37/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);

    if (HasBackwardAnimation())
    {
        n = ::g::Fuse::Animations::Nothing::New2();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::TYPES[37/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);
    }
}

// private bool EnsureState(double progress) [instance] :2587
bool Trigger::EnsureState(double progress)
{
    if ((progress > 0.0) || _startAtZero)
    {
        if ((_animState == NULL) && (HasAnimators() || HasActions()))
            CreateState();
    }

    return _animState != NULL;
}

// public bool get_HasActions() [instance] :2223
bool Trigger::HasActions()
{
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasAnimators() [instance] :2204
bool Trigger::HasAnimators()
{
    return (_animation != NULL) && uPtr(_animation)->HasAnimators();
}

// public bool get_HasBackwardAnimation() [instance] :2186
bool Trigger::HasBackwardAnimation()
{
    return uPtr(Animation())->HasBackward();
}

// protected void InversePulse() [instance] :2528
void Trigger::InversePulse()
{
    PlayEnd(false, uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :2232
uObject* Trigger::Nodes()
{
    if (_nodes == NULL)
        _nodes = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[39/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeAdded_fn, this), uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeRemoved_fn, this)));

    return _nodes;
}

// protected void OnNodeAdded(Fuse.Node n) [instance] :2239
void Trigger::OnNodeAdded(::g::Fuse::Node* n)
{
    if (IsRootingCompleted() && _isStarted)
    {
        RemoveContent(Parent());
        AddContent(Parent());
    }
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :2248
void Trigger::OnNodeRemoved(::g::Fuse::Node* n)
{
    if (IsRootingCompleted() && _isStarted)
        uPtr(Parent())->BeginRemoveChild(n, NULL);
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :2101
void Trigger::add_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[27/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :2101
void Trigger::remove_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[27/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance] :2544
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    if (on)
        Start();

    SetDone(done, on);

    if (((on && (Progress() < 1.0)) || (!on && (Progress() > 0.0))) || (_lastPlayDirection != 0))
        SetPlayDirection(on ? 1 : -1);

    if ((!on && (Progress() <= 0.0)) && (_animState == NULL))
    {
        if (::g::Uno::Delegate::op_Inequality(done, NULL))
            uPtr(done)->InvokeVoid();

        _doneAction = NULL;
    }
    else if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance] :2533
void Trigger::PlayOn()
{
    PlayEnd(true, NULL);
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance] :2681
void Trigger::PlayTo(double progress, int variant)
{
    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant, 1);
}

// protected double get_Progress() [instance] :2308
double Trigger::Progress()
{
    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance] :2504
void Trigger::Pulse()
{
    if (ShouldIgnore())
        return;

    SetPlayDirection(0);
    DirectActivate(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)Trigger__DirectDeactivate_fn, this));
}

// protected void RemoveContent(Fuse.Node target) [instance] :2283
void Trigger::RemoveContent(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ret6;

    if ((_nodes != NULL) && (Parent() != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6);

            if (uPtr(n)->OverrideContextParent == this)
                uPtr(n)->OverrideContextParent = NULL;

            uPtr(Parent())->BeginRemoveChild(n, NULL);
        }
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :2694
void Trigger::Seek(double progress, int direction)
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassSeek(progress, direction);
    else
        DirectSeek(progress, direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :2716
void Trigger::SeekImpl(double progress, int direction, int flags)
{
    if (progress > 0.0)
        Start();
    else
        Stop(false);

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, flags);
}

// private void SetDone(Uno.Action done, bool on) [instance] :2294
void Trigger::SetDone(uDelegate* done, bool on)
{
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayDirection(int next) [instance] :2321
void Trigger::SetPlayDirection(int next)
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret7;

    if (next == _lastPlayDirection)
        return;

    _lastPlayDirection = next;

    if ((next == 0) || (_actions == NULL))
        return;

    int dir = (next > 0) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret7), ret7);

        if (uPtr(action)->IsProgressTriggered())
            continue;

        if ((uPtr(action)->Direction() == dir) || (uPtr(action)->Direction() == 2))
            uPtr(action)->PerformFromNode(Parent());
    }
}

// private bool get_ShouldBypass() [instance] :2423
bool Trigger::ShouldBypass()
{
    if (Bypass() == 1)
        return false;

    if (IsPreservedRootFrame() && (Bypass() != 2))
        return false;

    if (::g::Fuse::Node::IsRootCapture(_rootCaptureIndex1))
        return true;
    else
        _rootCaptureIndex1 = 0;

    return !IsRootingCompleted();
}

// private bool get_ShouldIgnore() [instance] :2414
bool Trigger::ShouldIgnore()
{
    return !IsRootingStarted();
}

// protected void Start() [instance] :2389
void Trigger::Start()
{
    if (!_isStarted)
    {
        if (!IsRootingStarted())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[39/*"Trigger sta...*/], this)));

        _isStarted = true;
        AddContent(Parent());
    }
}

// protected void Stop([bool force]) [instance] :2400
void Trigger::Stop(bool force)
{
    if (_startAtZero && !force)
        return;

    if (_isStarted)
    {
        RemoveContent(Parent());
        _isStarted = false;
    }
}

// private void StopAction() [instance] :2497
void Trigger::StopAction()
{
    Stop(false);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public enum TriggerBypassMode :2041
uEnumType* TriggerBypassMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerBypassMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL,
        "Rooting", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class WhileBool :2783
// {
static void WhileBool_build(uType* type)
{
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileBool_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileBool_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileBool_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileBool_type, interface4),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileBool_type, interface5),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(WhileBool_type, interface6));
    type->SetFields(33);
}

WhileBool_type* WhileBool_typeof()
{
    static uSStrong<WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileValue_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileBool);
    options.TypeSize = sizeof(WhileBool_type);
    type = (WhileBool_type*)uClassType::New("Fuse.Triggers.WhileBool", options);
    type->fp_build_ = WhileBool_build;
    type->interface6.fp_Toggle = (void(*)(uObject*))WhileBool__Toggle_fn;
    type->interface5.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// protected generated WhileBool() :2783
void WhileBool__ctor_6_fn(WhileBool* __this)
{
    __this->ctor_6();
}

// public void Toggle() :2791
void WhileBool__Toggle_fn(WhileBool* __this)
{
    __this->Toggle();
}

// public new bool get_Value() :2787
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(bool value) :2788
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value)
{
    __this->Value1(*value);
}

// protected generated WhileBool() [instance] :2783
void WhileBool::ctor_6()
{
    ctor_5();
}

// public void Toggle() [instance] :2791
void WhileBool::Toggle()
{
    Value1(!Value1());
}

// public new bool get_Value() [instance] :2787
bool WhileBool::Value1()
{
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance] :2788
void WhileBool::Value1(bool value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhileCompleted :3377
// {
// static WhileCompleted() :3377
static void WhileCompleted__cctor_1_fn(uType* __type)
{
    WhileCompleted::_whileCompletedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileCompleted_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileCompleted", options);
    type->fp_build_ = WhileCompleted_build;
    type->fp_cctor_ = WhileCompleted__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
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

// private static bool IsCompleted(Fuse.Visual n) :3381
void WhileCompleted__IsCompleted_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// protected override sealed void OnRooted() :3402
void WhileCompleted__OnRooted_fn(WhileCompleted* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileCompleted::IsCompleted(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused) :3388
void WhileCompleted__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// private static bool IsCompleted(Fuse.Visual n) [static] :3381
bool WhileCompleted::IsCompleted(::g::Fuse::Visual* n)
{
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp());

    if (!uIs(v, ::TYPES[41/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[41/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool paused) [static] :3388
void WhileCompleted::SetState(::g::Fuse::Visual* n, bool paused)
{
    WhileCompleted_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp(), uBox(::TYPES[41/*bool*/], paused));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhileCompleted* wl = uAs<WhileCompleted*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileCompleted_typeof());

            if ((wl != NULL) && uPtr(wl)->IsRootingCompleted())
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhileDisabled :560
// {
static void WhileDisabled_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface4));
    type->SetFields(28);
}

::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileDisabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileDisabled", options);
    type->fp_build_ = WhileDisabled_build;
    type->fp_ctor_ = (void*)WhileDisabled__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileDisabled__get_IsActive_fn;
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

// public generated WhileDisabled() :560
void WhileDisabled__ctor_6_fn(WhileDisabled* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsActive() :564
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval)
{
    return *__retval = (__this->Parent() != NULL) ? !uPtr(__this->Parent())->IsContextEnabled() : false, void();
}

// public generated WhileDisabled New() :560
void WhileDisabled__New2_fn(WhileDisabled** __retval)
{
    *__retval = WhileDisabled::New2();
}

// public generated WhileDisabled() [instance] :560
void WhileDisabled::ctor_6()
{
    ctor_5();
}

// public generated WhileDisabled New() [static] :560
WhileDisabled* WhileDisabled::New2()
{
    WhileDisabled* obj1 = (WhileDisabled*)uNew(WhileDisabled_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhileEnabled :585
// {
static void WhileEnabled_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface4));
    type->SetFields(28);
}

::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileEnabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabled", options);
    type->fp_build_ = WhileEnabled_build;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileEnabled__get_IsActive_fn;
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

// protected override sealed bool get_IsActive() :589
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval)
{
    return *__retval = (__this->Parent() != NULL) ? uPtr(__this->Parent())->IsContextEnabled() : true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class WhileEnabledDisabledTrigger :529
// {
static void WhileEnabledDisabledTrigger_build(uType* type)
{
    ::TYPES[42] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileEnabledDisabledTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface4));
    type->SetFields(28);
}

WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof()
{
    static uSStrong<WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileEnabledDisabledTrigger);
    options.TypeSize = sizeof(WhileEnabledDisabledTrigger_type);
    type = (WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabledDisabledTrigger", options);
    type->fp_build_ = WhileEnabledDisabledTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted_fn;
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

// internal WhileEnabledDisabledTrigger() :531
void WhileEnabledDisabledTrigger__ctor_5_fn(WhileEnabledDisabledTrigger* __this)
{
    __this->ctor_5();
}

// private void OnIsContextEnabledChanged(object sender, Uno.EventArgs args) :549
void WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsContextEnabledChanged(sender, args);
}

// protected override sealed void OnRooted() :535
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[42/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn, __this));
    __this->SetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted() :543
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this)
{
    uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[42/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// internal WhileEnabledDisabledTrigger() [instance] :531
void WhileEnabledDisabledTrigger::ctor_5()
{
    ctor_4();
}

// private void OnIsContextEnabledChanged(object sender, Uno.EventArgs args) [instance] :549
void WhileEnabledDisabledTrigger::OnIsContextEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsActive());
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhileFailed :2961
// {
// static WhileFailed() :2961
static void WhileFailed__cctor_1_fn(uType* __type)
{
    WhileFailed::_whileFailedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileFailed_build(uType* type)
{
    ::STRINGS[40] = uString::Const("WhileFailed.Message");
    ::TYPES[41] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileFailed::_whileFailedProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileFailed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFailed", options);
    type->fp_build_ = WhileFailed_build;
    type->fp_cctor_ = WhileFailed__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileFailed__OnRooted_fn;
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

// private static bool IsFailed(Fuse.Visual n) :2965
void WhileFailed__IsFailed_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileFailed::IsFailed(n);
}

// protected override sealed void OnRooted() :2988
void WhileFailed__OnRooted_fn(WhileFailed* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileFailed::IsFailed(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool failed, string message) :2972
void WhileFailed__SetState_fn(::g::Fuse::Visual* n, bool* failed, uString* message)
{
    WhileFailed::SetState(n, *failed, message);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileFailed::_whileFailedProp_;

// private static bool IsFailed(Fuse.Visual n) [static] :2965
bool WhileFailed::IsFailed(::g::Fuse::Visual* n)
{
    WhileFailed_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileFailed::_whileFailedProp());

    if (!uIs(v, ::TYPES[41/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[41/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool failed, string message) [static] :2972
void WhileFailed::SetState(::g::Fuse::Visual* n, bool failed, uString* message)
{
    WhileFailed_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileFailed::IsFailed(n);

    if (v != failed)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileFailed::_whileFailedProp(), uBox(::TYPES[41/*bool*/], failed));
        n->SetResource(::STRINGS[40/*"WhileFailed...*/], message);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhileFailed* wl = uAs<WhileFailed*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileFailed_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(failed);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhileFalse :2873
// {
static void WhileFalse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileBool_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileBool_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface4),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface5),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface6));
    type->SetFields(33);
}

::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBool_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileFalse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBool_type);
    type = (::g::Fuse::Triggers::WhileBool_type*)uClassType::New("Fuse.Triggers.WhileFalse", options);
    type->fp_build_ = WhileFalse_build;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFalse__get_IsOn_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*))::g::Fuse::Triggers::WhileBool__Toggle_fn;
    type->interface5.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// protected override sealed bool get_IsOn() :2875
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval)
{
    return *__retval = !__this->Value1(), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhileLoading :3244
// {
// static WhileLoading() :3244
static void WhileLoading__cctor_1_fn(uType* __type)
{
    WhileLoading::_whileLoadingProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileLoading_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileLoading::_whileLoadingProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileLoading", options);
    type->fp_build_ = WhileLoading_build;
    type->fp_cctor_ = WhileLoading__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileLoading__OnRooted_fn;
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

// private static bool IsLoading(Fuse.Visual n) :3248
void WhileLoading__IsLoading_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileLoading::IsLoading(n);
}

// protected override sealed void OnRooted() :3273
void WhileLoading__OnRooted_fn(WhileLoading* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileLoading::IsLoading(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool loading) :3255
void WhileLoading__SetState_fn(::g::Fuse::Visual* n, bool* loading)
{
    WhileLoading::SetState(n, *loading);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileLoading::_whileLoadingProp_;

// private static bool IsLoading(Fuse.Visual n) [static] :3248
bool WhileLoading::IsLoading(::g::Fuse::Visual* n)
{
    WhileLoading_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileLoading::_whileLoadingProp());

    if (!uIs(v, ::TYPES[41/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[41/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool loading) [static] :3255
void WhileLoading::SetState(::g::Fuse::Visual* n, bool loading)
{
    WhileLoading_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileLoading::IsLoading(n);

    if (v != loading)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileLoading::_whileLoadingProp(), uBox(::TYPES[41/*bool*/], loading));

        if (n->IsRootingCompleted())

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            {
                WhileLoading* wl = uAs<WhileLoading*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileLoading_typeof());

                if (wl != NULL)
                    uPtr(wl)->SetActive(loading);
            }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhilePaused :3338
// {
// static WhilePaused() :3338
static void WhilePaused__cctor_1_fn(uType* __type)
{
    WhilePaused::_whilePausedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePaused_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePaused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePaused", options);
    type->fp_build_ = WhilePaused_build;
    type->fp_cctor_ = WhilePaused__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePaused__OnRooted_fn;
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

// private static bool IsPaused(Fuse.Visual n) :3342
void WhilePaused__IsPaused_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// protected override sealed void OnRooted() :3363
void WhilePaused__OnRooted_fn(WhilePaused* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePaused::IsPaused(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused) :3349
void WhilePaused__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// private static bool IsPaused(Fuse.Visual n) [static] :3342
bool WhilePaused::IsPaused(::g::Fuse::Visual* n)
{
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp());

    if (!uIs(v, ::TYPES[41/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[41/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool paused) [static] :3349
void WhilePaused::SetState(::g::Fuse::Visual* n, bool paused)
{
    WhilePaused_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp(), uBox(::TYPES[41/*bool*/], paused));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhilePaused* wl = uAs<WhilePaused*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhilePaused_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class WhilePlaying :3299
// {
// static WhilePlaying() :3299
static void WhilePlaying__cctor_1_fn(uType* __type)
{
    WhilePlaying::_whilePlayingProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePlaying_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePlaying);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePlaying", options);
    type->fp_build_ = WhilePlaying_build;
    type->fp_cctor_ = WhilePlaying__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
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

// private static bool IsPlaying(Fuse.Visual n) :3303
void WhilePlaying__IsPlaying_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// protected override sealed void OnRooted() :3324
void WhilePlaying__OnRooted_fn(WhilePlaying* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePlaying::IsPlaying(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool playing) :3310
void WhilePlaying__SetState_fn(::g::Fuse::Visual* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// private static bool IsPlaying(Fuse.Visual n) [static] :3303
bool WhilePlaying::IsPlaying(::g::Fuse::Visual* n)
{
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp());

    if (!uIs(v, ::TYPES[41/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[41/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool playing) [static] :3310
void WhilePlaying::SetState(::g::Fuse::Visual* n, bool playing)
{
    WhilePlaying_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp(), uBox(::TYPES[41/*bool*/], playing));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhilePlaying* wl = uAs<WhilePlaying*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[35/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhilePlaying_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(playing);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class WhileTrigger :3606
// {
static void WhileTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _Invert), 0);
}

::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileTrigger", options);
    type->fp_build_ = WhileTrigger_build;
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

// protected generated WhileTrigger() :3606
void WhileTrigger__ctor_4_fn(WhileTrigger* __this)
{
    __this->ctor_4();
}

// public generated bool get_Invert() :3610
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval)
{
    *__retval = __this->Invert();
}

// public generated void set_Invert(bool value) :3610
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value)
{
    __this->Invert(*value);
}

// protected void SetActive(bool on) :3612
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->SetActive(*on);
}

// protected generated WhileTrigger() [instance] :3606
void WhileTrigger::ctor_4()
{
    ctor_3();
}

// public generated bool get_Invert() [instance] :3610
bool WhileTrigger::Invert()
{
    return _Invert;
}

// public generated void set_Invert(bool value) [instance] :3610
void WhileTrigger::Invert(bool value)
{
    _Invert = value;
}

// protected void SetActive(bool on) [instance] :3612
void WhileTrigger::SetActive(bool on)
{
    if (on != Invert())
        Activate(NULL);
    else
        Deactivate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public class WhileTrue :2860
// {
static void WhileTrue_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileBool_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileBool_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface4),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface5),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface6));
    type->SetFields(33);
}

::g::Fuse::Triggers::WhileBool_type* WhileTrue_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBool_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileTrue);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBool_type);
    type = (::g::Fuse::Triggers::WhileBool_type*)uClassType::New("Fuse.Triggers.WhileTrue", options);
    type->fp_build_ = WhileTrue_build;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileTrue__get_IsOn_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*))::g::Fuse::Triggers::WhileBool__Toggle_fn;
    type->interface5.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// public generated WhileTrue() :2860
void WhileTrue__ctor_7_fn(WhileTrue* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsOn() :2862
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval)
{
    return *__retval = __this->Value1(), void();
}

// public generated WhileTrue() [instance] :2860
void WhileTrue::ctor_7()
{
    ctor_6();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class WhileValue<T> :3635
// {
static void WhileValue_build(uType* type)
{
    ::STRINGS[41] = uString::Const("`Pulse` on a `WhileValue` will be removed, create a `Timeline` instead.");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno");
    ::STRINGS[42] = uString::Const("Pulse");
    ::TYPES[43] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[44] = ::g::Uno::UX::ValueChangedHandler_typeof();
    type->SetPrecalc(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)),
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileValue_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileValue_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileValue_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileValue_type, interface4),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileValue_type, interface5));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileValue, _hasValue), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _obj), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _source), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, ValueChanged1), 0);
}

WhileValue_type* WhileValue_typeof()
{
    static uSStrong<WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 33;
    options.GenericCount = 1;
    options.InterfaceCount = 6;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhileValue);
    options.TypeSize = sizeof(WhileValue_type);
    type = (WhileValue_type*)uClassType::New("Fuse.Triggers.WhileValue`1", options);
    type->fp_build_ = WhileValue_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileValue__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileValue__OnUnrooted_fn;
    type->interface5.fp_Pulse = (void(*)(uObject*))WhileValue__Pulse1_fn;
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

// protected generated WhileValue() :3635
void WhileValue__ctor_5_fn(WhileValue* __this)
{
    __this->ctor_5();
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) :3683
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = WhileValue::FindValueNode(__type, n);
}

// protected override sealed void OnRooted() :3691
void WhileValue__OnRooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_obj = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)WhileValue::FindValueNode(__this->__type->GetBase(WhileValue_typeof()), __this->Parent())));

    if (__this->_obj != NULL)
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[1], (void*)WhileValue__OnValueChanged_fn, __this));

    __this->SetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted() :3699
void WhileValue__OnUnrooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };

    if (__this->_obj != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[1], (void*)WhileValue__OnValueChanged_fn, __this));
        __this->_obj = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) :3709
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    __this->OnValueChanged(s, a);
}

// public new void Pulse() :3667
void WhileValue__Pulse1_fn(WhileValue* __this)
{
    __this->Pulse1();
}

// public Fuse.Triggers.IValue<T> get_Source() :3661
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<T> value) :3662
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value)
{
    __this->Source(value);
}

// public T get_Value() :3641
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_hasValue)
        return __retval.Store(__this->_value()), void();

    if (__this->_obj != NULL)
        return __retval.Store((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_obj), __types[1]), &ret2), ret2)), void();

    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :3647
void WhileValue__set_Value_fn(WhileValue* __this, void* value)
{
    if (!__this->_hasValue || !::g::Uno::Object::Equals1(uBoxPtr(__this->__type->GetBase(WhileValue_typeof())->T(0), __this->_value()), uBoxPtr(__this->__type->GetBase(WhileValue_typeof())->T(0), value)))
    {
        __this->_hasValue = true;
        __this->_value() = value;
        __this->SetActive(__this->IsOn());
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :3665
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :3665
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated WhileValue() [instance] :3635
void WhileValue::ctor_5()
{
    ctor_4();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance] :3709
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance] :3667
void WhileValue::Pulse1()
{
    if (!::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[41/*"`Pulse` on ...*/], this, ::STRINGS[6/*"/usr/local/...*/], 3671, ::STRINGS[42/*"Pulse"*/]);
        ::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_ = true;
    }

    if (IsOn() != Invert())
        InversePulse();
    else
        Pulse();
}

// public Fuse.Triggers.IValue<T> get_Source() [instance] :3661
uObject* WhileValue::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance] :3662
void WhileValue::Source(uObject* value)
{
    _source = value;
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :3665
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :3665
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static] :3683
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->ContextParent() != NULL)
        return WhileValue::FindValueNode(__type, uPtr(n)->ContextParent());

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.38.6/$.uno
// --------------------------------------------------------

// internal static class WhileValueStatic :3630
// {
static void WhileValueStatic_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_, uFieldFlagsStatic);
}

uClassType* WhileValueStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.WhileValueStatic", options);
    type->fp_build_ = WhileValueStatic_build;
    return type;
}

bool WhileValueStatic::_deprecatedNote_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.38.6/triggers/$.uno
// -----------------------------------------------------------------

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
static void LayoutTransition__WorldPositionChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface1));
}

LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__WorldPositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__WorldPositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__WorldPositionChangeMode_type);
    type = (LayoutTransition__WorldPositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", options);
    type->fp_build_ = LayoutTransition__WorldPositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__WorldPositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__WorldPositionChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn;
    return type;
}

// public generated WorldPositionChangeMode() :32
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :34
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated WorldPositionChangeMode New() :32
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval)
{
    *__retval = LayoutTransition__WorldPositionChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :39
void LayoutTransition__WorldPositionChangeMode__Subscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :40
void LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated WorldPositionChangeMode() [instance] :32
void LayoutTransition__WorldPositionChangeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :34
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::Triggers::LayoutTransition::GetWorldPositionChange(uPtr(t)->RelativeNode()), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :39
uObject* LayoutTransition__WorldPositionChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :40
void LayoutTransition__WorldPositionChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated WorldPositionChangeMode New() [static] :32
LayoutTransition__WorldPositionChangeMode* LayoutTransition__WorldPositionChangeMode::New1()
{
    LayoutTransition__WorldPositionChangeMode* obj1 = (LayoutTransition__WorldPositionChangeMode*)uNew(LayoutTransition__WorldPositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Triggers
