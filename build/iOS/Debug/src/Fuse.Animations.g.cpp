// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.AnimatorState.h>
#include <Fuse.Animations.AnimatorVariant.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.AverageMasterProperty-1.h>
#include <Fuse.Animations.AverageMasterTransform.h>
#include <Fuse.Animations.AverageMixer.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.ContinuousTrackChangeState-1.h>
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.Converter-1.h>
#include <Fuse.Animations.ConverterDouble.h>
#include <Fuse.Animations.ConverterFloat.h>
#include <Fuse.Animations.ConverterFloat2.h>
#include <Fuse.Animations.ConverterFloat3.h>
#include <Fuse.Animations.ConverterFloat4.h>
#include <Fuse.Animations.ConverterSize.h>
#include <Fuse.Animations.ConverterSize2.h>
#include <Fuse.Animations.CreateStateParams.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleState-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Animations.DiscreteMasterProperty-1.h>
#include <Fuse.Animations.DiscreteMasterTransform.h>
#include <Fuse.Animations.DiscreteMixer.h>
#include <Fuse.Animations.DiscreteSingleTrack.h>
#include <Fuse.Animations.DiscreteTrackChangeState-1.h>
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Animations.EasingTrack.h>
#include <Fuse.Animations.FastMatrixTransform.h>
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.MasterBase-1.GFWResult.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Fuse.Animations.MasterTransform.h>
#include <Fuse.Animations.Mixer.h>
#include <Fuse.Animations.MixerBase.h>
#include <Fuse.Animations.MixerHandle-1.h>
#include <Fuse.Animations.MixOp.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.NothingAnimatorState.h>
#include <Fuse.Animations.OpenAnimator.h>
#include <Fuse.Animations.OpenAnimatorState.h>
#include <Fuse.Animations.Player.h>
#include <Fuse.Animations.PlayerPart.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.RangeAdapter-1.h>
#include <Fuse.Animations.RangeAdapterHelpers.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.ResizeAnimatorState.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.SeekDirection.h>
#include <Fuse.Animations.SeekResult.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.SpinState.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TransformAnimatorState-1.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Motion.DestinationMotion-1.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
static uString* STRINGS[18];
static uType* TYPES[40];

namespace g{
namespace Fuse{
namespace Animations{

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public enum AnimationVariant :3892
uEnumType* AnimationVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimationVariant", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract class Animator :70
// {
static void Animator_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::Animator, _mixOp), 0,
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::Animator, Mixer), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Animator, _Delay), 0);
}

Animator_type* Animator_typeof()
{
    static uSStrong<Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(Animator_type);
    type = (Animator_type*)uClassType::New("Fuse.Animations.Animator", options);
    type->fp_build_ = Animator_build;
    type->fp_get_AnimatorVariant = Animator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = Animator__GetDurationWithDelay_fn;
    return type;
}

// internal Animator() :100
void Animator__ctor_1_fn(Animator* __this)
{
    __this->ctor_1();
}

// internal virtual Fuse.Animations.AnimatorVariant get_AnimatorVariant() :81
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public generated double get_Delay() :79
void Animator__get_Delay_fn(Animator* __this, double* __retval)
{
    *__retval = __this->Delay();
}

// public generated void set_Delay(double value) :79
void Animator__set_Delay_fn(Animator* __this, double* value)
{
    __this->Delay(*value);
}

// internal virtual double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :95
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay(), void();
}

// public Fuse.Animations.MixOp get_MixOp() :91
void Animator__get_MixOp_fn(Animator* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public void set_MixOp(Fuse.Animations.MixOp value) :92
void Animator__set_MixOp_fn(Animator* __this, int* value)
{
    __this->MixOp(*value);
}

// internal Animator() [instance] :100
void Animator::ctor_1()
{
    Mixer = ::g::Fuse::Animations::Mixer::Default();
    ctor_();
}

// public generated double get_Delay() [instance] :79
double Animator::Delay()
{
    return _Delay;
}

// public generated void set_Delay(double value) [instance] :79
void Animator::Delay(double value)
{
    _Delay = value;
}

// public Fuse.Animations.MixOp get_MixOp() [instance] :91
int Animator::MixOp()
{
    return _mixOp;
}

// public void set_MixOp(Fuse.Animations.MixOp value) [instance] :92
void Animator::MixOp(int value)
{
    _mixOp = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class AnimatorState :124
// {
static void AnimatorState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Visual), 0);
}

AnimatorState_type* AnimatorState_typeof()
{
    static uSStrong<AnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AnimatorState);
    options.TypeSize = sizeof(AnimatorState_type);
    type = (AnimatorState_type*)uClassType::New("Fuse.Animations.AnimatorState", options);
    type->fp_build_ = AnimatorState_build;
    type->fp_Disable = AnimatorState__Disable_fn;
    return type;
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :130
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_(p, useVisual);
}

// public virtual void Disable() :144
void AnimatorState__Disable_fn(AnimatorState* __this)
{
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :130
void AnimatorState::ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    Variant = uPtr(p)->Variant;
    Visual = ((useVisual != NULL) ? useVisual : (::g::Fuse::Visual*)p->Attached);
    TotalDuration = p->TotalDuration;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal enum AnimatorVariant :8
uEnumType* AnimatorVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimatorVariant", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Attractor<T> :176
// {
static void Attractor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::STRINGS[2] = uString::Const("set_Motion");
    ::TYPES[0] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Attractor_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Attractor_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Attractor_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Attractor_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Attractor_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isUpdate), 0,
        ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _motion), 0,
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _sim), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Attractor, _timeMultiplier), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _Target), 0);
}

Attractor_type* Attractor_typeof()
{
    static uSStrong<Attractor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Attractor);
    options.TypeSize = sizeof(Attractor_type);
    type = (Attractor_type*)uClassType::New("Fuse.Animations.Attractor`1", options);
    type->fp_build_ = Attractor_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Attractor__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Attractor__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// private void CheckNeedUpdate() :302
void Attractor__CheckNeedUpdate_fn(Attractor* __this)
{
    __this->CheckNeedUpdate();
}

// public bool get_IsEnabled() :260
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :261
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() :196
void Attractor__get_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) :197
void Attractor__set_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion* value)
{
    __this->Motion(value);
}

// protected override sealed void OnRooted() :315
void Attractor__OnRooted_fn(Attractor* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_sim = ((uObject*)uPtr(__this->Motion())->Create());
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[1]), (uPtr(__this->Target())->Get_ex(&ret3), ret3));
    uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :323
void Attractor__OnUnrooted_fn(Attractor* __this)
{
    __this->_sim = NULL;
    __this->CheckNeedUpdate();
    uPtr(__this->Target())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property<T> get_Target() :183
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :183
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :341
void Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn(Attractor* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT val(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_sim == NULL)
        return;

    val = (uPtr(__this->Target())->Get_ex(&ret4), ret4);

    if (!__this->IsEnabled() || ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(__this->_sim), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/])))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[1]), val);
    else
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_sim), __types[2]), val);

    __this->CheckNeedUpdate();
}

// private void Update() :331
void Attractor__Update_fn(Attractor* __this)
{
    __this->Update();
}

// private void CheckNeedUpdate() [instance] :302
void Attractor::CheckNeedUpdate()
{
    bool need = (_sim != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_sim), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _isUpdate)
        return;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);

    _isUpdate = need;
}

// public bool get_IsEnabled() [instance] :260
bool Attractor::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :261
void Attractor::IsEnabled(bool value)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_isEnabled == value)
        return;

    _isEnabled = true;

    if (!_isEnabled && (_sim != NULL))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_sim), __types[1]), (uPtr(Target())->Get_ex(&ret6), ret6));

    CheckNeedUpdate();
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() [instance] :196
::g::Fuse::Motion::DestinationMotion* Attractor::Motion()
{
    return _motion;
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) [instance] :197
void Attractor::Motion(::g::Fuse::Motion::DestinationMotion* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Motion shou...*/], this, ::STRINGS[1/*"/usr/local/...*/], 201, ::STRINGS[2/*"set_Motion"*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :183
::g::Uno::UX::Property1* Attractor::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :183
void Attractor::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void Update() [instance] :331
void Attractor::Update()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_sim != NULL)
    {
        ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_sim), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval() * (double)_timeMultiplier);
        uPtr(Target())->Set_ex((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_sim), __types[1]), &ret5), ret5), (uObject*)this);
    }

    CheckNeedUpdate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class AverageMasterProperty<T> :376
// {
static void AverageMasterProperty_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::AverageMasterProperty, blender), 0);
}

::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterProperty_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(AverageMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.AverageMasterProperty`1", options);
    type->fp_build_ = AverageMasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnActive_fn;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :378
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :378
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval)
{
    *__retval = AverageMasterProperty::New1(__type, property, mixerBase);
}

// protected override sealed void OnActive() :382
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    ::g::Fuse::Animations::MasterProperty__OnActive_fn(__this);

    if (__this->blender == NULL)
        __this->blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public override sealed void OnComplete() :389
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT add(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret4;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    nv = (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret3), ret3), uCRef((double)(weight.Rest / weight.Full)), &ret2), ret2);
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)(::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) / weight.Full)), &ret5), ret5);
        else if (uPtr(v)->MixOp() == 0)
            add = (uPtr(__this->blender)->Weight_ex((uPtr(__this->blender)->Sub_ex(uPtr(v)->Value(), (::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret8), ret8), &ret7), ret7), uCRef((double)uPtr(v)->Strength), &ret6), ret6);
        else
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)uPtr(v)->Strength), &ret9), ret9);

        nv = (uPtr(__this->blender)->Add_ex(nv, add, &ret10), ret10);
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :378
void AverageMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :378
AverageMasterProperty* AverageMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty* obj1 = (AverageMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class AverageMasterTransform :416
// {
static void AverageMasterTransform_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Float4x4_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterTransform_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AverageMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.AverageMasterTransform", options);
    type->fp_build_ = AverageMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterTransform__OnComplete_fn;
    return type;
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :418
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :418
void AverageMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval)
{
    *__retval = AverageMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :421
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this)
{
    ::g::Fuse::Animations::MixerHandle* ret2;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    ::g::Fuse::FastMatrix* nv = ::g::Fuse::FastMatrix::Identity();
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength / weight.Full);
        else
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength);
    }

    if (!uPtr(nv)->Matrix().Equals(::TYPES[5/*float4x4*/], uBox(::TYPES[5/*float4x4*/], uPtr(uPtr(__this->FMT)->Matrix)->Matrix())))
    {
        uPtr(__this->FMT)->Matrix = nv;
        uPtr(__this->FMT)->Changed();
    }
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :418
void AverageMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :418
AverageMasterTransform* AverageMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* obj1 = (AverageMasterTransform*)uNew(AverageMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class AverageMixer :366
// {
static void AverageMixer_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Animations::AverageMasterProperty_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::AverageMasterProperty_typeof()->MakeType(type->U(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MixerBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(AverageMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.AverageMixer", options);
    type->fp_build_ = AverageMixer_build;
    type->fp_ctor_ = (void*)AverageMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))AverageMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))AverageMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated AverageMixer() :366
void AverageMixer__ctor_1_fn(AverageMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :368
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = AverageMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.AverageMasterProperty<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::AverageMasterProperty*)::g::Fuse::Animations::AverageMasterProperty::New1(__types[0], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :371
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::AverageMasterTransform::New1(element, mixerBase), void();
}

// public generated AverageMixer New() :366
void AverageMixer__New1_fn(AverageMixer** __retval)
{
    *__retval = AverageMixer::New1();
}

// public generated AverageMixer() [instance] :366
void AverageMixer::ctor_1()
{
    ctor_();
}

// public generated AverageMixer New() [static] :366
AverageMixer* AverageMixer::New1()
{
    AverageMixer* obj1 = (AverageMixer*)uNew(AverageMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Change<T> :486
// {
static void Change_build(uType* type)
{
    ::STRINGS[3] = uString::Const("target");
    ::STRINGS[4] = uString::Const("Unsupported change type: ");
    ::TYPES[7] = ::g::Uno::Type_typeof();
    ::TYPES[8] = ::g::Fuse::Animations::Converter_typeof();
    ::TYPES[9] = ::g::Fuse::Animations::ContinuousTrackChangeState_typeof();
    ::TYPES[10] = ::g::Fuse::Animations::DiscreteTrackChangeState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Animations::ContinuousTrackChangeState_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Animations::DiscreteTrackChangeState_typeof()->MakeType(type->T(0)));
    type->SetFields(18,
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, ContinuousConverter), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Change_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Change);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Change`1", options);
    type->fp_build_ = Change_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Change__CreateState_fn;
    return type;
}

// public Change(Uno.UX.Property<T> target) :514
void Change__ctor_3_fn(Change* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_3(target);
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :548
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.ContinuousTrackChangeState<T>*/),
        __this->__type->Precalced(2/*Fuse.Animations.DiscreteTrackChangeState<T>*/),
    };

    if (__this->IsContinuous())
        return *__retval = (::g::Fuse::Animations::ContinuousTrackChangeState*)::g::Fuse::Animations::ContinuousTrackChangeState::New1(__types[0], __this, p), void();

    return *__retval = (::g::Fuse::Animations::DiscreteTrackChangeState*)::g::Fuse::Animations::DiscreteTrackChangeState::New1(__types[1], __this, p), void();
}

// private bool get_IsContinuous() :557
void Change__get_IsContinuous_fn(Change* __this, bool* __retval)
{
    *__retval = __this->IsContinuous();
}

// public Change New(Uno.UX.Property<T> target) :514
void Change__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Change** __retval)
{
    *__retval = Change::New2(__type, target);
}

// public generated Uno.UX.Property<T> get_Target() :491
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :491
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public T get_Value() :498
void Change__get_Value_fn(Change* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store(__types[0], __this->IsContinuous() ? (uPtr(__this->ContinuousConverter)->Out_ex(uCRef(__this->_vectorValue), &ret3), (void*)ret3) : (void*)uUnboxAny(__types[0], __this->_objectValue)), void();
}

// public void set_Value(T value) :502
void Change__set_Value_fn(Change* __this, void* value)
{
    ::g::Uno::Float4 ret4;

    if (__this->IsContinuous())
        __this->_vectorValue = (uPtr(__this->ContinuousConverter)->In_ex(value, &ret4), ret4);
    else
        __this->_objectValue = uBoxPtr(__this->__type->T(0), value);
}

// public Change(Uno.UX.Property<T> target) [instance] :514
void Change::ctor_3(::g::Uno::UX::Property1* target)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.Converter<T>*/),
    };
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"target"*/]));

    Target(target);

    if (IsContinuous())
    {
        uObject* v;

        if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float2_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat2::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float3_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat3::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float4_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat4::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Double_typeof()))
            v = ::g::Fuse::Animations::ConverterDouble::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size_typeof()))
            v = ::g::Fuse::Animations::ConverterSize::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size2_typeof()))
            v = ::g::Fuse::Animations::ConverterSize2::Singleton();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Unsupported...*/], __type->T(0))));

        ContinuousConverter = uCast< ::g::Fuse::Animations::Converter*>(v, __types[0]);
    }
    else
    {
        Mixer = ::g::Fuse::Animations::Mixer::DefaultDiscrete();
        MarkDiscrete();
    }
}

// private bool get_IsContinuous() [instance] :557
bool Change::IsContinuous()
{
    return (((((::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float_typeof()) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float2_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float3_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float4_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Double_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size2_typeof());
}

// public generated Uno.UX.Property<T> get_Target() [instance] :491
::g::Uno::UX::Property1* Change::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :491
void Change::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Change New(Uno.UX.Property<T> target) [static] :514
Change* Change::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Change* obj2 = (Change*)uNew(__type);
    obj2->ctor_3(target);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ContinuousTrackChangeState<T> :660
// {
static void ContinuousTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ContinuousTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ContinuousTrackChangeState`1", options);
    type->fp_build_ = ContinuousTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ContinuousTrackChangeState__SeekValue_fn;
    return type;
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :665
void ContinuousTrackChangeState__ctor_2_fn(ContinuousTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :672
void ContinuousTrackChangeState__Disable_fn(ContinuousTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :665
void ContinuousTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, ContinuousTrackChangeState** __retval)
{
    *__retval = ContinuousTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekValue(float4 value, float strength) :681
void ContinuousTrackChangeState__SeekValue_fn(ContinuousTrackChangeState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 1, ::STRINGS[1/*"/usr/local/...*/], 685);
        return;
    }

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), (uPtr((::g::Fuse::Animations::Converter*)uPtr(__this->Animator1)->ContinuousConverter)->Out_ex(uCRef(value_), &ret2), ret2), uCRef(strength_));
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :665
void ContinuousTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :665
ContinuousTrackChangeState* ContinuousTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState* obj1 = (ContinuousTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract interface ContinuousTrackProvider :3119
// {
uInterfaceType* ContinuousTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ContinuousTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class Converter<T> :692
// {
static void Converter_build(uType* type)
{
}

Converter_type* Converter_typeof()
{
    static uSStrong<Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Converter);
    options.TypeSize = sizeof(Converter_type);
    type = (Converter_type*)uClassType::New("Fuse.Animations.Converter`1", options);
    type->fp_build_ = Converter_build;
    return type;
}

// protected generated Converter() :692
void Converter__ctor__fn(Converter* __this)
{
    __this->ctor_();
}

// protected generated Converter() [instance] :692
void Converter::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterDouble :741
// {
// static ConverterDouble() :741
static void ConverterDouble__cctor__fn(uType* __type)
{
    ConverterDouble::Singleton_ = ConverterDouble::New1();
}

static void ConverterDouble_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->SetFields(0,
        ConverterDouble_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterDouble::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterDouble_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterDouble);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterDouble", options);
    type->fp_build_ = ConverterDouble_build;
    type->fp_ctor_ = (void*)ConverterDouble__New1_fn;
    type->fp_cctor_ = ConverterDouble__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterDouble__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterDouble__Out_fn;
    return type;
}

// public generated ConverterDouble() :741
void ConverterDouble__ctor_1_fn(ConverterDouble* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(double value) :745
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval)
{
    double value_ = *value;
    return *__retval = ::g::Uno::Float4__New2((float)value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterDouble New() :741
void ConverterDouble__New1_fn(ConverterDouble** __retval)
{
    *__retval = ConverterDouble::New1();
}

// public override sealed double Out(float4 value) :744
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = (double)value_.X, void();
}

uSStrong<ConverterDouble*> ConverterDouble::Singleton_;

// public generated ConverterDouble() [instance] :741
void ConverterDouble::ctor_1()
{
    ctor_();
}

// public generated ConverterDouble New() [static] :741
ConverterDouble* ConverterDouble::New1()
{
    ConverterDouble* obj1 = (ConverterDouble*)uNew(ConverterDouble_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat :698
// {
// static ConverterFloat() :698
static void ConverterFloat__cctor__fn(uType* __type)
{
    ConverterFloat::Singleton_ = ConverterFloat::New1();
}

static void ConverterFloat_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->SetFields(0,
        ConverterFloat_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat", options);
    type->fp_build_ = ConverterFloat_build;
    type->fp_ctor_ = (void*)ConverterFloat__New1_fn;
    type->fp_cctor_ = ConverterFloat__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat__Out_fn;
    return type;
}

// public generated ConverterFloat() :698
void ConverterFloat__ctor_1_fn(ConverterFloat* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float value) :702
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval)
{
    float value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterFloat New() :698
void ConverterFloat__New1_fn(ConverterFloat** __retval)
{
    *__retval = ConverterFloat::New1();
}

// public override sealed float Out(float4 value) :701
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_.X, void();
}

uSStrong<ConverterFloat*> ConverterFloat::Singleton_;

// public generated ConverterFloat() [instance] :698
void ConverterFloat::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat New() [static] :698
ConverterFloat* ConverterFloat::New1()
{
    ConverterFloat* obj1 = (ConverterFloat*)uNew(ConverterFloat_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat2 :720
// {
// static ConverterFloat2() :720
static void ConverterFloat2__cctor__fn(uType* __type)
{
    ConverterFloat2::Singleton_ = ConverterFloat2::New1();
}

static void ConverterFloat2_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float2_typeof()));
    type->SetFields(0,
        ConverterFloat2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat2", options);
    type->fp_build_ = ConverterFloat2_build;
    type->fp_ctor_ = (void*)ConverterFloat2__New1_fn;
    type->fp_cctor_ = ConverterFloat2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat2__Out_fn;
    return type;
}

// public generated ConverterFloat2() :720
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float2 value) :724
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New6(value_, 0.0f, 0.0f), void();
}

// public generated ConverterFloat2 New() :720
void ConverterFloat2__New1_fn(ConverterFloat2** __retval)
{
    *__retval = ConverterFloat2::New1();
}

// public override sealed float2 Out(float4 value) :723
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float2__New2(value_.X, value_.Y), void();
}

uSStrong<ConverterFloat2*> ConverterFloat2::Singleton_;

// public generated ConverterFloat2() [instance] :720
void ConverterFloat2::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat2 New() [static] :720
ConverterFloat2* ConverterFloat2::New1()
{
    ConverterFloat2* obj1 = (ConverterFloat2*)uNew(ConverterFloat2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat3 :727
// {
// static ConverterFloat3() :727
static void ConverterFloat3__cctor__fn(uType* __type)
{
    ConverterFloat3::Singleton_ = ConverterFloat3::New1();
}

static void ConverterFloat3_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float3_typeof()));
    type->SetFields(0,
        ConverterFloat3_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat3::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat3);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat3", options);
    type->fp_build_ = ConverterFloat3_build;
    type->fp_ctor_ = (void*)ConverterFloat3__New1_fn;
    type->fp_cctor_ = ConverterFloat3__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat3__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat3__Out_fn;
    return type;
}

// public generated ConverterFloat3() :727
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float3 value) :731
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float3 value_ = *value;
    return *__retval = ::g::Uno::Float4__New8(value_, 0.0f), void();
}

// public generated ConverterFloat3 New() :727
void ConverterFloat3__New1_fn(ConverterFloat3** __retval)
{
    *__retval = ConverterFloat3::New1();
}

// public override sealed float3 Out(float4 value) :730
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z), void();
}

uSStrong<ConverterFloat3*> ConverterFloat3::Singleton_;

// public generated ConverterFloat3() [instance] :727
void ConverterFloat3::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat3 New() [static] :727
ConverterFloat3* ConverterFloat3::New1()
{
    ConverterFloat3* obj1 = (ConverterFloat3*)uNew(ConverterFloat3_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat4 :734
// {
// static ConverterFloat4() :734
static void ConverterFloat4__cctor__fn(uType* __type)
{
    ConverterFloat4::Singleton_ = ConverterFloat4::New1();
}

static void ConverterFloat4_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->SetFields(0,
        ConverterFloat4_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat4::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat4);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat4", options);
    type->fp_build_ = ConverterFloat4_build;
    type->fp_ctor_ = (void*)ConverterFloat4__New1_fn;
    type->fp_cctor_ = ConverterFloat4__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat4__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat4__Out_fn;
    return type;
}

// public generated ConverterFloat4() :734
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float4 value) :738
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

// public generated ConverterFloat4 New() :734
void ConverterFloat4__New1_fn(ConverterFloat4** __retval)
{
    *__retval = ConverterFloat4::New1();
}

// public override sealed float4 Out(float4 value) :737
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

uSStrong<ConverterFloat4*> ConverterFloat4::Singleton_;

// public generated ConverterFloat4() [instance] :734
void ConverterFloat4::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat4 New() [static] :734
ConverterFloat4* ConverterFloat4::New1()
{
    ConverterFloat4* obj1 = (ConverterFloat4*)uNew(ConverterFloat4_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterSize :705
// {
// static ConverterSize() :705
static void ConverterSize__cctor__fn(uType* __type)
{
    ConverterSize::Singleton_ = ConverterSize::New1();
}

static void ConverterSize_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->SetFields(0,
        ConverterSize_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterSize::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize", options);
    type->fp_build_ = ConverterSize_build;
    type->fp_ctor_ = (void*)ConverterSize__New1_fn;
    type->fp_cctor_ = ConverterSize__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize__Out_fn;
    return type;
}

// public generated ConverterSize() :705
void ConverterSize__ctor_1_fn(ConverterSize* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size value) :709
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::UX::Size value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_.Value, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterSize New() :705
void ConverterSize__New1_fn(ConverterSize** __retval)
{
    *__retval = ConverterSize::New1();
}

// public override sealed Uno.UX.Size Out(float4 value) :708
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size__op_Implicit(value_.X), void();
}

uSStrong<ConverterSize*> ConverterSize::Singleton_;

// public generated ConverterSize() [instance] :705
void ConverterSize::ctor_1()
{
    ctor_();
}

// public generated ConverterSize New() [static] :705
ConverterSize* ConverterSize::New1()
{
    ConverterSize* obj1 = (ConverterSize*)uNew(ConverterSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterSize2 :712
// {
// static ConverterSize2() :712
static void ConverterSize2__cctor__fn(uType* __type)
{
    ConverterSize2::Singleton_ = ConverterSize2::New1();
}

static void ConverterSize2_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size2_typeof()));
    type->SetFields(0,
        ConverterSize2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterSize2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize2", options);
    type->fp_build_ = ConverterSize2_build;
    type->fp_ctor_ = (void*)ConverterSize2__New1_fn;
    type->fp_cctor_ = ConverterSize2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize2__Out_fn;
    return type;
}

// public generated ConverterSize2() :712
void ConverterSize2__ctor_1_fn(ConverterSize2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size2 value) :716
void ConverterSize2__In_fn(ConverterSize2* __this, ::g::Uno::UX::Size2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::UX::Size2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(::g::Uno::UX::Size__op_Explicit(value_.X), ::g::Uno::UX::Size__op_Explicit(value_.Y), 0.0f, 0.0f), void();
}

// public generated ConverterSize2 New() :712
void ConverterSize2__New1_fn(ConverterSize2** __retval)
{
    *__retval = ConverterSize2::New1();
}

// public override sealed Uno.UX.Size2 Out(float4 value) :715
void ConverterSize2__Out_fn(ConverterSize2* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(value_.X, value_.Y)), void();
}

uSStrong<ConverterSize2*> ConverterSize2::Singleton_;

// public generated ConverterSize2() [instance] :712
void ConverterSize2::ctor_1()
{
    ctor_();
}

// public generated ConverterSize2 New() [static] :712
ConverterSize2* ConverterSize2::New1()
{
    ConverterSize2* obj1 = (ConverterSize2*)uNew(ConverterSize2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class CreateStateParams :103
// {
static void CreateStateParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Attached), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Variant), 0);
}

uType* CreateStateParams_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CreateStateParams);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.CreateStateParams", options);
    type->fp_build_ = CreateStateParams_build;
    type->fp_ctor_ = (void*)CreateStateParams__New1_fn;
    return type;
}

// public generated CreateStateParams() :103
void CreateStateParams__ctor__fn(CreateStateParams* __this)
{
    __this->ctor_();
}

// public generated CreateStateParams New() :103
void CreateStateParams__New1_fn(CreateStateParams** __retval)
{
    *__retval = CreateStateParams::New1();
}

// public generated CreateStateParams() [instance] :103
void CreateStateParams::ctor_()
{
}

// public generated CreateStateParams New() [static] :103
CreateStateParams* CreateStateParams::New1()
{
    CreateStateParams* obj1 = (CreateStateParams*)uNew(CreateStateParams_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Cycle<T> :796
// {
static void Cycle_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Animations::CycleState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::CycleState_typeof()->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _backFrequency), 0,
        ::g::Fuse::Animations::EasingFunction_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easingFunction), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _frequency), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasBackFrequency), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasProgressOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _progressOffset), 0,
        ::g::Fuse::Animations::CycleWaveform_typeof(), offsetof(::g::Fuse::Animations::Cycle, _waveform), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _High), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _Low), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Cycle, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Cycle_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimator_typeof();
    options.FieldCount = 17;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Cycle);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Cycle`1", options);
    type->fp_build_ = Cycle_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Cycle__CreateState_fn;
    return type;
}

// public generated T get_Base() :808
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval)
{
    return __retval.Store(__this->_Base()), void();
}

// public generated void set_Base(T value) :808
void Cycle__set_Base_fn(Cycle* __this, void* value)
{
    __this->_Base() = value;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :849
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.CycleState<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::CycleState*)::g::Fuse::Animations::CycleState::New1(__types[0], __this, p), void();
}

// public double get_Frequency() :824
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :825
void Cycle__set_Frequency_fn(Cycle* __this, double* value)
{
    __this->Frequency(*value);
}

// public double get_FrequencyBack() :833
void Cycle__get_FrequencyBack_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->FrequencyBack();
}

// public void set_FrequencyBack(double value) :834
void Cycle__set_FrequencyBack_fn(Cycle* __this, double* value)
{
    __this->FrequencyBack(*value);
}

// public generated float get_High() :803
void Cycle__get_High_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->High();
}

// public generated void set_High(float value) :803
void Cycle__set_High_fn(Cycle* __this, float* value)
{
    __this->High(*value);
}

// private bool get_IsOneCrossing() :861
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsOneCrossing();
}

// private bool get_IsZeroCrossing() :856
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsZeroCrossing();
}

// public generated float get_Low() :801
void Cycle__get_Low_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->Low();
}

// public generated void set_Low(float value) :801
void Cycle__set_Low_fn(Cycle* __this, float* value)
{
    __this->Low(*value);
}

// public float get_ProgressOffset() :898
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->ProgressOffset();
}

// public void set_ProgressOffset(float value) :899
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value)
{
    __this->ProgressOffset(*value);
}

// private double get_RestProgress() :869
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->RestProgress();
}

// public generated Uno.UX.Property<T> get_Target() :799
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :799
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public Fuse.Animations.CycleWaveform get_Waveform() :845
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Waveform();
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) :846
void Cycle__set_Waveform_fn(Cycle* __this, int* value)
{
    __this->Waveform(*value);
}

// internal double WaveformFunc(double i, double offset) :923
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval)
{
    *__retval = __this->WaveformFunc(*i, *offset);
}

// public double get_Frequency() [instance] :824
double Cycle::Frequency()
{
    return _frequency;
}

// public void set_Frequency(double value) [instance] :825
void Cycle::Frequency(double value)
{
    _frequency = value;
}

// public double get_FrequencyBack() [instance] :833
double Cycle::FrequencyBack()
{
    return _hasBackFrequency ? _backFrequency : Frequency();
}

// public void set_FrequencyBack(double value) [instance] :834
void Cycle::FrequencyBack(double value)
{
    _backFrequency = value;
    _hasBackFrequency = true;
}

// public generated float get_High() [instance] :803
float Cycle::High()
{
    return _High;
}

// public generated void set_High(float value) [instance] :803
void Cycle::High(float value)
{
    _High = value;
}

// private bool get_IsOneCrossing() [instance] :861
bool Cycle::IsOneCrossing()
{
    return (Low() <= 1.0f) && (High() >= 1.0f);
}

// private bool get_IsZeroCrossing() [instance] :856
bool Cycle::IsZeroCrossing()
{
    return (Low() <= 0.0f) && (High() >= 0.0f);
}

// public generated float get_Low() [instance] :801
float Cycle::Low()
{
    return _Low;
}

// public generated void set_Low(float value) [instance] :801
void Cycle::Low(float value)
{
    _Low = value;
}

// public float get_ProgressOffset() [instance] :898
float Cycle::ProgressOffset()
{
    return (_hasProgressOffset || ::g::Uno::Delegate::op_Inequality(_easingFunction, NULL)) ? _progressOffset : (float)RestProgress();
}

// public void set_ProgressOffset(float value) [instance] :899
void Cycle::ProgressOffset(float value)
{
    _hasProgressOffset = true;
    _progressOffset = value;
}

// private double get_RestProgress() [instance] :869
double Cycle::RestProgress()
{
    double v = 0.0;

    if (IsZeroCrossing())
        v = (double)((0.0f - Low()) / (High() - Low()));
    else if (IsOneCrossing())
        v = (double)((1.0f - Low()) / (High() - Low()));

    switch (Waveform())
    {
        case 0:
            return ::g::Uno::Math::Asin(2.0 * (v - 0.5)) / 6.2831853071795862;
        case 1:
            return v * 0.5;
        case 2:
            return v;
    }

    return v;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :799
::g::Uno::UX::Property1* Cycle::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :799
void Cycle::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Fuse.Animations.CycleWaveform get_Waveform() [instance] :845
int Cycle::Waveform()
{
    return _waveform;
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) [instance] :846
void Cycle::Waveform(int value)
{
    _waveform = value;
}

// internal double WaveformFunc(double i, double offset) [instance] :923
double Cycle::WaveformFunc(double i, double offset)
{
    switch (Waveform())
    {
        case 0:
            return (::g::Uno::Math::Sin(((i + offset) * 3.1415926535897931) * 2.0) / 2.0) + 0.5;
        case 1:
        {
            double a = ::g::Uno::Math::Mod(i + offset, 1.0);

            if (a < 0.5)
                return a * 2.0;

            return 1.0 + (2.0 * (0.5 - a));
        }
        case 2:
            return ::g::Uno::Math::Mod(i + offset, 1.0);
    }

    return i;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class CycleState<T> :944
// {
static void CycleState_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Invalid seek");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[4] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)));
    type->SetFields(5,
        ::g::Fuse::Animations::Cycle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, Animator1), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, blender), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, mixHandle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CycleState, progress), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimatorState_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(CycleState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.CycleState`1", options);
    type->fp_build_ = CycleState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))CycleState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))CycleState__Seek_fn;
    return type;
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :950
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :958
void CycleState__Disable_fn(CycleState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Animations.IMixerHandle<T>*/),
    };

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
    __this->progress = 0.0;
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :950
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval)
{
    *__retval = CycleState::New1(__type, animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :976
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float interval_ = *interval;
    bool on_ = *on;
    float ret2;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"Invalid seek"*/], 1, ::STRINGS[1/*"/usr/local/...*/], 980);
        return *__retval = true, void();
    }

    bool done = false;
    double oldProgress = __this->progress;
    __this->progress = (__this->progress + ((double)interval_ * ((interval_ < 0.0f) ? uPtr(__this->Animator1)->FrequencyBack() : uPtr(__this->Animator1)->Frequency())));

    if (on_)
        __this->progress = ::g::Uno::Math::Mod(__this->progress, 1.0);
    else if ((((oldProgress <= 0.0) || (__this->progress <= 0.0)) || (__this->progress >= 1.0)) || (oldProgress >= 1.0))
    {
        __this->progress = 0.0;
        done = true;
    }

    double s = uPtr(__this->Animator1)->WaveformFunc(__this->progress, (double)uPtr(__this->Animator1)->ProgressOffset());

    if (::g::Uno::Delegate::op_Inequality(uPtr(__this->Animator1)->_easingFunction, NULL))
        s = (double)(uPtr(uPtr(__this->Animator1)->_easingFunction)->Invoke(&ret2, 1, uCRef((float)s)), ret2);

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::Cycle__get_Base_fn(uPtr(__this->Animator1), &ret4), ret4), uCRef((double)::g::Uno::Math::Lerp1(uPtr(__this->Animator1)->Low(), uPtr(__this->Animator1)->High(), (float)s)), &ret3), ret3), uCRef(strength_));
    return *__retval = done, void();
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [instance] :950
void CycleState::ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->Precalced(1/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
    blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]));
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [static] :950
CycleState* CycleState::New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    CycleState* obj1 = (CycleState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public enum CycleWaveform :758
uEnumType* CycleWaveform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.CycleWaveform", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Sine", 0LL,
        "Triangle", 1LL,
        "Sawtooth", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteMasterProperty<T> :1113
// {
static void DiscreteMasterProperty_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10);
}

::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterProperty_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DiscreteMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.DiscreteMasterProperty`1", options);
    type->fp_build_ = DiscreteMasterProperty_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1115
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1115
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval)
{
    *__retval = DiscreteMasterProperty::New1(__type, property, mixerBase);
}

// public override sealed void OnComplete() :1118
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret3;
    nv = (::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret2), ret2);
    float str = 0.5f;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret3), ret3);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            nv = uPtr(v)->Value();
            str = v->Strength;
        }
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1115
void DiscreteMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :1115
DiscreteMasterProperty* DiscreteMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty* obj1 = (DiscreteMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteMasterTransform :1136
// {
static void DiscreteMasterTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterTransform_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.DiscreteMasterTransform", options);
    type->fp_build_ = DiscreteMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterTransform__OnComplete_fn;
    return type;
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1138
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1138
void DiscreteMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval)
{
    *__retval = DiscreteMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :1141
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this)
{
    ::g::Fuse::Animations::MixerHandle* ret2;
    uPtr(uPtr(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::g::Fuse::Transform* value = NULL;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            value = uPtr(v)->Value().Strong< ::g::Fuse::Transform*>();
            str = v->Strength;
        }
    }

    if (value != NULL)
        uPtr(value)->AppendTo(uPtr(__this->FMT)->Matrix, 1.0f);

    uPtr(__this->FMT)->Changed();
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :1138
void DiscreteMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :1138
DiscreteMasterTransform* DiscreteMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* obj1 = (DiscreteMasterTransform*)uNew(DiscreteMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteMixer :1103
// {
static void DiscreteMixer_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Animations::DiscreteMasterProperty_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::DiscreteMasterProperty_typeof()->MakeType(type->U(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MixerBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DiscreteMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.DiscreteMixer", options);
    type->fp_build_ = DiscreteMixer_build;
    type->fp_ctor_ = (void*)DiscreteMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))DiscreteMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))DiscreteMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated DiscreteMixer() :1103
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1105
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = DiscreteMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.DiscreteMasterProperty<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::DiscreteMasterProperty*)::g::Fuse::Animations::DiscreteMasterProperty::New1(__types[0], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :1108
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::DiscreteMasterTransform::New1(element, mixerBase), void();
}

// public generated DiscreteMixer New() :1103
void DiscreteMixer__New1_fn(DiscreteMixer** __retval)
{
    *__retval = DiscreteMixer::New1();
}

// public generated DiscreteMixer() [instance] :1103
void DiscreteMixer::ctor_1()
{
    ctor_();
}

// public generated DiscreteMixer New() [static] :1103
DiscreteMixer* DiscreteMixer::New1()
{
    DiscreteMixer* obj1 = (DiscreteMixer*)uNew(DiscreteMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteSingleTrack :1171
// {
// static DiscreteSingleTrack() :1171
static void DiscreteSingleTrack__cctor__fn(uType* __type)
{
    DiscreteSingleTrack::Singleton_ = DiscreteSingleTrack::New1();
}

static void DiscreteSingleTrack_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface0),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface1));
    type->SetFields(0,
        DiscreteSingleTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::DiscreteSingleTrack::Singleton_, uFieldFlagsStatic);
}

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof()
{
    static uSStrong<DiscreteSingleTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DiscreteSingleTrack);
    options.TypeSize = sizeof(DiscreteSingleTrack_type);
    type = (DiscreteSingleTrack_type*)uClassType::New("Fuse.Animations.DiscreteSingleTrack", options);
    type->fp_build_ = DiscreteSingleTrack_build;
    type->fp_ctor_ = (void*)DiscreteSingleTrack__New1_fn;
    type->fp_cctor_ = DiscreteSingleTrack__cctor__fn;
    type->interface1.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface1.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    return type;
}

// public generated DiscreteSingleTrack() :1171
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1186
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    double progress_ = *progress;
    int dir_ = *dir;
    *strength = progress_;
    *value = uPtr(uPtr(tas)->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1197
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    *strength = (double)::g::Uno::Math::Clamp1(progress, 0.0f, 1.0f);
    *value = uPtr(tas->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1181
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1176
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    int variant_ = *variant;
    return *__retval = (variant_ == 1) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated DiscreteSingleTrack New() :1171
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval)
{
    *__retval = DiscreteSingleTrack::New1();
}

uSStrong<DiscreteSingleTrack*> DiscreteSingleTrack::Singleton_;

// public generated DiscreteSingleTrack() [instance] :1171
void DiscreteSingleTrack::ctor_()
{
}

// public generated DiscreteSingleTrack New() [static] :1171
DiscreteSingleTrack* DiscreteSingleTrack::New1()
{
    DiscreteSingleTrack* obj1 = (DiscreteSingleTrack*)uNew(DiscreteSingleTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteTrackChangeState<T> :627
// {
static void DiscreteTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(DiscreteTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.DiscreteTrackChangeState`1", options);
    type->fp_build_ = DiscreteTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Disable_fn;
    type->fp_SeekObjectValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*))DiscreteTrackChangeState__SeekObjectValue_fn;
    return type;
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :632
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :639
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :632
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval)
{
    *__retval = DiscreteTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekObjectValue(object value, float strength) :648
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 1, ::STRINGS[1/*"/usr/local/...*/], 652);
        return;
    }

    if ((value != NULL) && uIs(value, __types[0]))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), uUnboxAny(__types[0], value), uCRef(strength_));
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :632
void DiscreteTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :632
DiscreteTrackChangeState* DiscreteTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState* obj1 = (DiscreteTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract interface DiscreteTrackProvider :3127
// {
uInterfaceType* DiscreteTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.DiscreteTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.38.6/$.uno
// ---------------------------------------------------

// public enum Easing :1221
uEnumType* Easing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.Easing", ::g::Uno::Int_typeof(), 31);
    type->SetLiterals(
        "Linear", 0LL,
        "QuadraticIn", 1LL,
        "QuadraticOut", 2LL,
        "QuadraticInOut", 3LL,
        "CubicIn", 4LL,
        "CubicOut", 5LL,
        "CubicInOut", 6LL,
        "QuarticIn", 7LL,
        "QuarticOut", 8LL,
        "QuarticInOut", 9LL,
        "QuinticIn", 10LL,
        "QuinticOut", 11LL,
        "QuinticInOut", 12LL,
        "SinusoidalIn", 13LL,
        "SinusoidalOut", 14LL,
        "SinusoidalInOut", 15LL,
        "ExponentialIn", 16LL,
        "ExponentialOut", 17LL,
        "ExponentialInOut", 18LL,
        "CircularIn", 19LL,
        "CircularOut", 20LL,
        "CircularInOut", 21LL,
        "ElasticIn", 22LL,
        "ElasticOut", 23LL,
        "ElasticInOut", 24LL,
        "BackIn", 25LL,
        "BackOut", 26LL,
        "BackInOut", 27LL,
        "BounceIn", 28LL,
        "BounceOut", 29LL,
        "BounceInOut", 30LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.38.6/$.uno
// ---------------------------------------------------

// public delegate float EasingFunction(float k) :1213
uDelegateType* EasingFunction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.EasingFunction", 1, 0);
    type->SetSignature(::g::Uno::Float_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.38.6/$.uno
// ---------------------------------------------------

// public static class EasingFunctions :1266
// {
static void EasingFunctions_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::EasingFunction_typeof();
}

uClassType* EasingFunctions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.EasingFunctions", options);
    type->fp_build_ = EasingFunctions_build;
    return type;
}

// public static float BackIn(float k) :1503
void EasingFunctions__BackIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackIn(*k);
}

// public static float BackInOut(float k) :1516
void EasingFunctions__BackInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackInOut(*k);
}

// public static float BackOut(float k) :1509
void EasingFunctions__BackOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackOut(*k);
}

// public static float BounceIn(float k) :1528
void EasingFunctions__BounceIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceIn(*k);
}

// public static float BounceInOut(float k) :1556
void EasingFunctions__BounceInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceInOut(*k);
}

// public static float BounceOut(float k) :1533
void EasingFunctions__BounceOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceOut(*k);
}

// public static float CircularIn(float k) :1447
void EasingFunctions__CircularIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularIn(*k);
}

// public static float CircularInOut(float k) :1458
void EasingFunctions__CircularInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularInOut(*k);
}

// public static float CircularOut(float k) :1452
void EasingFunctions__CircularOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularOut(*k);
}

// public static float CubicIn(float k) :1345
void EasingFunctions__CubicIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicIn(*k);
}

// public static float CubicInOut(float k) :1356
void EasingFunctions__CubicInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicInOut(*k);
}

// public static float CubicOut(float k) :1350
void EasingFunctions__CubicOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicOut(*k);
}

// public static float ElasticIn(float k) :1467
void EasingFunctions__ElasticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticIn(*k);
}

// public static float ElasticInOut(float k) :1489
void EasingFunctions__ElasticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticInOut(*k);
}

// public static float ElasticOut(float k) :1478
void EasingFunctions__ElasticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticOut(*k);
}

// public static float ExponentialIn(float k) :1422
void EasingFunctions__ExponentialIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialIn(*k);
}

// public static float ExponentialInOut(float k) :1432
void EasingFunctions__ExponentialInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialInOut(*k);
}

// public static float ExponentialOut(float k) :1427
void EasingFunctions__ExponentialOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialOut(*k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) :1268
void EasingFunctions__FromEasing_fn(int* e, uDelegate** __retval)
{
    *__retval = EasingFunctions::FromEasing(*e);
}

// public static float Linear(float k) :1318
void EasingFunctions__Linear_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::Linear(*k);
}

// public static float QuadraticIn(float k) :1323
void EasingFunctions__QuadraticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticIn(*k);
}

// public static float QuadraticInOut(float k) :1333
void EasingFunctions__QuadraticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticInOut(*k);
}

// public static float QuadraticOut(float k) :1328
void EasingFunctions__QuadraticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticOut(*k);
}

// public static float QuarticIn(float k) :1366
void EasingFunctions__QuarticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticIn(*k);
}

// public static float QuarticInOut(float k) :1377
void EasingFunctions__QuarticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticInOut(*k);
}

// public static float QuarticOut(float k) :1371
void EasingFunctions__QuarticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticOut(*k);
}

// public static float QuinticIn(float k) :1386
void EasingFunctions__QuinticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticIn(*k);
}

// public static float QuinticInOut(float k) :1397
void EasingFunctions__QuinticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticInOut(*k);
}

// public static float QuinticOut(float k) :1391
void EasingFunctions__QuinticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticOut(*k);
}

// public static float SinusoidalIn(float k) :1407
void EasingFunctions__SinusoidalIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalIn(*k);
}

// public static float SinusoidalInOut(float k) :1417
void EasingFunctions__SinusoidalInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalInOut(*k);
}

// public static float SinusoidalOut(float k) :1412
void EasingFunctions__SinusoidalOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalOut(*k);
}

// public static float BackIn(float k) [static] :1503
float EasingFunctions::BackIn(float k)
{
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

// public static float BackInOut(float k) [static] :1516
float EasingFunctions::BackInOut(float k)
{
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

// public static float BackOut(float k) [static] :1509
float EasingFunctions::BackOut(float k)
{
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

// public static float BounceIn(float k) [static] :1528
float EasingFunctions::BounceIn(float k)
{
    return 1.0f - EasingFunctions::BounceOut(1.0f - k);
}

// public static float BounceInOut(float k) [static] :1556
float EasingFunctions::BounceInOut(float k)
{
    if (k < 0.5f)
        return EasingFunctions::BounceIn(k * 2.0f) * 0.5f;

    return (EasingFunctions::BounceOut((k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

// public static float BounceOut(float k) [static] :1533
float EasingFunctions::BounceOut(float k)
{
    if (k < 0.363636374f)
        return (7.5625f * k) * k;
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

// public static float CircularIn(float k) [static] :1447
float EasingFunctions::CircularIn(float k)
{
    return 1.0f - ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CircularInOut(float k) [static] :1458
float EasingFunctions::CircularInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return -0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) - 1.0f);

    k = k - 2.0f;
    return 0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) + 1.0f);
}

// public static float CircularOut(float k) [static] :1452
float EasingFunctions::CircularOut(float k)
{
    k = k - 1.0f;
    return ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CubicIn(float k) [static] :1345
float EasingFunctions::CubicIn(float k)
{
    return (k * k) * k;
}

// public static float CubicInOut(float k) [static] :1356
float EasingFunctions::CubicInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return ((0.5f * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

// public static float CubicOut(float k) [static] :1350
float EasingFunctions::CubicOut(float k)
{
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

// public static float ElasticIn(float k) [static] :1467
float EasingFunctions::ElasticIn(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k - 1.0f;
    return -::g::Uno::Math::Pow1(2.0f, 10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);
}

// public static float ElasticInOut(float k) [static] :1489
float EasingFunctions::ElasticInOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
        return (-0.5f * ::g::Uno::Math::Pow1(2.0f, 10.0f * k)) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);

    return ((::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

// public static float ElasticOut(float k) [static] :1478
float EasingFunctions::ElasticOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    return (::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

// public static float ExponentialIn(float k) [static] :1422
float EasingFunctions::ExponentialIn(float k)
{
    return (k == 0.0f) ? 0.0f : ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);
}

// public static float ExponentialInOut(float k) [static] :1432
float EasingFunctions::ExponentialInOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);

    return 0.5f * (-::g::Uno::Math::Pow1(2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

// public static float ExponentialOut(float k) [static] :1427
float EasingFunctions::ExponentialOut(float k)
{
    return (k == 1.0f) ? 1.0f : 1.0f - ::g::Uno::Math::Pow1(2.0f, -10.0f * k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) [static] :1268
uDelegate* EasingFunctions::FromEasing(int e)
{
    switch (e)
    {
        case 0:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
        case 1:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticIn_fn);
        case 2:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticOut_fn);
        case 3:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticInOut_fn);
        case 4:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicIn_fn);
        case 5:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicOut_fn);
        case 6:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicInOut_fn);
        case 7:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticIn_fn);
        case 8:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticOut_fn);
        case 9:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticInOut_fn);
        case 10:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticIn_fn);
        case 11:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticOut_fn);
        case 12:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticInOut_fn);
        case 13:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalIn_fn);
        case 14:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalOut_fn);
        case 15:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalInOut_fn);
        case 16:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialIn_fn);
        case 17:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialOut_fn);
        case 18:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialInOut_fn);
        case 19:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularIn_fn);
        case 20:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularOut_fn);
        case 21:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularInOut_fn);
        case 22:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticIn_fn);
        case 23:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticOut_fn);
        case 24:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticInOut_fn);
        case 25:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackIn_fn);
        case 26:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackOut_fn);
        case 27:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackInOut_fn);
        case 28:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceIn_fn);
        case 29:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceOut_fn);
        case 30:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceInOut_fn);
        default:
            return uDelegate::New(::TYPES[15/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
    }
}

// public static float Linear(float k) [static] :1318
float EasingFunctions::Linear(float k)
{
    return k;
}

// public static float QuadraticIn(float k) [static] :1323
float EasingFunctions::QuadraticIn(float k)
{
    return k * k;
}

// public static float QuadraticInOut(float k) [static] :1333
float EasingFunctions::QuadraticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return (0.5f * k) * k;

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

// public static float QuadraticOut(float k) [static] :1328
float EasingFunctions::QuadraticOut(float k)
{
    return k * (2.0f - k);
}

// public static float QuarticIn(float k) [static] :1366
float EasingFunctions::QuarticIn(float k)
{
    return ((k * k) * k) * k;
}

// public static float QuarticInOut(float k) [static] :1377
float EasingFunctions::QuarticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return (((0.5f * k) * k) * k) * k;

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

// public static float QuarticOut(float k) [static] :1371
float EasingFunctions::QuarticOut(float k)
{
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

// public static float QuinticIn(float k) [static] :1386
float EasingFunctions::QuinticIn(float k)
{
    return (((k * k) * k) * k) * k;
}

// public static float QuinticInOut(float k) [static] :1397
float EasingFunctions::QuinticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return ((((0.5f * k) * k) * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

// public static float QuinticOut(float k) [static] :1391
float EasingFunctions::QuinticOut(float k)
{
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

// public static float SinusoidalIn(float k) [static] :1407
float EasingFunctions::SinusoidalIn(float k)
{
    return 1.0f - ::g::Uno::Math::Cos1((k * 3.14159274f) / 2.0f);
}

// public static float SinusoidalInOut(float k) [static] :1417
float EasingFunctions::SinusoidalInOut(float k)
{
    return 0.5f * (1.0f - ::g::Uno::Math::Cos1(3.14159274f * k));
}

// public static float SinusoidalOut(float k) [static] :1412
float EasingFunctions::SinusoidalOut(float k)
{
    return ::g::Uno::Math::Sin1((k * 3.14159274f) / 2.0f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class EasingTrack :1226
// {
// static EasingTrack() :1226
static void EasingTrack__cctor__fn(uType* __type)
{
    EasingTrack::Singleton_ = EasingTrack::New1();
}

static void EasingTrack_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(EasingTrack_type, interface0),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(EasingTrack_type, interface1));
    type->SetFields(0,
        EasingTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::EasingTrack::Singleton_, uFieldFlagsStatic);
}

EasingTrack_type* EasingTrack_typeof()
{
    static uSStrong<EasingTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EasingTrack);
    options.TypeSize = sizeof(EasingTrack_type);
    type = (EasingTrack_type*)uClassType::New("Fuse.Animations.EasingTrack", options);
    type->fp_build_ = EasingTrack_build;
    type->fp_ctor_ = (void*)EasingTrack__New1_fn;
    type->fp_cctor_ = EasingTrack__cctor__fn;
    type->interface1.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))EasingTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface1.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    return type;
}

// public generated EasingTrack() :1226
void EasingTrack__ctor__fn(EasingTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1241
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    double progress_ = *progress;
    float ret2;
    int dir_ = *dir;
    progress_ = ::g::Uno::Math::Clamp(progress_, 0.0, 1.0);
    float ease = (uPtr(::g::Fuse::Animations::EasingFunctions::FromEasing(uPtr(tas)->Easing()))->Invoke(&ret2, 1, uCRef((float)progress_)), ret2);
    *strength = (double)ease;
    *value = uPtr(tas->Animator)->_vectorValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1255
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[16/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[16/*Fuse.Animations.ContinuousTrackProvider*/]), tas, (double)progress, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1236
void EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1231
void EasingTrack__FuseAnimationsTrackProviderGetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    int variant_ = *variant;
    return *__retval = ((variant_ == 1) && uPtr(ta)->HasBack()) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated EasingTrack New() :1226
void EasingTrack__New1_fn(EasingTrack** __retval)
{
    *__retval = EasingTrack::New1();
}

uSStrong<EasingTrack*> EasingTrack::Singleton_;

// public generated EasingTrack() [instance] :1226
void EasingTrack::ctor_()
{
}

// public generated EasingTrack New() [static] :1226
EasingTrack* EasingTrack::New1()
{
    EasingTrack* obj1 = (EasingTrack*)uNew(EasingTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class FastMatrixTransform :1789
// {
static void FastMatrixTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface3));
    type->SetFields(14,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Animations::FastMatrixTransform, Matrix), 0);
}

::g::Fuse::Transform_type* FastMatrixTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(FastMatrixTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Animations.FastMatrixTransform", options);
    type->fp_build_ = FastMatrixTransform_build;
    type->fp_ctor_ = (void*)FastMatrixTransform__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))FastMatrixTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))FastMatrixTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))FastMatrixTransform__PrependTo_fn;
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

// public generated FastMatrixTransform() :1789
void FastMatrixTransform__ctor_3_fn(FastMatrixTransform* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :1793
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uPtr(m)->AppendFastMatrix(__this->Matrix);
}

// public void Changed() :1804
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this)
{
    __this->Changed();
}

// public override sealed bool get_IsFlat() :1811
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval)
{
    ::g::Uno::Float4x4 m = uPtr(__this->Matrix)->Matrix();
    bool q = (((((::g::Uno::Math::Abs1(m.M13) < 1e-05f) && (::g::Uno::Math::Abs1(m.M23) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M43) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M14) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M24) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M34) < 1e-05f);
    return *__retval = q, void();
}

// public generated FastMatrixTransform New() :1789
void FastMatrixTransform__New2_fn(FastMatrixTransform** __retval)
{
    *__retval = FastMatrixTransform::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :1799
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependFastMatrix(__this->Matrix);
}

// public generated FastMatrixTransform() [instance] :1789
void FastMatrixTransform::ctor_3()
{
    Matrix = ::g::Fuse::FastMatrix::Identity();
    ctor_2();
}

// public void Changed() [instance] :1804
void FastMatrixTransform::Changed()
{
    OnMatrixChanged(NULL, NULL);
}

// public generated FastMatrixTransform New() [static] :1789
FastMatrixTransform* FastMatrixTransform::New2()
{
    FastMatrixTransform* obj1 = (FastMatrixTransform*)uNew(FastMatrixTransform_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// protected struct MasterBase<T>.GFWResult :1675
// {
static void MasterBase__GFWResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Rest), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Full), 0);
}

uStructType* MasterBase__GFWResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ValueSize = sizeof(MasterBase__GFWResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Animations.MasterBase`1.GFWResult", options);
    type->fp_build_ = MasterBase__GFWResult_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract interface IMixer :1519
// {
uInterfaceType* IMixer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixer", 0, 1);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract interface IMixerHandle<T> :1525
// {
uInterfaceType* IMixerHandle_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerHandle`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract interface IMixerMaster :1540
// {
uInterfaceType* IMixerMaster_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerMaster", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract interface IPlayerFeedback :4102
// {
uInterfaceType* IPlayerFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IPlayerFeedback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract interface IResize :2624
// {
uInterfaceType* IResize_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResize", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract interface IResizeMode :2629
// {
uInterfaceType* IResizeMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResizeMode", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class MasterBase<T> :1592
// {
// ~MasterBase() :1600
static void MasterBase__Finalize_fn(MasterBase* __this)
{
}

static void MasterBase_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Attempt to register in inactive Master");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::STRINGS[8] = uString::Const("Register");
    ::TYPES[17] = ::g::Uno::Collections::List_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0))));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterBase_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _inactive), 0,
        ::g::Fuse::Animations::MixerBase_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _mixerBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, DirtyValue), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0))), offsetof(::g::Fuse::Animations::MasterBase, Handles), 0);
}

MasterBase_type* MasterBase_typeof()
{
    static uSStrong<MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MasterBase);
    options.TypeSize = sizeof(MasterBase_type);
    type = (MasterBase_type*)uClassType::New("Fuse.Animations.MasterBase`1", options);
    type->fp_build_ = MasterBase_build;
    type->fp_Finalize = (void(*)(uObject*))MasterBase__Finalize_fn;
    type->fp_OnActive = MasterBase__OnActive_fn;
    return type;
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) :1595
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_(mixerBase);
}

// private void Complete() :1646
void MasterBase__Complete_fn(MasterBase* __this)
{
    __this->Complete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() :1681
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval)
{
    *__retval = __this->GetFullWeight();
}

// public void MarkDirty() :1660
void MasterBase__MarkDirty_fn(MasterBase* __this)
{
    __this->MarkDirty();
}

// protected virtual void OnActive() :1643
void MasterBase__OnActive_fn(MasterBase* __this)
{
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) :1611
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Register(handle);
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) :1627
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Unregister(handle);
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) [instance] :1595
void MasterBase::ctor_(::g::Fuse::Animations::MixerBase* mixerBase)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
    };
    Handles = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _mixerBase = mixerBase;
}

// private void Complete() [instance] :1646
void MasterBase::Complete()
{
    if (!DirtyValue)
        return;

    DirtyValue = false;

    if (uPtr(Handles)->Count() == 0)
        return;

    OnComplete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() [instance] :1681
MasterBase__GFWResult MasterBase::GetFullWeight()
{
    MasterBase__GFWResult collection1;
    ::g::Fuse::Animations::MixerHandle* ret1;
    float fullWeight = 0.0f;
    int c = uPtr(Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(i), &ret1), ret1);

        if (uPtr(v)->MixOp() == 2)
            fullWeight = fullWeight + (uPtr(v)->HasValue() ? ::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) : 0.0f);
    }

    float restWeight = 1.0f - ::g::Uno::Math::Min1(fullWeight, 1.0f);
    fullWeight = ::g::Uno::Math::Max1(1.0f, fullWeight);
    collection1 = uDefault<MasterBase__GFWResult>();
    collection1.Rest = restWeight;
    collection1.Full = fullWeight;
    return collection1;
}

// public void MarkDirty() [instance] :1660
void MasterBase::MarkDirty()
{
    if (DirtyValue)
        return;

    DirtyValue = true;

    if (uPtr(Handles)->Count() < 2)
    {
        Complete();
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)MasterBase__Complete_fn, this), -1, 0);
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) [instance] :1611
void MasterBase::Register(::g::Fuse::Animations::MixerHandle* handle)
{
    ::g::Fuse::Animations::MixerHandle* ret2;

    if (_inactive)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[7/*"Attempt to ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1615, ::STRINGS[8/*"Register"*/]);
        return;
    }

    int at = 0;

    for (; (at < uPtr(Handles)->Count()) && (uPtr(handle)->Priority() <= uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(at), &ret2), ret2))->Priority()); ++at)
        ;

    ::g::Uno::Collections::List__Insert_fn(uPtr(Handles), uCRef<int>(at), handle);

    if (uPtr(Handles)->Count() == 1)
        OnActive();
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) [instance] :1627
void MasterBase::Unregister(::g::Fuse::Animations::MixerHandle* handle)
{
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Handles), handle, &ret3);
    MarkDirty();

    if (uPtr(Handles)->Count() == 0)
    {
        _inactive = true;
        OnInactive();

        if (_mixerBase != NULL)
            uPtr(_mixerBase)->Unused((uObject*)this);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class MasterProperty<T> :1708
// {
static void MasterProperty_build(uType* type)
{
    ::STRINGS[9] = uString::Const("The property ");
    ::STRINGS[10] = uString::Const(" of ");
    ::STRINGS[11] = uString::Const(" cannot be reliably animated because it does not provide an origin-setter. Animating this property may lead to visual glitches or inconsistencies.");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::STRINGS[12] = uString::Const("GiveOriginSetterWarning");
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(MasterProperty_type, interface2));
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _hasSetValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _isListening), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _warningGiven), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MasterProperty, Property), 0);
}

MasterProperty_type* MasterProperty_typeof()
{
    static uSStrong<MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterBase_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(MasterProperty);
    options.TypeSize = sizeof(MasterProperty_type);
    type = (MasterProperty_type*)uClassType::New("Fuse.Animations.MasterProperty`1", options);
    type->fp_build_ = MasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnInactive_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))MasterProperty__GetPropertyObject_fn;
    return type;
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1713
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(property, mixerBase);
}

// public object GetPropertyObject() :1711
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval)
{
    *__retval = __this->GetPropertyObject();
}

// private void GiveOriginSetterWarning() :1767
void MasterProperty__GiveOriginSetterWarning_fn(MasterProperty* __this)
{
    __this->GiveOriginSetterWarning();
}

// protected override void OnActive() :1729
void MasterProperty__OnActive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (!__this->_isListening)
    {
        __this->_restValue() = (uPtr(__this->Property)->Get_ex(&ret1), ret1);
        uPtr(__this->Property)->AddListener((uObject*)__this);
        __this->_isListening = true;
    }
}

// protected override sealed void OnInactive() :1739
void MasterProperty__OnInactive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_isListening)
    {
        uPtr(__this->Property)->RemoveListener((uObject*)__this);
        uPtr(__this->Property)->Set_ex((MasterProperty__get_RestValue_fn(__this, &ret2), ret2), (uObject*)__this);
        __this->_isListening = false;
    }
}

// public T get_RestValue() :1722
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->_restValue()), void();
}

// protected void Set(T value) :1779
void MasterProperty__Set_fn(MasterProperty* __this, void* value)
{
    if (!__this->_isListening)
        U_THROW(::g::Uno::Exception::New1());

    __this->_hasSetValue = true;
    __this->_lastSetValue() = value;
    uPtr(__this->Property)->Set_ex(value, (uObject*)__this);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector property) :1749
void MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(MasterProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Inequality(uPtr(__this->Property)->Name(), property_))
        return;

    v = (uPtr(__this->Property)->Get_ex(&ret3), ret3);

    if (uPtr(__this->Property)->SupportsOriginSetter())
        __this->_restValue() = v;
    else if (!__this->_hasSetValue || !::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(__this->_lastSetValue()), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], v)))
    {
        __this->GiveOriginSetterWarning();
        __this->_restValue() = v;
    }
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1713
void MasterProperty::ctor_1(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Property = property;
}

// public object GetPropertyObject() [instance] :1711
uObject* MasterProperty::GetPropertyObject()
{
    return Property;
}

// private void GiveOriginSetterWarning() [instance] :1767
void MasterProperty::GiveOriginSetterWarning()
{
    if (!_warningGiven)
    {
        _warningGiven = true;
        ::g::Fuse::Diagnostics::UserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"The property "*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(Property)->Name())), ::STRINGS[10/*" of "*/]), uPtr(Property)->Object()), ::STRINGS[11/*" cannot be ...*/]), this, ::STRINGS[1/*"/usr/local/...*/], 1772, ::STRINGS[12/*"GiveOriginS...*/]);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract interface MasterPropertyGet :1704
// {
uInterfaceType* MasterPropertyGet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.MasterPropertyGet", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class MasterTransform :1825
// {
// static MasterTransform() :1825
static void MasterTransform__cctor__fn(uType* __type)
{
    MasterTransform::identity_ = ::g::Fuse::Translation::New2();
}

static void MasterTransform_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Animations::FastMatrixTransform_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, FMT), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, Visual), 0,
        ::g::Fuse::Transform_typeof(), (uintptr_t)&::g::Fuse::Animations::MasterTransform::identity_, uFieldFlagsStatic);
}

::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterBase_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.MasterTransform", options);
    type->fp_build_ = MasterTransform_build;
    type->fp_cctor_ = MasterTransform__cctor__fn;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnInactive_fn;
    return type;
}

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1830
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(node, mixerBase);
}

// protected override sealed void OnActive() :1837
void MasterTransform__OnActive_fn(MasterTransform* __this)
{
    __this->FMT = ::g::Fuse::Animations::FastMatrixTransform::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT);
}

// protected override sealed void OnInactive() :1843
void MasterTransform__OnInactive_fn(MasterTransform* __this)
{
    bool ret1;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT, &ret1);
    __this->FMT = NULL;
}

uSStrong< ::g::Fuse::Transform*> MasterTransform::identity_;

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :1830
void MasterTransform::ctor_1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Visual = node;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class Mixer :1532
// {
// static Mixer() :1532
static void Mixer__cctor__fn(uType* __type)
{
    Mixer::_default_ = (uObject*)::g::Fuse::Animations::AverageMixer::New1();
    Mixer::_defaultDiscrete_ = (uObject*)::g::Fuse::Animations::DiscreteMixer::New1();
}

static void Mixer_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_default_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_defaultDiscrete_, uFieldFlagsStatic);
}

uType* Mixer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Mixer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Mixer", options);
    type->fp_build_ = Mixer_build;
    type->fp_cctor_ = Mixer__cctor__fn;
    return type;
}

// public static Fuse.Animations.IMixer get_Default() :1535
void Mixer__get_Default_fn(uObject** __retval)
{
    *__retval = Mixer::Default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() :1537
void Mixer__get_DefaultDiscrete_fn(uObject** __retval)
{
    *__retval = Mixer::DefaultDiscrete();
}

uSStrong<uObject*> Mixer::_default_;
uSStrong<uObject*> Mixer::_defaultDiscrete_;

// public static Fuse.Animations.IMixer get_Default() [static] :1535
uObject* Mixer::Default()
{
    Mixer_typeof()->Init();
    return Mixer::_default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() [static] :1537
uObject* Mixer::DefaultDiscrete()
{
    Mixer_typeof()->Init();
    return Mixer::_defaultDiscrete();
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class MixerBase :1542
// {
static void MixerBase_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[20] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[23] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[24] = ::g::Fuse::Animations::MasterPropertyGet_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetPrecalc(
        MixerBase_typeof()->MakeMethod(1, type->U(0)),
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->U(0)),
        ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->U(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(MixerBase_type, interface0));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Animations::MixerBase, _propHandle), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Fuse::Animations::MixerBase, Masters), 0);
}

MixerBase_type* MixerBase_typeof()
{
    static uSStrong<MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(MixerBase);
    options.TypeSize = sizeof(MixerBase_type);
    type = (MixerBase_type*)uClassType::New("Fuse.Animations.MixerBase", options);
    type->fp_build_ = MixerBase_build;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))MixerBase__RegisterTransform_fn;
    return type;
}

// protected generated MixerBase() :1542
void MixerBase__ctor__fn(MixerBase* __this)
{
    __this->ctor_();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) :1546
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property1* property, int* mode, uObject** __retval)
{
    *__retval = __this->Register(__type, property, *mode);
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) :1560
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Visual* element, int* mode, int* priority, uObject** __retval)
{
    *__retval = __this->RegisterTransform(element, *mode, *priority);
}

// public void Unused(Fuse.Animations.IMixerMaster mb) :1575
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb)
{
    __this->Unused(mb);
}

// protected generated MixerBase() [instance] :1542
void MixerBase::ctor_()
{
    Masters = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[19/*Uno.Collections.Dictionary<object, object>*/]));
    _propHandle = ::g::Fuse::Properties::CreateHandle();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) [instance] :1546
uObject* MixerBase::Register(uType* __type, ::g::Uno::UX::Property1* property, int mode)
{
    __type = MixerBase_typeof()->GetVirtual(__type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.MixerBase.CreateMaster<T>*/),
        __type->Precalced(1/*Fuse.Animations.MasterBase<T>*/),
        __type->Precalced(2/*Fuse.Animations.MixerHandle<T>*/),
    };
    bool ret1;
    uObject* master;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Masters), property, (void**)(&master), &ret1), ret1))
    {
        master = (::g::Fuse::Animations::MasterProperty*)CreateMaster(__types[0], property, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Masters), property, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, __types[1]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(__types[2], masterT, mode, 0));
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) [instance] :1560
uObject* MixerBase::RegisterTransform(::g::Fuse::Visual* element, int mode, int priority)
{
    uObject* master;

    if (!uPtr(uPtr(element)->Properties())->TryGet(_propHandle, &master))
    {
        master = CreateMasterTransform(element, this);
        uPtr(uPtr(element)->Properties())->Set(_propHandle, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, ::TYPES[22/*Fuse.Animations.MasterBase<Fuse.Transform>*/]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(::TYPES[23/*Fuse.Animations.MixerHandle<Fuse.Transform>*/], masterT, mode, priority));
}

// public void Unused(Fuse.Animations.IMixerMaster mb) [instance] :1575
void MixerBase::Unused(uObject* mb)
{
    bool ret2;
    uObject* prop = uAs<uObject*>(mb, ::TYPES[24/*Fuse.Animations.MasterPropertyGet*/]);

    if (prop != NULL)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Masters), ::g::Fuse::Animations::MasterPropertyGet::GetPropertyObject(uInterface(uPtr(prop), ::TYPES[24/*Fuse.Animations.MasterPropertyGet*/])), &ret2);

    ::g::Fuse::Animations::MasterTransform* trans = uAs< ::g::Fuse::Animations::MasterTransform*>(mb, ::TYPES[25/*Fuse.Animations.MasterTransform*/]);

    if (trans != NULL)
        uPtr(uPtr(uPtr(trans)->Visual)->Properties())->Clear(_propHandle);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class MixerHandle<T> :1856
// {
static void MixerHandle_build(uType* type)
{
    ::STRINGS[13] = uString::Const("invalid MixerHandle.Set post-Unregister");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(MixerHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _hasValue), 0,
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MixerHandle, Master), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, Strength), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _MixOp), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _Priority), 0);
}

MixerHandle_type* MixerHandle_typeof()
{
    static uSStrong<MixerHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MixerHandle);
    options.TypeSize = sizeof(MixerHandle_type);
    type = (MixerHandle_type*)uClassType::New("Fuse.Animations.MixerHandle`1", options);
    type->fp_build_ = MixerHandle_build;
    type->interface0.fp_Unregister = (void(*)(uObject*))MixerHandle__Unregister_fn;
    type->interface0.fp_Set = (void(*)(uObject*, void*, float*))MixerHandle__Set_fn;
    return type;
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1869
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority)
{
    __this->ctor_(master, *mode, *priority);
}

// public bool get_HasValue() :1862
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// public generated Fuse.Animations.MixOp get_MixOp() :1864
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) :1864
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value)
{
    __this->MixOp(*value);
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1869
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval)
{
    *__retval = MixerHandle::New1(__type, master, *mode, *priority);
}

// public generated int get_Priority() :1866
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// private generated void set_Priority(int value) :1866
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value)
{
    __this->Priority(*value);
}

// public void Set(T value, float strength) :1884
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength)
{
    float strength_ = *strength;

    if (__this->Master == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[13/*"invalid Mix...*/], 1, ::STRINGS[1/*"/usr/local/...*/], 1888);
        return;
    }

    __this->_hasValue = true;
    __this->Value() = value;
    __this->Strength = strength_;
    uPtr(__this->Master)->MarkDirty();
}

// public void Unregister() :1877
void MixerHandle__Unregister_fn(MixerHandle* __this)
{
    __this->Unregister();
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [instance] :1869
void MixerHandle::ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    Priority(priority);
    Master = master;
    MixOp(mode);
    uPtr(Master)->Register(this);
}

// public bool get_HasValue() [instance] :1862
bool MixerHandle::HasValue()
{
    return _hasValue;
}

// public generated Fuse.Animations.MixOp get_MixOp() [instance] :1864
int MixerHandle::MixOp()
{
    return _MixOp;
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) [instance] :1864
void MixerHandle::MixOp(int value)
{
    _MixOp = value;
}

// public generated int get_Priority() [instance] :1866
int MixerHandle::Priority()
{
    return _Priority;
}

// private generated void set_Priority(int value) [instance] :1866
void MixerHandle::Priority(int value)
{
    _Priority = value;
}

// public void Unregister() [instance] :1877
void MixerHandle::Unregister()
{
    _hasValue = false;
    uPtr(Master)->Unregister(this);
    Master = NULL;
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [static] :1869
MixerHandle* MixerHandle::New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    MixerHandle* obj1 = (MixerHandle*)uNew(__type);
    obj1->ctor_(master, mode, priority);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public enum MixOp :1509
uEnumType* MixOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.MixOp", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Offset", 0LL,
        "Add", 1LL,
        "Weight", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Move :3678
// {
static void Move_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof()));
    type->SetFields(21,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Animations::Move, _relativeTo), 0);
}

::g::Fuse::Animations::TransformAnimator_type* Move_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Move);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Move", options);
    type->fp_build_ = Move_build;
    type->fp_ctor_ = (void*)Move__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Move__Update_fn;
    return type;
}

// public Move() :3680
void Move__ctor_4_fn(Move* __this)
{
    __this->ctor_4();
}

// public Move New() :3680
void Move__New2_fn(Move** __retval)
{
    *__retval = Move::New2();
}

// public Fuse.ITranslationMode get_RelativeTo() :3705
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :3706
void Move__set_RelativeTo_fn(Move* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Translation t, float4 value) :3709
void Move__Update_fn(Move* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value)
{
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeNode((ind1 = __this->RelativeNode(), (ind1 != NULL) ? ind1 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Move() [instance] :3680
void Move::ctor_4()
{
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_3();
    Priority(1000);
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :3705
uObject* Move::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :3706
void Move::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Move New() [static] :3680
Move* Move::New2()
{
    Move* obj2 = (Move*)uNew(Move_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Nothing :1922
// {
static void Nothing_build(uType* type)
{
    type->SetFields(18);
}

::g::Fuse::Animations::Animator_type* Nothing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 18;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Nothing", options);
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Nothing__CreateState_fn;
    return type;
}

// public generated Nothing() :1922
void Nothing__ctor_3_fn(Nothing* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :1924
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::NothingAnimatorState::New1(__this, p), void();
}

// public generated Nothing New() :1922
void Nothing__New2_fn(Nothing** __retval)
{
    *__retval = Nothing::New2();
}

// public generated Nothing() [instance] :1922
void Nothing::ctor_3()
{
    ctor_2();
}

// public generated Nothing New() [static] :1922
Nothing* Nothing::New2()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class NothingAnimatorState :1930
// {
static void NothingAnimatorState_build(uType* type)
{
    type->SetFields(6);
}

::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NothingAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.NothingAnimatorState", options);
    type->fp_build_ = NothingAnimatorState_build;
    return type;
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1932
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1932
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval)
{
    *__retval = NothingAnimatorState::New1(animator, p);
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [instance] :1932
void NothingAnimatorState::ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ctor_1(animator, p, NULL);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [static] :1932
NothingAnimatorState* NothingAnimatorState::New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* obj1 = (NothingAnimatorState*)uNew(NothingAnimatorState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract class OpenAnimator :1955
// {
static void OpenAnimator_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _hasDuration), 0);
}

::g::Fuse::Animations::Animator_type* OpenAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Animator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(OpenAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.OpenAnimator", options);
    type->fp_build_ = OpenAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))OpenAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))OpenAnimator__GetDurationWithDelay_fn;
    return type;
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :1959
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public double get_Duration() :1970
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1971
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) :1992
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval)
{
    *__retval = __this->GetDelay(*dir, *totalDuration);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :1987
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay() + __this->Duration(), void();
}

// public bool get_HasDuration() :1985
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval)
{
    *__retval = __this->HasDuration();
}

// public double get_Duration() [instance] :1970
double OpenAnimator::Duration()
{
    return _duration;
}

// public void set_Duration(double value) [instance] :1971
void OpenAnimator::Duration(double value)
{
    _duration = value;
    _hasDuration = true;
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) [instance] :1992
double OpenAnimator::GetDelay(int dir, double totalDuration)
{
    return Delay();
}

// public bool get_HasDuration() [instance] :1985
bool OpenAnimator::HasDuration()
{
    return _hasDuration;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class OpenAnimatorState :1998
// {
static void OpenAnimatorState_build(uType* type)
{
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, _seekDone), 0,
        ::g::Fuse::Animations::OpenAnimator_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, Animator), 0);
}

OpenAnimatorState_type* OpenAnimatorState_typeof()
{
    static uSStrong<OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::AnimatorState_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimatorState);
    options.TypeSize = sizeof(OpenAnimatorState_type);
    type = (OpenAnimatorState_type*)uClassType::New("Fuse.Animations.OpenAnimatorState", options);
    type->fp_build_ = OpenAnimatorState_build;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekTime_fn;
    return type;
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :2003
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :2012
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    return *__retval = __this->SeekTime(progress_ * __this->TotalDuration, interval_, dir_, strength_), void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double nominal, double interval, Fuse.Animations.SeekDirection dir, double strength) :2018
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, int* __retval)
{
    int dir_ = *dir;
    double nominal_ = *nominal;
    double interval_ = *interval;
    double strength_ = *strength;
    double delay = uPtr(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir_ == 0) ? nominal_ > (delay - 9.9999997473787516e-06) : nominal_ > (delay + 9.9999997473787516e-06);

    if (uPtr(__this->Animator)->HasDuration() && (nominal_ > ((delay + uPtr(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
        on = false;

    bool mayEnd = (dir_ == 0) ? nominal_ >= (uPtr(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06) : nominal_ <= (delay + 9.9999997473787516e-06);

    if (on || !__this->_seekDone)
        __this->_seekDone = __this->Seek(on, (float)interval_, (float)strength_, dir_);

    return *__retval = (__this->_seekDone ? 2 : 0) | ((mayEnd && __this->_seekDone) ? 1 : 0), void();
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :2003
void OpenAnimatorState::ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    _seekDone = true;
    ctor_(p, useVisual);
    Animator = animator;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class Player :2212
// {
static void Player_build(uType* type)
{
    ::TYPES[26] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    type->SetInterfaces(
        ::g::Fuse::IUpdateListener_typeof(), offsetof(Player_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _allStable), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isDone), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isStarted), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _progress), 0,
        ::g::Fuse::Animations::SeekDirection_typeof(), offsetof(::g::Fuse::Animations::Player, _seekDirection), 0,
        ::g::Fuse::Animations::AnimatorState_typeof()->Array(), offsetof(::g::Fuse::Animations::Player, _states), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _strength), 0,
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Animations::Player, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::Player, _Animation), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::Player, _Mode), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::Player, _Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Player, _Visual), 0);
}

Player_type* Player_typeof()
{
    static uSStrong<Player_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(Player_type);
    type = (Player_type*)uClassType::New("Fuse.Animations.Player", options);
    type->fp_build_ = Player_build;
    type->interface0.fp_Update = (void(*)(uObject*))Player__FuseIUpdateListenerUpdate_fn;
    return type;
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2234
void Player__ctor__fn(Player* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode)
{
    __this->ctor_(elm, animation, *variant, *mode);
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() :2217
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :2217
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_AnimatorsDuration() :2250
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval)
{
    *__retval = __this->AnimatorsDuration();
}

// private void CheckUpdate([bool interval]) :2256
void Player__CheckUpdate_fn(Player* __this, bool* interval)
{
    __this->CheckUpdate(*interval);
}

// public void Disable() :2346
void Player__Disable_fn(Player* __this)
{
    __this->Disable();
}

// private void Done() :2331
void Player__Done_fn(Player* __this)
{
    __this->Done();
}

// public void FadeIn(double time) :2460
void Player__FadeIn_fn(Player* __this, double* time)
{
    __this->FadeIn(*time);
}

// public void FadeOut(double time) :2467
void Player__FadeOut_fn(Player* __this, double* time)
{
    __this->FadeOut(*time);
}

// private void Fuse.IUpdateListener.Update() :2252
void Player__FuseIUpdateListenerUpdate_fn(Player* __this)
{
    __this->CheckUpdate(true);
}

// public bool get_IsStable() :2298
void Player__get_IsStable_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal bool get_IsSyncState() :2386
void Player__get_IsSyncState_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsSyncState();
}

// public generated Fuse.Animations.PlayMode get_Mode() :2219
void Player__get_Mode_fn(Player* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) :2219
void Player__set_Mode_fn(Player* __this, int* value)
{
    __this->Mode(*value);
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2234
void Player__New1_fn(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval)
{
    *__retval = Player::New1(elm, animation, *variant, *mode);
}

// public void PlayToEnd() :2432
void Player__PlayToEnd_fn(Player* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2423
void Player__PlayToProgress_fn(Player* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2440
void Player__PlayToStart_fn(Player* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2360
void Player__get_Progress_fn(Player* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public double get_RemainTime() :2364
void Player__get_RemainTime_fn(Player* __this, double* __retval)
{
    *__retval = __this->RemainTime();
}

// public void SeekProgress(double progress, [bool triggerUpdate]) :2374
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate)
{
    __this->SeekProgress(*progress, *triggerUpdate);
}

// private void Start() :2303
void Player__Start_fn(Player* __this)
{
    __this->Start();
}

// private Fuse.Animations.AnimatorState[] get_States() :2224
void Player__get_States_fn(Player* __this, uArray** __retval)
{
    *__retval = __this->States();
}

// private void Stop() :2312
void Player__Stop_fn(Player* __this)
{
    __this->Stop();
}

// public double get_Strength() :2452
void Player__get_Strength_fn(Player* __this, double* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(double value) :2453
void Player__set_Strength_fn(Player* __this, double* value)
{
    __this->Strength(*value);
}

// public void TimeChanged() :2244
void Player__TimeChanged_fn(Player* __this)
{
    __this->TimeChanged();
}

// private bool UpdateStates(bool isInterval) :2392
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval)
{
    *__retval = __this->UpdateStates(*isInterval);
}

// public generated Fuse.Animations.AnimationVariant get_Variant() :2218
void Player__get_Variant_fn(Player* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) :2218
void Player__set_Variant_fn(Player* __this, int* value)
{
    __this->Variant(*value);
}

// public generated Fuse.Visual get_Visual() :2216
void Player__get_Visual_fn(Player* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :2216
void Player__set_Visual_fn(Player* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [instance] :2234
void Player::ctor_(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    _allStable = true;
    _progress = ::g::Fuse::Animations::PlayerPart::New1(0.0);
    _seekDirection = 1;
    _strength = ::g::Fuse::Animations::PlayerPart::New1(1.0);
    Animation(animation);
    Visual(elm);
    Variant(variant);
    Mode(mode);
    TimeChanged();
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :2217
::g::Fuse::Animations::TriggerAnimation* Player::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2217
void Player::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_AnimatorsDuration() [instance] :2250
double Player::AnimatorsDuration()
{
    return uPtr(_progress)->Duration;
}

// private void CheckUpdate([bool interval]) [instance] :2256
void Player::CheckUpdate(bool interval)
{
    bool running = false;

    if (uPtr(_progress)->Animate)
    {
        running = true;

        if (Mode() == 1)
            uPtr(_progress)->WrapStep();
        else
            uPtr(_progress)->Step();

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), this);
    }

    if (uPtr(_strength)->Animate)
    {
        running = true;
        uPtr(_strength)->Step();
    }

    bool stable = UpdateStates(interval);

    if (stable && !running)
        Stop();
    else
        Start();

    if (!running)
        Done();

    if (stable != _allStable)
    {
        _allStable = stable;

        if ((Feedback != NULL) && stable)
            ::g::Fuse::Animations::IPlayerFeedback::OnStable(uInterface(uPtr(Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), this);
    }
}

// public void Disable() [instance] :2346
void Player::Disable()
{
    Stop();

    if (_states != NULL)
    {
        for (int i = 0; i < uPtr(_states)->Length(); i++)
            uPtr(uPtr(_states)->Strong< ::g::Fuse::Animations::AnimatorState*>(i))->Disable();

        _states = NULL;
    }
}

// private void Done() [instance] :2331
void Player::Done()
{
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;

    if (!_isDone)
    {
        _isDone = true;

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnPlaybackDone(uInterface(uPtr(Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), this);
    }
}

// public void FadeIn(double time) [instance] :2460
void Player::FadeIn(double time)
{
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToEnd();
    CheckUpdate(false);
}

// public void FadeOut(double time) [instance] :2467
void Player::FadeOut(double time)
{
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToStart();
    CheckUpdate(false);
}

// public bool get_IsStable() [instance] :2298
bool Player::IsStable()
{
    return _allStable;
}

// internal bool get_IsSyncState() [instance] :2386
bool Player::IsSyncState()
{
    return (uPtr(_progress)->Current == 0.0) || (uPtr(_progress)->Progress() == 1.0);
}

// public generated Fuse.Animations.PlayMode get_Mode() [instance] :2219
int Player::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) [instance] :2219
void Player::Mode(int value)
{
    _Mode = value;
}

// public void PlayToEnd() [instance] :2432
void Player::PlayToEnd()
{
    _seekDirection = 0;
    uPtr(_progress)->PlayToEnd();
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToProgress(double progress) [instance] :2423
void Player::PlayToProgress(double progress)
{
    if (progress != uPtr(_progress)->Progress())
        _seekDirection = ((progress > uPtr(_progress)->Progress()) ? 0 : 1);

    uPtr(_progress)->PlayToProgress(progress);
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToStart() [instance] :2440
void Player::PlayToStart()
{
    _seekDirection = 1;
    uPtr(_progress)->PlayToStart();
    _isDone = false;
    CheckUpdate(false);
}

// public double get_Progress() [instance] :2360
double Player::Progress()
{
    return uPtr(_progress)->Progress();
}

// public double get_RemainTime() [instance] :2364
double Player::RemainTime()
{
    if (uPtr(_progress)->IsProgress || (uPtr(_progress)->Duration < 9.9999997473787516e-06))
        return 0.0;

    return (Variant() == 0) ? uPtr(_progress)->Duration - uPtr(_progress)->Current : uPtr(_progress)->Current;
}

// public void SeekProgress(double progress, [bool triggerUpdate]) [instance] :2374
void Player::SeekProgress(double progress, bool triggerUpdate)
{
    uPtr(_progress)->SeekProgress(progress);
    _isDone = true;
    CheckUpdate(false);

    if (triggerUpdate && (Feedback != NULL))
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), this);
}

// private void Start() [instance] :2303
void Player::Start()
{
    if (!_isStarted)
    {
        _isStarted = true;
        ::g::Fuse::UpdateManager::AddAction((uObject*)this, 0);
    }
}

// private Fuse.Animations.AnimatorState[] get_States() [instance] :2224
uArray* Player::States()
{
    if (_states == NULL)
        _states = uPtr(Animation())->CreateAnimatorsState(Variant(), Visual());

    return _states;
}

// private void Stop() [instance] :2312
void Player::Stop()
{
    if (_isStarted)
    {
        _isStarted = false;
        ::g::Fuse::UpdateManager::RemoveAction((uObject*)this, 0);
    }
}

// public double get_Strength() [instance] :2452
double Player::Strength()
{
    return uPtr(_strength)->Progress();
}

// public void set_Strength(double value) [instance] :2453
void Player::Strength(double value)
{
    uPtr(_strength)->SeekProgress(value);
    CheckUpdate(false);
}

// public void TimeChanged() [instance] :2244
void Player::TimeChanged()
{
    uPtr(_progress)->AlterDuration(uPtr(Animation())->GetAnimatorsDuration(Variant()), uPtr(Animation())->GetTimeMultiplier(Variant()));
}

// private bool UpdateStates(bool isInterval) [instance] :2392
bool Player::UpdateStates(bool isInterval)
{
    bool allStable = true;
    double interval = isInterval ? ::g::Fuse::Time::FrameInterval() * uPtr(_progress)->TimeMultiplier() : 0.0;

    if (_seekDirection == 1)
        interval = -interval;

    for (int i = 0; i < uPtr(States())->Length(); ++i)
    {
        ::g::Fuse::Animations::AnimatorState* s = uPtr(States())->Strong< ::g::Fuse::Animations::AnimatorState*>(i);
        int stable;

        if (uPtr(_progress)->IsProgress)
            stable = uPtr(s)->SeekProgress(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());
        else
            stable = uPtr(s)->SeekTime(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());

        allStable = allStable && ((stable & 2) == 2);
    }

    return allStable;
}

// public generated Fuse.Animations.AnimationVariant get_Variant() [instance] :2218
int Player::Variant()
{
    return _Variant;
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) [instance] :2218
void Player::Variant(int value)
{
    _Variant = value;
}

// public generated Fuse.Visual get_Visual() [instance] :2216
::g::Fuse::Visual* Player::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :2216
void Player::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [static] :2234
Player* Player::New1(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    Player* obj1 = (Player*)uNew(Player_typeof());
    obj1->ctor_(elm, animation, variant, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class PlayerPart :2065
// {
static void PlayerPart_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _stepTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _timeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Animate), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Current), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, IsProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Source), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, SourceTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Target), 0);
}

uType* PlayerPart_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayerPart);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.PlayerPart", options);
    type->fp_build_ = PlayerPart_build;
    return type;
}

// public PlayerPart([double currentProgress]) :2075
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress)
{
    __this->ctor_(*currentProgress);
}

// public void AlterDuration(double t, double timeMult) :2200
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult)
{
    __this->AlterDuration(*t, *timeMult);
}

// private void MarkSource(bool isAnimating) :2107
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating)
{
    __this->MarkSource(*isAnimating);
}

// public PlayerPart New([double currentProgress]) :2075
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval)
{
    *__retval = PlayerPart::New1(*currentProgress);
}

// public void PlayToEnd() :2119
void PlayerPart__PlayToEnd_fn(PlayerPart* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2081
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2124
void PlayerPart__PlayToStart_fn(PlayerPart* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2190
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void SeekProgress(double p) :2172
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p)
{
    __this->SeekProgress(*p);
}

// public void Step() :2130
void PlayerPart__Step_fn(PlayerPart* __this)
{
    __this->Step();
}

// public double get_TimeMultiplier() :2209
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void WrapStep() :2151
void PlayerPart__WrapStep_fn(PlayerPart* __this)
{
    __this->WrapStep();
}

// public PlayerPart([double currentProgress]) [instance] :2075
void PlayerPart::ctor_(double currentProgress)
{
    _timeMultiplier = 1.0;
    IsProgress = true;
    Current = currentProgress;
}

// public void AlterDuration(double t, double timeMult) [instance] :2200
void PlayerPart::AlterDuration(double t, double timeMult)
{
    _timeMultiplier = timeMult;
    MarkSource(Animate);
    double p = Progress();
    Duration = t;
    SeekProgress(p);
}

// private void MarkSource(bool isAnimating) [instance] :2107
void PlayerPart::MarkSource(bool isAnimating)
{
    Source = Current;

    if (isAnimating && (_stepTime < ::g::Fuse::Time::FrameTime()))
        SourceTime = (::g::Fuse::Time::FrameTime() - (::g::Fuse::Time::FrameInterval() * _timeMultiplier));
    else
        SourceTime = ::g::Fuse::Time::FrameTime();
}

// public void PlayToEnd() [instance] :2119
void PlayerPart::PlayToEnd()
{
    PlayToProgress(1.0);
}

// public void PlayToProgress(double progress) [instance] :2081
void PlayerPart::PlayToProgress(double progress)
{
    bool nIsProgress;
    double nTarget;

    if (Duration < 9.9999997473787516e-06)
    {
        nIsProgress = true;
        nTarget = progress;
    }
    else
    {
        nIsProgress = false;
        nTarget = progress * Duration;
    }

    if (((nIsProgress == IsProgress) && (nTarget == Target)) && Animate)
        return;

    MarkSource(Animate);
    Animate = true;
    IsProgress = nIsProgress;
    Target = nTarget;
}

// public void PlayToStart() [instance] :2124
void PlayerPart::PlayToStart()
{
    PlayToProgress(0.0);
}

// public double get_Progress() [instance] :2190
double PlayerPart::Progress()
{
    if (IsProgress)
        return Current;
    else
        return ::g::Uno::Math::Clamp(Current / Duration, 0.0, 1.0);
}

// public void SeekProgress(double p) [instance] :2172
void PlayerPart::SeekProgress(double p)
{
    p = ::g::Uno::Math::Clamp(p, 0.0, 1.0);
    Animate = false;

    if (Duration < 9.9999997473787516e-06)
    {
        IsProgress = true;
        Current = p;
    }
    else
    {
        IsProgress = false;
        Current = (p * Duration);
    }
}

// public void Step() [instance] :2130
void PlayerPart::Step()
{
    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = (IsProgress ? 1.0 : ::g::Uno::Math::Min(elapsed + Source, Duration));
    else
        Current = (IsProgress ? 0.0 : ::g::Uno::Math::Max(Source - elapsed, 0.0));

    if (((Target >= Source) && (Current >= Target)) || ((Target <= Source) && (Current <= Target)))
    {
        Current = Target;
        Animate = false;
    }
}

// public double get_TimeMultiplier() [instance] :2209
double PlayerPart::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void WrapStep() [instance] :2151
void PlayerPart::WrapStep()
{
    if (IsProgress || ((Target > 0.0) && (Target < 1.0)))
    {
        Step();
        return;
    }

    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = ::g::Uno::Math::Mod(elapsed + Source, Duration);
    else
        Current = ::g::Uno::Math::Mod(Source - elapsed, Duration);
}

// public PlayerPart New([double currentProgress]) [static] :2075
PlayerPart* PlayerPart::New1(double currentProgress)
{
    PlayerPart* obj1 = (PlayerPart*)uNew(PlayerPart_typeof());
    obj1->ctor_(currentProgress);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public enum PlayMode :3898
uEnumType* PlayMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Once", 0LL,
        "Wrap", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class RangeAdapter<T> :2514
// {
static void RangeAdapter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RangeAdapter_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RangeAdapter_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RangeAdapter_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RangeAdapter_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RangeAdapter_type, interface4));
    type->SetFields(13,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::RangeAdapter, _Source), 0);
}

RangeAdapter_type* RangeAdapter_typeof()
{
    static uSStrong<RangeAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(RangeAdapter);
    options.TypeSize = sizeof(RangeAdapter_type);
    type = (RangeAdapter_type*)uClassType::New("Fuse.Animations.RangeAdapter`1", options);
    type->fp_build_ = RangeAdapter_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// protected override sealed void OnRooted() :2541
void RangeAdapter__OnRooted_fn(RangeAdapter* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->Source())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :2547
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this)
{
    uPtr(__this->Source())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property<T> get_Source() :2516
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :2516
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :2554
void RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn(RangeAdapter* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    __this->OnPropertyChanged(::g::Fuse::Animations::RangeAdapterHelpers::_valueName());
}

// public generated Uno.UX.Property<T> get_Source() [instance] :2516
::g::Uno::UX::Property1* RangeAdapter::Source()
{
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :2516
void RangeAdapter::Source(::g::Uno::UX::Property1* value)
{
    _Source = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal static class RangeAdapterHelpers :2484
// {
// static RangeAdapterHelpers() :2484
static void RangeAdapterHelpers__cctor__fn(uType* __type)
{
    RangeAdapterHelpers::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Value"*/]);
}

static void RangeAdapterHelpers_build(uType* type)
{
    ::STRINGS[14] = uString::Const("Value");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Animations::RangeAdapterHelpers::_valueName_, uFieldFlagsStatic);
}

uClassType* RangeAdapterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.RangeAdapterHelpers", options);
    type->fp_build_ = RangeAdapterHelpers_build;
    type->fp_cctor_ = RangeAdapterHelpers__cctor__fn;
    return type;
}

::g::Uno::UX::Selector RangeAdapterHelpers::_valueName_;
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Resize :2651
// {
static void Resize_build(uType* type)
{
    type->SetFields(18,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::Resize, _resizeMode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Resize, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Resize, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Resize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Resize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Resize", options);
    type->fp_build_ = Resize_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Resize__CreateState_fn;
    return type;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2697
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::ResizeAnimatorState::New1(__this, p), void();
}

// public generated Fuse.Visual get_RelativeNode() :2657
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :2657
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public Fuse.Animations.IResizeMode get_RelativeTo() :2668
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) :2669
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public generated Fuse.Visual get_Target() :2654
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2654
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_RelativeNode() [instance] :2657
::g::Fuse::Visual* Resize::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :2657
void Resize::RelativeNode(::g::Fuse::Visual* value)
{
    _RelativeNode = value;
}

// public Fuse.Animations.IResizeMode get_RelativeTo() [instance] :2668
uObject* Resize::RelativeTo()
{
    return _resizeMode;
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) [instance] :2669
void Resize::RelativeTo(uObject* value)
{
    _resizeMode = value;
}

// public generated Fuse.Visual get_Target() [instance] :2654
::g::Fuse::Visual* Resize::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2654
void Resize::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class ResizeAnimatorState :2703
// {
static void ResizeAnimatorState_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Resize started without a Target node");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::STRINGS[16] = uString::Const(".ctor");
    ::STRINGS[17] = uString::Const("Resize started without as RelativeTo");
    ::TYPES[27] = ::g::Fuse::Animations::IResize_typeof();
    ::TYPES[28] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[29] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::IResizeMode_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastStrength), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastValue), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeNode), 0,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeTo), 0,
        ::g::Fuse::Animations::Resize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _resize), 0,
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _valid), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ResizeAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ResizeAnimatorState", options);
    type->fp_build_ = ResizeAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ResizeAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ResizeAnimatorState__SeekValue_fn;
    return type;
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2711
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(r, p);
}

// public override sealed void Disable() :2742
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this)
{
    ::g::Fuse::Animations::AnimatorState__Disable_fn(__this);

    if (!__this->_valid)
        return;

    uObject* e = uAs<uObject*>(__this->_target, ::TYPES[28/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(e), ::TYPES[28/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[29/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));

    uObject* elm = uAs<uObject*>(__this->_relativeNode, ::TYPES[28/*Fuse.IActualPlacement*/]);

    if (elm != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(elm), ::TYPES[28/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[29/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2711
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval)
{
    *__retval = ResizeAnimatorState::New1(r, p);
}

// private void OnPlaced(object s, object a) :2781
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void SeekValue(float4 value, float strength) :2759
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    float strength_ = *strength;
    ::g::Uno::Float4 value_ = *value;
    __this->_lastStrength = strength_;
    __this->_lastValue = value_;
    __this->Update(value_, strength_);
}

// private void Update(float4 value, float strength) :2766
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    __this->Update(*value, *strength);
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [instance] :2711
void ResizeAnimatorState::ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ::g::Fuse::Visual* ind1;
    _valid = true;
    ctor_1(r, p, uPtr(r)->Target());
    _resize = r;
    _target = uAs<uObject*>(Visual, ::TYPES[27/*Fuse.Animations.IResize*/]);

    if (_target == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[15/*"Resize star...*/], r, ::STRINGS[1/*"/usr/local/...*/], 2717, ::STRINGS[16/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeTo = r->RelativeTo();

    if (_relativeTo == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"Resize star...*/], r, ::STRINGS[1/*"/usr/local/...*/], 2725, ::STRINGS[16/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeNode = (ind1 = uPtr(_resize)->RelativeNode(), ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Visual));
    uObject* elm = uAs<uObject*>(_relativeNode, ::TYPES[28/*Fuse.IActualPlacement*/]);

    if (elm != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(elm), ::TYPES[28/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[29/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));

    uObject* e = uAs<uObject*>(_target, ::TYPES[28/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(e), ::TYPES[28/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[29/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
}

// private void OnPlaced(object s, object a) [instance] :2781
void ResizeAnimatorState::OnPlaced(uObject* s, uObject* a)
{
    Update(_lastValue, _lastStrength);
}

// private void Update(float4 value, float strength) [instance] :2766
void ResizeAnimatorState::Update(::g::Uno::Float4 value, float strength)
{
    if (!_valid)
        return;

    ::g::Uno::Float2 baseSize;
    ::g::Uno::Float2 deltaSize;

    if (::g::Fuse::Animations::IResizeMode::GetSizeChange(uInterface(uPtr(_relativeTo), ::TYPES[30/*Fuse.Animations.IResizeMode*/]), Visual, _relativeNode, &baseSize, &deltaSize))
    {
        ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(baseSize, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply2(deltaSize, ::g::Uno::Float2__New2(value.X, value.Y)), strength));
        ::g::Fuse::Animations::IResize::SetSize(uInterface(uPtr(_target), ::TYPES[27/*Fuse.Animations.IResize*/]), sz);
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [static] :2711
ResizeAnimatorState* ResizeAnimatorState::New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* obj2 = (ResizeAnimatorState*)uNew(ResizeAnimatorState_typeof());
    obj2->ctor_2(r, p);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Rotate :3731
// {
static void Rotate_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof()));
    type->SetFields(21);
}

::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Rotate);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Rotate", options);
    type->fp_build_ = Rotate_build;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Rotate__Update_fn;
    return type;
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Rotation t, float4 value) :3766
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->EulerAngle(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Scale :3793
// {
static void Scale_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof()));
    type->SetFields(21,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Animations::Scale, _relativeTo), 0);
}

::g::Fuse::Animations::TransformAnimator_type* Scale_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Scale);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Scale", options);
    type->fp_build_ = Scale_build;
    type->fp_ctor_ = (void*)Scale__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Scale__Update_fn;
    return type;
}

// public Scale() :3803
void Scale__ctor_4_fn(Scale* __this)
{
    __this->ctor_4();
}

// public float get_Factor() :3812
void Scale__get_Factor_fn(Scale* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :3813
void Scale__set_Factor_fn(Scale* __this, float* value)
{
    __this->Factor(*value);
}

// public Scale New() :3803
void Scale__New2_fn(Scale** __retval)
{
    *__retval = Scale::New2();
}

// public Fuse.IScalingMode get_RelativeTo() :3799
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :3800
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Scaling t, float4 value) :3816
void Scale__Update_fn(Scale* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value)
{
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeNode((ind1 = __this->RelativeNode(), (ind1 != NULL) ? ind1 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Scale() [instance] :3803
void Scale::ctor_4()
{
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    ctor_3();
    Priority(2000);
    _vectorValue = ::g::Uno::Float4__New1(1.0f);
}

// public float get_Factor() [instance] :3812
float Scale::Factor()
{
    return X();
}

// public void set_Factor(float value) [instance] :3813
void Scale::Factor(float value)
{
    _vectorValue = ::g::Uno::Float4__New1(value);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :3799
uObject* Scale::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :3800
void Scale::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Scale New() [static] :3803
Scale* Scale::New2()
{
    Scale* obj2 = (Scale*)uNew(Scale_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal enum SeekDirection :110
uEnumType* SeekDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public enum TriggerAnimationState.SeekFlags :4328
uEnumType* TriggerAnimationState__SeekFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TriggerAnimationState.SeekFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal enum SeekResult :117
uEnumType* SeekResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Complete", 1LL,
        "Stable", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Skew :3838
// {
static void Skew_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof()));
    type->SetFields(21);
}

::g::Fuse::Animations::TransformAnimator_type* Skew_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Skew);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Skew", options);
    type->fp_build_ = Skew_build;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Skew__Update_fn;
    return type;
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Shear t, float4 value) :3845
void Skew__Update_fn(Skew* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->Vector(::g::Uno::Float2__New2(value_.X, value_.Y));
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class Spin :2808
// {
static void Spin_build(uType* type)
{
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Spin, _hertz), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Spin, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Spin_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimator_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Spin);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Spin", options);
    type->fp_build_ = Spin_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Spin__CreateState_fn;
    return type;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2830
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::SpinState::New1(__this, p), void();
}

// public double get_Frequency() :2826
void Spin__get_Frequency_fn(Spin* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :2827
void Spin__set_Frequency_fn(Spin* __this, double* value)
{
    __this->Frequency(*value);
}

// public generated Fuse.Visual get_Target() :2818
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2818
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public double get_Frequency() [instance] :2826
double Spin::Frequency()
{
    return _hertz;
}

// public void set_Frequency(double value) [instance] :2827
void Spin::Frequency(double value)
{
    _hertz = value;
}

// public generated Fuse.Visual get_Target() [instance] :2818
::g::Fuse::Visual* Spin::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2818
void Spin::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class SpinState :2837
// {
static void SpinState_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Invalid seek");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetFields(5,
        ::g::Fuse::Animations::Spin_typeof(), offsetof(::g::Fuse::Animations::SpinState, Animator1), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SpinState, degrees), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::SpinState, mixHandle), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::Fuse::Animations::SpinState, transform), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimatorState_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SpinState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.SpinState", options);
    type->fp_build_ = SpinState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))SpinState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))SpinState__Seek_fn;
    return type;
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2843
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :2852
void SpinState__Disable_fn(SpinState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    __this->degrees = 0.0;
    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[31/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2843
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval)
{
    *__retval = SpinState::New1(animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :2862
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"Invalid seek"*/], 1, ::STRINGS[1/*"/usr/local/...*/], 2866);
        return *__retval = true, void();
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = (__this->degrees + ((double)(interval_ * 360.0f) * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->degrees = ::g::Uno::Math::Mod(__this->degrees, 360.0);
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    uPtr(__this->transform)->Degrees((float)__this->degrees);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[31/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(strength_));
    return *__retval = done, void();
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [instance] :2843
void SpinState::ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    transform = ::g::Fuse::Rotation::New2();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), 3000);
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [static] :2843
SpinState* SpinState::New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    SpinState* obj1 = (SpinState*)uNew(SpinState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract class TrackAnimator :3151
// {
static void TrackAnimator_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::Animations::TrackProvider_typeof();
    type->SetFields(4,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _continuousProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _delayBack), 0,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _discreteProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDelayBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasEasingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _isDiscrete), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _vectorValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _weight), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _Duration), 0);
}

::g::Fuse::Animations::Animator_type* TrackAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Animator_typeof();
    options.FieldCount = 18;
    options.ObjectSize = sizeof(TrackAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.TrackAnimator", options);
    type->fp_build_ = TrackAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))TrackAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))TrackAnimator__GetDurationWithDelay_fn;
    return type;
}

// protected generated TrackAnimator() :3151
void TrackAnimator__ctor_2_fn(TrackAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :3155
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval)
{
    if (__this->_discreteProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_discreteProvider), ::TYPES[32/*Fuse.Animations.TrackProvider*/]), __this), void();
    else if (__this->_continuousProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_continuousProvider), ::TYPES[32/*Fuse.Animations.TrackProvider*/]), __this), void();

    return *__retval = 0, void();
}

// public double get_DelayBack() :3264
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DelayBack();
}

// public void set_DelayBack(double value) :3265
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value)
{
    __this->DelayBack(*value);
}

// public generated double get_Duration() :3240
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :3240
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :3249
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :3250
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :3218
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :3219
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :3229
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :3230
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, int* value)
{
    __this->EasingBack(*value);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :3165
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval)
{
    int dir_ = *dir;
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_discreteProvider), ::TYPES[32/*Fuse.Animations.TrackProvider*/]), __this, dir_);
    else if (__this->_continuousProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_continuousProvider), ::TYPES[32/*Fuse.Animations.TrackProvider*/]), __this, dir_);

    return *__retval = (((dir_ == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay()) + duration, void();
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) :3205
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval)
{
    *__retval = __this->GetProvider(*variant);
}

// internal bool get_HasBack() :3274
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval)
{
    *__retval = __this->HasBack();
}

// internal void MarkDiscrete() :3180
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this)
{
    __this->MarkDiscrete();
}

// public double get_Weight() :3358
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Weight();
}

// public void set_Weight(double value) :3359
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value)
{
    __this->Weight(*value);
}

// protected generated TrackAnimator() [instance] :3151
void TrackAnimator::ctor_2()
{
    _continuousProvider = (uObject*)::g::Fuse::Animations::EasingTrack::Singleton();
    _weight = 1.0;
    ctor_1();
}

// public double get_DelayBack() [instance] :3264
double TrackAnimator::DelayBack()
{
    return _hasDelayBack ? _delayBack : 0.0;
}

// public void set_DelayBack(double value) [instance] :3265
void TrackAnimator::DelayBack(double value)
{
    _delayBack = value;
    _hasDelayBack = true;
}

// public generated double get_Duration() [instance] :3240
double TrackAnimator::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :3240
void TrackAnimator::Duration(double value)
{
    _Duration = value;
}

// public double get_DurationBack() [instance] :3249
double TrackAnimator::DurationBack()
{
    return _hasDurationBack ? _durationBack : Duration();
}

// public void set_DurationBack(double value) [instance] :3250
void TrackAnimator::DurationBack(double value)
{
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :3218
int TrackAnimator::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :3219
void TrackAnimator::Easing(int value)
{
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :3229
int TrackAnimator::EasingBack()
{
    return _hasEasingBack ? _easingBack : _easing;
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :3230
void TrackAnimator::EasingBack(int value)
{
    _easingBack = value;
    _hasEasingBack = true;
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) [instance] :3205
uObject* TrackAnimator::GetProvider(int variant)
{
    uObject* ind1 = _discreteProvider;
    return (ind1 != NULL) ? ind1 : (uObject*)_continuousProvider;
}

// internal bool get_HasBack() [instance] :3274
bool TrackAnimator::HasBack()
{
    return (_hasDelayBack || _hasDurationBack) || _hasEasingBack;
}

// internal void MarkDiscrete() [instance] :3180
void TrackAnimator::MarkDiscrete()
{
    _discreteProvider = (uObject*)::g::Fuse::Animations::DiscreteSingleTrack::Singleton();
    _continuousProvider = NULL;
    _isDiscrete = true;
}

// public double get_Weight() [instance] :3358
double TrackAnimator::Weight()
{
    return _weight;
}

// public void set_Weight(double value) [instance] :3359
void TrackAnimator::Weight(double value)
{
    _weight = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract class TrackAnimatorState :3368
// {
static void TrackAnimatorState_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    type->SetFields(3,
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _continuousProvider), 0,
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _discreteProvider), 0,
        ::g::Fuse::Animations::TrackAnimator_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, Animator), 0);
}

TrackAnimatorState_type* TrackAnimatorState_typeof()
{
    static uSStrong<TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::AnimatorState_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TrackAnimatorState);
    options.TypeSize = sizeof(TrackAnimatorState_type);
    type = (TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TrackAnimatorState", options);
    type->fp_build_ = TrackAnimatorState_build;
    type->fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekTime_fn;
    type->fp_SeekValue = TrackAnimatorState__SeekValue_fn;
    return type;
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :3374
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// public double get_Duration() :3453
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Fuse.Animations.Easing get_Easing() :3458
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public bool get_IsBackward() :3448
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval)
{
    *__retval = __this->IsBackward();
}

// protected virtual void SeekObjectValue(object value, float strength) :3444
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength)
{
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :3384
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_continuousProvider), ::TYPES[16/*Fuse.Animations.ContinuousTrackProvider*/]), __this, progress_, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_discreteProvider), ::TYPES[33/*Fuse.Animations.DiscreteTrackProvider*/]), __this, progress_, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double elapsed, double interval, Fuse.Animations.SeekDirection dir, double strength) :3410
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, int* __retval)
{
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    double relTime;

    if (__this->IsBackward() && uPtr(__this->Animator)->HasBack())
        relTime = elapsed_ - ((__this->TotalDuration - uPtr(__this->Animator)->DelayBack()) - uPtr(__this->Animator)->DurationBack());
    else
        relTime = elapsed_ - uPtr(__this->Animator)->Delay();

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(__this->_continuousProvider), ::TYPES[16/*Fuse.Animations.ContinuousTrackProvider*/]), __this, relTime, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(__this->_discreteProvider), ::TYPES[33/*Fuse.Animations.DiscreteTrackProvider*/]), __this, relTime, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// protected virtual void SeekValue(float4 value, float strength) :3443
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :3374
void TrackAnimatorState::ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    ctor_(p, useVisual);
    Animator = animator;
    uObject* pr = uPtr(animator)->GetProvider(Variant);
    _continuousProvider = uAs<uObject*>(pr, ::TYPES[16/*Fuse.Animations.ContinuousTrackProvider*/]);
    _discreteProvider = uAs<uObject*>(pr, ::TYPES[33/*Fuse.Animations.DiscreteTrackProvider*/]);
}

// public double get_Duration() [instance] :3453
double TrackAnimatorState::Duration()
{
    return IsBackward() ? uPtr(Animator)->DurationBack() : uPtr(Animator)->Duration();
}

// public Fuse.Animations.Easing get_Easing() [instance] :3458
int TrackAnimatorState::Easing()
{
    return IsBackward() ? uPtr(Animator)->EasingBack() : uPtr(Animator)->Easing();
}

// public bool get_IsBackward() [instance] :3448
bool TrackAnimatorState::IsBackward()
{
    return Variant == 1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal abstract interface TrackProvider :3113
// {
uInterfaceType* TrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.TrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public abstract class TransformAnimator<TransformType> :3489
// {
static void TransformAnimator_build(uType* type)
{
    ::TYPES[34] = ::g::Fuse::Animations::TransformAnimatorState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::TransformAnimatorState_typeof()->MakeType(type->T(0)));
    type->SetFields(18,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Priority), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Target), 0);
}

TransformAnimator_type* TransformAnimator_typeof()
{
    static uSStrong<TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimator);
    options.TypeSize = sizeof(TransformAnimator_type);
    type = (TransformAnimator_type*)uClassType::New("Fuse.Animations.TransformAnimator`1", options);
    type->fp_build_ = TransformAnimator_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))TransformAnimator__CreateState_fn;
    return type;
}

// internal TransformAnimator() :3492
void TransformAnimator__ctor_3_fn(TransformAnimator* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :3590
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(TransformAnimator_typeof())->Precalced(0/*Fuse.Animations.TransformAnimatorState<TransformType>*/),
    };
    return *__retval = (::g::Fuse::Animations::TransformAnimatorState*)::g::Fuse::Animations::TransformAnimatorState::New1(__types[0], __this, p), void();
}

// public generated int get_Priority() :3586
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// public generated void set_Priority(int value) :3586
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value)
{
    __this->Priority(*value);
}

// public generated Fuse.Visual get_RelativeNode() :3578
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :3579
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public generated Fuse.Visual get_Target() :3583
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :3583
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float get_X() :3510
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :3511
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :3527
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :3528
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value)
{
    __this->Y(*value);
}

// internal TransformAnimator() [instance] :3492
void TransformAnimator::ctor_3()
{
    ctor_2();
    MixOp(1);
}

// public generated int get_Priority() [instance] :3586
int TransformAnimator::Priority()
{
    return _Priority;
}

// public generated void set_Priority(int value) [instance] :3586
void TransformAnimator::Priority(int value)
{
    _Priority = value;
}

// public generated Fuse.Visual get_RelativeNode() [instance] :3578
::g::Fuse::Visual* TransformAnimator::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :3579
void TransformAnimator::RelativeNode(::g::Fuse::Visual* value)
{
    _RelativeNode = value;
}

// public generated Fuse.Visual get_Target() [instance] :3583
::g::Fuse::Visual* TransformAnimator::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :3583
void TransformAnimator::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public float get_X() [instance] :3510
float TransformAnimator::X()
{
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :3511
void TransformAnimator::X(float value)
{
    _vectorValue.X = value;
}

// public float get_Y() [instance] :3527
float TransformAnimator::Y()
{
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :3528
void TransformAnimator::Y(float value)
{
    _vectorValue.Y = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class TransformAnimatorState<TransformType> :3596
// {
static void TransformAnimatorState_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Invalid seek");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[35] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[36] = ::g::Fuse::Transform_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _inSeek), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _lastStrength), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, _matAct), 0,
        ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::TransformAnimatorState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, mixHandle), 0,
        type->T(0), offsetof(::g::Fuse::Animations::TransformAnimatorState, transform), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 12;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(TransformAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TransformAnimatorState`1", options);
    type->fp_build_ = TransformAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))TransformAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))TransformAnimatorState__SeekValue_fn;
    return type;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3604
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :3617
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[31/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[36/*Fuse.Transform*/]))->remove_MatrixChanged(__this->_matAct);
    ::g::Fuse::Node::Unrelate(__this->Visual, __this->transform);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3604
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval)
{
    *__retval = TransformAnimatorState::New1(__type, animator, p);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) :3649
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore)
{
    __this->OnMatrixChanged(ignore);
}

// protected override sealed void SeekValue(float4 value, float strength) :3631
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"Invalid seek"*/], 1, ::STRINGS[1/*"/usr/local/...*/], 3635);
        return;
    }

    __this->_inSeek = true;
    uPtr(__this->Animator1)->Update(__this->Visual, __this->transform, value_);
    __this->_lastStrength = strength_;
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[31/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(__this->_lastStrength));
    __this->_inSeek = false;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [instance] :3604
void TransformAnimatorState::ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->T(0),
    };
    transform = (::g::Fuse::Transform*)__types[0]->New();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), uPtr(Animator1)->Priority());
    _matAct = uDelegate::New(::TYPES[35/*Uno.Action<Fuse.Transform>*/], (void*)TransformAnimatorState__OnMatrixChanged_fn, this);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[36/*Fuse.Transform*/]))->add_MatrixChanged(_matAct);
    ::g::Fuse::Node::Relate(Visual, transform);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) [instance] :3649
void TransformAnimatorState::OnMatrixChanged(::g::Fuse::Transform* ignore)
{
    if ((!_inSeek && (mixHandle != NULL)) && (transform != NULL))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(mixHandle), ::TYPES[31/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), transform, uCRef(_lastStrength));
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [static] :3604
TransformAnimatorState* TransformAnimatorState::New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState* obj1 = (TransformAnimatorState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// public sealed class TriggerAnimation :3909
// {
static void TriggerAnimation_build(uType* type)
{
    ::TYPES[37] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[38] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimation, _animators), 0,
        TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _backward), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _crossFadeDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasStretchDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasTimeMultiplier), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _playMode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _stretchDuration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _timeMultiplier), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, TimeChanged1), 0);
}

uType* TriggerAnimation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimation", options);
    type->fp_build_ = TriggerAnimation_build;
    type->fp_ctor_ = (void*)TriggerAnimation__New1_fn;
    return type;
}

// public generated TriggerAnimation() :3909
void TriggerAnimation__ctor__fn(TriggerAnimation* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :3915
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_Backward() :3930
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval)
{
    *__retval = __this->Backward();
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) :3936
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->Backward(value);
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) :3947
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Visual* elm, uArray** __retval)
{
    *__retval = __this->CreateAnimatorsState(*variant, elm);
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) :4081
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Visual* node, int* variant, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->CreatePlayer(node, *variant);
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) :4069
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval)
{
    *__retval = __this->CreateState(elm);
}

// public double get_CrossFadeDuration() :4014
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :4015
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) :3962
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetAnimatorsDuration(*variant);
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) :4024
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetTimeMultiplier(*variant);
}

// public bool get_HasAnimators() :3924
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// public bool get_HasBackward() :3944
void TriggerAnimation__get_HasBackward_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasBackward();
}

// internal bool get_HasDirectionVariant() :4049
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasDirectionVariant();
}

// public generated TriggerAnimation New() :3909
void TriggerAnimation__New1_fn(TriggerAnimation** __retval)
{
    *__retval = TriggerAnimation::New1();
}

// private void OnTimeChanged() :4018
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this)
{
    __this->OnTimeChanged();
}

// public Fuse.Animations.PlayMode get_PlayMode() :4097
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :4098
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int* value)
{
    __this->PlayMode(*value);
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) :4074
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval)
{
    *__retval = __this->RestrictVariant(*variant);
}

// internal generated void add_TimeChanged(Uno.Action value) :4045
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->add_TimeChanged(value);
}

// internal generated void remove_TimeChanged(Uno.Action value) :4045
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->remove_TimeChanged(value);
}

// public double get_TimeMultiplier() :3985
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :3986
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// public generated TriggerAnimation() [instance] :3909
void TriggerAnimation::ctor_()
{
    _crossFadeDuration = 0.5;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :3915
uObject* TriggerAnimation::Animators()
{
    if (_animators == NULL)
        _animators = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[38/*Uno.Collections.List<Fuse.Animations.Animator>*/]));

    return (uObject*)_animators;
}

// public Fuse.Animations.TriggerAnimation get_Backward() [instance] :3930
TriggerAnimation* TriggerAnimation::Backward()
{
    if (_backward == NULL)
        _backward = TriggerAnimation::New1();

    return _backward;
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) [instance] :3936
void TriggerAnimation::Backward(TriggerAnimation* value)
{
    _backward = value;
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) [instance] :3947
uArray* TriggerAnimation::CreateAnimatorsState(int variant, ::g::Fuse::Visual* elm)
{
    ::g::Fuse::Animations::CreateStateParams* collection1;
    ::g::Fuse::Animations::Animator* ret3;
    collection1 = ::g::Fuse::Animations::CreateStateParams::New1();
    uPtr(collection1)->Variant = variant;
    uPtr(collection1)->TotalDuration = GetAnimatorsDuration(variant);
    uPtr(collection1)->Attached = elm;
    ::g::Fuse::Animations::CreateStateParams* csp = collection1;

    if (_animators == NULL)
        return uArray::New(::TYPES[37/*Fuse.Animations.AnimatorState[]*/], 0);

    uArray* state = uArray::New(::TYPES[37/*Fuse.Animations.AnimatorState[]*/], uPtr(_animators)->Count());

    for (int i = 0; i < uPtr(_animators)->Count(); ++i)
        uPtr(state)->Strong< ::g::Fuse::Animations::AnimatorState*>(i) = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret3), ret3))->CreateState(csp);

    return state;
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) [instance] :4081
::g::Fuse::Animations::Player* TriggerAnimation::CreatePlayer(::g::Fuse::Visual* node, int variant)
{
    variant = RestrictVariant(variant);

    if (variant == 0)
        return ::g::Fuse::Animations::Player::New1(node, this, 0, PlayMode());

    if (_backward != NULL)
        return ::g::Fuse::Animations::Player::New1(node, _backward, 0, PlayMode());

    return ::g::Fuse::Animations::Player::New1(node, this, 1, PlayMode());
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) [instance] :4069
::g::Fuse::Animations::TriggerAnimationState* TriggerAnimation::CreateState(::g::Fuse::Visual* elm)
{
    return ::g::Fuse::Animations::TriggerAnimationState::New1(this, elm);
}

// public double get_CrossFadeDuration() [instance] :4014
double TriggerAnimation::CrossFadeDuration()
{
    return _crossFadeDuration;
}

// public void set_CrossFadeDuration(double value) [instance] :4015
void TriggerAnimation::CrossFadeDuration(double value)
{
    _crossFadeDuration = value;
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) [instance] :3962
double TriggerAnimation::GetAnimatorsDuration(int variant)
{
    ::g::Fuse::Animations::Animator* ret4;

    if ((variant == 1) && (_backward != NULL))
        return uPtr(_backward)->GetAnimatorsDuration(0);

    if (_animators == NULL)
        return 0.0;

    double max = 0.0;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        double q = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret4), ret4))->GetDurationWithDelay(variant);
        max = ::g::Uno::Math::Max(max, q);
    }

    return max;
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) [instance] :4024
double TriggerAnimation::GetTimeMultiplier(int variant)
{
    if (_hasStretchDuration)
    {
        double dur = GetAnimatorsDuration(variant);

        if (_stretchDuration < 9.9999997473787516e-06)
            return 1.0;

        double mult = dur / _stretchDuration;

        if (_hasTimeMultiplier)
            mult = mult * TimeMultiplier();

        return mult;
    }

    if (_hasTimeMultiplier)
        return TimeMultiplier();

    return 1.0;
}

// public bool get_HasAnimators() [instance] :3924
bool TriggerAnimation::HasAnimators()
{
    return (_animators != NULL) && (uPtr(_animators)->Count() > 0);
}

// public bool get_HasBackward() [instance] :3944
bool TriggerAnimation::HasBackward()
{
    return _backward != NULL;
}

// internal bool get_HasDirectionVariant() [instance] :4049
bool TriggerAnimation::HasDirectionVariant()
{
    ::g::Fuse::Animations::Animator* ret5;

    if (_animators == NULL)
        return false;

    bool has = false;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret5), ret5))->AnimatorVariant();

        if (v == 2)
            has = true;

        if (v == 1)
            return false;
    }

    return has;
}

// private void OnTimeChanged() [instance] :4018
void TriggerAnimation::OnTimeChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TimeChanged1, NULL))
        uPtr(TimeChanged1)->InvokeVoid();
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :4097
int TriggerAnimation::PlayMode()
{
    return _playMode;
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :4098
void TriggerAnimation::PlayMode(int value)
{
    _playMode = value;
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) [instance] :4074
int TriggerAnimation::RestrictVariant(int variant)
{
    if (!HasDirectionVariant() && (_backward == NULL))
        return 0;

    return variant;
}

// internal generated void add_TimeChanged(Uno.Action value) [instance] :4045
void TriggerAnimation::add_TimeChanged(uDelegate* value)
{
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TimeChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// internal generated void remove_TimeChanged(Uno.Action value) [instance] :4045
void TriggerAnimation::remove_TimeChanged(uDelegate* value)
{
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TimeChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// public double get_TimeMultiplier() [instance] :3985
double TriggerAnimation::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void set_TimeMultiplier(double value) [instance] :3986
void TriggerAnimation::TimeMultiplier(double value)
{
    if ((_timeMultiplier == value) && _hasTimeMultiplier)
        return;

    _timeMultiplier = value;
    _hasTimeMultiplier = true;
    OnTimeChanged();
}

// public generated TriggerAnimation New() [static] :3909
TriggerAnimation* TriggerAnimation::New1()
{
    TriggerAnimation* obj2 = (TriggerAnimation*)uNew(TriggerAnimation_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.38.6/$.uno
// ----------------------------------------------------------

// internal sealed class TriggerAnimationState :4109
// {
static void TriggerAnimationState_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::Player_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(TriggerAnimationState_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _backPlayer), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayer), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayerVariant), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _forePlayer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _prevProgress), 0,
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _Animation), 0);
}

TriggerAnimationState_type* TriggerAnimationState_typeof()
{
    static uSStrong<TriggerAnimationState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TriggerAnimationState);
    options.TypeSize = sizeof(TriggerAnimationState_type);
    type = (TriggerAnimationState_type*)uClassType::New("Fuse.Animations.TriggerAnimationState", options);
    type->fp_build_ = TriggerAnimationState_build;
    type->interface0.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface0.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface0.fp_OnStable = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnStable_fn;
    return type;
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :4114
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    __this->ctor_(animation, node);
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() :4111
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :4111
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_CurrentAnimatorsDuration() :4305
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->CurrentAnimatorsDuration();
}

// public void Dispose() :4125
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this)
{
    __this->Dispose();
}

// private void Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object s) :4169
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s)
{
    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnPlaybackDone(uInterface(uPtr(__this->Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), __this);
}

// private void Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object s) :4158
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s)
{
    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(__this->Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), __this);

    __this->_prevProgress = __this->Progress();
}

// private void Fuse.Animations.IPlayerFeedback.OnStable(object s) :4178
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnStable_fn(TriggerAnimationState* __this, uObject* s)
{
    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnStable(uInterface(uPtr(__this->Feedback), ::TYPES[26/*Fuse.Animations.IPlayerFeedback*/]), __this);
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :4316
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetCurrentPlayer(*tendTo, *flags);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) :4197
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetPlayer(*variant, *noFade);
}

// public bool get_IsStable() :4189
void TriggerAnimationState__get_IsStable_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :4114
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node, TriggerAnimationState** __retval)
{
    *__retval = TriggerAnimationState::New1(animation, node);
}

// private void OnTimeChanged() :4143
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this)
{
    __this->OnTimeChanged();
}

// public void PlayEnd(bool on) :4277
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on)
{
    __this->PlayEnd(*on);
}

// public void PlayOff() :4265
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this)
{
    __this->PlayOff();
}

// public void PlayOn() :4271
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this)
{
    __this->PlayOn();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :4343
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags)
{
    __this->PlayToProgress(*progress, *tendTo, *flags);
}

// public double get_PreviousProgress() :4297
void TriggerAnimationState__get_PreviousProgress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// public double get_Progress() :4287
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public bool get_ProgressFullOff() :4314
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOff();
}

// public bool get_ProgressFullOn() :4313
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOn();
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :4333
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags)
{
    __this->SeekProgress(*newProgress, *tendTo, *flags);
}

// private void TrackProgress(Fuse.Animations.Player player) :4152
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player)
{
    __this->TrackProgress(player);
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [instance] :4114
void TriggerAnimationState::ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    Animation(animation);
    uPtr(Animation())->add_TimeChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    _node = node;
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :4111
::g::Fuse::Animations::TriggerAnimation* TriggerAnimationState::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :4111
void TriggerAnimationState::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_CurrentAnimatorsDuration() [instance] :4305
double TriggerAnimationState::CurrentAnimatorsDuration()
{
    if (_curPlayer == NULL)
        return uPtr(Animation())->GetAnimatorsDuration(0);

    return uPtr(_curPlayer)->AnimatorsDuration();
}

// public void Dispose() [instance] :4125
void TriggerAnimationState::Dispose()
{
    if (_forePlayer != NULL)
    {
        uPtr(_forePlayer)->Disable();
        _forePlayer = NULL;
    }

    if (_backPlayer != NULL)
    {
        uPtr(_backPlayer)->Disable();
        _backPlayer = NULL;
    }

    _curPlayer = NULL;
    _node = NULL;
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :4316
::g::Fuse::Animations::Player* TriggerAnimationState::GetCurrentPlayer(int tendTo, int flags)
{
    if (!((flags & 1) == 1))
    {
        if (((_curPlayer != NULL) && (uPtr(_curPlayer)->Progress() < 1.0)) && (uPtr(_curPlayer)->Progress() > 0.0))
            return _curPlayer;
    }

    return uAs< ::g::Fuse::Animations::Player*>(GetPlayer(tendTo, false), ::TYPES[39/*Fuse.Animations.Player*/]);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) [instance] :4197
::g::Fuse::Animations::Player* TriggerAnimationState::GetPlayer(int variant, bool noFade)
{
    ::g::Fuse::Animations::Player* cur, *prev;
    variant = uPtr(Animation())->RestrictVariant(variant);

    if ((_curPlayer != NULL) && (_curPlayerVariant == variant))
        return _curPlayer;

    bool isNew = false;

    if (variant == 0)
    {
        if (_forePlayer == NULL)
        {
            _forePlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            isNew = true;
        }

        cur = _forePlayer;
        prev = _backPlayer;
    }
    else
    {
        if (_backPlayer == NULL)
        {
            _backPlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            uPtr(_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = _backPlayer;
        prev = _forePlayer;
    }

    if (isNew)
        TrackProgress(cur);

    _curPlayer = cur;
    _curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = uPtr(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        uPtr(cur)->SeekProgress(prevProgress, false);

        if (isNew)
            uPtr(cur)->Strength(0.0);

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            uPtr(prev)->Strength(0.0);
            uPtr(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::g::Uno::Math::Min(remainTime, uPtr(Animation())->CrossFadeDuration());
            uPtr(cur)->FadeIn(fadeTime);
            uPtr(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

// public bool get_IsStable() [instance] :4189
bool TriggerAnimationState::IsStable()
{
    if (_curPlayer == NULL)
        return true;

    return uPtr(_curPlayer)->IsStable();
}

// private void OnTimeChanged() [instance] :4143
void TriggerAnimationState::OnTimeChanged()
{
    if (_forePlayer != NULL)
        uPtr(_forePlayer)->TimeChanged();

    if (_backPlayer != NULL)
        uPtr(_backPlayer)->TimeChanged();
}

// public void PlayEnd(bool on) [instance] :4277
void TriggerAnimationState::PlayEnd(bool on)
{
    if (on)
        PlayOn();
    else
        PlayOff();
}

// public void PlayOff() [instance] :4265
void TriggerAnimationState::PlayOff()
{
    ::g::Fuse::Animations::Player* p = GetPlayer(1, false);
    uPtr(p)->PlayToStart();
}

// public void PlayOn() [instance] :4271
void TriggerAnimationState::PlayOn()
{
    ::g::Fuse::Animations::Player* p = GetPlayer(0, false);
    uPtr(p)->PlayToEnd();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :4343
void TriggerAnimationState::PlayToProgress(double progress, int tendTo, int flags)
{
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);
    uPtr(player)->PlayToProgress(progress);
}

// public double get_PreviousProgress() [instance] :4297
double TriggerAnimationState::PreviousProgress()
{
    return _prevProgress;
}

// public double get_Progress() [instance] :4287
double TriggerAnimationState::Progress()
{
    if (_curPlayer != NULL)
        return uPtr(_curPlayer)->Progress();

    return 0.0;
}

// public bool get_ProgressFullOff() [instance] :4314
bool TriggerAnimationState::ProgressFullOff()
{
    return Progress() <= 0.0;
}

// public bool get_ProgressFullOn() [instance] :4313
bool TriggerAnimationState::ProgressFullOn()
{
    return Progress() >= 1.0;
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :4333
void TriggerAnimationState::SeekProgress(double newProgress, int tendTo, int flags)
{
    bool bypassUpdate = (flags & 2) == 2;
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);

    if (bypassUpdate)
        _prevProgress = newProgress;

    uPtr(player)->SeekProgress(newProgress, !bypassUpdate);
}

// private void TrackProgress(Fuse.Animations.Player player) [instance] :4152
void TriggerAnimationState::TrackProgress(::g::Fuse::Animations::Player* player)
{
    uPtr(player)->Feedback = (uObject*)this;
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [static] :4114
TriggerAnimationState* TriggerAnimationState::New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    TriggerAnimationState* obj1 = (TriggerAnimationState*)uNew(TriggerAnimationState_typeof());
    obj1->ctor_(animation, node);
    return obj1;
}
// }

}}} // ::g::Fuse::Animations
