// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.38.6/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextInput;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class TextInput :1953
// {
::g::Fuse::Controls::Native::Android::TextView_type* TextInput_typeof();
void TextInput__Dispose_fn(TextInput* __this);
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval);
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value);

struct TextInput : ::g::Fuse::Controls::Native::Android::TextView
{
    uStrong<uObject*> _focusEvent;
    uStrong<uObject*> _host;

    bool OnEditorAction(int actionCode);
    void OnTextChanged(uString* value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
