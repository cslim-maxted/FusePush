// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/0.38.6/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreText/CoreText.h>
#include <Fuse.iOS.Bindings.CGFontRef.h>
#include <Fuse.iOS.Bindings.FontCache.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class FontCache :362
// {
// static FontCache() :362
static void FontCache__cctor__fn(uType* __type)
{
    FontCache::_fontNameCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, string>*/]));
}

static void FontCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/tempFont");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::iOS::Bindings::FontCache::_fontNameCache_, uFieldFlagsStatic);
}

uClassType* FontCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.FontCache", options);
    type->fp_build_ = FontCache_build;
    type->fp_cctor_ = FontCache__cctor__fn;
    return type;
}

// private static void CGFontRelease(Fuse.iOS.Bindings.CGFontRef cgFont) :447
void FontCache__CGFontRelease_fn(::CGFontRef* cgFont)
{
    FontCache::CGFontRelease(*cgFont);
}

// private static Fuse.iOS.Bindings.CGFontRef CoreGraphicsFontRefFromPath(string path) :464
void FontCache__CoreGraphicsFontRefFromPath_fn(uString* path, ::CGFontRef* __retval)
{
    *__retval = FontCache::CoreGraphicsFontRefFromPath(path);
}

// public static ObjC.Object CreateFontFromName(string fontName, float fontSize) :453
void FontCache__CreateFontFromName_fn(uString* fontName, float* fontSize, uObject** __retval)
{
    *__retval = FontCache::CreateFontFromName(fontName, *fontSize);
}

// public static ObjC.Object GetDefaultFont(float fontSize) :459
void FontCache__GetDefaultFont_fn(float* fontSize, uObject** __retval)
{
    *__retval = FontCache::GetDefaultFont(*fontSize);
}

// public static ObjC.Object GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) :366
void FontCache__GetFontFromFile_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval)
{
    *__retval = FontCache::GetFontFromFile(fileSource, *fontSize);
}

// private static ObjC.Object GetFromBundleFileSource(Uno.UX.BundleFileSource bundleFileSource, float fontSize) :374
void FontCache__GetFromBundleFileSource_fn(::g::Uno::UX::BundleFileSource* bundleFileSource, float* fontSize, uObject** __retval)
{
    *__retval = FontCache::GetFromBundleFileSource(bundleFileSource, *fontSize);
}

// private static ObjC.Object GetFromFileSource(Uno.UX.FileSource fileSource, float fontSize) :404
void FontCache__GetFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval)
{
    *__retval = FontCache::GetFromFileSource(fileSource, *fontSize);
}

// private static string GetPathForBundle(string bundlePath) :398
void FontCache__GetPathForBundle_fn(uString* bundlePath, uString** __retval)
{
    *__retval = FontCache::GetPathForBundle(bundlePath);
}

// private static string GetPostScriptNameOfCGFontRef(Fuse.iOS.Bindings.CGFontRef font) :475
void FontCache__GetPostScriptNameOfCGFontRef_fn(::CGFontRef* font, uString** __retval)
{
    *__retval = FontCache::GetPostScriptNameOfCGFontRef(*font);
}

// private static bool RegisterFont(Fuse.iOS.Bindings.CGFontRef font) :431
void FontCache__RegisterFont_fn(::CGFontRef* font, bool* __retval)
{
    *__retval = FontCache::RegisterFont(*font);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FontCache::_fontNameCache_;

// private static void CGFontRelease(Fuse.iOS.Bindings.CGFontRef cgFont) [static] :447
void FontCache::CGFontRelease(::CGFontRef cgFont)
{
    FontCache_typeof()->Init();
    ::CGFontRelease(cgFont);
}

// private static Fuse.iOS.Bindings.CGFontRef CoreGraphicsFontRefFromPath(string path) [static] :464
::CGFontRef FontCache::CoreGraphicsFontRefFromPath(uString* path)
{
    FontCache_typeof()->Init();
    const char* pathCString = uAllocCStr(path);
    			::CGDataProviderRef fontDataProvider = ::CGDataProviderCreateWithFilename(pathCString);
    			::CGFontRef font = ::CGFontCreateWithDataProvider(fontDataProvider);
    			::CGDataProviderRelease(fontDataProvider);
    			uFreeCStr(pathCString);
    			return font;
}

// public static ObjC.Object CreateFontFromName(string fontName, float fontSize) [static] :453
uObject* FontCache::CreateFontFromName(uString* fontName, float fontSize)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::NSString* fontName, float fontSize) -> ::id
        {
            return [UIFont fontWithName:fontName size:fontSize];
        } (::uObjC::NativeString(fontName), fontSize));
        
    }
    
}

// public static ObjC.Object GetDefaultFont(float fontSize) [static] :459
uObject* FontCache::GetDefaultFont(float fontSize)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (float fontSize) -> ::id
        {
            return [UIFont systemFontOfSize:fontSize];
        } (fontSize));
        
    }
    
}

// public static ObjC.Object GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) [static] :366
uObject* FontCache::GetFontFromFile(::g::Uno::UX::FileSource* fileSource, float fontSize)
{
    FontCache_typeof()->Init();

    if (uIs(fileSource, ::TYPES[1/*Uno.UX.BundleFileSource*/]))
        return FontCache::GetFromBundleFileSource(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[1/*Uno.UX.BundleFileSource*/]), fontSize);

    return FontCache::GetFromFileSource(fileSource, fontSize);
}

// private static ObjC.Object GetFromBundleFileSource(Uno.UX.BundleFileSource bundleFileSource, float fontSize) [static] :374
uObject* FontCache::GetFromBundleFileSource(::g::Uno::UX::BundleFileSource* bundleFileSource, float fontSize)
{
    FontCache_typeof()->Init();
    bool ret1;
    uString* ret2;
    ::g::Uno::IO::BundleFile* bundleFile = uPtr(bundleFileSource)->BundleFile;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(FontCache::_fontNameCache()), uPtr(bundleFile)->BundlePath(), &ret1), ret1))
    {
        uString* path = FontCache::GetPathForBundle(uPtr(bundleFile)->BundlePath());
        ::CGFontRef font = FontCache::CoreGraphicsFontRefFromPath(path);

        if (::g::Uno::IntPtr::op_Equality((void*)font, ::g::Uno::IntPtr::Zero_))
            return NULL;

        uString* name = FontCache::GetPostScriptNameOfCGFontRef(font);
        FontCache::CGFontRelease(font);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FontCache::_fontNameCache()), bundleFile->BundlePath(), name);
    }

    uString* fontName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FontCache::_fontNameCache()), uPtr(bundleFile)->BundlePath(), &ret2), ret2);
    return FontCache::CreateFontFromName(fontName, fontSize);
}

// private static ObjC.Object GetFromFileSource(Uno.UX.FileSource fileSource, float fontSize) [static] :404
uObject* FontCache::GetFromFileSource(::g::Uno::UX::FileSource* fileSource, float fontSize)
{
    FontCache_typeof()->Init();
    bool ret3;
    uString* ret4;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(FontCache::_fontNameCache()), uPtr(fileSource)->Name, &ret3), ret3))
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[0/*"/tempFont"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        ::CGFontRef font = FontCache::CoreGraphicsFontRefFromPath(path);

        if (::g::Uno::IntPtr::op_Equality((void*)font, ::g::Uno::IntPtr::Zero_))
            return NULL;

        FontCache::RegisterFont(font);
        uString* name = FontCache::GetPostScriptNameOfCGFontRef(font);
        FontCache::CGFontRelease(font);
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FontCache::_fontNameCache()), fileSource->Name, name);
    }

    uString* fontName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FontCache::_fontNameCache()), uPtr(fileSource)->Name, &ret4), ret4);
    return FontCache::CreateFontFromName(fontName, fontSize);
}

// private static string GetPathForBundle(string bundlePath) [static] :398
uString* FontCache::GetPathForBundle(uString* bundlePath)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            NSString* fullBundlePath = [@"data/" stringByAppendingString:bundlePath];
            			return [[NSBundle mainBundle] pathForResource:fullBundlePath ofType:@""];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// private static string GetPostScriptNameOfCGFontRef(Fuse.iOS.Bindings.CGFontRef font) [static] :475
uString* FontCache::GetPostScriptNameOfCGFontRef(::CGFontRef font)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::CGFontRef font) -> ::NSString*
        {
            CFStringRef fontName = CGFontCopyPostScriptName(font);
            			NSString* result = [[(__bridge NSString*)fontName retain] autorelease];
            			CFRelease(fontName);
            			return result;
        } (font));
        
    }
    
}

// private static bool RegisterFont(Fuse.iOS.Bindings.CGFontRef font) [static] :431
bool FontCache::RegisterFont(::CGFontRef font)
{
    FontCache_typeof()->Init();
    CFErrorRef cfError;
    			if (!::CTFontManagerRegisterGraphicsFont(font, &cfError))
    			{
    				NSError* error = (__bridge NSError*)cfError;
    				if (error.code != 120)
    				{
    					// TODO: deal with error
    					// throw new Exception("");
    					return false;
    				}
    			}
    			return true;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
