package com.foreign.Fuse.Controls.Native.Android;

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

public class MotionEvent
{
    static void debug_log(Object message)
    {
        android.util.Log.d("commaxtedfusetest", (message==null ? "null" : message.toString()));
    }

    public static boolean Compare91(final Object handle1,final Object handle2)
    {
        return (((android.view.MotionEvent)handle1) == ((android.view.MotionEvent)handle2));
    }
    
    public static int GetAction92(final Object _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getAction();
    }
    
    public static int GetActionMasked93(final Object _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getActionMasked();
    }
    
    public static long GetEventTime94(final Object _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getEventTime();
    }
    
    public static int GetLocationOnScreenX95(final Object _this, final Object viewHandle)
    {
        int[] array = new int[2];
        			((android.view.View)viewHandle).getLocationOnScreen(array);
        			return array[0];
    }
    
    public static int GetLocationOnScreenY96(final Object _this, final Object viewHandle)
    {
        int[] array = new int[2];
        			((android.view.View)viewHandle).getLocationOnScreen(array);
        			return array[1];
    }
    
    public static int GetPointerCount97(final Object _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getPointerCount();
    }
    
    public static int GetPointerId198(final Object _this, final Object handle,final int pointerIndex)
    {
        return ((android.view.MotionEvent)handle).getPointerId(pointerIndex);
    }
    
    public static int GetPointerIndexMask99()
    {
        return android.view.MotionEvent.ACTION_POINTER_INDEX_MASK;
    }
    
    public static int GetPointerIndexShift100()
    {
        return android.view.MotionEvent.ACTION_POINTER_INDEX_SHIFT;
    }
    
    public static float GetX101(final Object _this, final Object handle,final int pointerIndex)
    {
        return ((android.view.MotionEvent)handle).getX(pointerIndex);
    }
    
    public static float GetXPrecision102(final Object _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getXPrecision();
    }
    
    public static float GetY103(final Object _this, final Object handle,final int pointerIndex)
    {
        return ((android.view.MotionEvent)handle).getY(pointerIndex);
    }
    
    public static float GetYPrecision104(final Object _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getYPrecision();
    }
    
}
