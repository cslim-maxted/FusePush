// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Array.h>
#include <uBase/Buffer.h>
#include <uBase/Bundle.h>
#include <uBase/Console.h>
#include <uBase/Disk.h>
#include <uBase/Memory.h>
#include <uBase/Text.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.FormatException.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.CppXliStream.h>
#include <Uno.IO.CppXliStreamHandle.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileSystemEnumerable.h>
#include <Uno.IO.FileSystemEnumerator.h>
#include <Uno.IO.FileSystemEnumeratorHandle.h>
#include <Uno.IO.FileSystemEnumeratorImpl.h>
#include <Uno.IO.FileSystemEnumeratorMode.h>
#include <Uno.IO.FileSystemImpl.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno/Support.h>
static uString* STRINGS[8];
static uType* TYPES[7];

namespace g{
namespace Uno{
namespace IO{

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class BinaryReader :8
// {
static void BinaryReader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("byteCount");
    ::STRINGS[1] = uString::Const("Invalid 7 bit encoded int");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::BinaryReader, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryReader, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryReader, _LittleEndian), 0);
}

BinaryReader_type* BinaryReader_typeof()
{
    static uSStrong<BinaryReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryReader);
    options.TypeSize = sizeof(BinaryReader_type);
    type = (BinaryReader_type*)uClassType::New("Uno.IO.BinaryReader", options);
    type->fp_build_ = BinaryReader_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryReader__Dispose_fn;
    return type;
}

// public BinaryReader(Uno.IO.Stream stream) :15
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :33
void BinaryReader__Dispose_fn(BinaryReader* __this)
{
    __this->Dispose();
}

// private void FillBuffer(int byteCount) :38
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int* byteCount)
{
    __this->FillBuffer(*byteCount);
}

// public generated bool get_LittleEndian() :29
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :30
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryReader New(Uno.IO.Stream stream) :15
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval)
{
    *__retval = BinaryReader::New1(stream);
}

// protected internal int Read7BitEncodedInt() :333
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->Read7BitEncodedInt();
}

// public byte ReadByte() :103
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval)
{
    *__retval = __this->ReadByte();
}

// public byte[] ReadBytes(int byteCount) :57
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int* byteCount, uArray** __retval)
{
    *__retval = __this->ReadBytes(*byteCount);
}

// public int ReadInt() :134
void BinaryReader__ReadInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->ReadInt();
}

// public string ReadString() :351
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :15
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :33
void BinaryReader::Dispose()
{
    uPtr(_stream)->Dispose();
}

// private void FillBuffer(int byteCount) [instance] :38
void BinaryReader::FillBuffer(int byteCount)
{
    if ((byteCount < 0) || (byteCount > 64))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(_buffer, offset, byteCount - offset);

        if (read == 0)
            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

        offset = offset + read;
    }
    while (offset < byteCount);
}

// public generated bool get_LittleEndian() [instance] :29
bool BinaryReader::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :30
void BinaryReader::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// protected internal int Read7BitEncodedInt() [instance] :333
int BinaryReader::Read7BitEncodedInt()
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        uint8_t b = ReadByte();
        count = count | ((int)(b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
            return count;
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid 7 b...*/]));
}

// public byte ReadByte() [instance] :103
uint8_t BinaryReader::ReadByte()
{
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0);
}

// public byte[] ReadBytes(int byteCount) [instance] :57
uArray* BinaryReader::ReadBytes(int byteCount)
{
    if (byteCount < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], byteCount);
    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
            break;
    }
    while (offset < byteCount);

    if (offset == byteCount)
        return buffer;

    uArray* result = uArray::New(::TYPES[0/*byte[]*/], offset);

    for (int i = 0; i < offset; i++)
        uPtr(result)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return result;
}

// public int ReadInt() [instance] :134
int BinaryReader::ReadInt()
{
    FillBuffer(4);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetInt(_buffer, 0, LittleEndian());
}

// public string ReadString() [instance] :351
uString* BinaryReader::ReadString()
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadBytes(Read7BitEncodedInt()));
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :15
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class BinaryWriter :365
// {
static void BinaryWriter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::BinaryWriter, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _LittleEndian), 0);
}

BinaryWriter_type* BinaryWriter_typeof()
{
    static uSStrong<BinaryWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryWriter);
    options.TypeSize = sizeof(BinaryWriter_type);
    type = (BinaryWriter_type*)uClassType::New("Uno.IO.BinaryWriter", options);
    type->fp_build_ = BinaryWriter_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryWriter__Dispose_fn;
    return type;
}

// public BinaryWriter(Uno.IO.Stream stream) :372
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :390
void BinaryWriter__Dispose_fn(BinaryWriter* __this)
{
    __this->Dispose();
}

// public generated bool get_LittleEndian() :386
void BinaryWriter__get_LittleEndian_fn(BinaryWriter* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :387
void BinaryWriter__set_LittleEndian_fn(BinaryWriter* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryWriter New(Uno.IO.Stream stream) :372
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval)
{
    *__retval = BinaryWriter::New1(stream);
}

// public void Write(byte value) :412
void BinaryWriter__Write1_fn(BinaryWriter* __this, uint8_t* value)
{
    __this->Write1(*value);
}

// public void Write(byte[] value) :401
void BinaryWriter__Write2_fn(BinaryWriter* __this, uArray* value)
{
    __this->Write2(value);
}

// public void Write(int value) :435
void BinaryWriter__Write13_fn(BinaryWriter* __this, int* value)
{
    __this->Write13(*value);
}

// public void Write(string value) :592
void BinaryWriter__Write24_fn(BinaryWriter* __this, uString* value)
{
    __this->Write24(value);
}

// protected internal void Write7BitEncodedInt(int value) :581
void BinaryWriter__Write7BitEncodedInt_fn(BinaryWriter* __this, int* value)
{
    __this->Write7BitEncodedInt(*value);
}

// public BinaryWriter(Uno.IO.Stream stream) [instance] :372
void BinaryWriter::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :390
void BinaryWriter::Dispose()
{
    uPtr(_stream)->Dispose();
}

// public generated bool get_LittleEndian() [instance] :386
bool BinaryWriter::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :387
void BinaryWriter::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// public void Write(byte value) [instance] :412
void BinaryWriter::Write1(uint8_t value)
{
    uPtr(_buffer)->Item<uint8_t>(0) = value;
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte[] value) [instance] :401
void BinaryWriter::Write2(uArray* value)
{
    uPtr(_stream)->Write(value, 0, uPtr(value)->Length());
}

// public void Write(int value) [instance] :435
void BinaryWriter::Write13(int value)
{
    ::g::Uno::Runtime::Implementation::BufferImpl::SetInt(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 4);
}

// public void Write(string value) [instance] :592
void BinaryWriter::Write24(uString* value)
{
    uArray* bytes = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    Write7BitEncodedInt(uPtr(bytes)->Length());
    Write2(bytes);
}

// protected internal void Write7BitEncodedInt(int value) [instance] :581
void BinaryWriter::Write7BitEncodedInt(int value)
{
    uint32_t v = (uint32_t)value;

    while (v >= 128U)
    {
        Write1((uint8_t)(v | 128U));
        v = v >> 7;
    }

    Write1((uint8_t)v);
}

// public BinaryWriter New(Uno.IO.Stream stream) [static] :372
BinaryWriter* BinaryWriter::New1(::g::Uno::IO::Stream* stream)
{
    BinaryWriter* obj1 = (BinaryWriter*)uNew(BinaryWriter_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class Bundle :778
// {
// static Bundle() :804
static void Bundle__cctor__fn(uType* __type)
{
    uArray* array1;
    int index2;
    int length3;
    Bundle::_bundles_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/]));
    Bundle::_allFiles_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Uno.IO.BundleFile>*/]));

    for (array1 = ::g::Uno::String::Split(uPtr(::g::Uno::IO::BundleFile::New1(Bundle::New1(NULL), ::STRINGS[2/*"bundle"*/], ::STRINGS[2/*"bundle"*/])->ReadAllText()), uArray::Init<int>(::TYPES[3/*char[]*/], 1, 10)), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* line = uPtr(array1)->Strong<uString*>(index2);
        uArray* parts = ::g::Uno::String::Split(uPtr(line), uArray::Init<int>(::TYPES[3/*char[]*/], 1, ':'));
        Bundle* bundle = Bundle::New1(uPtr(parts)->Strong<uString*>(0));
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Bundle::_bundles_), parts->Strong<uString*>(0), bundle);

        for (int i = 1; i < parts->Length(); i = i + 2)
        {
            ::g::Uno::IO::BundleFile* file = ::g::Uno::IO::BundleFile::New1(bundle, uPtr(parts)->Strong<uString*>(i), uPtr(parts)->Strong<uString*>(i + 1));
            ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(bundle)->_files), file);
            ::g::Uno::Collections::List__Add_fn(uPtr(Bundle::_allFiles_), file);
        }
    }
}

static void Bundle_build(uType* type)
{
    ::STRINGS[2] = uString::Const("bundle");
    ::STRINGS[3] = uString::Const("BundleFile not found: ");
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), Bundle_typeof());
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[3] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof()), offsetof(::g::Uno::IO::Bundle, _files), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::Bundle, _packageName), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof()), (uintptr_t)&::g::Uno::IO::Bundle::_allFiles_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), Bundle_typeof()), (uintptr_t)&::g::Uno::IO::Bundle::_bundles_, uFieldFlagsStatic);
}

uType* Bundle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.Bundle", options);
    type->fp_build_ = Bundle_build;
    type->fp_cctor_ = Bundle__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Bundle__ToString_fn;
    return type;
}

// private Bundle(string packageName) :847
void Bundle__ctor__fn(Bundle* __this, uString* packageName)
{
    __this->ctor_(packageName);
}

// public static Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_AllFiles() :835
void Bundle__get_AllFiles_fn(uObject** __retval)
{
    *__retval = Bundle::AllFiles();
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() :859
void Bundle__get_Files_fn(Bundle* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// public static Uno.IO.Bundle Get([string package]) :827
void Bundle__Get_fn(uString* package, Bundle** __retval)
{
    *__retval = Bundle::Get(package);
}

// public Uno.IO.BundleFile GetFile(string filename) :862
void Bundle__GetFile_fn(Bundle* __this, uString* filename, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->GetFile(filename);
}

// private Bundle New(string packageName) :847
void Bundle__New1_fn(uString* packageName, Bundle** __retval)
{
    *__retval = Bundle::New1(packageName);
}

// public override sealed string ToString() :872
void Bundle__ToString_fn(Bundle* __this, uString** __retval)
{
    return *__retval = __this->_packageName, void();
}

uSStrong< ::g::Uno::Collections::List*> Bundle::_allFiles_;
uSStrong< ::g::Uno::Collections::Dictionary*> Bundle::_bundles_;

// private Bundle(string packageName) [instance] :847
void Bundle::ctor_(uString* packageName)
{
    _files = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Uno.IO.BundleFile>*/]));
    _packageName = packageName;
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() [instance] :859
uObject* Bundle::Files()
{
    return (uObject*)_files;
}

// public Uno.IO.BundleFile GetFile(string filename) [instance] :862
::g::Uno::IO::BundleFile* Bundle::GetFile(uString* filename)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_files), &ret7), ret7); enum4.MoveNext(::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]); )
    {
        ::g::Uno::IO::BundleFile* f = enum4.Current(::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);

        if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), filename) || ::g::Uno::String::op_Equality(uPtr(f)->BundlePath(), filename))
            return f;
    }

    U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::STRINGS[3/*"BundleFile ...*/], filename)));
}

// public static Uno.IO.Bundle Get([string package]) [static] :827
Bundle* Bundle::Get(uString* package)
{
    Bundle_typeof()->Init();
    Bundle* ret6;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Bundle::_bundles()), package, &ret6), ret6);
}

// private Bundle New(string packageName) [static] :847
Bundle* Bundle::New1(uString* packageName)
{
    Bundle* obj5 = (Bundle*)uNew(Bundle_typeof());
    obj5->ctor_(packageName);
    return obj5;
}

// public static Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_AllFiles() [static] :835
uObject* Bundle::AllFiles()
{
    Bundle_typeof()->Init();
    return (uObject*)Bundle::_allFiles();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class BundleFile :631
// {
static void BundleFile_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Uno.IO.BundleFile.BundlePath");
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(BundleFile_typeof());
    type->SetFields(0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(::g::Uno::IO::BundleFile, _Bundle), uFieldFlagsWeak,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::BundleFile, _BundlePath), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BundleFile, _IsFile), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::BundleFile, _SourcePath), 0,
        ::g::Uno::Action1_typeof()->MakeType(BundleFile_typeof()), offsetof(::g::Uno::IO::BundleFile, Changed1), 0);
}

uType* BundleFile_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(BundleFile);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.BundleFile", options);
    type->fp_build_ = BundleFile_build;
    type->fp_ToString = (void(*)(uObject*, uString**))BundleFile__ToString_fn;
    return type;
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :646
void BundleFile__ctor__fn(BundleFile* __this, ::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    __this->ctor_(bundle, sourcePath, bundlePath);
}

// public generated Uno.IO.Bundle get_Bundle() :639
void BundleFile__get_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// private generated void set_Bundle(Uno.IO.Bundle value) :639
void BundleFile__set_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// public generated string get_BundlePath() :643
void BundleFile__get_BundlePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->BundlePath();
}

// private generated void set_BundlePath(string value) :643
void BundleFile__set_BundlePath_fn(BundleFile* __this, uString* value)
{
    __this->BundlePath(value);
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) :636
void BundleFile__add_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) :636
void BundleFile__remove_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal extern Uno.IO.CppXliStreamHandle CppXliOpenRead() :703
void BundleFile__CppXliOpenRead_fn(BundleFile* __this, uBase::Stream** __retval)
{
    *__retval = __this->CppXliOpenRead();
}

// public generated bool get_IsFile() :644
void BundleFile__get_IsFile_fn(BundleFile* __this, bool* __retval)
{
    *__retval = __this->IsFile();
}

// private generated void set_IsFile(bool value) :644
void BundleFile__set_IsFile_fn(BundleFile* __this, bool* value)
{
    __this->IsFile(*value);
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :646
void BundleFile__New1_fn(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath, BundleFile** __retval)
{
    *__retval = BundleFile::New1(bundle, sourcePath, bundlePath);
}

// public Uno.IO.Stream OpenRead() :654
void BundleFile__OpenRead_fn(BundleFile* __this, ::g::Uno::IO::Stream** __retval)
{
    *__retval = __this->OpenRead();
}

// public byte[] ReadAllBytes() :709
void BundleFile__ReadAllBytes_fn(BundleFile* __this, uArray** __retval)
{
    *__retval = __this->ReadAllBytes();
}

// public string ReadAllText() :745
void BundleFile__ReadAllText_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->ReadAllText();
}

// public generated string get_SourcePath() :642
void BundleFile__get_SourcePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->SourcePath();
}

// private generated void set_SourcePath(string value) :642
void BundleFile__set_SourcePath_fn(BundleFile* __this, uString* value)
{
    __this->SourcePath(value);
}

// public override sealed string ToString() :771
void BundleFile__ToString_fn(BundleFile* __this, uString** __retval)
{
    return *__retval = __this->SourcePath(), void();
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [instance] :646
void BundleFile::ctor_(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    Bundle(bundle);
    SourcePath(sourcePath);
    BundlePath(bundlePath);
    IsFile(::g::Uno::String::op_Inequality(bundlePath, NULL) && false);
}

// public generated Uno.IO.Bundle get_Bundle() [instance] :639
::g::Uno::IO::Bundle* BundleFile::Bundle()
{
    return _Bundle;
}

// private generated void set_Bundle(Uno.IO.Bundle value) [instance] :639
void BundleFile::Bundle(::g::Uno::IO::Bundle* value)
{
    _Bundle = value;
}

// public generated string get_BundlePath() [instance] :643
uString* BundleFile::BundlePath()
{
    return _BundlePath;
}

// private generated void set_BundlePath(string value) [instance] :643
void BundleFile::BundlePath(uString* value)
{
    _BundlePath = value;
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :636
void BundleFile::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[5/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :636
void BundleFile::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[5/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// internal extern Uno.IO.CppXliStreamHandle CppXliOpenRead() [instance] :703
uBase::Stream* BundleFile::CppXliOpenRead()
{
    uBase::String filename = uStringToXliString(this->_BundlePath);
                return uBase::Bundle->OpenFile(filename);
}

// public generated bool get_IsFile() [instance] :644
bool BundleFile::IsFile()
{
    return _IsFile;
}

// private generated void set_IsFile(bool value) [instance] :644
void BundleFile::IsFile(bool value)
{
    _IsFile = value;
}

// public Uno.IO.Stream OpenRead() [instance] :654
::g::Uno::IO::Stream* BundleFile::OpenRead()
{
    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"Uno.IO.Bund...*/]));

    return ::g::Uno::IO::CppXliStream::New1(CppXliOpenRead());
}

// public byte[] ReadAllBytes() [instance] :709
uArray* BundleFile::ReadAllBytes()
{
    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"Uno.IO.Bund...*/]));

    uBase::String filename = uStringToXliString(this->_BundlePath);
                    uBase::Auto<uBase::DataAccessor> buffer = uBase::Bundle->OpenFileAsBuffer(filename);
                    return uArray::New(::g::Uno::Byte_typeof()->Array(), buffer->GetSizeInBytes(), buffer->GetPtr());
}

// public string ReadAllText() [instance] :745
uString* BundleFile::ReadAllText()
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadAllBytes());
}

// public generated string get_SourcePath() [instance] :642
uString* BundleFile::SourcePath()
{
    return _SourcePath;
}

// private generated void set_SourcePath(string value) [instance] :642
void BundleFile::SourcePath(uString* value)
{
    _SourcePath = value;
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [static] :646
BundleFile* BundleFile::New1(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    BundleFile* obj1 = (BundleFile*)uNew(BundleFile_typeof());
    obj1->ctor_(bundle, sourcePath, bundlePath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal sealed extern class CppXliStream :917
// {
static void CppXliStream_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::CppXliStreamHandle_typeof(), offsetof(::g::Uno::IO::CppXliStream, _handle), 0);
}

::g::Uno::IO::Stream_type* CppXliStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppXliStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.CppXliStream", options);
    type->fp_build_ = CppXliStream_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))CppXliStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))CppXliStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))CppXliStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) :921
void CppXliStream__ctor_1_fn(CppXliStream* __this, uBase::Stream** handle)
{
    __this->ctor_1(*handle);
}

// public override sealed void Dispose(bool disposing) :1068
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    if (__this->_handle != NULL)
                {
                    __this->_handle->Release();
                    __this->_handle = NULL;
                }
}

// public override sealed void Flush() :1056
void CppXliStream__Flush_fn(CppXliStream* __this)
{
    try
                {
                    __this->_handle->Flush();
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public override sealed extern long get_Length() :973
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->GetLength(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) :921
void CppXliStream__New1_fn(uBase::Stream** handle, CppXliStream** __retval)
{
    *__retval = CppXliStream::New1(*handle);
}

// public override sealed extern long get_Position() :988
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->GetPosition(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed extern void set_Position(long value) :999
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    try
                    {
                        __this->_handle->Seek((int)value_, uBase::SeekOriginBegin);
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :1017
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    try
                {
                    // TODO: Bounds check
                    return *__retval = __this->_handle->Read((uint8_t*)dst->Ptr() + byteOffset_, 1, byteCount_), void();
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :1030
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    try
                {
                    // TODO: Bounds check
                    __this->_handle->Write((const uint8_t*)src->Ptr() + byteOffset_, 1, byteCount_);
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) [instance] :921
void CppXliStream::ctor_1(uBase::Stream* handle)
{
    ctor_();
    _handle = handle;
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) [static] :921
CppXliStream* CppXliStream::New1(uBase::Stream* handle)
{
    CppXliStream* obj1 = (CppXliStream*)uNew(CppXliStream_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal extern struct CppXliStreamHandle :909
// {
static void CppXliStreamHandle_build(uType* type)
{
}

uStructType* CppXliStreamHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uBase::Stream*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.CppXliStreamHandle", options);
    type->fp_build_ = CppXliStreamHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public static class Directory :1087
// {
static void Directory_build(uType* type)
{
}

uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    type->fp_build_ = Directory_build;
    return type;
}

// public static void CreateDirectory(string dirName) :1146
void Directory__CreateDirectory_fn(uString* dirName)
{
    Directory::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive) :1154
void Directory__Delete_fn(uString* dirName, bool* recursive)
{
    Directory::Delete(dirName, *recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) :1178
void Directory__EnumerateDirectories_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateDirectories(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) :1186
void Directory__EnumerateFiles_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFiles(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) :1194
void Directory__EnumerateFileSystemEntries_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFileSystemEntries(dirName);
}

// public static bool Exists(string dirName) :1170
void Directory__Exists_fn(uString* dirName, bool* __retval)
{
    *__retval = Directory::Exists(dirName);
}

// public static string GetCurrentDirectory() :1130
void Directory__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetCurrentDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :1089
void Directory__GetUserDirectory_fn(int* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// public static void Move(string oldName, string newName) :1162
void Directory__Move_fn(uString* oldName, uString* newName)
{
    Directory::Move(oldName, newName);
}

// public static void CreateDirectory(string dirName) [static] :1146
void Directory::CreateDirectory(uString* dirName)
{
    ::g::Uno::IO::FileSystemImpl::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive) [static] :1154
void Directory::Delete(uString* dirName, bool recursive)
{
    ::g::Uno::IO::FileSystemImpl::DeleteDirectory(dirName, recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) [static] :1178
uObject* Directory::EnumerateDirectories(uString* dirName)
{
    return (uObject*)::g::Uno::IO::FileSystemEnumerable::New1(dirName, 2);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) [static] :1186
uObject* Directory::EnumerateFiles(uString* dirName)
{
    return (uObject*)::g::Uno::IO::FileSystemEnumerable::New1(dirName, 1);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) [static] :1194
uObject* Directory::EnumerateFileSystemEntries(uString* dirName)
{
    return (uObject*)::g::Uno::IO::FileSystemEnumerable::New1(dirName, 0);
}

// public static bool Exists(string dirName) [static] :1170
bool Directory::Exists(uString* dirName)
{
    return ::g::Uno::IO::FileSystemImpl::IsDirectory(dirName);
}

// public static string GetCurrentDirectory() [static] :1130
uString* Directory::GetCurrentDirectory()
{
    return ::g::Uno::IO::FileSystemImpl::GetCurrentDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :1089
uString* Directory::GetUserDirectory(int dir)
{
    return ::g::Uno::IO::FileSystemImpl::GetUserDirectory(dir);
}

// public static void Move(string oldName, string newName) [static] :1162
void Directory::Move(uString* oldName, uString* newName)
{
    ::g::Uno::IO::FileSystemImpl::MoveDirectory(oldName, newName);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class EndOfStreamException :2014
// {
static void EndOfStreamException_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Reached end of stream");
    type->SetFields(3);
}

::g::Uno::Exception_type* EndOfStreamException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::IOException_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(EndOfStreamException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.EndOfStreamException", options);
    type->fp_build_ = EndOfStreamException_build;
    type->fp_ctor_ = (void*)EndOfStreamException__New5_fn;
    return type;
}

// public EndOfStreamException() :2016
void EndOfStreamException__ctor_4_fn(EndOfStreamException* __this)
{
    __this->ctor_4();
}

// public EndOfStreamException New() :2016
void EndOfStreamException__New5_fn(EndOfStreamException** __retval)
{
    *__retval = EndOfStreamException::New5();
}

// public EndOfStreamException() [instance] :2016
void EndOfStreamException::ctor_4()
{
    ctor_3(::STRINGS[5/*"Reached end...*/]);
}

// public EndOfStreamException New() [static] :2016
EndOfStreamException* EndOfStreamException::New5()
{
    EndOfStreamException* obj1 = (EndOfStreamException*)uNew(EndOfStreamException_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public static class File :1229
// {
static void File_build(uType* type)
{
}

uClassType* File_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.File", options);
    type->fp_build_ = File_build;
    return type;
}

// public static void AppendAllText(string filename, string contents) :1316
void File__AppendAllText_fn(uString* filename, uString* contents)
{
    File::AppendAllText(filename, contents);
}

// public static void Delete(string filename) :1261
void File__Delete_fn(uString* filename)
{
    File::Delete(filename);
}

// public static bool Exists(string filename) :1293
void File__Exists_fn(uString* filename, bool* __retval)
{
    *__retval = File::Exists(filename);
}

// public static void Move(string oldName, string newName) :1285
void File__Move_fn(uString* oldName, uString* newName)
{
    File::Move(oldName, newName);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) :1251
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::Open(filename, *filemode);
}

// public static Uno.IO.Stream OpenRead(string filename) :1231
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::OpenRead(filename);
}

// public static byte[] ReadAllBytes(string filename) :1340
void File__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = File::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :1324
void File__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = File::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :1356
void File__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    File::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :1348
void File__WriteAllText_fn(uString* filename, uString* text)
{
    File::WriteAllText(filename, text);
}

// public static void AppendAllText(string filename, string contents) [static] :1316
void File::AppendAllText(uString* filename, uString* contents)
{
    ::g::Uno::IO::FileSystemImpl::AppendAllText(filename, contents);
}

// public static void Delete(string filename) [static] :1261
void File::Delete(uString* filename)
{
    ::g::Uno::IO::FileSystemImpl::DeleteFile(filename);
}

// public static bool Exists(string filename) [static] :1293
bool File::Exists(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::IsFile(filename);
}

// public static void Move(string oldName, string newName) [static] :1285
void File::Move(uString* oldName, uString* newName)
{
    ::g::Uno::IO::FileSystemImpl::MoveFile(oldName, newName);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) [static] :1251
::g::Uno::IO::Stream* File::Open(uString* filename, int filemode)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpen(filename, filemode));
}

// public static Uno.IO.Stream OpenRead(string filename) [static] :1231
::g::Uno::IO::Stream* File::OpenRead(uString* filename)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpenRead(filename));
}

// public static byte[] ReadAllBytes(string filename) [static] :1340
uArray* File::ReadAllBytes(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) [static] :1324
uString* File::ReadAllText(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :1356
void File::WriteAllBytes(uString* filename, uArray* bytes)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) [static] :1348
void File::WriteAllText(uString* filename, uString* text)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllText(filename, text);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public enum FileMode :1382
uEnumType* FileMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal sealed class FileSystemEnumerable :1401
// {
static void FileSystemEnumerable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(FileSystemEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerable, _dirName), 0,
        ::g::Uno::IO::FileSystemEnumeratorMode_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerable, _mode), 0);
}

FileSystemEnumerable_type* FileSystemEnumerable_typeof()
{
    static uSStrong<FileSystemEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileSystemEnumerable);
    options.TypeSize = sizeof(FileSystemEnumerable_type);
    type = (FileSystemEnumerable_type*)uClassType::New("Uno.IO.FileSystemEnumerable", options);
    type->fp_build_ = FileSystemEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))FileSystemEnumerable__GetEnumerator_fn;
    return type;
}

// public FileSystemEnumerable(string dirName, Uno.IO.FileSystemEnumeratorMode mode) :1406
void FileSystemEnumerable__ctor__fn(FileSystemEnumerable* __this, uString* dirName, int* mode)
{
    __this->ctor_(dirName, *mode);
}

// public Uno.Collections.IEnumerator<string> GetEnumerator() :1412
void FileSystemEnumerable__GetEnumerator_fn(FileSystemEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public FileSystemEnumerable New(string dirName, Uno.IO.FileSystemEnumeratorMode mode) :1406
void FileSystemEnumerable__New1_fn(uString* dirName, int* mode, FileSystemEnumerable** __retval)
{
    *__retval = FileSystemEnumerable::New1(dirName, *mode);
}

// public FileSystemEnumerable(string dirName, Uno.IO.FileSystemEnumeratorMode mode) [instance] :1406
void FileSystemEnumerable::ctor_(uString* dirName, int mode)
{
    _dirName = dirName;
    _mode = mode;
}

// public Uno.Collections.IEnumerator<string> GetEnumerator() [instance] :1412
uObject* FileSystemEnumerable::GetEnumerator()
{
    return (uObject*)::g::Uno::IO::FileSystemEnumerator::New1(::g::Uno::IO::FileSystemImpl::GetEnumerator(_dirName), _mode);
}

// public FileSystemEnumerable New(string dirName, Uno.IO.FileSystemEnumeratorMode mode) [static] :1406
FileSystemEnumerable* FileSystemEnumerable::New1(uString* dirName, int mode)
{
    FileSystemEnumerable* obj1 = (FileSystemEnumerable*)uNew(FileSystemEnumerable_typeof());
    obj1->ctor_(dirName, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal sealed class FileSystemEnumerator :1435
// {
static void FileSystemEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(FileSystemEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FileSystemEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(FileSystemEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::IO::FileSystemEnumeratorHandle_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerator, _handle), 0,
        ::g::Uno::IO::FileSystemEnumeratorMode_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerator, _mode), 0);
}

FileSystemEnumerator_type* FileSystemEnumerator_typeof()
{
    static uSStrong<FileSystemEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FileSystemEnumerator);
    options.TypeSize = sizeof(FileSystemEnumerator_type);
    type = (FileSystemEnumerator_type*)uClassType::New("Uno.IO.FileSystemEnumerator", options);
    type->fp_build_ = FileSystemEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))FileSystemEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))FileSystemEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))FileSystemEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))FileSystemEnumerator__MoveNext_fn;
    return type;
}

// public FileSystemEnumerator(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) :1440
void FileSystemEnumerator__ctor__fn(FileSystemEnumerator* __this, ::CppXliFileSystemEnumerator** handle, int* mode)
{
    __this->ctor_(*handle, *mode);
}

// public string get_Current() :1448
void FileSystemEnumerator__get_Current_fn(FileSystemEnumerator* __this, uString** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :1451
void FileSystemEnumerator__Dispose_fn(FileSystemEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :1461
void FileSystemEnumerator__MoveNext_fn(FileSystemEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public FileSystemEnumerator New(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) :1440
void FileSystemEnumerator__New1_fn(::CppXliFileSystemEnumerator** handle, int* mode, FileSystemEnumerator** __retval)
{
    *__retval = FileSystemEnumerator::New1(*handle, *mode);
}

// public void Reset() :1456
void FileSystemEnumerator__Reset_fn(FileSystemEnumerator* __this)
{
    __this->Reset();
}

// public FileSystemEnumerator(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) [instance] :1440
void FileSystemEnumerator::ctor_(::CppXliFileSystemEnumerator* handle, int mode)
{
    _handle = handle;
    _mode = mode;
}

// public string get_Current() [instance] :1448
uString* FileSystemEnumerator::Current()
{
    return ::g::Uno::IO::FileSystemEnumeratorImpl::GetName(_handle);
}

// public void Dispose() [instance] :1451
void FileSystemEnumerator::Dispose()
{
    ::g::Uno::IO::FileSystemEnumeratorImpl::Dispose(_handle);
}

// public bool MoveNext() [instance] :1461
bool FileSystemEnumerator::MoveNext()
{
    while (true)
    {
        bool result = ::g::Uno::IO::FileSystemEnumeratorImpl::MoveNext(_handle);

        if (result && (_mode != 0))
        {
            bool isDir = ::g::Uno::IO::FileSystemEnumeratorImpl::IsDirectory(_handle);

            if (((_mode == 1) && isDir) || ((_mode == 2) && !isDir))
                continue;
        }

        return result;
    }
}

// public void Reset() [instance] :1456
void FileSystemEnumerator::Reset()
{
    ::g::Uno::IO::FileSystemEnumeratorImpl::Reset(_handle);
}

// public FileSystemEnumerator New(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) [static] :1440
FileSystemEnumerator* FileSystemEnumerator::New1(::CppXliFileSystemEnumerator* handle, int mode)
{
    FileSystemEnumerator* obj1 = (FileSystemEnumerator*)uNew(FileSystemEnumerator_typeof());
    obj1->ctor_(handle, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal struct FileSystemEnumeratorHandle :1495
// {
static void FileSystemEnumeratorHandle_build(uType* type)
{
}

uStructType* FileSystemEnumeratorHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::CppXliFileSystemEnumerator*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.FileSystemEnumeratorHandle", options);
    type->fp_build_ = FileSystemEnumeratorHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal static class FileSystemEnumeratorImpl :1500
// {
static void FileSystemEnumeratorImpl_build(uType* type)
{
}

uClassType* FileSystemEnumeratorImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileSystemEnumeratorImpl", options);
    type->fp_build_ = FileSystemEnumeratorImpl_build;
    return type;
}

// public static void Dispose(Uno.IO.FileSystemEnumeratorHandle handle) :1502
void FileSystemEnumeratorImpl__Dispose_fn(::CppXliFileSystemEnumerator** handle)
{
    FileSystemEnumeratorImpl::Dispose(*handle);
}

// public static string GetName(Uno.IO.FileSystemEnumeratorHandle handle) :1532
void FileSystemEnumeratorImpl__GetName_fn(::CppXliFileSystemEnumerator** handle, uString** __retval)
{
    *__retval = FileSystemEnumeratorImpl::GetName(*handle);
}

// public static bool IsDirectory(Uno.IO.FileSystemEnumeratorHandle handle) :1542
void FileSystemEnumeratorImpl__IsDirectory_fn(::CppXliFileSystemEnumerator** handle, bool* __retval)
{
    *__retval = FileSystemEnumeratorImpl::IsDirectory(*handle);
}

// public static bool MoveNext(Uno.IO.FileSystemEnumeratorHandle handle) :1512
void FileSystemEnumeratorImpl__MoveNext_fn(::CppXliFileSystemEnumerator** handle, bool* __retval)
{
    *__retval = FileSystemEnumeratorImpl::MoveNext(*handle);
}

// public static void Reset(Uno.IO.FileSystemEnumeratorHandle handle) :1522
void FileSystemEnumeratorImpl__Reset_fn(::CppXliFileSystemEnumerator** handle)
{
    FileSystemEnumeratorImpl::Reset(*handle);
}

// public static void Dispose(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1502
void FileSystemEnumeratorImpl::Dispose(::CppXliFileSystemEnumerator* handle)
{
    handle->Release();
}

// public static string GetName(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1532
uString* FileSystemEnumeratorImpl::GetName(::CppXliFileSystemEnumerator* handle)
{
    return uStringFromXliString(handle->Files[handle->Index].Name);
}

// public static bool IsDirectory(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1542
bool FileSystemEnumeratorImpl::IsDirectory(::CppXliFileSystemEnumerator* handle)
{
    return (handle->Files[handle->Index].Attributes & uBase::FileAttributesDirectory) != 0;
}

// public static bool MoveNext(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1512
bool FileSystemEnumeratorImpl::MoveNext(::CppXliFileSystemEnumerator* handle)
{
    return ++handle->Index < handle->Files.Length();
}

// public static void Reset(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1522
void FileSystemEnumeratorImpl::Reset(::CppXliFileSystemEnumerator* handle)
{
    handle->Index = -1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal enum FileSystemEnumeratorMode :1428
uEnumType* FileSystemEnumeratorMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileSystemEnumeratorMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "All", 0LL,
        "Files", 1LL,
        "Directories", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// internal static class FileSystemImpl :1558
// {
static void FileSystemImpl_build(uType* type)
{
}

uClassType* FileSystemImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileSystemImpl", options);
    type->fp_build_ = FileSystemImpl_build;
    return type;
}

// public static void AppendAllText(string filename, string contents) :1833
void FileSystemImpl__AppendAllText_fn(uString* filename, uString* contents)
{
    FileSystemImpl::AppendAllText(filename, contents);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) :1587
void FileSystemImpl__CppXliOpen_fn(uString* filename, int* filemode, uBase::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpen(filename, *filemode);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) :1561
void FileSystemImpl__CppXliOpenRead_fn(uString* filename, uBase::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpenRead(filename);
}

// public static void CreateDirectory(string dirName) :1688
void FileSystemImpl__CreateDirectory_fn(uString* dirName)
{
    FileSystemImpl::CreateDirectory(dirName);
}

// public static void DeleteDirectory(string dirName, bool recursive) :1705
void FileSystemImpl__DeleteDirectory_fn(uString* dirName, bool* recursive)
{
    FileSystemImpl::DeleteDirectory(dirName, *recursive);
}

// public static void DeleteFile(string filename) :1742
void FileSystemImpl__DeleteFile_fn(uString* filename)
{
    FileSystemImpl::DeleteFile(filename);
}

// public static string GetCurrentDirectory() :1654
void FileSystemImpl__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = FileSystemImpl::GetCurrentDirectory();
}

// public static Uno.IO.FileSystemEnumeratorHandle GetEnumerator(string dirName) :1976
void FileSystemImpl__GetEnumerator_fn(uString* dirName, ::CppXliFileSystemEnumerator** __retval)
{
    *__retval = FileSystemImpl::GetEnumerator(dirName);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :1637
void FileSystemImpl__GetUserDirectory_fn(int* dir, uString** __retval)
{
    *__retval = FileSystemImpl::GetUserDirectory(*dir);
}

// public static bool IsDirectory(string filename) :1793
void FileSystemImpl__IsDirectory_fn(uString* filename, bool* __retval)
{
    *__retval = FileSystemImpl::IsDirectory(filename);
}

// public static bool IsFile(string filename) :1810
void FileSystemImpl__IsFile_fn(uString* filename, bool* __retval)
{
    *__retval = FileSystemImpl::IsFile(filename);
}

// public static void MoveDirectory(string oldName, string newName) :1725
void FileSystemImpl__MoveDirectory_fn(uString* oldName, uString* newName)
{
    FileSystemImpl::MoveDirectory(oldName, newName);
}

// public static void MoveFile(string oldName, string newName) :1776
void FileSystemImpl__MoveFile_fn(uString* oldName, uString* newName)
{
    FileSystemImpl::MoveFile(oldName, newName);
}

// public static byte[] ReadAllBytes(string filename) :1867
void FileSystemImpl__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = FileSystemImpl::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :1850
void FileSystemImpl__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = FileSystemImpl::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :1935
void FileSystemImpl__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    FileSystemImpl::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :1918
void FileSystemImpl__WriteAllText_fn(uString* filename, uString* text)
{
    FileSystemImpl::WriteAllText(filename, text);
}

// public static void AppendAllText(string filename, string contents) [static] :1833
void FileSystemImpl::AppendAllText(uString* filename, uString* contents)
{
    try
                    {
                        uBase::Text::Append(uStringToXliString(filename), uStringToXliString(contents));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) [static] :1587
uBase::Stream* FileSystemImpl::CppXliOpen(uString* filename, int filemode)
{
    try
                {
                    uBase::FileMode xliFileMode = uBase::FileModeRead;
                    switch(filemode)
                    {
                        case 5:
                            if (!uBase::Disk->IsFile(uStringToXliString(filename)))
                            {
                                throw uBase::Exception("File not found");
                            }
                        case 2:
                            {
                                uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeWrite);
                                f->Close();
                                xliFileMode = uBase::FileModeReadWrite;
                                break;
                            }
    
                        case 1:
                            if (uBase::Disk->IsFile(uStringToXliString(filename)))
                            {
                                throw uBase::Exception("File already exists.");
                            }
                            xliFileMode = uBase::FileModeWrite;
                            break;
    
                        case 4:
                            if (!uBase::Disk->IsFile(uStringToXliString(filename)))
                            {
                                uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeWrite);
                                f->Close();
                            }
                        case 3:
                            xliFileMode = uBase::FileModeReadWrite;
                            break;
    
                        case 6:
                            xliFileMode = uBase::FileModeAppend;
                            break;
                    }
                    return uBase::Disk->OpenFile(uStringToXliString(filename), xliFileMode);
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) [static] :1561
uBase::Stream* FileSystemImpl::CppXliOpenRead(uString* filename)
{
    try
                {
                    return uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeRead);
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public static void CreateDirectory(string dirName) [static] :1688
void FileSystemImpl::CreateDirectory(uString* dirName)
{
    try
                    {
                        uBase::Disk->CreateDirectories(uStringToXliString(dirName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void DeleteDirectory(string dirName, bool recursive) [static] :1705
void FileSystemImpl::DeleteDirectory(uString* dirName, bool recursive)
{
    try
                    {
                        if (recursive)
                            uBase::Disk->DeleteDirectoryRecursive(uStringToXliString(dirName));
                        else
                            uBase::Disk->DeleteDirectory(uStringToXliString(dirName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void DeleteFile(string filename) [static] :1742
void FileSystemImpl::DeleteFile(uString* filename)
{
    try
                    {
                        uBase::Disk->DeleteFile(uStringToXliString(filename));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static string GetCurrentDirectory() [static] :1654
uString* FileSystemImpl::GetCurrentDirectory()
{
    try
                    {
                        return uStringFromXliString(uBase::Disk->GetCurrentDirectory());
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static Uno.IO.FileSystemEnumeratorHandle GetEnumerator(string dirName) [static] :1976
::CppXliFileSystemEnumerator* FileSystemImpl::GetEnumerator(uString* dirName)
{
    try
                    {
                        CppXliFileSystemEnumerator* data = new CppXliFileSystemEnumerator();
                        uBase::Disk->GetFiles(uStringToXliString(dirName), data->Files);
                        return data;
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :1637
uString* FileSystemImpl::GetUserDirectory(int dir)
{
    try
                    {
                        return uStringFromXliString(uBase::Disk->GetSystemDirectory((uBase::SystemDirectory)dir));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static bool IsDirectory(string filename) [static] :1793
bool FileSystemImpl::IsDirectory(uString* filename)
{
    try
                    {
                        return uBase::Disk->IsDirectory(uStringToXliString(filename));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static bool IsFile(string filename) [static] :1810
bool FileSystemImpl::IsFile(uString* filename)
{
    try
                    {
                        return uBase::Disk->IsFile(uStringToXliString(filename));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void MoveDirectory(string oldName, string newName) [static] :1725
void FileSystemImpl::MoveDirectory(uString* oldName, uString* newName)
{
    try
                    {
                        uBase::Disk->MoveDirectory(uStringToXliString(oldName), uStringToXliString(newName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void MoveFile(string oldName, string newName) [static] :1776
void FileSystemImpl::MoveFile(uString* oldName, uString* newName)
{
    try
                    {
                        uBase::Disk->MoveFile(uStringToXliString(oldName), uStringToXliString(newName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static byte[] ReadAllBytes(string filename) [static] :1867
uArray* FileSystemImpl::ReadAllBytes(uString* filename)
{
    try
                    {
                        uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeRead);
                        uArray* result = uArray::New(::g::Uno::Byte_typeof()->Array(), f->GetLength());
                        f->ReadSafe(result->Ptr(), 1, result->Length());
                        return result;
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static string ReadAllText(string filename) [static] :1850
uString* FileSystemImpl::ReadAllText(uString* filename)
{
    try
                    {
                        return uStringFromXliString(uBase::Text::Load(uStringToXliString(filename)));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :1935
void FileSystemImpl::WriteAllBytes(uString* filename, uArray* bytes)
{
    try
                    {
                        uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeWrite);
                        f->Write(bytes->Ptr(), 1, bytes->Length());
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void WriteAllText(string filename, string text) [static] :1918
void FileSystemImpl::WriteAllText(uString* filename, uString* text)
{
    try
                    {
                        uBase::Text::Save(uStringToXliString(filename), uStringToXliString(text));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public class IOException :2005
// {
static void IOException_build(uType* type)
{
    type->SetFields(3);
}

::g::Uno::Exception_type* IOException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IOException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.IOException", options);
    type->fp_build_ = IOException_build;
    return type;
}

// public IOException(string message) :2007
void IOException__ctor_3_fn(IOException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public IOException New(string message) :2007
void IOException__New4_fn(uString* message, IOException** __retval)
{
    *__retval = IOException::New4(message);
}

// public IOException(string message) [instance] :2007
void IOException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public IOException New(string message) [static] :2007
IOException* IOException::New4(uString* message)
{
    IOException* obj1 = (IOException*)uNew(IOException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class MemoryStream :2032
// {
static void MemoryStream_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Array_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::MemoryStream, _buffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::MemoryStream, _canResize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::MemoryStream, _canWrite), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _length), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::MemoryStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _Position), 0);
}

::g::Uno::IO::Stream_type* MemoryStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MemoryStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.MemoryStream", options);
    type->fp_build_ = MemoryStream_build;
    type->fp_ctor_ = (void*)MemoryStream__New1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))MemoryStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))MemoryStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))MemoryStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public MemoryStream() :2075
void MemoryStream__ctor_1_fn(MemoryStream* __this)
{
    __this->ctor_1();
}

// public int get_Capacity() :2061
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :2135
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :2172
void MemoryStream__Flush_fn(MemoryStream* __this)
{
}

// public byte[] GetBuffer() :2162
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :2056
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public MemoryStream New() :2075
void MemoryStream__New1_fn(MemoryStream** __retval)
{
    *__retval = MemoryStream::New1();
}

// public generated override sealed long get_Position() :2066
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :2066
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :2107
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :2151
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :2090
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;

    if (!__this->_canWrite)
        U_THROW(::g::Uno::NotSupportedException::New4());

    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public MemoryStream() [instance] :2075
void MemoryStream::ctor_1()
{
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
}

// public int get_Capacity() [instance] :2061
int MemoryStream::Capacity()
{
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :2135
void MemoryStream::EnsureCapacity(int byteCount)
{
    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :2162
uArray* MemoryStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :2151
void MemoryStream::ResizeTo(int newSize)
{
    if (!_canResize)
        U_THROW(::g::Uno::NotSupportedException::New4());

    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[6/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public MemoryStream New() [static] :2075
MemoryStream* MemoryStream::New1()
{
    MemoryStream* obj1 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public static class Path :2186
// {
static void Path_build(uType* type)
{
    ::STRINGS[6] = uString::Const("");
}

uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    type->fp_build_ = Path_build;
    return type;
}

// public static string Combine(string a, string b) :2199
void Path__Combine_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::Combine(a, b);
}

// public static char get_DirectorySeparatorChar() :2190
void Path__get_DirectorySeparatorChar_fn(uChar* __retval)
{
    *__retval = Path::DirectorySeparatorChar();
}

// public static string GetDirectoryName(string filename) :2250
void Path__GetDirectoryName_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetDirectoryName(filename);
}

// public static string GetFullPath(string filename) :2351
void Path__GetFullPath_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFullPath(filename);
}

// public static bool IsPathRooted(string filename) :2390
void Path__IsPathRooted_fn(uString* filename, bool* __retval)
{
    *__retval = Path::IsPathRooted(filename);
}

// public static string Combine(string a, string b) [static] :2199
uString* Path::Combine(uString* a, uString* b)
{
    if (Path::IsPathRooted(b))
        return b;

    if ((::g::Uno::String::IsNullOrEmpty(a) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '\\')) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '/'))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<uChar>(::g::Uno::Char_typeof(), Path::DirectorySeparatorChar())), b);
}

// public static string GetDirectoryName(string filename) [static] :2250
uString* Path::GetDirectoryName(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        return NULL;

    for (int i = uPtr(filename)->Length() - 1; i >= 0; i--)

        switch (uPtr(filename)->Item(i))
        {
            case '\\':
            case '/':
            {
                if ((i == 0) || ((i == 2) && (uPtr(filename)->Item(1) == ':')))
                    return NULL;

                return ::g::Uno::String::Substring1(uPtr(filename), 0, i);
            }
        }

    return ::STRINGS[6/*""*/];
}

// public static string GetFullPath(string filename) [static] :2351
uString* Path::GetFullPath(uString* filename)
{
    if (Path::IsPathRooted(filename))
        return filename;

    return Path::Combine(::g::Uno::IO::Directory::GetCurrentDirectory(), filename);
}

// public static bool IsPathRooted(string filename) [static] :2390
bool Path::IsPathRooted(uString* filename)
{
    return ((uPtr(filename)->Length() > 0) && ((uPtr(filename)->Item(0) == '\\') || (uPtr(filename)->Item(0) == '/'))) || ((uPtr(filename)->Length() > 1) && (uPtr(filename)->Item(1) == ':'));
}

// public static char get_DirectorySeparatorChar() [static] :2190
uChar Path::DirectorySeparatorChar()
{
    return '/';
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public abstract class Stream :2427
// {
static void Stream_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Stream_type, interface0));
}

Stream_type* Stream_typeof()
{
    static uSStrong<Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stream);
    options.TypeSize = sizeof(Stream_type);
    type = (Stream_type*)uClassType::New("Uno.IO.Stream", options);
    type->fp_build_ = Stream_build;
    type->fp_Close = Stream__Close_fn;
    type->fp_Dispose1 = Stream__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Stream__Dispose_fn;
    return type;
}

// protected generated Stream() :2427
void Stream__ctor__fn(Stream* __this)
{
    __this->ctor_();
}

// public virtual void Close() :2483
void Stream__Close_fn(Stream* __this)
{
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :2489
void Stream__Dispose_fn(Stream* __this)
{
    __this->Dispose();
}

// public virtual void Dispose(bool disposing) :2479
void Stream__Dispose1_fn(Stream* __this, bool* disposing)
{
}

// protected generated Stream() [instance] :2427
void Stream::ctor_()
{
}

// public void Dispose() [instance] :2489
void Stream::Dispose()
{
    Close();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class StreamReader :2505
// {
static void StreamReader_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::StreamReader, _byteBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _byteLen), 0,
        ::g::Uno::Char_typeof()->Array(), offsetof(::g::Uno::IO::StreamReader, _charBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charLen), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charPos), 0,
        ::g::Uno::Text::Decoder_typeof(), offsetof(::g::Uno::IO::StreamReader, _decoder), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamReader, _stream), 0);
}

::g::Uno::IO::TextReader_type* StreamReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextReader_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StreamReader", options);
    type->fp_build_ = StreamReader_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StreamReader__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    return type;
}

// public StreamReader(Uno.IO.Stream stream) :2539
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :2557
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing)
{
    bool disposing_ = *disposing;

    if (disposing_ && (__this->_stream != NULL))
    {
        uPtr(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::g::Uno::IO::TextReader__Dispose1_fn(__this, uCRef(disposing_));
}

// public StreamReader New(Uno.IO.Stream stream) :2539
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval)
{
    *__retval = StreamReader::New1(stream);
}

// private void ReadBuffer() :2642
void StreamReader__ReadBuffer_fn(StreamReader* __this)
{
    __this->ReadBuffer();
}

// public string ReadToEnd() :2625
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval)
{
    *__retval = __this->ReadToEnd();
}

// public StreamReader(Uno.IO.Stream stream) [instance] :2539
void StreamReader::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _decoder = uPtr(::g::Uno::Text::Encoding::UTF8())->GetDecoder();
    _byteBuffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _byteLen = 0;
    _charBuffer = uArray::New(::TYPES[3/*char[]*/], 256);
    _charPos = 0;
    _charLen = 0;
}

// private void ReadBuffer() [instance] :2642
void StreamReader::ReadBuffer()
{
    _charPos = 0;
    _charLen = 0;

    do
    {
        _byteLen = uPtr(_stream)->Read(_byteBuffer, 0, uPtr(_byteBuffer)->Length());

        if (_byteLen == 0)
            return;

        _charLen = (_charLen + uPtr(_decoder)->GetChars(_byteBuffer, 0, _byteLen, _charBuffer, _charLen));
    }
    while (_charLen == 0);
}

// public string ReadToEnd() [instance] :2625
uString* StreamReader::ReadToEnd()
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (_charLen == 0)
        ReadBuffer();

    while (_charLen != 0)
    {
        int count = _charLen - _charPos;
        uArray* array = uArray::New(::TYPES[3/*char[]*/], count);

        for (int i = 0; i < count; i++)
            uPtr(array)->Item<uChar>(i) = uPtr(_charBuffer)->Item<uChar>(_charPos + i);

        uPtr(stringBuilder)->Append1(array);
        ReadBuffer();
    }

    return stringBuilder->ToString();
}

// public StreamReader New(Uno.IO.Stream stream) [static] :2539
StreamReader* StreamReader::New1(::g::Uno::IO::Stream* stream)
{
    StreamReader* obj1 = (StreamReader*)uNew(StreamReader_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public sealed class StreamWriter :2668
// {
static void StreamWriter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::StreamWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamWriter, _index), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamWriter, _stream), 0);
}

::g::Uno::IO::TextWriter_type* StreamWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextWriter_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StreamWriter", options);
    type->fp_build_ = StreamWriter_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StreamWriter__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    return type;
}

// public StreamWriter(Uno.IO.Stream stream) :2684
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :2692
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    __this->Flush();

    if (disposing_ && (__this->_stream != NULL))
        uPtr(__this->_stream)->Close();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public void Flush() :2758
void StreamWriter__Flush_fn(StreamWriter* __this)
{
    __this->Flush();
}

// public StreamWriter New(Uno.IO.Stream stream) :2684
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval)
{
    *__retval = StreamWriter::New1(stream);
}

// private void Write(byte[] array, int index, int count) :2740
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int* index, int* count)
{
    __this->Write13(array, *index, *count);
}

// public void Write(string value) :2734
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value)
{
    __this->Write9(value);
}

// public StreamWriter(Uno.IO.Stream stream) [instance] :2684
void StreamWriter::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _index = 0;
}

// public void Flush() [instance] :2758
void StreamWriter::Flush()
{
    if (_index != 0)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    uPtr(_stream)->Flush();
}

// private void Write(byte[] array, int index, int count) [instance] :2740
void StreamWriter::Write13(uArray* array, int index, int count)
{
    if ((_index + count) >= 256)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    if (count >= 256)
    {
        uPtr(_stream)->Write(array, index, count);
        return;
    }

    for (int i = 0; i < count; i++)
        uPtr(_buffer)->Item<uint8_t>(_index++) = uPtr(array)->Item<uint8_t>(index + i);
}

// public void Write(string value) [instance] :2734
void StreamWriter::Write9(uString* value)
{
    uArray* array = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    Write13(array, 0, uPtr(array)->Length());
}

// public StreamWriter New(Uno.IO.Stream stream) [static] :2684
StreamWriter* StreamWriter::New1(::g::Uno::IO::Stream* stream)
{
    StreamWriter* obj1 = (StreamWriter*)uNew(StreamWriter_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public abstract class TextReader :3001
// {
static void TextReader_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextReader_type, interface0));
}

TextReader_type* TextReader_typeof()
{
    static uSStrong<TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextReader);
    options.TypeSize = sizeof(TextReader_type);
    type = (TextReader_type*)uClassType::New("Uno.IO.TextReader", options);
    type->fp_build_ = TextReader_build;
    type->fp_Dispose1 = TextReader__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextReader__Dispose_fn;
    return type;
}

// protected generated TextReader() :3001
void TextReader__ctor__fn(TextReader* __this)
{
    __this->ctor_();
}

// public void Dispose() :3005
void TextReader__Dispose_fn(TextReader* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :3011
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing)
{
}

// protected generated TextReader() [instance] :3001
void TextReader::ctor_()
{
}

// public void Dispose() [instance] :3005
void TextReader::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public abstract class TextWriter :3123
// {
static void TextWriter_build(uType* type)
{
    ::STRINGS[7] = uString::Const("\r\n"
        "");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextWriter_type, interface0));
}

TextWriter_type* TextWriter_typeof()
{
    static uSStrong<TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextWriter);
    options.TypeSize = sizeof(TextWriter_type);
    type = (TextWriter_type*)uClassType::New("Uno.IO.TextWriter", options);
    type->fp_build_ = TextWriter_build;
    type->fp_Dispose1 = TextWriter__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextWriter__Dispose_fn;
    return type;
}

// protected generated TextWriter() :3123
void TextWriter__ctor__fn(TextWriter* __this)
{
    __this->ctor_();
}

// public void Dispose() :3127
void TextWriter__Dispose_fn(TextWriter* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :3133
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing)
{
}

// protected generated TextWriter() [instance] :3123
void TextWriter::ctor_()
{
}

// public void Dispose() [instance] :3127
void TextWriter::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.38.2/source/uno/io/$.uno
// ----------------------------------------------------------------

// public enum UserDirectory :1214
uEnumType* UserDirectory_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.UserDirectory", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Config", 0LL,
        "Data", 1LL,
        "Desktop", 2LL,
        "Downloads", 3LL,
        "Templates", 4LL,
        "Public", 5LL,
        "Documents", 6LL,
        "Music", 7LL,
        "Pictures", 8LL,
        "Videos", 9LL);
    return type;
}

}}} // ::g::Uno::IO
