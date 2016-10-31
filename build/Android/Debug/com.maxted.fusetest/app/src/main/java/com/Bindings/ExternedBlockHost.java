package com.Bindings;

import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
public class ExternedBlockHost
{
    static void debug_log(Object message)
    {
        android.util.Log.d("commaxtedfusetest", (message==null ? "null" : message.toString()));
    }
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(final Object jarr,long jarrPtr);
    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.boolArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(final Object jarr,long jarrPtr);
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.byteArrayToUnoArrayPtr(arr);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2(final Object array);
    public static Object copyBoolArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyBoolArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3(final Object array);
    public static Object copyByteArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyByteArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4(final Object array);
    public static Object copyCharArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyCharArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5(final Object array);
    public static Object copyDoubleArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyDoubleArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6(final Object array);
    public static Object copyFloatArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyFloatArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7(final Object array);
    public static Object copyIntArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyIntArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8(final Object array);
    public static Object copyLongArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyLongArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9(final Object array);
    public static Object copyObjectArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyObjectArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10(final Object array);
    public static Object copyShortArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyShortArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11(final Object array);
    public static Object copyStringArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyStringArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12(final Object array);
    public static Object copyUByteArray(final Object array)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyUByteArray(array);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13(final Object jarr,long jarrPtr);
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.doubleArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14(final Object jarr,long jarrPtr);
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.floatArrayToUnoArrayPtr(arr);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15(final Object array,final int index);
    public static boolean getBool(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getBool(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16(final Object array,final int index);
    public static byte getByte(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getByte(array,index);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17(final Object array,final int index);
    public static char getChar(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getChar(array,index);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18(final Object array,final int index);
    public static double getDouble(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getDouble(array,index);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19(final Object array,final int index);
    public static float getFloat(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getFloat(array,index);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20(final Object array,final int index);
    public static int getInt(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getInt(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21(final Object array,final int index);
    public static long getLong(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getLong(array,index);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22(final Object array,final int index);
    public static Object getObject(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getObject(array,index);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23(final Object array,final int index);
    public static short getShort(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getShort(array,index);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24(final Object array,final int index);
    public static String getString(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getString(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25(final Object array,final int index);
    public static byte getUByte(final Object array,final int index)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getUByte(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26(final Object jarr,long jarrPtr);
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.intArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27(final Object jarr,long jarrPtr);
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.longArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28(final int length);
    public static long newBoolArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newBoolArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29(final int length,final boolean unoIsUnsigned);
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newByteArrayPtr(length,unoIsUnsigned);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30(final int length);
    public static long newCharArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newCharArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31(final int length);
    public static long newDoubleArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newDoubleArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32(final int length);
    public static long newFloatArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newFloatArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33(final int length);
    public static long newIntArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newIntArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34(final int length);
    public static long newLongArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newLongArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35(final int length);
    public static long newObjectArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newObjectArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36(final int length);
    public static long newShortArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newShortArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37(final int length);
    public static long newStringArrayPtr(final int length)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newStringArrayPtr(length);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38(final Object array,final int index,final boolean val);
    public static boolean setBool(final Object array,final int index,final boolean val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setBool(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39(final Object array,final int index,final byte val);
    public static byte setByte(final Object array,final int index,final byte val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setByte(array,index,val);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40(final Object array,final int index,final char val);
    public static char setChar(final Object array,final int index,final char val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setChar(array,index,val);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41(final Object array,final int index,final double val);
    public static double setDouble(final Object array,final int index,final double val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setDouble(array,index,val);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42(final Object array,final int index,final float val);
    public static float setFloat(final Object array,final int index,final float val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setFloat(array,index,val);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43(final Object array,final int index,final int val);
    public static int setInt(final Object array,final int index,final int val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setInt(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44(final Object array,final int index,final long val);
    public static long setLong(final Object array,final int index,final long val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setLong(array,index,val);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45(final Object array,final int index,final Object val);
    public static Object setObject(final Object array,final int index,final Object val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setObject(array,index,val);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46(final Object array,final int index,final short val);
    public static short setShort(final Object array,final int index,final short val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setShort(array,index,val);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47(final Object array,final int index,final String val);
    public static String setString(final Object array,final int index,final String val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setString(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48(final Object array,final int index,final byte val);
    public static byte setUByte(final Object array,final int index,final byte val)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setUByte(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49(final Object jarr,long jarrPtr);
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.shortArrayToUnoArrayPtr(arr);
    }
    
    public static native void callUno_Uno_Collections_List_lt_string_gt__Add51(final Object jthis,final String item);
    public static boolean JavaGetLocalAddresses50(final Object addresses)
    {
        return com.foreign.Uno.Net.Dns.JavaGetLocalAddresses50(addresses);
    }
    
    public static Object Create52()
    {
        return com.foreign.Fuse.Controls.Native.Android.Button.Create52();
    }
    
    public static void SetText53(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.Button.SetText53(handle,text);
    }
    
    public static void UpdateShapeDrawable154(final Object _this, final Object handle,final boolean useAngle,final float width,final float height,final float startAngle,final float endAngle)
    {
        com.foreign.Fuse.Controls.Native.Android.Circle.UpdateShapeDrawable154(_this, handle,useAngle,width,height,startAngle,endAngle);
    }
    
    public static void AddView55(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView55(parentHandle,childHandle);
    }
    
    public static void AddView156(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView156(parentHandle,childHandle,index);
    }
    
    public static Object Create57()
    {
        return com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.Create57();
    }
    
    public static void HideOffscreenParent58(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.HideOffscreenParent58(handle);
    }
    
    public static void RemoveView59(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.RemoveView59(parentHandle,childHandle);
    }
    
    public static void SetChildSize60(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetChildSize60(handle,w,h);
    }
    
    public static void SetClipToBounds61(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetClipToBounds61(handle,clipToBounds);
    }
    
    public static void UpdateShapeDrawable162(final Object _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Ellipse.UpdateShapeDrawable162(_this, handle);
    }
    
    public static void ClearListener63(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.ClearListener63(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange65(final Object jthis,final boolean hasFocus);
    public static Object Create64(final Object _this)
    {
        return com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.Create64(_this);
    }
    
    public static void SetListener66(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.SetListener66(viewHandle,listenerHandle);
    }
    
    public static Object GetContext67(final Object viewHandle)
    {
        return com.foreign.Fuse.Controls.Native.Android.FocusManager.GetContext67(viewHandle);
    }
    
    public static Object GetWindowToken68(final Object viewHandle)
    {
        return com.foreign.Fuse.Controls.Native.Android.FocusManager.GetWindowToken68(viewHandle);
    }
    
    public static boolean HasFocus69(final Object viewHandle)
    {
        return com.foreign.Fuse.Controls.Native.Android.FocusManager.HasFocus69(viewHandle);
    }
    
    public static void RequestRootViewFocus70(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusManager.RequestRootViewFocus70(viewHandle);
    }
    
    public static native void callUno_Action_Object(final com.foreign.Uno.Action_Object theDelegate,final Object arg,long argPtr);
    public static native void callUno_Action_String(final com.foreign.Uno.Action_String theDelegate,final String arg);
    public static void LoadAsync71(final String urlString,final com.foreign.Uno.Action_Object success,final com.foreign.Uno.Action_String error)
    {
        com.foreign.Fuse.Controls.Native.Android.HttpImageLoader.LoadAsync71(urlString,success,error);
    }
    
    public static void ClearBitmap72(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.ClearBitmap72(handle);
    }
    
    public static Object Create73(final Object container)
    {
        return com.foreign.Fuse.Controls.Native.Android.ImageView.Create73(container);
    }
    
    public static Object CreateContainer74()
    {
        return com.foreign.Fuse.Controls.Native.Android.ImageView.CreateContainer74();
    }
    
    public static void GetImageSize75(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.GetImageSize75(handle,wh);
    }
    
    public static void SetBitmap76(final Object handle,final Object bitmapHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetBitmap76(handle,bitmapHandle);
    }
    
    public static void SetImageMatrix77(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageMatrix77(handle,x,y,scaleX,scaleY);
    }
    
    public static void SetImageSize178(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageSize178(handle,wh);
    }
    
    public static void ClearOnTouchListener79(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.ClearOnTouchListener79(viewHandle);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch81(final Object view,final Object motionEvent,long viewPtr,long motionEventPtr);
    public static Object CreateTouchListener80()
    {
        return com.foreign.Fuse.Controls.Native.Android.InputDispatch.CreateTouchListener80();
    }
    
    public static void SetOnTouchListener82(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.SetOnTouchListener82(viewHandle,listenerHandle);
    }
    
    public static boolean ContainsKey183(final Object handle,final Object key)
    {
        return com.foreign.Fuse.Controls.Native.Android.JavaMap.ContainsKey183(handle,key);
    }
    
    public static Object Create84()
    {
        return com.foreign.Fuse.Controls.Native.Android.JavaMap.Create84();
    }
    
    public static Object Get185(final Object handle,final Object key)
    {
        return com.foreign.Fuse.Controls.Native.Android.JavaMap.Get185(handle,key);
    }
    
    public static void Put86(final Object handle,final Object key,final Object value)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Put86(handle,key,value);
    }
    
    public static void Remove187(final Object handle,final Object key)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Remove187(handle,key);
    }
    
    public static int GetMeasuredHeight88(final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredHeight88(handle);
    }
    
    public static int GetMeasuredWidth89(final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredWidth89(handle);
    }
    
    public static void Measure90(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        com.foreign.Fuse.Controls.Native.Android.LeafView.Measure90(handle,w,h,hasX,hasY);
    }
    
    public static boolean Compare91(final Object handle1,final Object handle2)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.Compare91(handle1,handle2);
    }
    
    public static int GetAction92(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetAction92(_this, handle);
    }
    
    public static int GetActionMasked93(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetActionMasked93(_this, handle);
    }
    
    public static long GetEventTime94(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetEventTime94(_this, handle);
    }
    
    public static int GetLocationOnScreenX95(final Object _this, final Object viewHandle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenX95(_this, viewHandle);
    }
    
    public static int GetLocationOnScreenY96(final Object _this, final Object viewHandle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenY96(_this, viewHandle);
    }
    
    public static int GetPointerCount97(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerCount97(_this, handle);
    }
    
    public static int GetPointerId198(final Object _this, final Object handle,final int pointerIndex)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerId198(_this, handle,pointerIndex);
    }
    
    public static int GetPointerIndexMask99()
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexMask99();
    }
    
    public static int GetPointerIndexShift100()
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexShift100();
    }
    
    public static float GetX101(final Object _this, final Object handle,final int pointerIndex)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetX101(_this, handle,pointerIndex);
    }
    
    public static float GetXPrecision102(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetXPrecision102(_this, handle);
    }
    
    public static float GetY103(final Object _this, final Object handle,final int pointerIndex)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetY103(_this, handle,pointerIndex);
    }
    
    public static float GetYPrecision104(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetYPrecision104(_this, handle);
    }
    
    public static Object CreateBitmap105(final int w,final int h)
    {
        return com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.CreateBitmap105(w,h);
    }
    
    public static void DisposeBitmap106(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.DisposeBitmap106(bitmap);
    }
    
    public static void Upload107(final Object viewHandle,final Object bitmapHandle,final boolean reuse,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.Upload107(viewHandle,bitmapHandle,reuse,w,h);
    }
    
    public static void UpdateShapeDrawable1108(final Object _this, final Object handle,final float x,final float y,final float z,final float w)
    {
        com.foreign.Fuse.Controls.Native.Android.Rectangle.UpdateShapeDrawable1108(_this, handle,x,y,z,w);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged110(final Object jthis,final int x,final int y,final int oldx,final int oldy);
    public static Object AddCallback109(final Object _this, final Object handle)
    {
        return com.foreign.Fuse.Controls.Native.Android.ScrollView.AddCallback109(_this, handle);
    }
    
    public static Object Create111()
    {
        return com.foreign.Fuse.Controls.Native.Android.ScrollView.Create111();
    }
    
    public static void SetChildSize112(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetChildSize112(handle,w,h);
    }
    
    public static void SetClipToBounds113(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetClipToBounds113(handle,clipToBounds);
    }
    
    public static void SetContent114(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetContent114(parentHandle,childHandle);
    }
    
    public static void SetScrollPosition115(final Object handle,final int x,final int y)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetScrollPosition115(handle,x,y);
    }
    
    public static Object Create116()
    {
        return com.foreign.Fuse.Controls.Native.Android.Shape.Create116();
    }
    
    public static Object CreateShapeDrawable117()
    {
        return com.foreign.Fuse.Controls.Native.Android.Shape.CreateShapeDrawable117();
    }
    
    public static Object GetLayer118(final Object handle,final int layer)
    {
        return com.foreign.Fuse.Controls.Native.Android.Shape.GetLayer118(handle,layer);
    }
    
    public static Object MakeLayerDrawable119(final Object handle,final int layerCount)
    {
        return com.foreign.Fuse.Controls.Native.Android.Shape.MakeLayerDrawable119(handle,layerCount);
    }
    
    public static void SetShapeDrawableColor120(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableColor120(shapeDrawable,r,g,b,a,opacity);
    }
    
    public static void SetShapeDrawableLinearGradient121(final Object shapeDrawable,final float startX,final float startY,final float endX,final float endY,final com.uno.IntArray colors,final com.uno.FloatArray positions)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableLinearGradient121(shapeDrawable,startX,startY,endX,endY,colors,positions);
    }
    
    public static void SetShapeDrawableStrokeWidth122(final Object shapeDrawable,final float width)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableStrokeWidth122(shapeDrawable,width);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged124(final Object jthis,final double newProgress);
    public static void AddChangedCallback123(final Object _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.AddChangedCallback123(_this, handle);
    }
    
    public static Object Create125()
    {
        return com.foreign.Fuse.Controls.Native.Android.Slider.Create125();
    }
    
    public static void SetProgress126(final Object handle,final double progress)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.SetProgress126(handle,progress);
    }
    
    public static void HideKeyboard127(final Object hideKeyboardContext,final Object hideKeyboardWindowToken)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.HideKeyboard127(hideKeyboardContext,hideKeyboardWindowToken);
    }
    
    public static void ShowKeyboard128(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.ShowKeyboard128(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded130(final Object jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged131(final Object jthis,final Object holder,final int f,final int w,final int h,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated132(final Object jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed133(final Object jthis,final Object holder,long holderPtr);
    public static void AddCallback129(final Object _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.SurfaceView.AddCallback129(_this, handle);
    }
    
    public static Object Create134()
    {
        return com.foreign.Fuse.Controls.Native.Android.SurfaceView.Create134();
    }
    
    public static Object GetSurface135(final Object holder)
    {
        return com.foreign.Fuse.Controls.Native.Android.SurfaceView.GetSurface135(holder);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged137(final Object jthis,final boolean value);
    public static void AddCallback136(final Object _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.AddCallback136(_this, handle);
    }
    
    public static Object Create138()
    {
        return com.foreign.Fuse.Controls.Native.Android.Switch.Create138();
    }
    
    public static void SetValue139(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.SetValue139(handle,value);
    }
    
    public static void MakeItPlain140(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEdit.MakeItPlain140(handle);
    }
    
    public static void CopyState141(final Object container,final Object sourceHandle,final Object targetHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CopyState141(container,sourceHandle,targetHandle);
    }
    
    public static Object CreateContainer142()
    {
        return com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateContainer142();
    }
    
    public static Object CreateTextEdit143()
    {
        return com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateTextEdit143();
    }
    
    public static void AddView144(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.AddView144(parentHandle,childHandle);
    }
    
    public static Object Create145()
    {
        return com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.Create145();
    }
    
    public static void RemoveView146(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.RemoveView146(parentHandle,childHandle);
    }
    
    public static void SetChildSize147(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.SetChildSize147(handle,w,h);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction149(final Object jthis,final int actionCode);
    public static void AddEditorActionListener148(final Object _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddEditorActionListener148(_this, handle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged151(final Object jthis,final String value);
    public static void AddTextChangedListener150(final Object _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddTextChangedListener150(_this, handle);
    }
    
    public static void ClearFocus152(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.ClearFocus152(handle);
    }
    
    public static Object Create1153()
    {
        return com.foreign.Fuse.Controls.Native.Android.TextInput.Create1153();
    }
    
    public static boolean HasFocus154(final Object viewHandle)
    {
        return com.foreign.Fuse.Controls.Native.Android.TextInput.HasFocus154(viewHandle);
    }
    
    public static void RequestFocus155(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.RequestFocus155(viewHandle);
    }
    
    public static void SetCursorDrawableColor156(final Object _this, final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetCursorDrawableColor156(_this, handle,color);
    }
    
    public static void SetImeOptions157(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetImeOptions157(handle,value);
    }
    
    public static void SetInputType158(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetInputType158(handle,value);
    }
    
    public static void SetPlaceholderColor159(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderColor159(handle,value);
    }
    
    public static void SetPlaceholderText160(final Object handle,final String value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderText160(handle,value);
    }
    
    public static void SetSelectionColor161(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetSelectionColor161(handle,color);
    }
    
    public static Object Create162()
    {
        return com.foreign.Fuse.Controls.Native.Android.TextView.Create162();
    }
    
    public static void SetFont163(final Object handle,final Object fontHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFont163(handle,fontHandle);
    }
    
    public static void SetFontSize164(final Object handle,final float size)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFontSize164(handle,size);
    }
    
    public static void SetLineSpacing165(final Object handle,final float spacing)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetLineSpacing165(handle,spacing);
    }
    
    public static void SetMaxLength166(final Object handle,final int maxLength)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetMaxLength166(handle,maxLength);
    }
    
    public static void SetText167(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetText167(handle,text);
    }
    
    public static void SetTextAlignment168(final Object handle,final int alignment)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextAlignment168(handle,alignment);
    }
    
    public static void SetTextColor169(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextColor169(handle,color);
    }
    
    public static void SetTextWrapping170(final Object handle,final boolean wrap)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextWrapping170(handle,wrap);
    }
    
    public static Object CreateFromBundleFile171(final String bundlePath)
    {
        return com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromBundleFile171(bundlePath);
    }
    
    public static Object CreateFromFileImpl172(final String path)
    {
        return com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromFileImpl172(path);
    }
    
    public static Object GetDefault173()
    {
        return com.foreign.Fuse.Controls.Native.Android.Typeface.GetDefault173();
    }
    
    public static void BringToFront1174(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.View.BringToFront1174(handle);
    }
    
    public static void SetBackground175(final Object handle,final int argb)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetBackground175(handle,argb);
    }
    
    public static void SetEnabled176(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetEnabled176(handle,value);
    }
    
    public static void SetOpacity177(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetOpacity177(handle,value);
    }
    
    public static void SetPivotXY178(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetPivotXY178(handle,x,y);
    }
    
    public static void SetRotation179(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotation179(handle,value);
    }
    
    public static void SetRotationX180(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationX180(handle,value);
    }
    
    public static void SetRotationY181(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationY181(handle,value);
    }
    
    public static void SetScaleXY182(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetScaleXY182(handle,x,y);
    }
    
    public static void SetTranslation183(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetTranslation183(handle,x,y);
    }
    
    public static void SetVisible184(final Object handle,final boolean isVisible)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetVisible184(handle,isVisible);
    }
    
    public static void AddView185(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView185(parentHandle,childHandle);
    }
    
    public static void AddView1186(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView1186(parentHandle,childHandle,index);
    }
    
    public static Object Create187()
    {
        return com.foreign.Fuse.Controls.Native.Android.ViewGroup.Create187();
    }
    
    public static void RemoveView188(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.RemoveView188(parentHandle,childHandle);
    }
    
    public static void SetChildSize189(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetChildSize189(handle,w,h);
    }
    
    public static void SetClipToBounds190(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetClipToBounds190(handle,clipToBounds);
    }
    
    public static Object Download1191(final String url)
    {
        return com.foreign.Fuse.Controls.Native.ImageLoader.ImageHandlePromise.Download1191(url);
    }
    
    public static Object LoadFile192(final String filePath)
    {
        return com.foreign.Fuse.Controls.Native.ImageLoader.LoadFile192(filePath);
    }
    
    public static Object LoadUri193(final String uri)
    {
        return com.foreign.Fuse.Controls.Native.ImageLoader.LoadUri193(uri);
    }
    
    public static void Release194(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.ImageLoader.Release194(bitmap);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared196(final Object jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion197(final Object jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError198(final Object jthis,final int what,final int extra);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer199(final Object jthis,final int percent);
    public static Object CreateMediaPlayer195(final Object _this, final Object surfaceHandle)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateMediaPlayer195(_this, surfaceHandle);
    }
    
    public static Object CreateSurface200(final Object _this, final Object surfaceTexture)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurface200(_this, surfaceTexture);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable202(final Object jthis);
    public static Object CreateSurfaceTexture201(final Object _this, final int glHandle)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurfaceTexture201(_this, glHandle);
    }
    
    public static void Dispose1203(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Dispose1203(mediaplayerHandle,surfaceHandle,surfaceTextureHandle);
    }
    
    public static int GetCurrentPosition204(final Object handle)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetCurrentPosition204(handle);
    }
    
    public static int GetDuration205(final Object handle)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetDuration205(handle);
    }
    
    public static int GetHeight206(final Object handle)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetHeight206(handle);
    }
    
    public static int GetWidth207(final Object handle)
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetWidth207(handle);
    }
    
    public static boolean IsHardwareAccelerated208()
    {
        return com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.IsHardwareAccelerated208();
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred210(final Object jthis,final String msg);
    public static void LoadAsyncAsset209(final Object _this, final Object handle,final String assetName)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncAsset209(_this, handle,assetName);
    }
    
    public static void LoadAsyncUrl211(final Object _this, final Object handle,final String url)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncUrl211(_this, handle,url);
    }
    
    public static void Pause1212(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Pause1212(handle);
    }
    
    public static void Play1213(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Play1213(handle);
    }
    
    public static void SeekTo214(final Object handle,final int position)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SeekTo214(handle,position);
    }
    
    public static void SetVolume215(final Object handle,final float left,final float right)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SetVolume215(handle,left,right);
    }
    
    public static void UpdateTexture1216(final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.UpdateTexture1216(surfaceTextureHandle);
    }
    
    public static void AddJavascriptInterface217(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.AddJavascriptInterface217(handle,name,resultHandler);
    }
    
    public static boolean CanGoBack218(final Object handle)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoBack218(handle);
    }
    
    public static boolean CanGoForward219(final Object handle)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoForward219(handle);
    }
    
    public static native void callUno_Action_int(final com.foreign.Uno.Action_int theDelegate,final int arg);
    public static Object CreateAndSetWebChromeClient220(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebChromeClient220(webViewHandle,onProgress);
    }
    
    public static native void callUno_Action(final com.foreign.Uno.Action theDelegate);
    public static Object CreateAndSetWebViewClient221(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebViewClient221(webViewHandle,loaded,started,changed);
    }
    
    public static Object CreateWebView222()
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateWebView222();
    }
    
    public static double GetProgress223(final Object handle)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetProgress223(handle);
    }
    
    public static String GetTitle224(final Object handle)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetTitle224(handle);
    }
    
    public static String GetUrl225(final Object handle)
    {
        return com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetUrl225(handle);
    }
    
    public static void GoBack226(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoBack226(handle);
    }
    
    public static void GoForward227(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoForward227(handle);
    }
    
    public static void LoadHtml228(final Object handle,final String html,final String baseUrl)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadHtml228(handle,html,baseUrl);
    }
    
    public static void LoadUrl229(final Object handle,final String url)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadUrl229(handle,url);
    }
    
    public static void Reload230(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.Reload230(handle);
    }
    
    public static void StopLoading231(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.StopLoading231(handle);
    }
    
    public static void ClearRootView232(final Object handle)
    {
        com.foreign.Fuse.Android.AppRoot.ClearRootView232(handle);
    }
    
    public static native void callUno_Fuse_Android_AppRoot_OnTouchEvent__234(final Object motionEvent,long motionEventPtr);
    public static Object CreateRootView233()
    {
        return com.foreign.Fuse.Android.AppRoot.CreateRootView233();
    }
    
    public static void SetChildSize1235(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Android.AppRoot.SetChildSize1235(handle,w,h);
    }
    
    public static void SetRootView236(final Object handle,final Object rootHandle)
    {
        com.foreign.Fuse.Android.AppRoot.SetRootView236(handle,rootHandle);
    }
    
    public static Object CreateBitmapARGB8888Impl237(final int width,final int height)
    {
        return com.foreign.Fuse.Android.Bitmap.CreateBitmapARGB8888Impl237(width,height);
    }
    
    public static void EraseColor1238(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.Bitmap.EraseColor1238(handle,color);
    }
    
    public static void Recycle1239(final Object handle)
    {
        com.foreign.Fuse.Android.Bitmap.Recycle1239(handle);
    }
    
    public static Object Create240(final Object bitmapHandle)
    {
        return com.foreign.Fuse.Android.Canvas.Create240(bitmapHandle);
    }
    
    public static void Translate1241(final Object handle,final float dx,final float dy)
    {
        com.foreign.Fuse.Android.Canvas.Translate1241(handle,dx,dy);
    }
    
    public static void TexImage2D242(final int target,final int level,final Object bitmap,final int border)
    {
        com.foreign.Fuse.Android.GLUtils.TexImage2D242(target,level,bitmap,border);
    }
    
    public static Object Create243(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        return com.foreign.Fuse.Android.StaticLayout.Create243(text,bufStart,bufEnd,paintHandle,outerWidth,align,spacingMult,spacingAdd,includePad,truncateAt,ellipsizedWith);
    }
    
    public static Object Create1244(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad)
    {
        return com.foreign.Fuse.Android.StaticLayout.Create1244(text,paintHandle,width,align,spacingMult,spacingAdd,includePad);
    }
    
    public static void Draw1245(final Object layoutHandle,final Object canvasHandle)
    {
        com.foreign.Fuse.Android.StaticLayout.Draw1245(layoutHandle,canvasHandle);
    }
    
    public static float GetDesiredWidthImpl246(final String text,final Object paintHandle)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetDesiredWidthImpl246(text,paintHandle);
    }
    
    public static int GetEllipsizedWidth247(final Object handle)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetEllipsizedWidth247(handle);
    }
    
    public static int GetHeight248(final Object handle)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetHeight248(handle);
    }
    
    public static int GetLineBaseline1249(final Object handle,final int line)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetLineBaseline1249(handle,line);
    }
    
    public static int GetLineCount250(final Object handle)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetLineCount250(handle);
    }
    
    public static int GetLineEnd1251(final Object handle,final int line)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetLineEnd1251(handle,line);
    }
    
    public static float GetLineLeft1252(final Object handle,final int line)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetLineLeft1252(handle,line);
    }
    
    public static int GetLineStart1253(final Object handle,final int line)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetLineStart1253(handle,line);
    }
    
    public static int GetWidth254(final Object handle)
    {
        return com.foreign.Fuse.Android.StaticLayout.GetWidth254(handle);
    }
    
    public static int GetStatusBarColor255()
    {
        return com.foreign.Fuse.Android.StatusBarHelper.GetStatusBarColor255();
    }
    
    public static native void callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar257();
    public static void InstallGlobalListener256()
    {
        com.foreign.Fuse.Android.StatusBarHelper.InstallGlobalListener256();
    }
    
    public static void SetStatusBarColor258(final int color)
    {
        com.foreign.Fuse.Android.StatusBarHelper.SetStatusBarColor258(color);
    }
    
    public static Object Create259()
    {
        return com.foreign.Fuse.Android.TextPaint.Create259();
    }
    
    public static void GetTextBounds260(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        com.foreign.Fuse.Android.TextPaint.GetTextBounds260(handle,text,start,end,r);
    }
    
    public static void SetAntiAlias261(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Android.TextPaint.SetAntiAlias261(handle,value);
    }
    
    public static void SetColor262(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.TextPaint.SetColor262(handle,color);
    }
    
    public static void SetTextSize263(final Object handle,final float textSize)
    {
        com.foreign.Fuse.Android.TextPaint.SetTextSize263(handle,textSize);
    }
    
    public static void SetTypeface264(final Object paintHandle,final Object typefaceHandle)
    {
        com.foreign.Fuse.Android.TextPaint.SetTypeface264(paintHandle,typefaceHandle);
    }
    
    public static String GetCacheDirectory265()
    {
        return com.foreign.Fuse.FileSystem.AndroidPaths.GetCacheDirectory265();
    }
    
    public static String GetExternalCacheDirectory266()
    {
        return com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalCacheDirectory266();
    }
    
    public static String GetExternalFilesDirectory267()
    {
        return com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalFilesDirectory267();
    }
    
    public static String GetFilesDirectory268()
    {
        return com.foreign.Fuse.FileSystem.AndroidPaths.GetFilesDirectory268();
    }
    
    public static String GetCacheDirectory269()
    {
        return com.foreign.Fuse.FileSystem.UnifiedPaths.GetCacheDirectory269();
    }
    
    public static String GetDataDirectory270()
    {
        return com.foreign.Fuse.FileSystem.UnifiedPaths.GetDataDirectory270();
    }
    
    public static void cacheBundle271(final Object _bundle)
    {
        com.foreign.Fuse.PushNotifications.AndroidImpl.cacheBundle271(_bundle);
    }
    
    public static native int callUno_Fuse_PushNotifications_AndroidImpl_PLAY_SERVICES_RESOLUTION_REQUESTGet273();
    public static boolean CheckPlayServices272()
    {
        return com.foreign.Fuse.PushNotifications.AndroidImpl.CheckPlayServices272();
    }
    
    public static String GetPayloadFromBundle274(final Object _bundle)
    {
        return com.foreign.Fuse.PushNotifications.AndroidImpl.GetPayloadFromBundle274(_bundle);
    }
    
    public static native void callUno_Fuse_PushNotifications_AndroidImpl_OnRecieve276(final Object bundle,long bundlePtr);
    public static native String callUno_Fuse_PushNotifications_AndroidImpl__senderIDGet277();
    public static native void callUno_Fuse_PushNotifications_AndroidImpl_getRegistrationIdSuccess278(final String regid);
    public static native void callUno_Fuse_PushNotifications_AndroidImpl_getRegistrationIdError279(final String message);
    public static void JInit275()
    {
        com.foreign.Fuse.PushNotifications.AndroidImpl.JInit275();
    }
    
    public static void NoteInteractivity280(final boolean isItInteractive)
    {
        com.foreign.Fuse.PushNotifications.AndroidImpl.NoteInteractivity280(isItInteractive);
    }
    
    public static void NotificationFromJson281(final Object listener,final String _jsonStr,final Object _bundle)
    {
        com.foreign.Fuse.PushNotifications.AndroidImpl.NotificationFromJson281(listener,_jsonStr,_bundle);
    }
    
    public static void OnNotificationRecieved(final Object listener,final String from,final Object _bundle)
    {
        com.foreign.Fuse.PushNotifications.AndroidImpl.OnNotificationRecieved(listener,from,_bundle);
    }
    
    public static void SpitOutNotification282(final Object _listener,final String title,final String body,final String sound,final Object _payload)
    {
        com.foreign.Fuse.PushNotifications.AndroidImpl.SpitOutNotification282(_listener,title,body,sound,_payload);
    }
    
    public static void ClearAllNotifications283()
    {
        com.foreign.Fuse.PushNotifications.PushNotify.ClearAllNotifications283();
    }
    
    public static int GetBuildVersion284()
    {
        return com.foreign.Fuse.AndroidProperties.GetBuildVersion284();
    }
    
    public static String GetReleaseVersion285()
    {
        return com.foreign.Fuse.AndroidProperties.GetReleaseVersion285();
    }
    
    public static native void callUno_Fuse_App_OnFrameCallback287(final Object jthis,final double currentTime,final double deltaTime);
    public static void StartFrameCallback286(final Object _this)
    {
        com.foreign.Fuse.App.StartFrameCallback286(_this);
    }
    
}
