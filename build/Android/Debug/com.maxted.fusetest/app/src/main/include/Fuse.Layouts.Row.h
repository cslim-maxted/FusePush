// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.38.6/layouts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Row :950
// {
uType* Row_typeof();
void Row__ctor_2_fn(Row* __this);
void Row__get_ActualHeight_fn(Row* __this, float* __retval);
void Row__set_ActualHeight_fn(Row* __this, float* value);
void Row__CloneDef_fn(Row* __this, Row** __retval);
void Row__get_Height_fn(Row* __this, float* __retval);
void Row__set_Height_fn(Row* __this, float* value);
void Row__get_HeightMetric_fn(Row* __this, int* __retval);
void Row__set_HeightMetric_fn(Row* __this, int* value);
void Row__New2_fn(Row** __retval);

struct Row : ::g::Fuse::Layouts::DefinitionBase
{
    float _actualHeight;
    float _height;
    int _heightMetric;

    void ctor_2();
    float ActualHeight();
    void ActualHeight(float value);
    Row* CloneDef();
    float Height();
    void Height(float value);
    int HeightMetric();
    void HeightMetric(int value);
    static Row* New2();
};
// }

}}} // ::g::Fuse::Layouts
