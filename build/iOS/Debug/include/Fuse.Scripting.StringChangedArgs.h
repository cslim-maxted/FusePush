// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.38.6/scripting/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class StringChangedArgs :776
// {
uType* StringChangedArgs_typeof();
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue);
void StringChangedArgs__New3_fn(uString* newValue, StringChangedArgs** __retval);

struct StringChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(uString* newValue);
    static StringChangedArgs* New3(uString* newValue);
};
// }

}}} // ::g::Fuse::Scripting
