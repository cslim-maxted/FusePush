// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.AnyChangeObserver.h>
#include <Fuse.Reactive.BindAttempt.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.EventBinding.CallClosure.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.JavaScript.EvaluateDataContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.PathObserver.h>
#include <Fuse.Reactive.RootableScriptModule.h>
#include <Fuse.Reactive.SegmentObserver.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.ClassInstance.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.ListMirror.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ObjectMirror.h>
#include <Fuse.Scripting.Observable.h>
#include <Fuse.Scripting.Observable.Subscription.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[45];
static uType* TYPES[39];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class AnyChangeObserver :11
// {
static void AnyChangeObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(AnyChangeObserver_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _anyChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _hasInitialValue), 0);
}

AnyChangeObserver_type* AnyChangeObserver_typeof()
{
    static uSStrong<AnyChangeObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AnyChangeObserver);
    options.TypeSize = sizeof(AnyChangeObserver_type);
    type = (AnyChangeObserver_type*)uClassType::New("Fuse.Reactive.AnyChangeObserver", options);
    type->fp_build_ = AnyChangeObserver_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))AnyChangeObserver__OnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))AnyChangeObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))AnyChangeObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))AnyChangeObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))AnyChangeObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnInsertAt_fn;
    return type;
}

// public AnyChangeObserver(Uno.Action anyChange) :16
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange)
{
    __this->ctor_(anyChange);
}

// public AnyChangeObserver New(Uno.Action anyChange) :16
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval)
{
    *__retval = AnyChangeObserver::New1(anyChange);
}

// public void OnAdd(object addedValue) :50
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnClear() :21
void AnyChangeObserver__OnClear_fn(AnyChangeObserver* __this)
{
    __this->OnClear();
}

// public void OnInsertAt(int index, object value) :62
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) :27
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :33
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :56
void AnyChangeObserver__OnRemoveAt_fn(AnyChangeObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :44
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// public AnyChangeObserver(Uno.Action anyChange) [instance] :16
void AnyChangeObserver::ctor_(uDelegate* anyChange)
{
    _anyChange = anyChange;
}

// public void OnAdd(object addedValue) [instance] :50
void AnyChangeObserver::OnAdd(uObject* addedValue)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnClear() [instance] :21
void AnyChangeObserver::OnClear()
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnInsertAt(int index, object value) [instance] :62
void AnyChangeObserver::OnInsertAt(int index, uObject* value)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) [instance] :27
void AnyChangeObserver::OnNewAll(::g::Fuse::Scripting::ListMirror* values)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAt(int index, object newValue) [instance] :33
void AnyChangeObserver::OnNewAt(int index, uObject* newValue)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnRemoveAt(int index) [instance] :56
void AnyChangeObserver::OnRemoveAt(int index)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnSet(object value) [instance] :44
void AnyChangeObserver::OnSet(uObject* value)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public AnyChangeObserver New(Uno.Action anyChange) [static] :16
AnyChangeObserver* AnyChangeObserver::New1(uDelegate* anyChange)
{
    AnyChangeObserver* obj1 = (AnyChangeObserver*)uNew(AnyChangeObserver_typeof());
    obj1->ctor_(anyChange);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class BindAttempt :125
// {
static void BindAttempt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _cur), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _currentData), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _currentDataPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _isDisposed), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _observedNodes), 0,
        ::g::Fuse::Reactive::PathObserver_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _po), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _segmentObservers), 0);
}

uType* BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.BindAttempt", options);
    type->fp_build_ = BindAttempt_build;
    return type;
}

// public BindAttempt(Fuse.Reactive.PathObserver po) :134
void BindAttempt__ctor__fn(BindAttempt* __this, ::g::Fuse::Reactive::PathObserver* po)
{
    __this->ctor_(po);
}

// public void Dispose() :206
void BindAttempt__Dispose_fn(BindAttempt* __this)
{
    __this->Dispose();
}

// internal void Fail() :187
void BindAttempt__Fail_fn(BindAttempt* __this)
{
    __this->Fail();
}

// private bool FindData() :162
void BindAttempt__FindData_fn(BindAttempt* __this, bool* __retval)
{
    *__retval = __this->FindData();
}

// private bool get_HasData() :159
void BindAttempt__get_HasData_fn(BindAttempt* __this, bool* __retval)
{
    *__retval = __this->HasData();
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) :134
void BindAttempt__New1_fn(::g::Fuse::Reactive::PathObserver* po, BindAttempt** __retval)
{
    *__retval = BindAttempt::New1(po);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :199
void BindAttempt__OnDataContextChanged_fn(BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// internal void Restart() :193
void BindAttempt__Restart_fn(BindAttempt* __this)
{
    __this->Restart();
}

// private object TakeData() :152
void BindAttempt__TakeData_fn(BindAttempt* __this, uObject** __retval)
{
    *__retval = __this->TakeData();
}

// private void TryBind() :141
void BindAttempt__TryBind_fn(BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.PathObserver po) [instance] :134
void BindAttempt::ctor_(::g::Fuse::Reactive::PathObserver* po)
{
    _currentData = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<object>*/]));
    _observedNodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Node>*/]));
    _segmentObservers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Reactive.SegmentObserver>*/]));
    _po = po;
    _cur = uPtr(po)->Node;
    TryBind();
}

// public void Dispose() [instance] :206
void BindAttempt::Dispose()
{
    ::g::Fuse::Reactive::SegmentObserver* ret2;
    ::g::Fuse::Node* ret3;

    if (_isDisposed)
        return;

    _isDisposed = true;

    for (int i = 0; i < uPtr(_segmentObservers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_segmentObservers), uCRef<int>(i), &ret2), ret2))->Dispose();

    uPtr(_segmentObservers)->Clear();
    _segmentObservers = NULL;

    for (int i1 = 0; i1 < uPtr(_observedNodes)->Count(); i1++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observedNodes), uCRef<int>(i1), &ret3), ret3))->remove_DataContextChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    uPtr(_observedNodes)->Clear();
    _observedNodes = NULL;
    uPtr(_currentData)->Clear();
    _currentData = NULL;
}

// internal void Fail() [instance] :187
void BindAttempt::Fail()
{
    if (_isDisposed)
        return;

    TryBind();
}

// private bool FindData() [instance] :162
bool BindAttempt::FindData()
{
    if (HasData())
        return true;

    while (_cur != NULL)
    {
        uPtr(_currentData)->Clear();
        _currentDataPosition = 0;

        if (_cur != uPtr(_po)->Node)
            uPtr(_cur)->AppendSubtreeData(_currentData);

        if (uPtr(_cur)->ContextParent() != NULL)
            uPtr(uPtr(_cur)->ContextParent())->GetImplicitDataForChild(_cur, _currentData);

        ::g::Uno::Collections::List__Add_fn(uPtr(_observedNodes), _cur);
        uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));
        _cur = uPtr(_cur)->ContextParent();

        if (HasData())
            return true;
    }

    return false;
}

// private bool get_HasData() [instance] :159
bool BindAttempt::HasData()
{
    return _currentDataPosition < uPtr(_currentData)->Count();
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :199
void BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    Restart();
}

// internal void Restart() [instance] :193
void BindAttempt::Restart()
{
    if (_isDisposed)
        return;

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::PathObserver__RestartBinding_fn, uPtr(_po)));
}

// private object TakeData() [instance] :152
uObject* BindAttempt::TakeData()
{
    uObject* ret4;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_currentData), uCRef<int>(_currentDataPosition++), &ret4), ret4);
}

// private void TryBind() [instance] :141
void BindAttempt::TryBind()
{
    if (FindData())
    {
        uObject* data = TakeData();
        ::g::Fuse::Reactive::SegmentObserver* so = ::g::Fuse::Reactive::SegmentObserver::New1(uPtr(_po)->Binding, this);
        so->Init(data, uPtr(_po)->Path);
        ::g::Uno::Collections::List__Add_fn(uPtr(_segmentObservers), so);
    }
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) [static] :134
BindAttempt* BindAttempt::New1(::g::Fuse::Reactive::PathObserver* po)
{
    BindAttempt* obj1 = (BindAttempt*)uNew(BindAttempt_typeof());
    obj1->ctor_(po);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// private sealed class EventBinding.CallClosure :1135
// {
static void EventBinding__CallClosure_build(uType* type)
{
    ::STRINGS[0] = uString::Const("node");
    ::STRINGS[1] = uString::Const("data");
    ::STRINGS[2] = uString::Const("sender");
    ::STRINGS[3] = uString::Const("JavaScript call error");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno");
    ::STRINGS[5] = uString::Const("Call");
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[8] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[9] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[10] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[11] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventBinding__CallClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _data), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _sender), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, Function), 0);
}

EventBinding__CallClosure_type* EventBinding__CallClosure_typeof()
{
    static uSStrong<EventBinding__CallClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventBinding__CallClosure);
    options.TypeSize = sizeof(EventBinding__CallClosure_type);
    type = (EventBinding__CallClosure_type*)uClassType::New("Fuse.Reactive.EventBinding.CallClosure", options);
    type->fp_build_ = EventBinding__CallClosure_build;
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))EventBinding__CallClosure__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))EventBinding__CallClosure__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventBinding__CallClosure__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventBinding__CallClosure__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventBinding__CallClosure__AddObject_fn;
    return type;
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) :1144
void EventBinding__CallClosure__ctor__fn(EventBinding__CallClosure* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// public void AddBool(string key, bool value) :1200
void EventBinding__CallClosure__AddBool_fn(EventBinding__CallClosure* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :1195
void EventBinding__CallClosure__AddDouble_fn(EventBinding__CallClosure* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :1190
void EventBinding__CallClosure__AddInt_fn(EventBinding__CallClosure* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :1179
void EventBinding__CallClosure__AddObject_fn(EventBinding__CallClosure* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :1185
void EventBinding__CallClosure__AddString_fn(EventBinding__CallClosure* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public void Call() :1159
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) :1144
void EventBinding__CallClosure__New1_fn(uObject* args, uObject* sender, EventBinding__CallClosure** __retval)
{
    *__retval = EventBinding__CallClosure::New1(args, sender);
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) [instance] :1144
void EventBinding__CallClosure::ctor_(uObject* args, uObject* sender)
{
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[5/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = ::g::Fuse::Scripting::ValueMirror::Unbox(uPtr(_node)->GetFirstData());

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[6/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// public void AddBool(string key, bool value) [instance] :1200
void EventBinding__CallClosure::AddBool(uString* key, bool value)
{
    AddObject(key, uBox(::TYPES[15/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :1195
void EventBinding__CallClosure::AddDouble(uString* key, double value)
{
    AddObject(key, uBox(::TYPES[14/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :1190
void EventBinding__CallClosure::AddInt(uString* key, int value)
{
    AddObject(key, uBox(::TYPES[14/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :1179
void EventBinding__CallClosure::AddObject(uString* key, uObject* value)
{
    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->Unwrap(value));
}

// public void AddString(string key, string value) [instance] :1185
void EventBinding__CallClosure::AddString(uString* key, uString* value)
{
    AddObject(key, value);
}

// public void Call() [instance] :1159
void EventBinding__CallClosure::Call()
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (_node != NULL)
        uPtr(obj)->Item(::STRINGS[0/*"node"*/], uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->Unwrap(_node));

    if (_data != NULL)
        uPtr(obj)->Item(::STRINGS[1/*"data"*/], _data);

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(_sender), NULL))
        uPtr(obj)->Item(::STRINGS[2/*"sender"*/], uBox(::TYPES[23/*Uno.UX.Selector*/], _sender));

    if (_args != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_args), &ret3), ret3); enum1.MoveNext(::TYPES[8/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = enum1.Current(::TYPES[8/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            uPtr(obj)->Item(arg.Key(::TYPES[9/*Uno.Collections.KeyValuePair<string, object>*/]), arg.Value(::TYPES[9/*Uno.Collections.KeyValuePair<string, object>*/]));
        }

    try
    {
        uPtr(Function)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, obj));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[10/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[3/*"JavaScript ...*/], ex, this, ::STRINGS[4/*"/usr/local/...*/], 1175, ::STRINGS[5/*"Call"*/]);
        }
        else throw __t;
    }
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) [static] :1144
EventBinding__CallClosure* EventBinding__CallClosure::New1(uObject* args, uObject* sender)
{
    EventBinding__CallClosure* obj2 = (EventBinding__CallClosure*)uNew(EventBinding__CallClosure_typeof());
    obj2->ctor_(args, sender);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/fusejs/$.uno
// ---------------------------------------------------------------

// internal static class Console :84
// {
static void Console_build(uType* type)
{
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/fusejs/$.uno");
    ::STRINGS[7] = uString::Const("null");
    ::STRINGS[8] = uString::Const("\"");
    ::STRINGS[9] = uString::Const("function");
    ::STRINGS[10] = uString::Const("Object");
    ::STRINGS[11] = uString::Const("");
    ::STRINGS[12] = uString::Const(": ");
    ::STRINGS[13] = uString::Const("Array[");
    ::STRINGS[14] = uString::Const("]");
    ::STRINGS[15] = uString::Const("  ");
    ::STRINGS[16] = uString::Const("log");
    ::STRINGS[17] = uString::Const("dir");
    ::STRINGS[18] = uString::Const("console");
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[15] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = ::g::Uno::String_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :105
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :117
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :186
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :86
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :95
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :105
uObject* Console::Dir(uArray* args)
{
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[6/*"/usr/local/...*/], 113);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :117
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[7/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[12/*int*/]) || uIs(obj, ::TYPES[13/*float*/])) || uIs(obj, ::TYPES[14/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[15/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[16/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[8/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[17/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[9/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[18/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[18/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[10/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*""*/], k), ::STRINGS[12/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[19/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[19/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[13/*"Array["*/], uBox<int>(::TYPES[12/*int*/], uPtr(a)->Length())), ::STRINGS[14/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[11/*""*/], uBox<int>(::TYPES[12/*int*/], i)), ::STRINGS[12/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :186
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[15/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :86
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[16/*"log"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[17/*"dir"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[18/*"console"*/], console);
}

// private static object Log(object[] args) [static] :95
uObject* Console::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[7/*"null"*/], 1, ::STRINGS[6/*"/usr/local/...*/], 99);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// public abstract class ContextBinding :8
// {
static void ContextBinding_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    type->SetFields(1,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _Key), 0);
}

ContextBinding_type* ContextBinding_typeof()
{
    static uSStrong<ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContextBinding);
    options.TypeSize = sizeof(ContextBinding_type);
    type = (ContextBinding_type*)uClassType::New("Fuse.Reactive.ContextBinding", options);
    type->fp_build_ = ContextBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnUnrooted_fn;
    return type;
}

// protected ContextBinding(string key) :13
void ContextBinding__ctor_1_fn(ContextBinding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :11
void ContextBinding__get_Key_fn(ContextBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :11
void ContextBinding__set_Key_fn(ContextBinding* __this, uString* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ContextBinding__OnRooted_fn(ContextBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::PathObserver::New1(__this, __this->Parent(), __this->Key());
}

// protected override void OnUnrooted() :26
void ContextBinding__OnUnrooted_fn(ContextBinding* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[21/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// protected ContextBinding(string key) [instance] :13
void ContextBinding::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :11
uString* ContextBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :11
void ContextBinding::Key(uString* value)
{
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// public class DataBinding<T> :178
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Cannot bind '");
    ::STRINGS[20] = uString::Const("' to property '");
    ::STRINGS[21] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[22] = uString::Const(".");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno");
    ::STRINGS[23] = uString::Const("InvalidListOperation");
    ::STRINGS[24] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[25] = uString::Const("number");
    ::STRINGS[26] = uString::Const("string");
    ::STRINGS[27] = uString::Const("value that can be converted to type ");
    ::TYPES[22] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[23] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[16] = ::g::Uno::String_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::Marshal_typeof();
    ::TYPES[25] = ::g::Uno::Exception_typeof();
    ::TYPES[26] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[27] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface2));
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _hasOriginalValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _isTwoWay), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Scripting::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ContextBinding_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_PushValue = DataBinding__PushValue_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :184
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private static bool Acceptor(object obj) :383
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval)
{
    *__retval = DataBinding::Acceptor(__type, obj);
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :282
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :219
void DataBinding__FuseScriptingIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnClear() :197
void DataBinding__FuseScriptingIObserverOnClear_fn(DataBinding* __this)
{
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :245
void DataBinding__FuseScriptingIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :234
void DataBinding__FuseScriptingIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    if (uPtr(values)->Length() > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :224
void DataBinding__FuseScriptingIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :240
void DataBinding__FuseScriptingIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :202
void DataBinding__FuseScriptingIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :214
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :184
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override sealed void NewValue(object value) :297
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[22/*Fuse.Scripting.Observable*/]))
    {
        ::g::Fuse::Scripting::Observable* obs = uCast< ::g::Fuse::Scripting::Observable*>(value, ::TYPES[22/*Fuse.Scripting.Observable*/]);
        __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :253
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Reactive::ContextBinding__OnRooted_fn(__this);

    if (!__this->_hasOriginalValue)
    {
        __this->_originalValue() = (uPtr(__this->Target())->Get_ex(&ret3), ret3);
        __this->_hasOriginalValue = true;
    }

    if (uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :266
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);

    if (uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    uPtr(__this->Target())->Set_ex(uT(__this->__type->GetBase(DataBinding_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(DataBinding_typeof())->T(0)->ValueSize)), (uObject*)__this);
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
}

// protected virtual void PushValue(object newValue) :326
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    if (__this->Parent() == NULL)
        return;

    __this->_currentValue = newValue;

    if (__this->TryPushAsValue(newValue))
        return;
    else if (__this->TryPushAsName(newValue))
        return;
    else
        __this->TryPushAsMarshalledValue(newValue);
}

// public generated Uno.UX.Property<T> get_Target() :181
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :181
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :376
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(__type, newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :388
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :349
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :337
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :207
void DataBinding__TypeToJSName_fn(uType* __type, uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(__type, t);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :287
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((__this->_subscription != NULL) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
        uPtr(__this->_subscription)->SetExclusive(uBoxPtr(__types[0], (uPtr(__this->Target())->Get_ex(&ret5), ret5)));
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :184
void DataBinding::ctor_2(::g::Uno::UX::Property1* target, uString* key)
{
    _isTwoWay = true;
    ctor_1(key);
    Target(target);
}

// private void InvalidListOperation() [instance] :214
void DataBinding::InvalidListOperation()
{
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[19/*"Cannot bind '"*/], Key()), ::STRINGS[20/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[21/*"'. The obse...*/]), DataBinding::TypeToJSName(__type->GetBase(DataBinding_typeof()), uPtr(Target())->PropertyType())), ::STRINGS[22/*"."*/]), this, ::STRINGS[4/*"/usr/local/...*/], 216, ::STRINGS[23/*"InvalidList...*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :181
::g::Uno::UX::Property1* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :181
void DataBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :388
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(0/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret4;

    if ((::g::Fuse::Scripting::Marshal__TryConvertTo1_fn(__types[1], newValue, &value, &ret4), ret4))
    {
        try
        {
            uPtr(Target())->Set_ex(value, (uObject*)this);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Fuse::Diagnostics::UserError(uPtr(e)->ToString(), Target(), ::STRINGS[4/*"/usr/local/...*/], 399, ::STRINGS[24/*"TryPushAsMa...*/]);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :349
bool DataBinding::TryPushAsName(uObject* newValue)
{
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(__type->GetBase(DataBinding_typeof()), newValue);

    if (!name.IsNull())
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[26/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, NULL, __type->GetBase(DataBinding_typeof())));

        if (k != NULL)
        {
            uPtr(Target())->Set_ex(uUnboxAny(__type->GetBase(DataBinding_typeof())->T(0), k), (uObject*)this);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(__type->GetBase(DataBinding_typeof())->T(0))) && !::g::Fuse::Scripting::Marshal::CanConvertClass(__type->GetBase(DataBinding_typeof())->T(0)))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :337
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)this);
        uPtr(Target())->Set_ex(uUnboxAny(__types[0], newValue), (uObject*)this);
        return true;
    }

    return false;
}

// private static bool Acceptor(object obj) [static] :383
bool DataBinding::Acceptor(uType* __type, uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    return uIs(obj, __types[0]);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :184
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :376
::g::Uno::UX::Selector DataBinding::ToSelector(uType* __type, uObject* newValue)
{
    return uIs(newValue, ::TYPES[23/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[23/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[16/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[16/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :207
uString* DataBinding::TypeToJSName(uType* __type, uType* t)
{
    if ((::g::Uno::Type::op_Equality(t, ::TYPES[12/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[13/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[14/*double*/]))
        return ::STRINGS[25/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[16/*string*/]))
        return ::STRINGS[26/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[27/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class DataToResourceBinding<T> :433
// {
static void DataToResourceBinding_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[16] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(9,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
}

::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->fp_build_ = DataToResourceBinding_build;
    type->fp_PushValue = (void(*)(::g::Fuse::Reactive::DataBinding*, uObject*))DataToResourceBinding__PushValue_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// private bool AcceptFunction(object obj) :468
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// private void OnChanged() :457
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void PushValue(object value) :443
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uString* key = uAs<uString*>(value, ::TYPES[16/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// private bool AcceptFunction(object obj) [instance] :468
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :457
void DataToResourceBinding::OnChanged()
{
    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (Parent() == NULL)
        return;

    uObject* v;

    if (uPtr(Parent())->TryGetResource(_key, uDelegate::New(::TYPES[28/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        uPtr((::g::Uno::UX::Property1*)Target())->Set_ex(uUnboxAny(__type->T(0), v), (uObject*)this);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/fusejs/$.uno
// ---------------------------------------------------------------

// internal static class DebugLog :66
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[28] = uString::Const("debug_log");
    ::STRINGS[7] = uString::Const("null");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/fusejs/$.uno");
    ::TYPES[20] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :68
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :73
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :68
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[28/*"debug_log"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :73
uObject* DebugLog::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[7/*"null"*/], 1, ::STRINGS[6/*"/usr/local/...*/], 77);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// private sealed class JavaScript.EvaluateDataContext :1320
// {
static void JavaScript__EvaluateDataContext_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _dc), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _js), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _worker), 0);
}

uType* JavaScript__EvaluateDataContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JavaScript__EvaluateDataContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.JavaScript.EvaluateDataContext", options);
    type->fp_build_ = JavaScript__EvaluateDataContext_build;
    return type;
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1326
void JavaScript__EvaluateDataContext__ctor__fn(JavaScript__EvaluateDataContext* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_(worker, js);
}

// private void Evaluate() :1334
void JavaScript__EvaluateDataContext__Evaluate_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->Evaluate();
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1326
void JavaScript__EvaluateDataContext__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, JavaScript__EvaluateDataContext** __retval)
{
    *__retval = JavaScript__EvaluateDataContext::New1(worker, js);
}

// private void SetDataContext() :1343
void JavaScript__EvaluateDataContext__SetDataContext_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->SetDataContext();
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :1326
void JavaScript__EvaluateDataContext::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__Evaluate_fn, this));
}

// private void Evaluate() [instance] :1334
void JavaScript__EvaluateDataContext::Evaluate()
{
    _dc = uPtr(uPtr(_worker)->Context())->Reflect(uPtr(_js)->EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__SetDataContext_fn, this));
}

// private void SetDataContext() [instance] :1343
void JavaScript__EvaluateDataContext::SetDataContext()
{
    uPtr(_js)->SetDataContext(_dc);
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :1326
JavaScript__EvaluateDataContext* JavaScript__EvaluateDataContext::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    JavaScript__EvaluateDataContext* obj1 = (JavaScript__EvaluateDataContext*)uNew(JavaScript__EvaluateDataContext_typeof());
    obj1->ctor_(worker, js);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class EventBinding :1097
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[29] = ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof());
    type->SetFields(3,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _function), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof()), offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
}

::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ContextBinding_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ContextBinding_type);
    type = (::g::Fuse::Reactive::ContextBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    return type;
}

// public EventBinding(string key) :1100
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :1100
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :1123
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    __this->_function = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[17/*Fuse.Scripting.Function*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :1206
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :1129
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :1108
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(string key) [instance] :1100
void EventBinding::ctor_2(uString* key)
{
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :1206
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (Parent() == NULL)
        return;

    EventBinding__CallClosure* callClosure = EventBinding__CallClosure::New1(uAs<uObject*>(args, ::TYPES[6/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[5/*Fuse.Node*/]));

    if (_function != NULL)
    {
        uPtr(callClosure)->Function = _function;
        uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, callClosure));
    }
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[29/*Uno.Collections.List<Fuse.Reactive.EventBinding.CallClosure>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), callClosure);
    }
}

// private void ProcessQueuedEvents() [instance] :1108
void EventBinding::ProcessQueuedEvents()
{
    EventBinding__CallClosure* ret2;
    EventBinding__CallClosure* ret3;

    if ((_function != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2))->Function = _function;
            uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, uPtr((::g::Uno::Collections::List__get_Item_fn(events, uCRef<int>(i), &ret3), ret3))));
        }
    }
}

// public EventBinding New(string key) [static] :1100
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// public sealed class JavaScript :1246
// {
// static JavaScript() :1246
static void JavaScript__cctor_1_fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Threading::Mutex::Create();
}

static void JavaScript_build(uType* type)
{
    ::STRINGS[29] = uString::Const("exports");
    ::STRINGS[30] = uString::Const("JavaScript error in ");
    ::STRINGS[31] = uString::Const(" fixed!");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno");
    ::STRINGS[32] = uString::Const("EvaluateModule");
    ::STRINGS[33] = uString::Const("JavaScript error");
    ::STRINGS[34] = uString::Const("Cannot require() a rooted module");
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[31] = ::g::Uno::UX::Resource_typeof()->MakeMethod(1, ::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[32] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[33] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface3),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface4),
        ::g::Fuse::IDataProvider_typeof(), offsetof(JavaScript_type, interface5));
    type->SetFields(13,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _currentDc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::previousErrorFile_, uFieldFlagsStatic);
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_cctor_ = JavaScript__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface4.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface5.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseIDataProviderget_Data_fn;
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

// public JavaScript(Uno.UX.NameTable nameTable) :1255
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :1400
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1401
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1303
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private object EvaluateExports() :1351
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :1363
void JavaScript__EvaluateModule_fn(JavaScript* __this)
{
    __this->EvaluateModule();
}

// public string get_FileName() :1429
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1430
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.IDataProvider.get_Data() :1310
void JavaScript__FuseIDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    return *__retval = __this->_currentDc, void();
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :1292
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[34/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :1414
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1415
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :1255
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :1265
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter()++;
    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted() :1272
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    ::g::Fuse::Scripting::NativeModule* ret3;
    __this->SetDataContext(NULL);

    if (__this->_moduleResult != NULL)
    {
        uPtr(__this->_moduleResult)->Dispose();
        __this->_moduleResult = NULL;
    }

    if ((--JavaScript::_javaScriptCounter()) <= 0)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[31/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[30/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[32/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[33/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret3), ret3);
            uPtr(nm)->InternalReset();
        }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void SetDataContext(object newDc) :1312
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :1250
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Uno::Threading::Mutex*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;
uSStrong<uString*> JavaScript::previousErrorFile_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :1255
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    ctor_2();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker(), nameTable);
}

// public string get_Code() [instance] :1400
uString* JavaScript::Code()
{
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :1401
void JavaScript::Code(uString* value)
{
    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// private void DispatchEvaluate() [instance] :1303
void JavaScript::DispatchEvaluate()
{
    if (!IsRootingStarted())
        return;

    JavaScript__EvaluateDataContext::New1(JavaScript::Worker(), this);
}

// private object EvaluateExports() [instance] :1351
uObject* JavaScript::EvaluateExports()
{
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[29/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :1363
void JavaScript::EvaluateModule()
{
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(JavaScript::_resetHookMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[21/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(JavaScript::previousErrorFile(), ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[12/*int*/], LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[30/*"JavaScript ...*/], FileName()), ::STRINGS[31/*" fixed!"*/]), this, ::STRINGS[4/*"/usr/local/...*/], 1378, ::STRINGS[32/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[33/*"JavaScript ...*/], se, this, ::STRINGS[4/*"/usr/local/...*/], 1389, ::STRINGS[32/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[12/*int*/], LineNumber()));
            }
        }
    }
}

// public string get_FileName() [instance] :1429
uString* JavaScript::FileName()
{
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :1430
void JavaScript::FileName(uString* value)
{
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :1414
int JavaScript::LineNumber()
{
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :1415
void JavaScript::LineNumber(int value)
{
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// private void SetDataContext(object newDc) [instance] :1312
void JavaScript::SetDataContext(uObject* newDc)
{
    uObject* oldDc = _currentDc;
    _currentDc = newDc;

    if (Parent() != NULL)
        uPtr(Parent())->OnSubtreeDataContextChanged();

    if (oldDc != NULL)
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(oldDc);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :1255
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :1250
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class PathObserver :78
// {
static void PathObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PathObserver_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, _bindAttempt), 0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Binding), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Node), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Path), 0);
}

PathObserver_type* PathObserver_typeof()
{
    static uSStrong<PathObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PathObserver);
    options.TypeSize = sizeof(PathObserver_type);
    type = (PathObserver_type*)uClassType::New("Fuse.Reactive.PathObserver", options);
    type->fp_build_ = PathObserver_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PathObserver__Dispose_fn;
    return type;
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :86
void PathObserver__ctor__fn(PathObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :106
void PathObserver__Dispose_fn(PathObserver* __this)
{
    __this->Dispose();
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :86
void PathObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path, PathObserver** __retval)
{
    *__retval = PathObserver::New1(b, n, path);
}

// internal void RestartBinding() :94
void PathObserver__RestartBinding_fn(PathObserver* __this)
{
    __this->RestartBinding();
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [instance] :86
void PathObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    Node = n;
    Binding = b;
    Path = path;
    RestartBinding();
}

// public void Dispose() [instance] :106
void PathObserver::Dispose()
{
    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// internal void RestartBinding() [instance] :94
void PathObserver::RestartBinding()
{
    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    if (uPtr(Node)->IsRootingStarted())
        _bindAttempt = ::g::Fuse::Reactive::BindAttempt::New1(this);
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [static] :86
PathObserver* PathObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    PathObserver* obj1 = (PathObserver*)uNew(PathObserver_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// internal sealed class RootableScriptModule :1796
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[35] = uString::Const(", ");
    ::TYPES[34] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Scripting::ClassInstance_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _classInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _names), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _worker), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1802
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :1839
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :1814
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :1808
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :1820
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uString* ret2;
    uObject* ret3;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret2), ret2);
    ::g::Uno::UX::NameTable* nt = __this->_names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[34/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[35/*", "*/], uPtr(uPtr(nt)->Entries)->Strong<uString*>(e)));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), uPtr(uPtr(__this->_worker)->Context())->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_names)->Objects()), ::TYPES[35/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret3), ret3)));
        }

        nt = uPtr(nt)->ParentTable;
    }

    return *__retval = argsString, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1802
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :1802
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :1814
void RootableScriptModule::EnsureClassInstanceRooted()
{
    if (_classInstance == NULL)
        _classInstance = uPtr(uPtr(_worker)->Context())->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :1802
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj1 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj1->ctor_2(worker, names);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class SegmentObserver :238
// {
static void SegmentObserver_build(uType* type)
{
    ::STRINGS[22] = uString::Const(".");
    ::STRINGS[36] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[37] = uString::Const("Data binding to '");
    ::STRINGS[38] = uString::Const("': expected single value, got array");
    ::STRINGS[39] = uString::Const("': expected single value, got array of length ");
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::ObjectMirror_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(SegmentObserver_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SegmentObserver_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _b), 0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _bindAttempt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _key), 0,
        SegmentObserver_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _unhandledPath), 0);
}

SegmentObserver_type* SegmentObserver_typeof()
{
    static uSStrong<SegmentObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SegmentObserver);
    options.TypeSize = sizeof(SegmentObserver_type);
    type = (SegmentObserver_type*)uClassType::New("Fuse.Reactive.SegmentObserver", options);
    type->fp_build_ = SegmentObserver_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))SegmentObserver__OnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))SegmentObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))SegmentObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))SegmentObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))SegmentObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnInsertAt_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SegmentObserver__Dispose_fn;
    return type;
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :246
void SegmentObserver__ctor__fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    __this->ctor_(b, bindAttempt);
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) :260
void SegmentObserver__ctor_1_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    __this->ctor_1(b, path);
}

// private bool get_CanFail() :293
void SegmentObserver__get_CanFail_fn(SegmentObserver* __this, bool* __retval)
{
    *__retval = __this->CanFail();
}

// private static string CombineKeyAndPath(string key, string path) :352
void SegmentObserver__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = SegmentObserver::CombineKeyAndPath(key, path);
}

// public void Dispose() :435
void SegmentObserver__Dispose_fn(SegmentObserver* __this)
{
    __this->Dispose();
}

// private void Fail() :295
void SegmentObserver__Fail_fn(SegmentObserver* __this)
{
    __this->Fail();
}

// private void HandleNewDataContext(object val) :268
void SegmentObserver__HandleNewDataContext_fn(SegmentObserver* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Scripting.ObjectMirror obj) :274
void SegmentObserver__HandleObject_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ObjectMirror* obj)
{
    __this->HandleObject(obj);
}

// private void HandlePath(object dc, string path) :307
void SegmentObserver__HandlePath_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :252
void SegmentObserver__Init_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :246
void SegmentObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New1(b, bindAttempt);
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) :260
void SegmentObserver__New2_fn(::g::Fuse::Reactive::ContextBinding* b, uString* path, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New2(b, path);
}

// public void OnAdd(object addedValue) :390
void SegmentObserver__OnAdd_fn(SegmentObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnClear() :358
void SegmentObserver__OnClear_fn(SegmentObserver* __this)
{
    __this->OnClear();
}

// public void OnInsertAt(int index, object value) :404
void SegmentObserver__OnInsertAt_fn(SegmentObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) :363
void SegmentObserver__OnNewAll_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :371
void SegmentObserver__OnNewAt_fn(SegmentObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :397
void SegmentObserver__OnRemoveAt_fn(SegmentObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :383
void SegmentObserver__OnSet_fn(SegmentObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// private void SubscribeAndFail(Fuse.Scripting.Observable obs) :301
void SegmentObserver__SubscribeAndFail_fn(SegmentObserver* __this, ::g::Fuse::Scripting::Observable* obs)
{
    __this->SubscribeAndFail(obs);
}

// private static string TakeKeyFromPath(string& path) :412
void SegmentObserver__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = SegmentObserver::TakeKeyFromPath(path);
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [instance] :246
void SegmentObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    _b = b;
    _bindAttempt = bindAttempt;
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) [instance] :260
void SegmentObserver::ctor_1(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    _b = b;
    _key = SegmentObserver::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
}

// private bool get_CanFail() [instance] :293
bool SegmentObserver::CanFail()
{
    return _bindAttempt != NULL;
}

// public void Dispose() [instance] :435
void SegmentObserver::Dispose()
{
    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[36/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[21/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void Fail() [instance] :295
void SegmentObserver::Fail()
{
    _failed = true;
    uPtr(_bindAttempt)->Fail();
}

// private void HandleNewDataContext(object val) [instance] :268
void SegmentObserver::HandleNewDataContext(uObject* val)
{
    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Scripting.ObjectMirror obj) [instance] :274
void SegmentObserver::HandleObject(::g::Fuse::Scripting::ObjectMirror* obj)
{
    if (_next == NULL)
        return;

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* val = ::g::Fuse::Scripting::Context::Wrap(uPtr(obj)->Item(_key));
        uPtr(_next)->HandleNewDataContext(val);
        uObject* disp = uAs<uObject*>(val, ::TYPES[21/*Uno.IDisposable*/]);

        if (disp != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[21/*Uno.IDisposable*/]));
    }
    else
    {
        if (CanFail())
            Fail();
    }
}

// private void HandlePath(object dc, string path) [instance] :307
void SegmentObserver::HandlePath(uObject* dc, uString* path)
{
    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(dc, ::TYPES[22/*Fuse.Scripting.Observable*/]);

        if (obs != NULL)
        {
            if (CanFail())
            {
                if (uPtr(obs)->Length() != 1)
                    SubscribeAndFail(obs);
                else
                {
                    ::g::Fuse::Scripting::ObjectMirror* so = uAs< ::g::Fuse::Scripting::ObjectMirror*>(uPtr(obs)->Item(0), ::TYPES[36/*Fuse.Scripting.ObjectMirror*/]);

                    if (so == NULL)
                        SubscribeAndFail(obs);
                    else if (!uPtr(so)->ContainsKey(_key))
                        SubscribeAndFail(obs);
                }
            }

            if (!_failed)
            {
                _next = SegmentObserver::New2(_b, SegmentObserver::CombineKeyAndPath(_key, path));

                if (_subscription != NULL)
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[21/*Uno.IDisposable*/]));

                _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
            }
        }
        else if (uIs(dc, ::TYPES[36/*Fuse.Scripting.ObjectMirror*/]))
        {
            _next = SegmentObserver::New2(_b, path);
            HandleObject(uCast< ::g::Fuse::Scripting::ObjectMirror*>(dc, ::TYPES[36/*Fuse.Scripting.ObjectMirror*/]));
        }
        else
        {
            if (_bindAttempt != NULL)
                uPtr(_bindAttempt)->Fail();

            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :252
void SegmentObserver::Init(uObject* dc, uString* path)
{
    _key = SegmentObserver::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :390
void SegmentObserver::OnAdd(uObject* addedValue)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[37/*"Data bindin...*/], _key), ::STRINGS[38/*"': expected...*/])));
}

// public void OnClear() [instance] :358
void SegmentObserver::OnClear()
{
}

// public void OnInsertAt(int index, object value) [instance] :404
void SegmentObserver::OnInsertAt(int index, uObject* value)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[37/*"Data bindin...*/], _key), ::STRINGS[38/*"': expected...*/])));
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) [instance] :363
void SegmentObserver::OnNewAll(::g::Fuse::Scripting::ListMirror* values)
{
    if (_isDisposed)
        return;

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[37/*"Data bindin...*/], _key), ::STRINGS[39/*"': expected...*/]), uBox<int>(::TYPES[12/*int*/], uPtr(values)->Length()))));
}

// public void OnNewAt(int index, object newValue) [instance] :371
void SegmentObserver::OnNewAt(int index, uObject* newValue)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[37/*"Data bindin...*/], _key), ::STRINGS[38/*"': expected...*/])));
}

// public void OnRemoveAt(int index) [instance] :397
void SegmentObserver::OnRemoveAt(int index)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[37/*"Data bindin...*/], _key), ::STRINGS[38/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :383
void SegmentObserver::OnSet(uObject* value)
{
    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private void SubscribeAndFail(Fuse.Scripting.Observable obs) [instance] :301
void SegmentObserver::SubscribeAndFail(::g::Fuse::Scripting::Observable* obs)
{
    _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)::g::Fuse::Reactive::AnyChangeObserver::New1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::BindAttempt__Restart_fn, uPtr(_bindAttempt))));
    Fail();
}

// private static string CombineKeyAndPath(string key, string path) [static] :352
uString* SegmentObserver::CombineKeyAndPath(uString* key, uString* path)
{
    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[22/*"."*/]), path);
    else
        return key;
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [static] :246
SegmentObserver* SegmentObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    SegmentObserver* obj1 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj1->ctor_(b, bindAttempt);
    return obj1;
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) [static] :260
SegmentObserver* SegmentObserver::New2(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    SegmentObserver* obj2 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj2->ctor_1(b, path);
    return obj2;
}

// private static string TakeKeyFromPath(string& path) [static] :412
uString* SegmentObserver::TakeKeyFromPath(uString** path)
{
    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno
// --------------------------------------------------------

// internal partial sealed class ThreadWorker :1858
// {
static void ThreadWorker_build(uType* type)
{
    ::STRINGS[40] = uString::Const("Skipped Exception");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.38.6/$.uno");
    ::STRINGS[41] = uString::Const("CheckAndThrow");
    ::STRINGS[42] = uString::Const("ThreadWorked failed");
    ::STRINGS[43] = uString::Const("Run");
    ::STRINGS[44] = uString::Const("Could not create script context");
    ::TYPES[37] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[38] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[25] = ::g::Uno::Exception_typeof();
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, CanExecuteJavaScript), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface2.fp_get_Observable = (void(*)(uObject*, ::g::Fuse::Scripting::Function**))ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    return type;
}

// public ThreadWorker() :1884
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2022
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :1872
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :1863
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// public void Dispose() :1904
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :1860
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// private Fuse.Scripting.Function Fuse.Scripting.IThreadWorker.get_Observable() :1861
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = uPtr(__this->FuseJS())->Observable, void();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :1875
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// public void Invoke(Uno.Action action) :2036
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public ThreadWorker New() :1884
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :1899
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// private void Run() :1912
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :1925
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :1884
void ThreadWorker::ctor_()
{
    CanExecuteJavaScript = ::g::Uno::Threading::Mutex::Create();
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[37/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[38/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(thread)->Start();
}

// public void CheckAndThrow() [instance] :2022
void ThreadWorker::CheckAndThrow()
{
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(::STRINGS[40/*"Skipped Exc...*/], next, this, ::STRINGS[4/*"/usr/local/...*/], 2028, ::STRINGS[41/*"CheckAndThrow"*/]);

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :1872
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    return ThreadWorker::_context_;
}

// public void Dispose() [instance] :1904
void ThreadWorker::Dispose()
{
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :1875
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    return ThreadWorker::_fuseJS_;
}

// public void Invoke(Uno.Action action) [instance] :2036
void ThreadWorker::Invoke(uDelegate* action)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :1899
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    Dispose();
}

// private void Run() [instance] :1912
void ThreadWorker::Run()
{
    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[42/*"ThreadWorke...*/], e, this, ::STRINGS[4/*"/usr/local/...*/], 1920, ::STRINGS[43/*"Run"*/]);
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }
}

// private void RunInner() [instance] :1925
void ThreadWorker::RunInner()
{
    bool ret4;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[21/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context_ == NULL)
        {
            ThreadWorker::_context_ = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context_ == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[44/*"Could not c...*/]));

            ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS_ = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context_);
        }
    }

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Scripting::Context__ProcessUIMessages_fn, uPtr(Context())), 0);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!_terminate)
    {
        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current() != NULL)
            {
                uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uObject* lg1 = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg1), ::TYPES[21/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret4), ret4))
            {
                try
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }
            }

            try
            {
                uPtr(ThreadWorker::_fuseJS_)->UpdateModules(ThreadWorker::_context_);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
            }
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :1863
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    return ::g::Fuse::Scripting::V8::Context::New1(worker);
}

// public ThreadWorker New() [static] :1884
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
