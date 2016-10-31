package com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android;

// fuse defined imports
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
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class JavaToUnoArrayEntrypoints
{
    static void debug_log(Object message)
    {
        android.util.Log.d("commaxtedfusetest", (message==null ? "null" : message.toString()));
    }

    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
    public static Object copyBoolArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2(array);
    }
    
    public static Object copyByteArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3(array);
    }
    
    public static Object copyCharArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4(array);
    }
    
    public static Object copyDoubleArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5(array);
    }
    
    public static Object copyFloatArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6(array);
    }
    
    public static Object copyIntArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7(array);
    }
    
    public static Object copyLongArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8(array);
    }
    
    public static Object copyObjectArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9(array);
    }
    
    public static Object copyShortArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10(array);
    }
    
    public static Object copyStringArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11(array);
    }
    
    public static Object copyUByteArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12(array);
    }
    
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
    public static boolean getBool(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15(array,index);
    }
    
    public static byte getByte(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16(array,index);
    }
    
    public static char getChar(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17(array,index);
    }
    
    public static double getDouble(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18(array,index);
    }
    
    public static float getFloat(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19(array,index);
    }
    
    public static int getInt(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20(array,index);
    }
    
    public static long getLong(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21(array,index);
    }
    
    public static Object getObject(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22(array,index);
    }
    
    public static short getShort(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23(array,index);
    }
    
    public static String getString(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24(array,index);
    }
    
    public static byte getUByte(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25(array,index);
    }
    
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
    public static long newBoolArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28(length);
    }
    
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29(length,unoIsUnsigned);
    }
    
    public static long newCharArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30(length);
    }
    
    public static long newDoubleArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31(length);
    }
    
    public static long newFloatArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32(length);
    }
    
    public static long newIntArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33(length);
    }
    
    public static long newLongArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34(length);
    }
    
    public static long newObjectArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35(length);
    }
    
    public static long newShortArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36(length);
    }
    
    public static long newStringArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37(length);
    }
    
    public static boolean setBool(final Object array,final int index,final boolean val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38(array,index,val);
    }
    
    public static byte setByte(final Object array,final int index,final byte val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39(array,index,val);
    }
    
    public static char setChar(final Object array,final int index,final char val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40(array,index,val);
    }
    
    public static double setDouble(final Object array,final int index,final double val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41(array,index,val);
    }
    
    public static float setFloat(final Object array,final int index,final float val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42(array,index,val);
    }
    
    public static int setInt(final Object array,final int index,final int val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43(array,index,val);
    }
    
    public static long setLong(final Object array,final int index,final long val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44(array,index,val);
    }
    
    public static Object setObject(final Object array,final int index,final Object val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45(array,index,val);
    }
    
    public static short setShort(final Object array,final int index,final short val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46(array,index,val);
    }
    
    public static String setString(final Object array,final int index,final String val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47(array,index,val);
    }
    
    public static byte setUByte(final Object array,final int index,final byte val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48(array,index,val);
    }
    
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49(arr,UnoHelper.GetUnoObjectRef(arr));
    }
    
}
