# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/targets/android/com.maxted.fusetest/app/src/main/Makefile.
# WARNING: Changes might be lost if you edit this file directly.

CC = arm-linux-androideabi-gcc
CXX = arm-linux-androideabi-g++
STRIP = arm-linux-androideabi-strip
UNO = /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe
NDK_DIR = "/Users/cslim/Library/Application Support/Fusetools/Fuse/Android/AndroidNDK"
SYSROOT_DIR = $(NDK_DIR)/platforms/android-9/arch-arm
SONAME = libcommaxtedfusetest.so
ABI = armeabi-v7a

CFLAGS = -O3 -g -DNDEBUG
INCLUDE_DIRS = -Iinclude -I/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.38.6 -I/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/include
LD_DIRS = -L/Users/cslim/Library/Application\ Support/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/libs/armeabi-v7a -L/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.38.6/lib/Android -L/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a
LD_LIBS = -landroid -lEGL -lGLESv2 -llog -lstlport_shared -lV8Simple -lz
STRIP_FLAGS = 

COMMON_FLAGS = \
	$(CFLAGS) \
	$(INCLUDE_DIRS) \
	--sysroot=$(SYSROOT_DIR) \
	-DANDROID \
	-fdata-sections \
	-ffunction-sections \
	-finline-limit=64 \
	-fno-strict-aliasing \
	-fomit-frame-pointer \
	-fpic \
	-fsigned-char \
	-funwind-tables \
	-isystem $(SYSROOT_DIR)/usr/include \
	-march=armv7-a \
	-mfloat-abi=softfp \
	-mfpu=vfpv3-d16 \
	-mthumb \
	-no-canonical-prefixes \
	-Wa,--noexecstack \
	-Wno-psabi

CXX_FLAGS = \
	$(COMMON_FLAGS) \
	-fexceptions \
	-frtti \
	-isystem /Users/cslim/Library/Application\ Support/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/stlport \
	-Wno-invalid-offsetof \
	-std=c++11

CC_FLAGS = \
	$(COMMON_FLAGS) \
	-std=c99

LD_FLAGS = \
	$(CXX_FLAGS) \
	$(LD_DIRS) \
	$(LD_LIBS) \
	-Wl,--fix-cortex-a8 \
	-Wl,--gc-sections \
	-Wl,--no-undefined \
	-Wl,-z,noexecstack \
	-Wl,-z,now \
	-Wl,-z,relro

STATIC_LIBS = \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libuImage.a \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libpng.a \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libjpeg.a \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libfreetype.a \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libXliMain.a \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libXliPlatform.a \
	/usr/local/share/uno/Packages/UnoCore/0.38.2/prebuilt/Android/lib/armeabi-v7a/libuBase.a

all: libs/$(ABI)/$(SONAME)
all: libs/$(ABI)/libstlport_shared.so
all: libs/$(ABI)/libV8Simple.so
all: libs/$(ABI)/gdbserver
all: libs/$(ABI)/gdb.setup

libs/$(ABI)/gdbserver: | libs/$(ABI)
	$(UNO) cp $(NDK_DIR)/prebuilt/android-arm/gdbserver/gdbserver libs/$(ABI)

libs/$(ABI)/gdb.setup: gdb.setup | libs/$(ABI)
	$(UNO) cp gdb.setup libs/$(ABI)

libs/$(ABI)/$(SONAME): .uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.MainView.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Types.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Wrappers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/BootstrapperImpl_Android.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Cache.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.TextureLoader.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Animations.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.NavigationControlBit.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.VideoImpl.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.VideoImpl.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Batching.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Effects.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.FileSystem.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Input.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Layouts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Motion.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Motion.Simulation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Navigation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Preview.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.PushNotifications.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Resources.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.Simple.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Selection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Storage.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.Actions.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Java.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Polyfills.Window.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Fonts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Models.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Diagnostics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Geometry.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.IO.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Sockets.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform2.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Threading.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Calendars.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.UX.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/_invoke.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/_main.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Activity/AApplication.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Activity/EntryPoints.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Activity/Platform2.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Base64.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Graphics/GLHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/JNIHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Memory.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/ObjectModel.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Support.cpp.o
libs/$(ABI)/$(SONAME): .uno/V8Proxy.cpp.o
libs/$(ABI)/$(SONAME): $(STATIC_LIBS) Makefile link.x | libs/$(ABI)
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(SONAME) -o .uno/$(SONAME) link.x $(STATIC_LIBS)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/$(SONAME) .uno/$(SONAME)

libs/$(ABI)/libstlport_shared.so: /Users/cslim/Library/Application\ Support/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_shared.so | libs/$(ABI)
	$(UNO) cp /Users/cslim/Library/Application\ Support/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_shared.so libs/$(ABI)/libstlport_shared.so

libs/$(ABI)/libV8Simple.so: /usr/local/share/uno/Packages/Fuse.Scripting.V8/0.38.6/lib/Android/libV8Simple.so | libs/$(ABI)
	$(UNO) cp /usr/local/share/uno/Packages/Fuse.Scripting.V8/0.38.6/lib/Android/libV8Simple.so libs/$(ABI)/libV8Simple.so

.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/_root.commaxtedfusetest_FuseControlsButton_Text_Property.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/Fuse.Controls.Button.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/Uno.Bool.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: include/Uno.UX.Selector.h
.uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o: jni/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp flags.txt | .uno
	echo _root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp.o -c jni/_root.commaxtedfusetest_FuseControlsButton_Text_Property.cpp

.uno/_root.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNative_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsBackButton_Text_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-bccebf50.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-8dbd4f90.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-43727aab.h
.uno/_root.g.cpp.o: include/_root.FuseControlsVideo_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseCore_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingPrimitives_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseEntities_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseReactive_bundle.h
.uno/_root.g.cpp.o: include/Fuse.Controls.BackButton.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Button.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollView.DefaultScroller.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollView.DefaultTrigger.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Text.h
.uno/_root.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/_root.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/_root.g.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/_root.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/_root.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/_root.g.cpp.o: include/Uno.Bool.h
.uno/_root.g.cpp.o: include/Uno.Int.h
.uno/_root.g.cpp.o: include/Uno.IO.Bundle.h
.uno/_root.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/_root.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/_root.g.cpp.o: include/Uno.String.h
.uno/_root.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.g.cpp.o: include/Uno.UX.Selector.h
.uno/_root.g.cpp.o: jni/_root.g.cpp flags.txt | .uno
	echo _root.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.g.cpp.o -c jni/_root.g.cpp

.uno/_root.MainView.cpp.o: include/_root.commaxtedfusetest_FuseControlsButton_Text_Property.h
.uno/_root.MainView.cpp.o: include/_root.MainView.h
.uno/_root.MainView.cpp.o: include/Fuse.Binding.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Button.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Slider.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.StatusBarBackground.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Switch.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Text.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.MainView.cpp.o: include/Fuse.FileSystem.FileSystemModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/_root.MainView.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/_root.MainView.cpp.o: include/Fuse.Layouts.Dock.h
.uno/_root.MainView.cpp.o: include/Fuse.Node.h
.uno/_root.MainView.cpp.o: include/Fuse.PushNotifications.Push.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.DataBinding-1.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.EventBinding.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.TimerModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.JavaScript.h
.uno/_root.MainView.cpp.o: include/Fuse.Storage.StorageModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.BusyTaskModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Visual.h
.uno/_root.MainView.cpp.o: include/FuseJS.Base64.h
.uno/_root.MainView.cpp.o: include/FuseJS.Bundle.h
.uno/_root.MainView.cpp.o: include/FuseJS.Environment.h
.uno/_root.MainView.cpp.o: include/FuseJS.FileReaderImpl.h
.uno/_root.MainView.cpp.o: include/FuseJS.Globals.h
.uno/_root.MainView.cpp.o: include/FuseJS.Lifecycle.h
.uno/_root.MainView.cpp.o: include/FuseJS.UserEvents.h
.uno/_root.MainView.cpp.o: include/Polyfills.Window.WindowModule.h
.uno/_root.MainView.cpp.o: include/Uno.Bool.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.IList-1.h
.uno/_root.MainView.cpp.o: include/Uno.Float.h
.uno/_root.MainView.cpp.o: include/Uno.Int.h
.uno/_root.MainView.cpp.o: include/Uno.Object.h
.uno/_root.MainView.cpp.o: include/Uno.String.h
.uno/_root.MainView.cpp.o: include/Uno.UX.NameTable.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Property-1.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Selector.h
.uno/_root.MainView.cpp.o: jni/_root.MainView.cpp flags.txt | .uno
	echo _root.MainView.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.MainView.cpp.o -c jni/_root.MainView.cpp

.uno/Android.Base.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.JavaVMPtr.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.g.cpp.o: include/Uno.Char.h
.uno/Android.Base.g.cpp.o: include/Uno.Double.h
.uno/Android.Base.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.g.cpp.o: include/Uno.Float.h
.uno/Android.Base.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.g.cpp.o: include/Uno.Math.h
.uno/Android.Base.g.cpp.o: include/Uno.SByte.h
.uno/Android.Base.g.cpp.o: include/Uno.Short.h
.uno/Android.Base.g.cpp.o: include/Uno.String.h
.uno/Android.Base.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.g.cpp.o: jni/Android.Base.g.cpp flags.txt | .uno
	echo Android.Base.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.g.cpp.o -c jni/Android.Base.g.cpp

.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JavaVMPtr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JNINativeMethod.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jweak.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujboolean.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujbyte.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujchar.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujdouble.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujfloat.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujint.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujshort.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujstring.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.uweakptr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Primitives.g.cpp.o: jni/Android.Base.Primitives.g.cpp flags.txt | .uno
	echo Android.Base.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Primitives.g.cpp.o -c jni/Android.Base.Primitives.g.cpp

.uno/Android.Base.Types.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Types.g.cpp.o: jni/Android.Base.Types.g.cpp flags.txt | .uno
	echo Android.Base.Types.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Types.g.cpp.o -c jni/Android.Base.Types.g.cpp

.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.uweakptr.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Object.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Wrappers.g.cpp.o: jni/Android.Base.Wrappers.g.cpp flags.txt | .uno
	echo Android.Base.Wrappers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Wrappers.g.cpp.o -c jni/Android.Base.Wrappers.g.cpp

.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Bool.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Exception.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Int.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Long.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Type.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: jni/Android.com.fuse.ExperimentalHttp.g.cpp flags.txt | .uno
	echo Android.com.fuse.ExperimentalHttp.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o -c jni/Android.com.fuse.ExperimentalHttp.g.cpp

.uno/Android.g.cpp.o: include/Android.Bootstrapper.h
.uno/Android.g.cpp.o: include/BootstrapperImpl_Android.h
.uno/Android.g.cpp.o: jni/Android.g.cpp flags.txt | .uno
	echo Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.g.cpp.o -c jni/Android.g.cpp

.uno/BootstrapperImpl_Android.cpp.o: include/BootstrapperImpl_Android.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.JNI.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.Types.Bridge.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
.uno/BootstrapperImpl_Android.cpp.o: jni/BootstrapperImpl_Android.cpp flags.txt | .uno
	echo BootstrapperImpl_Android.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/BootstrapperImpl_Android.cpp.o -c jni/BootstrapperImpl_Android.cpp

.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICacheReader.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICacheWriter.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ProxyStream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.String.h
.uno/Experimental.Cache.g.cpp.o: jni/Experimental.Cache.g.cpp flags.txt | .uno
	echo Experimental.Cache.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Cache.g.cpp.o -c jni/Experimental.Cache.g.cpp

.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICacheReader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICacheWriter.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.BinaryLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpResponseHeader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Internal.DateUtil.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Loader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.LoaderConst.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.TextLoader.h
.uno/Experimental.Http.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Char.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Experimental.Http.g.cpp.o: include/Uno.String.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Experimental.Http.g.cpp.o: jni/Experimental.Http.g.cpp flags.txt | .uno
	echo Experimental.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.g.cpp.o -c jni/Experimental.Http.g.cpp

.uno/Experimental.Http.Internal.g.cpp.o: include/Experimental.Http.Internal.DateUtil.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.DateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: jni/Experimental.Http.Internal.g.cpp flags.txt | .uno
	echo Experimental.Http.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.Internal.g.cpp.o -c jni/Experimental.Http.Internal.g.cpp

.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.Callback.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.InvalidContentTypeException.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.TextureLoader.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.TextureLoaderImpl.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Char.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Int.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.String.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno/Support.h
.uno/Experimental.TextureLoader.g.cpp.o: jni/Experimental.TextureLoader.g.cpp flags.txt | .uno
	echo Experimental.TextureLoader.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.TextureLoader.g.cpp.o -c jni/Experimental.TextureLoader.g.cpp

.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebViewUtils.WebViewForeign.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Android.Controls.g.cpp.o: jni/Fuse.Android.Controls.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.g.cpp.o -c jni/Fuse.Android.Controls.g.cpp

.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls.WebViewUtils.WebViewForeign.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: jni/Fuse.Android.Controls.WebViewUtils.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.WebViewUtils.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o -c jni/Fuse.Android.Controls.WebViewUtils.g.cpp

.uno/Fuse.Android.g.cpp.o: include/_root.FuseControlsNative_bundle.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.AppRoot.AppRootParent.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Bitmap.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Blitter.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Canvas.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.GLUtils.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Helpers.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StaticLayout.Alignment.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StaticLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarHelper.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextControlLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextPaint.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.BackgroundRender.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextUtils.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextUtils.TruncateAt.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.App.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.Android.InputDispatch.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.Android.IViewParent.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.Android.MotionEvent.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Typeface.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.Android.TypefaceCache.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.Android.View.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ULong.h
.uno/Fuse.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.g.cpp.o: jni/Fuse.Android.g.cpp flags.txt | .uno
	echo Fuse.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.g.cpp.o -c jni/Fuse.Android.g.cpp

.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorVariant.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attractor-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMasterProperty-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMasterTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ContinuousTrackChangeState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ContinuousTrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Converter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterDouble.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat4.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterSize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterSize2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CreateStateParams.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cycle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleWaveform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMasterProperty-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMasterTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteSingleTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteTrackChangeState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteTrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunction.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunctions.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.FastMatrixTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerMaster.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IPlayerFeedback.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.GFWResult.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterProperty-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterPropertyGet.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Mixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerBase.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixOp.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.NothingAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Player.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayerPart.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.RangeAdapter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.RangeAdapterHelpers.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ResizeAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Rotate.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekDirection.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekResult.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Skew.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Spin.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SpinState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformAnimatorState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.SeekFlags.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.DestinationMotion-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulation.MotionSimulation-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulation.Simulation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.String.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Animations.g.cpp.o: jni/Fuse.Animations.g.cpp flags.txt | .uno
	echo Fuse.Animations.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Animations.g.cpp.o -c jni/Fuse.Animations.g.cpp

.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-bccebf50.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-8dbd4f90.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-43727aab.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BackButton.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BufferedWebViewCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EdgeNavigator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EdgeNavigator.PageData.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Element_Opacity_Property.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FallbackWebViewClient.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ForwardProperties.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ISourceReceiver.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ITextRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.JavaScriptCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LoadHtmlCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.Button.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.Rectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.ScrollView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.Slider.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.SurfaceView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.Switch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.TextView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.Android.ViewGroup.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ICircleView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IGraphicsView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ILabelView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ILeafView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.iOS.Slider.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.iOS.Switch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IRangeView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IRangeViewHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IRectangleView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IScrollView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IShapeView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ITextView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IToggleView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IToggleViewHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IViewGroup.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControl.PageData.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.EnterVertical.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.ExitVertical.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlInactiveState.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlInteraction.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationControlTransition.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigatorGotoState.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDot.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDotTemplate.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RemoveType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ReuseType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.DefaultScroller.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.DefaultTrigger.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollViewLayoutMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.Template1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.Template2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StatusBarBackground.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.Template1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.Template2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TopFrameBackground.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Video.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.VideoImpl.VideoVisual.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FastProperty2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.LinearRangeBehavior.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.Drawing.SolidRectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Motion.ScrollViewMotion.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.AllowedNavigationDirections.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ExplicitNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigatedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationGotoMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageState.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.OutletType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.RoutingOperation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.RoutingResult.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.VisualNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.VisualNavigation.PageData.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.DoubleChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.StringChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions.IToggleable.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions.Toggle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.g.cpp.o: jni/Fuse.Controls.g.cpp flags.txt | .uno
	echo Fuse.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.g.cpp.o -c jni/Fuse.Controls.g.cpp

.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ControlVisual-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.Graphics.g.cpp.o: jni/Fuse.Controls.Graphics.g.cpp flags.txt | .uno
	echo Fuse.Controls.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Graphics.g.cpp.o -c jni/Fuse.Controls.Graphics.g.cpp

.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Button.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Circle.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Ellipse.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.FocusChangedListener.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.GraphicsView.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Helpers.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.InputDispatch.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.IViewParent.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.JavaMap.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.LeafView.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.MotionEvent.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Rectangle.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.ScrollView.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Shape.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Slider.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.SurfaceView.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Switch.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.TextInput.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.TextView.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Typeface.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.TypefaceCache.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.View.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.Android.ViewGroup.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.IRangeViewHost.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.IScrollViewHost.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.ITextEditHost.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.IToggleViewHost.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: jni/Fuse.Controls.Native.Android.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.Android.g.cpp.o -c jni/Fuse.Controls.Native.Android.g.cpp

.uno/Fuse.Controls.Native.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ICircleView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IGraphicsView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ILabelView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ILeafView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ImageHandle.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ImageLoader.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ImageLoader.ImageHandlePromise.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IRangeView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IRangeViewHost.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IRectangleView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IScrollView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IScrollViewHost.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IShapeView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ITextEditHost.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ITextView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IToggleView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IToggleViewHost.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IViewGroup.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.Native.g.cpp.o: jni/Fuse.Controls.Native.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.g.cpp.o -c jni/Fuse.Controls.Native.g.cpp

.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.iOS.Slider.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.iOS.Switch.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.IRangeViewHost.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.IToggleViewHost.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: jni/Fuse.Controls.Native.iOS.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.iOS.g.cpp.o -c jni/Fuse.Controls.Native.iOS.g.cpp

.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.EnterVertical.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.ExitVertical.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Triggers.Actions.ReleasePage.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.NavigationControlBit.g.cpp.o: jni/Fuse.Controls.NavigationControlBit.g.cpp flags.txt | .uno
	echo Fuse.Controls.NavigationControlBit.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.NavigationControlBit.g.cpp.o -c jni/Fuse.Controls.NavigationControlBit.g.cpp

.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.Android.MediaPlayer.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.Android.VideoLoader.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.Android.VideoLoader.NoHardwareAcceleration.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.Android.VideoLoader.VideoPromise.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.IVideoPlayer.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.VideoDiskCache.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: jni/Fuse.Controls.VideoImpl.Android.g.cpp flags.txt | .uno
	echo Fuse.Controls.VideoImpl.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.VideoImpl.Android.g.cpp.o -c jni/Fuse.Controls.VideoImpl.Android.g.cpp

.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/_root.FuseControlsVideo_bundle.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.Android.VideoLoader.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.EmptyVideo.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.GraphicsVideoService.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.IVideoCallbacks.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.IVideoPlayer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.IVideoService.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.LoadingClosure.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.Scale9Rectangle.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.VideoDiskCache.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.VideoDrawElement.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.VideoLoader.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoImpl.VideoVisual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Threading.Future.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: jni/Fuse.Controls.VideoImpl.g.cpp flags.txt | .uno
	echo Fuse.Controls.VideoImpl.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.VideoImpl.g.cpp.o -c jni/Fuse.Controls.VideoImpl.g.cpp

.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.Batch.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchHelpers.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchIndexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchVertexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.Entry.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.MeshBatcher.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Batching.g.cpp.o: jni/Fuse.Drawing.Batching.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Batching.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Batching.g.cpp.o -c jni/Fuse.Drawing.Batching.g.cpp

.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BlendMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.Converter.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradientDrawable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAdjustment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAlignment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Scripting.Marshal.IConverter.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Drawing.g.cpp.o: jni/Fuse.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.g.cpp.o -c jni/Fuse.Drawing.g.cpp

.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.Float2Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.FloatBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.TypedBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.UShortBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Internal.g.cpp.o: jni/Fuse.Drawing.Internal.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Internal.g.cpp.o -c jni/Fuse.Drawing.Internal.g.cpp

.uno/Fuse.Drawing.Primitives.g.cpp.o: include/_root.FuseDrawingPrimitives_bundle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.BlendMode.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.Float2Buffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.FloatBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.TypedBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.UShortBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Coverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Falloff.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.FillCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.LimitCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.OneLimitCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ShadowFalloff.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.StrokeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.WedgeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: jni/Fuse.Drawing.Primitives.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Primitives.g.cpp.o -c jni/Fuse.Drawing.Primitives.g.cpp

.uno/Fuse.Effects.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.BasicEffect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Blur.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Desaturate.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.Blitter.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectHelpers.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Halftone.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.MaskMode.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2x2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.String.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Effects.g.cpp.o: jni/Fuse.Effects.g.cpp flags.txt | .uno
	echo Fuse.Effects.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Effects.g.cpp.o -c jni/Fuse.Effects.g.cpp

.uno/Fuse.Elements.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AspectConstraint.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxPlacement.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.ConstraintFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Cache.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheHelper.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheTile.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CachingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.DisplayHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.GMSCacheItem.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlas.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPool.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatch.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatchEntry.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.FillAspectBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.IElementBatchDrawable.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.InteractiveTransform.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITransformOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LimitBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SingleVisualDrawable.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StandardBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextureAtlas.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.AnchorOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.BoxCenter.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.CenterOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastProperty1.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedListNode-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.String.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Elements.g.cpp.o: jni/Fuse.Elements.g.cpp flags.txt | .uno
	echo Fuse.Elements.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.g.cpp.o -c jni/Fuse.Elements.g.cpp

.uno/Fuse.Entities.g.cpp.o: include/_root.FuseEntities_bundle.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.Batch.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.BatchHelpers.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.BatchVertexBuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.MeshBatcher.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DefaultMaterial.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DirectArrayMeshIntersecter.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Entity.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Entry.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.IndexedArrayMeshIntersecter.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Material.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Mesh.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshBatchingEngine.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshHitTestMode.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshRenderer.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.Direct.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.Indexed.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshHelpers.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.RenderNode.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Transform3D.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.TriangleMeshIntersecter.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Sphere.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Triangle.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.String.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Entities.g.cpp.o: jni/Fuse.Entities.g.cpp flags.txt | .uno
	echo Fuse.Entities.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.g.cpp.o -c jni/Fuse.Entities.g.cpp

.uno/Fuse.FileSystem.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.AndroidPaths.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.DirectoryInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileAttributes.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileStatus.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileStatusHelpers.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemModule.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemOperations.Closure-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemOperations.Closure-3.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemOperations.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.Nothing.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.PathTools.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.UnifiedPaths.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Char.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Double.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Int.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Long.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Object.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.String.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Constants.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Duration.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Instant.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno/Support.h
.uno/Fuse.FileSystem.g.cpp.o: jni/Fuse.FileSystem.g.cpp flags.txt | .uno
	echo Fuse.FileSystem.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.FileSystem.g.cpp.o -c jni/Fuse.FileSystem.g.cpp

.uno/Fuse.g.cpp.o: include/_root.FuseCore_bundle.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.AndroidProperties.h
.uno/Fuse.g.cpp.o: include/Fuse.App.h
.uno/Fuse.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.ITextRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Native.Android.View.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Native.IViewGroup.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostic.h
.uno/Fuse.g.cpp.o: include/Fuse.DiagnosticHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.g.cpp.o: include/Fuse.DiagnosticType.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawHelpers.h
.uno/Fuse.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1Link.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1Link-1.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2Link.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2Link-1.h
.uno/Fuse.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPoolImpl.h
.uno/Fuse.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.g.cpp.o: include/Fuse.IBeginRemoveVisualListener.h
.uno/Fuse.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.IDataProvider.h
.uno/Fuse.g.cpp.o: include/Fuse.IFlush.h
.uno/Fuse.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.INameListener.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.g.cpp.o: include/Fuse.IParentObserver.h
.uno/Fuse.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITemplateObserver.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.g.cpp.o: include/Fuse.IUpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
.uno/Fuse.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.Flags.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.g.cpp.o: include/Fuse.MobileBootstrapping.h
.uno/Fuse.g.cpp.o: include/Fuse.NameRegistry.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.CallFuncClosure.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.PendingRemoveVisual.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.g.cpp.o: include/Fuse.RenderTargetEntry.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.g.cpp.o: include/Fuse.RootStage.h
.uno/Fuse.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.IdentityMode.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.IObject.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMethodInline.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptProperty-2.h
.uno/Fuse.g.cpp.o: include/Fuse.Shear.h
.uno/Fuse.g.cpp.o: include/Fuse.Stage.h
.uno/Fuse.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.HeightMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.LocalMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.ParentSizeMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.SizeMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.WidthMode.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateAction.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateDispatcher.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.CancelInteractionsType.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.HitTestRecord.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.HitTestTransformMode.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.InteractionItem.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.ParameterProperty.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.VisualBits.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualListCache.h
.uno/Fuse.g.cpp.o: include/Fuse.WrapException.h
.uno/Fuse.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLError.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/Fuse.g.cpp.o: include/Uno.Action.h
.uno/Fuse.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.g.cpp.o: include/Uno.AggregateException.h
.uno/Fuse.g.cpp.o: include/Uno.Application.h
.uno/Fuse.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Fuse.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.g.cpp.o: include/Uno.Char.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Comparison-1.h
.uno/Fuse.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Fuse.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.g.cpp.o: include/Uno.Double.h
.uno/Fuse.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.g.cpp.o: include/Uno.Float.h
.uno/Fuse.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Fuse.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.g.cpp.o: include/Uno.Int.h
.uno/Fuse.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.g.cpp.o: include/Uno.Math.h
.uno/Fuse.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.g.cpp.o: include/Uno.Object.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.g.cpp.o: include/Uno.String.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.LockGuard.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.g.cpp.o: include/Uno.Type.h
.uno/Fuse.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.g.cpp.o: jni/Fuse.g.cpp flags.txt | .uno
	echo Fuse.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.g.cpp.o -c jni/Fuse.g.cpp

.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerEventHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerTrigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegion.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegionArea.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInViewCommon.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LinearRangeBehavior.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.MoveUserFlags.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollTo.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SetSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ToggleSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulation.BoundedRegion2D.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulation.MotionSimulation-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulation.PointerVelocity-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulation.SampleFlags.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulation.Simulation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.g.cpp.o: jni/Fuse.Gestures.g.cpp flags.txt | .uno
	echo Fuse.Gestures.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.g.cpp.o -c jni/Fuse.Gestures.g.cpp

.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegion.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegionArea.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulation.MotionSimulation-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulation.PointerVelocity-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulation.SampleFlags.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulation.Simulation.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulation.SmoothSnap-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: jni/Fuse.Gestures.Internal.g.cpp flags.txt | .uno
	echo Fuse.Gestures.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.Internal.g.cpp.o -c jni/Fuse.Gestures.Internal.g.cpp

.uno/Fuse.Input.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Capturer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.CustomPointerEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusDelegator.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGained.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLost.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPrediction.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPrediction.PredictFilter.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredictStrategy.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.HitTestHelpers.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.INotifyFocus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IPointerEventResponder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedEvent.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.DefaultPointerEventResponder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELHolder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELStatus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PointerRecord.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEntered.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeft.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.SelectionQuery.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Input.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.String.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Input.g.cpp.o: jni/Fuse.Input.g.cpp flags.txt | .uno
	echo Fuse.Input.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Input.g.cpp.o -c jni/Fuse.Input.g.cpp

.uno/Fuse.Internal.Drawing.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.BlendMode.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Internal.Drawing.SolidRectangle.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.Drawing.g.cpp.o: jni/Fuse.Internal.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Internal.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.Drawing.g.cpp.o -c jni/Fuse.Internal.Drawing.g.cpp

.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DoubleBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float3Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float4Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FloatBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.IImageContainerOwner.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Size2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizeBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MultiDensityImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.g.cpp.o: jni/Fuse.Internal.g.cpp flags.txt | .uno
	echo Fuse.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.g.cpp.o -c jni/Fuse.Internal.g.cpp

.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.CircleLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Column.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayoutSizing.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefaultLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Metric.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Row.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayoutMode.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.String.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Layouts.g.cpp.o: jni/Fuse.Layouts.g.cpp flags.txt | .uno
	echo Fuse.Layouts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Layouts.g.cpp.o -c jni/Fuse.Layouts.g.cpp

.uno/Fuse.Motion.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.DestinationMotion-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionDestinationType.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.NavigationMotion.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.OverflowType.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.ScrollViewMotion.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.AdapterMultiplier-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.AngularAdapter-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.BoundedRegion2D.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.EasingMotion-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.ElasticForce-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.Friction-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.MotionSimulation-1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulation.SmoothSnap-1.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.String.h
.uno/Fuse.Motion.g.cpp.o: jni/Fuse.Motion.g.cpp flags.txt | .uno
	echo Fuse.Motion.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Motion.g.cpp.o -c jni/Fuse.Motion.g.cpp

.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Animations.EasingFunction.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Animations.EasingFunctions.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.OverflowType.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.AdapterMultiplier-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.AngularAdapter-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.BasicBoundedRegion2D.MoveMode.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.BoundedRegion2D.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.EasingMotion-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.ElasticForce-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.Friction-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.MotionSimulation-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.PointerVelocity-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.SampleFlags.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.Simulation.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulation.SmoothSnap-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Motion.Simulation.g.cpp.o: jni/Fuse.Motion.Simulation.g.cpp flags.txt | .uno
	echo Fuse.Motion.Simulation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Motion.Simulation.g.cpp.o -c jni/Fuse.Motion.Simulation.g.cpp

.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.NavigationMotion.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulation.BoundedRegion2D.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulation.MotionSimulation-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulation.PointerVelocity-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulation.SampleFlags.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulation.Simulation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ActivePageChangedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.AllowedNavigationDirections.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackButtonAction.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DeactivatingAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DirectNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EnterExitAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ExitingAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ExplicitNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoBack.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoForward.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IBaseNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPagePropertyListener.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPageResourceBinding.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IRouterOutlet.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ISeekableNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateToggle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationGotoMode.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageCountHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageProperty.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageProxy.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageState.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationState.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationStateArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationStateHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationTriggerAction.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.OutletType.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageResourceBinding-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Router.GetRouteCallback.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Router.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RoutingOperation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RoutingResult.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SnapTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.NavigationStructure.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.VisualNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.VisualNavigation.PageData.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Json.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Navigation.g.cpp.o: jni/Fuse.Navigation.g.cpp flags.txt | .uno
	echo Fuse.Navigation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Navigation.g.cpp.o -c jni/Fuse.Navigation.g.cpp

.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.Platform.g.cpp.o: jni/Fuse.Platform.g.cpp flags.txt | .uno
	echo Fuse.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Platform.g.cpp.o -c jni/Fuse.Platform.g.cpp

.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.ISelection.h
.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Preview.g.cpp.o: jni/Fuse.Preview.g.cpp flags.txt | .uno
	echo Fuse.Preview.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Preview.g.cpp.o -c jni/Fuse.Preview.g.cpp

.uno/Fuse.PushNotifications.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.PushNotifications.AndroidImpl.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.PushNotifications.Push.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.PushNotifications.PushNotify.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Java.Object.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Int.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Object.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.String.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.PushNotifications.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.PushNotifications.g.cpp.o: jni/Fuse.PushNotifications.g.cpp flags.txt | .uno
	echo Fuse.PushNotifications.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.PushNotifications.g.cpp.o -c jni/Fuse.PushNotifications.g.cpp

.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/_root.FuseReactive_bundle.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.Console.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.DebugLog.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Builtins.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.FunctionClosure.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerManager.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerManager.Timer.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.JSCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-4.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpStatusReasonPhrase.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: jni/Fuse.Reactive.FuseJS.g.cpp flags.txt | .uno
	echo Fuse.Reactive.FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.FuseJS.g.cpp.o -c jni/Fuse.Reactive.FuseJS.g.cpp

.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.NameRegistry.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AnyChangeObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BindAttempt.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Console.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ContextBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataBinding-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataToResourceBinding-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DebugLog.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventBinding.CallClosure.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Builtins.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JavaScript.EvaluateDataContext.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JavaScript.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.PathObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.RootableScriptModule.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.SegmentObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadWorker.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ClassInstance.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ListMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ObjectMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Observable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Observable.Subscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptModule.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ValueMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.WrapException.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.LockGuard.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Reactive.g.cpp.o: jni/Fuse.Reactive.g.cpp flags.txt | .uno
	echo Fuse.Reactive.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.g.cpp.o -c jni/Fuse.Reactive.g.cpp

.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpResponseHeader.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.TextureLoader.TextureLoader.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DoubleResourceConverter.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSourceImpl.BackgroundLoad.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSourceImpl.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FloatResourceConverter.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.GenericResourceConverter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceImpl.BackgroundLoad.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceImpl.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceChangedArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IMemoryResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IntResourceConverter.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IResourceConverter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ISoftDisposable.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.LoadingImageSource.CleanupReason.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.LoadingImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MultiDensityImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.NumericResourceConverter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ProxyImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceBinding-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceConverters.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.TextureImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.String.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Resources.g.cpp.o: jni/Fuse.Resources.g.cpp flags.txt | .uno
	echo Fuse.Resources.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Resources.g.cpp.o -c jni/Fuse.Resources.g.cpp

.uno/Fuse.Scripting.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ArrayMirror.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ClassInstance.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.MethodClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.PropertyClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.DoubleChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FactoryClosure-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FileSourceConverter.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IArray.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IModuleProvider.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IObject.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IObserver.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptObject.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IThreadWorker.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.NumberConverter.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSFileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Json.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.LazyObservableProperty.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ListMirror.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Marshal.IConverter.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.NativeFunctionClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.ContextClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.PromiseClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ObjectMirror.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.Add.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.Clear.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.InsertAll.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.InsertAt.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.NewAll.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.NewAt.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.Operation.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.RemoveAt.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.RemoveRange.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.Set.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Observable.Subscription.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ObservableProperty.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ObservableProperty.PushCapture.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.CallClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethodInline.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptModule.RequireContext.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptProperty.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptProperty-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.StringChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ValueMirror.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Array.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Comparison-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Enum.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-4.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int4.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Short.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.ConcurrentDictionary-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.LockGuard.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Scripting.g.cpp.o: jni/Fuse.Scripting.g.cpp flags.txt | .uno
	echo Fuse.Scripting.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.g.cpp.o -c jni/Fuse.Scripting.g.cpp

.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.IThreadWorker.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Array.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.ArrayHandle.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Handle.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.CallbackWrapper.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Array.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Bool.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateCallback.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateExternalFreer.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateMessageHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DllDirectory.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Double.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.External.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ExternalFreer.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Int.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.MessageHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.String.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Type.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVector.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueVector.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Scripting.V8.g.cpp.o: jni/Fuse.Scripting.V8.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.g.cpp.o -c jni/Fuse.Scripting.V8.g.cpp

.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Array.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ArrayImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Bool.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.BoolImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Callback.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.CallbackImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Context.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ContextImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateCallback.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateExternalFreer.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateMessageHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DllDirectory.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Double.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DoubleImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.External.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ExternalFreer.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ExternalFreerImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ExternalImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Function.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.FunctionImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Int.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.IntImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.MessageHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.MessageHandlerImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Object.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ObjectImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptException.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.String.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.StringExtensions.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.StringImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Type.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVector.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueExtensions.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueVector.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/V8Proxy.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: jni/Fuse.Scripting.V8.Simple.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.Simple.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.Simple.g.cpp.o -c jni/Fuse.Scripting.V8.Simple.g.cpp

.uno/Fuse.Selection.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ListMirror.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.Observable.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.Observable.Subscription.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selectable.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selection.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selection.How.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.SelectionReplace.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.SelectMode.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.ToggleSelection.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.String.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Selection.g.cpp.o: jni/Fuse.Selection.g.cpp flags.txt | .uno
	echo Fuse.Selection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Selection.g.cpp.o -c jni/Fuse.Selection.g.cpp

.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.ReadClosure.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.WriteClosure.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.StorageModule.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.String.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Storage.g.cpp.o: jni/Fuse.Storage.g.cpp flags.txt | .uno
	echo Fuse.Storage.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Storage.g.cpp.o -c jni/Fuse.Storage.g.cpp

.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.BringIntoView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.BringToFront.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.CancelInteractions.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Collapse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugProperty-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.EvaluateJS.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.GiveFocus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Hide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ICollapse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IHide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IShow.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IToggleable.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.JSEventArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.JSEventHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadHtml.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadUrl.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pause.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlaybackAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlayTo.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pulse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PulseBackward.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PulseForward.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.RaiseUserEvent.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ReleaseFocus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ReleasePage.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Reload.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Resume.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.SendToBack.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Set-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Show.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Stop.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.StopLoading.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Toggle.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionLayout.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionState.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionStateType.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TriggerDirection.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.UserEventArg.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.WebViewNavAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Visual.CancelInteractionsType.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: jni/Fuse.Triggers.Actions.g.cpp flags.txt | .uno
	echo Fuse.Triggers.Actions.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.Actions.g.cpp.o -c jni/Fuse.Triggers.Actions.g.cpp

.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.SeekFlags.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PendingRemoveVisual.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Marshal.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.TriggerDirection.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskModule.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IProgress.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScrolledLength.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitioned.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PulseTrigger-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PulseTrigger-1.PulseHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.RemovingAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Scrolled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrolledArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrolledWhere.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrollRegion.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGroup.GotoImpl.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TriggerBypassMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValueStatic.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: jni/Fuse.Triggers.g.cpp flags.txt | .uno
	echo Fuse.Triggers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.g.cpp.o -c jni/Fuse.Triggers.g.cpp

.uno/FuseJS.g.cpp.o: include/Fuse.AndroidProperties.h
.uno/FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
.uno/FuseJS.g.cpp.o: include/Fuse.Node.h
.uno/FuseJS.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/FuseJS.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
.uno/FuseJS.g.cpp.o: include/Fuse.UpdateManager.h
.uno/FuseJS.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Base64.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.ReadClosure.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Environment.h
.uno/FuseJS.g.cpp.o: include/FuseJS.FileReaderImpl.FileReadCommand.h
.uno/FuseJS.g.cpp.o: include/FuseJS.FileReaderImpl.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Globals.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Lifecycle.h
.uno/FuseJS.g.cpp.o: include/FuseJS.RaiseEvent.h
.uno/FuseJS.g.cpp.o: include/FuseJS.UserEvents.h
.uno/FuseJS.g.cpp.o: include/Uno.Action.h
.uno/FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/FuseJS.g.cpp.o: include/Uno.Byte.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/FuseJS.g.cpp.o: include/Uno.EventArgs.h
.uno/FuseJS.g.cpp.o: include/Uno.EventHandler.h
.uno/FuseJS.g.cpp.o: include/Uno.Exception.h
.uno/FuseJS.g.cpp.o: include/Uno.Func-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Int.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.Bundle.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.File.h
.uno/FuseJS.g.cpp.o: include/Uno.Object.h
.uno/FuseJS.g.cpp.o: include/Uno.Predicate-1.h
.uno/FuseJS.g.cpp.o: include/Uno.String.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Ascii.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Base64.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Utf8.h
.uno/FuseJS.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.Selector.h
.uno/FuseJS.g.cpp.o: jni/FuseJS.g.cpp flags.txt | .uno
	echo FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/FuseJS.g.cpp.o -c jni/FuseJS.g.cpp

.uno/Java.g.cpp.o: include/Java.Object.h
.uno/Java.g.cpp.o: jni/Java.g.cpp flags.txt | .uno
	echo Java.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Java.g.cpp.o -c jni/Java.g.cpp

.uno/OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/OpenGL.g.cpp.o: include/Uno.Float.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/OpenGL.g.cpp.o: include/Uno.Int.h
.uno/OpenGL.g.cpp.o: include/Uno.Int4.h
.uno/OpenGL.g.cpp.o: include/Uno.String.h
.uno/OpenGL.g.cpp.o: include/Uno/Support.h
.uno/OpenGL.g.cpp.o: jni/OpenGL.g.cpp flags.txt | .uno
	echo OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/OpenGL.g.cpp.o -c jni/OpenGL.g.cpp

.uno/Polyfills.Window.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Polyfills.Window.g.cpp.o: include/Polyfills.Window.WindowModule.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.Bool.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.Object.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.String.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.UX.Resource.h
.uno/Polyfills.Window.g.cpp.o: jni/Polyfills.Window.g.cpp flags.txt | .uno
	echo Polyfills.Window.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Polyfills.Window.g.cpp.o -c jni/Polyfills.Window.g.cpp

.uno/Uno.Collections.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Array.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.Bucket.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.BucketState.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.LinkedList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IDictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedListNode-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OfTypeEnumerable-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OfTypeEnumerator-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OrderByCompare-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.SelectEnumerable-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.SelectEnumerator-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Generic.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Int.h
.uno/Uno.Collections.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Math.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Object.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.String.h
.uno/Uno.Collections.g.cpp.o: jni/Uno.Collections.g.cpp flags.txt | .uno
	echo Uno.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Collections.g.cpp.o -c jni/Uno.Collections.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers.JavaObjectHelper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.App.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.FocusChangedListener.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.InputDispatch.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.ScrollView.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Slider.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.SurfaceView.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.Switch.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.Android.TextInput.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.VideoImpl.Android.MediaPlayer.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.PushNotifications.AndroidImpl.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Java.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Action.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Char.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArray-d4b8b207.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Double.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Float.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Int.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Long.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Short.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp

.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFaceHandle.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno/Support.h
.uno/Uno.Content.Fonts.g.cpp.o: jni/Uno.Content.Fonts.g.cpp flags.txt | .uno
	echo Uno.Content.Fonts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Fonts.g.cpp.o -c jni/Uno.Content.Fonts.g.cpp

.uno/Uno.Content.Models.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Byte4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.SByte4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Short.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Short2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Short4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UShort4.h
.uno/Uno.Content.Models.g.cpp.o: jni/Uno.Content.Models.g.cpp flags.txt | .uno
	echo Uno.Content.Models.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Models.g.cpp.o -c jni/Uno.Content.Models.g.cpp

.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AssertionHandler.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Double.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Long.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implementation.DebugImpl.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.String.h
.uno/Uno.Diagnostics.g.cpp.o: jni/Uno.Diagnostics.g.cpp flags.txt | .uno
	echo Uno.Diagnostics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Diagnostics.g.cpp.o -c jni/Uno.Diagnostics.g.cpp

.uno/Uno.g.cpp.o: include/Android.Bootstrapper.h
.uno/Uno.g.cpp.o: include/Uno.Action.h
.uno/Uno.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.g.cpp.o: include/Uno.Action-3.h
.uno/Uno.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.g.cpp.o: include/Uno.Application.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.g.cpp.o: include/Uno.Array.h
.uno/Uno.g.cpp.o: include/Uno.Bool.h
.uno/Uno.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.g.cpp.o: include/Uno.Byte.h
.uno/Uno.g.cpp.o: include/Uno.Byte4.h
.uno/Uno.g.cpp.o: include/Uno.Char.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.g.cpp.o: include/Uno.Color.h
.uno/Uno.g.cpp.o: include/Uno.ColorHelper.h
.uno/Uno.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.g.cpp.o: include/Uno.DateTime.h
.uno/Uno.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.g.cpp.o: include/Uno.Double.h
.uno/Uno.g.cpp.o: include/Uno.Enum.h
.uno/Uno.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.g.cpp.o: include/Uno.Exception.h
.uno/Uno.g.cpp.o: include/Uno.Float.h
.uno/Uno.g.cpp.o: include/Uno.Float2.h
.uno/Uno.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.g.cpp.o: include/Uno.Float3.h
.uno/Uno.g.cpp.o: include/Uno.Float3x3.h
.uno/Uno.g.cpp.o: include/Uno.Float4.h
.uno/Uno.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.g.cpp.o: include/Uno.Func-4.h
.uno/Uno.g.cpp.o: include/Uno.GC.h
.uno/Uno.g.cpp.o: include/Uno.Generic.h
.uno/Uno.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.g.cpp.o: include/Uno.Int.h
.uno/Uno.g.cpp.o: include/Uno.Int2.h
.uno/Uno.g.cpp.o: include/Uno.Int3.h
.uno/Uno.g.cpp.o: include/Uno.Int4.h
.uno/Uno.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.g.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.g.cpp.o: include/Uno.Long.h
.uno/Uno.g.cpp.o: include/Uno.Math.h
.uno/Uno.g.cpp.o: include/Uno.Matrix.h
.uno/Uno.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.g.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno.g.cpp.o: include/Uno.Object.h
.uno/Uno.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.g.cpp.o: include/Uno.OverflowException.h
.uno/Uno.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.g.cpp.o: include/Uno.Quaternion.h
.uno/Uno.g.cpp.o: include/Uno.Rect.h
.uno/Uno.g.cpp.o: include/Uno.Recti.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.ArrayCopyImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.ArraySortImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.GenericEqualsImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h
.uno/Uno.g.cpp.o: include/Uno.SByte.h
.uno/Uno.g.cpp.o: include/Uno.SByte4.h
.uno/Uno.g.cpp.o: include/Uno.Short.h
.uno/Uno.g.cpp.o: include/Uno.Short2.h
.uno/Uno.g.cpp.o: include/Uno.Short4.h
.uno/Uno.g.cpp.o: include/Uno.String.h
.uno/Uno.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.g.cpp.o: include/Uno.Type.h
.uno/Uno.g.cpp.o: include/Uno.UInt.h
.uno/Uno.g.cpp.o: include/Uno.ULong.h
.uno/Uno.g.cpp.o: include/Uno.UShort.h
.uno/Uno.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.g.cpp.o: include/Uno.UShort4.h
.uno/Uno.g.cpp.o: include/Uno.Vector.h
.uno/Uno.g.cpp.o: include/Uno/Support.h
.uno/Uno.g.cpp.o: jni/Uno.g.cpp flags.txt | .uno
	echo Uno.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.g.cpp.o -c jni/Uno.g.cpp

.uno/Uno.Geometry.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Sphere.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Triangle.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Math.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Vector.h
.uno/Uno.Geometry.g.cpp.o: jni/Uno.Geometry.g.cpp flags.txt | .uno
	echo Uno.Geometry.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Geometry.g.cpp.o -c jni/Uno.Geometry.g.cpp

.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Float.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureAddressMode.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeInfo.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Math.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.String.h
.uno/Uno.Graphics.g.cpp.o: include/Uno/Support.h
.uno/Uno.Graphics.g.cpp.o: jni/Uno.Graphics.g.cpp flags.txt | .uno
	echo Uno.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Graphics.g.cpp.o -c jni/Uno.Graphics.g.cpp

.uno/Uno.IO.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Array.h
.uno/Uno.IO.g.cpp.o: include/Uno.Bool.h
.uno/Uno.IO.g.cpp.o: include/Uno.Byte.h
.uno/Uno.IO.g.cpp.o: include/Uno.Char.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.IO.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.IO.g.cpp.o: include/Uno.GC.h
.uno/Uno.IO.g.cpp.o: include/Uno.Int.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Directory.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.EndOfStreamException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.File.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumerable.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumerator.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumeratorHandle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumeratorImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumeratorMode.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.IOException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Path.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Uno.IO.g.cpp.o: include/Uno.Long.h
.uno/Uno.IO.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Object.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.String.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.IO.g.cpp.o: include/Uno.UInt.h
.uno/Uno.IO.g.cpp.o: include/Uno/Support.h
.uno/Uno.IO.g.cpp.o: jni/Uno.IO.g.cpp flags.txt | .uno
	echo Uno.IO.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.IO.g.cpp.o -c jni/Uno.IO.g.cpp

.uno/Uno.Net.g.cpp.o: include/Uno.Net.NetworkHelpers.h
.uno/Uno.Net.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.g.cpp.o: jni/Uno.Net.g.cpp flags.txt | .uno
	echo Uno.Net.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.g.cpp.o -c jni/Uno.Net.g.cpp

.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.IDictionary-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.GC.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpDefaultDispatcher.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageCache.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.StaticData.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpStatusReasonPhrase.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implementation.AndroidHttpRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implementation.IHttpRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidResponseTypeException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidStateException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Net.Http.g.cpp.o: jni/Uno.Net.Http.g.cpp flags.txt | .uno
	echo Uno.Net.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.g.cpp.o -c jni/Uno.Net.Http.g.cpp

.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Array.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implementation.AndroidHttpRequest.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implementation.IHttpRequest.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: jni/Uno.Net.Http.Implementation.g.cpp flags.txt | .uno
	echo Uno.Net.Http.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.Implementation.g.cpp.o -c jni/Uno.Net.Http.Implementation.g.cpp

.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.NetworkHelpers.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socket.SocketHandle.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketException.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketFlags.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Sockets.g.cpp.o: jni/Uno.Net.Sockets.g.cpp flags.txt | .uno
	echo Uno.Net.Sockets.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Sockets.g.cpp.o -c jni/Uno.Net.Sockets.g.cpp

.uno/Uno.Platform.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Platform.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Application.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Double.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.FrameChangedEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.MouseButton.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIID.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIResizeReason.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Rect.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno.Platform.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform.g.cpp.o: jni/Uno.Platform.g.cpp flags.txt | .uno
	echo Uno.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.g.cpp.o -c jni/Uno.Platform.g.cpp

.uno/Uno.Platform2.g.cpp.o: include/Uno.Application.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Float.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Display.PrivateState.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Platform2.g.cpp.o: jni/Uno.Platform2.g.cpp flags.txt | .uno
	echo Uno.Platform2.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform2.g.cpp.o -c jni/Uno.Platform2.g.cpp

.uno/Uno.Runtime.Implementation.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.MouseButton.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUIResizeReason.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Rect.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Recti.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ArrayCopyImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ArraySortImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.DebugImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GenericEqualsImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Base64.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Support.h
.uno/Uno.Runtime.Implementation.g.cpp.o: jni/Uno.Runtime.Implementation.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.g.cpp.o -c jni/Uno.Runtime.Implementation.g.cpp

.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Application.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Math.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.MouseButton.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BootstrapHints.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.Bootstrapper.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatSpecifier.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringItem.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.NumericFormatter.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.ULong.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: jni/Uno.Runtime.Implementation.Internal.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.Internal.g.cpp.o -c jni/Uno.Runtime.Implementation.Internal.g.cpp

.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureAddressMode.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o -c jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp

.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Text.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Text.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Ascii.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Base64.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilderElement.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Encoding.h
.uno/Uno.Text.g.cpp.o: jni/Uno.Text.g.cpp flags.txt | .uno
	echo Uno.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Text.g.cpp.o -c jni/Uno.Text.g.cpp

.uno/Uno.Threading.g.cpp.o: include/posix_mutex.h
.uno/Uno.Threading.g.cpp.o: include/posix_thread.h
.uno/Uno.Threading.g.cpp.o: include/PosixResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Application.h
.uno/Uno.Threading.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Threading.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Int.h
.uno/Uno.Threading.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Object.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Threading.g.cpp.o: include/Uno.String.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.AutoResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.CancellationToken.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.CancellationTokenSource.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ConcurrentDictionary-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.Closure-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.FutureState.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ITaskScheduler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.LockGuard.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ManualResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.PosixAutoResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.PosixManualResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXMutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXThread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXThread.ReleasingLauncher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.SyncDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Task.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskDelegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskFuture-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskStatus.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.DefaultWorkItem.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.WorkItem.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPoolTaskScheduler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.ULong.h
.uno/Uno.Threading.g.cpp.o: include/Uno/Support.h
.uno/Uno.Threading.g.cpp.o: jni/Uno.Threading.g.cpp flags.txt | .uno
	echo Uno.Threading.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Threading.g.cpp.o -c jni/Uno.Threading.g.cpp

.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.TimeOfDayCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.WeekYearCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.YearMonthDayCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.Calendars.g.cpp.o: jni/Uno.Time.Calendars.g.cpp flags.txt | .uno
	echo Uno.Time.Calendars.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Calendars.g.cpp.o -c jni/Uno.Time.Calendars.g.cpp

.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Time.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Time.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.g.cpp.o: include/Uno.Object.h
.uno/Uno.Time.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.TimeOfDayCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.WeekYearCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.YearMonthDayCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.CalendarSystem.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Constants.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DeviceTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Duration.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.FixedDateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.HashCodeHelper.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Type.h
.uno/Uno.Time.g.cpp.o: jni/Uno.Time.g.cpp flags.txt | .uno
	echo Uno.Time.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.g.cpp.o -c jni/Uno.Time.g.cpp

.uno/Uno.Time.Text.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Math.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.FixedFormatPattern-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.IPatternPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.NumberPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.OffsetBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.PatternPart-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SeparatorPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SignPart-1.h
.uno/Uno.Time.Text.g.cpp.o: jni/Uno.Time.Text.g.cpp flags.txt | .uno
	echo Uno.Time.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Text.g.cpp.o -c jni/Uno.Time.Text.g.cpp

.uno/Uno.UX.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.UX.g.cpp.o: include/Uno.Bool.h
.uno/Uno.UX.g.cpp.o: include/Uno.Byte.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Exception.h
.uno/Uno.UX.g.cpp.o: include/Uno.Float.h
.uno/Uno.UX.g.cpp.o: include/Uno.Float2.h
.uno/Uno.UX.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.UX.g.cpp.o: include/Uno.Int.h
.uno/Uno.UX.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.Long.h
.uno/Uno.UX.g.cpp.o: include/Uno.Object.h
.uno/Uno.UX.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.String.h
.uno/Uno.UX.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.UX.g.cpp.o: include/Uno.Type.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Resource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Selector.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.SelectorRegistry.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Size.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Size2.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.StreamExtensions.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Template.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Unit.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Uno.UX.g.cpp.o: jni/Uno.UX.g.cpp flags.txt | .uno
	echo Uno.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.UX.g.cpp.o -c jni/Uno.UX.g.cpp

.uno/Uno/_invoke.cpp.o: include/Uno/ObjectModel.h
.uno/Uno/_invoke.cpp.o: jni/Uno/_invoke.cpp flags.txt | .uno/Uno
	echo Uno/_invoke.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_invoke.cpp.o -c jni/Uno/_invoke.cpp

.uno/Uno/_main.cpp.o: include/Uno/Support.h
.uno/Uno/_main.cpp.o: include/Uno.Exception.h
.uno/Uno/_main.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.Internal.Bootstrapper.h
.uno/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.Internal.BootstrapHints.h
.uno/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno/_main.cpp.o: include/Uno.Application.h
.uno/Uno/_main.cpp.o: include/Uno.String.h
.uno/Uno/_main.cpp.o: include/_root.MainView.h
.uno/Uno/_main.cpp.o: jni/Uno/_main.cpp flags.txt | .uno/Uno
	echo Uno/_main.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_main.cpp.o -c jni/Uno/_main.cpp

.uno/Uno/Activity/AApplication.cpp.o: include/Uno/Activity/AApplication.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno/Activity/EntryPoints.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno/Platform2.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h
.uno/Uno/Activity/AApplication.cpp.o: jni/Uno/Activity/AApplication.cpp flags.txt | .uno/Uno/Activity
	echo Uno/Activity/AApplication.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Activity/AApplication.cpp.o -c jni/Uno/Activity/AApplication.cpp

.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/Activity/EntryPoints.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/Activity/AApplication.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Android.Base.JNI.h
.uno/Uno/Activity/EntryPoints.cpp.o: jni/Uno/Activity/EntryPoints.cpp flags.txt | .uno/Uno/Activity
	echo Uno/Activity/EntryPoints.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Activity/EntryPoints.cpp.o -c jni/Uno/Activity/EntryPoints.cpp

.uno/Uno/Activity/Platform2.cpp.o: include/Uno/Platform2.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno/Activity/AApplication.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Float2.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Rect.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno/Activity/Platform2.cpp.o: include/Android.Base.JNI.h
.uno/Uno/Activity/Platform2.cpp.o: jni/Uno/Activity/Platform2.cpp flags.txt | .uno/Uno/Activity
	echo Uno/Activity/Platform2.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Activity/Platform2.cpp.o -c jni/Uno/Activity/Platform2.cpp

.uno/Uno/Base64.cpp.o: include/Uno.h
.uno/Uno/Base64.cpp.o: jni/Uno/Base64.cpp flags.txt | .uno/Uno
	echo Uno/Base64.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Base64.cpp.o -c jni/Uno/Base64.cpp

.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno.Exception.h
.uno/Uno/Graphics/GLHelper.cpp.o: jni/Uno/Graphics/GLHelper.cpp flags.txt | .uno/Uno/Graphics
	echo Uno/Graphics/GLHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Graphics/GLHelper.cpp.o -c jni/Uno/Graphics/GLHelper.cpp

.uno/Uno/JNIHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/JNIHelper.cpp.o: jni/Uno/JNIHelper.cpp flags.txt | .uno/Uno
	echo Uno/JNIHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/JNIHelper.cpp.o -c jni/Uno/JNIHelper.cpp

.uno/Uno/Memory.cpp.o: include/Uno/_internal.h
.uno/Uno/Memory.cpp.o: include/Uno/Support.h
.uno/Uno/Memory.cpp.o: include/Uno.Type.h
.uno/Uno/Memory.cpp.o: include/Uno.String.h
.uno/Uno/Memory.cpp.o: jni/Uno/Memory.cpp flags.txt | .uno/Uno
	echo Uno/Memory.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Memory.cpp.o -c jni/Uno/Memory.cpp

.uno/Uno/ObjectModel.cpp.o: include/Uno/_internal.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Bool.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Byte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Char.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Float.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Int.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Object.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.SByte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Short.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.String.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.UShort.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Delegate.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Type.h
.uno/Uno/ObjectModel.cpp.o: jni/Uno/ObjectModel.cpp flags.txt | .uno/Uno
	echo Uno/ObjectModel.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/ObjectModel.cpp.o -c jni/Uno/ObjectModel.cpp

.uno/Uno/Support.cpp.o: include/Uno.Byte.h
.uno/Uno/Support.cpp.o: include/Uno.Buffer.h
.uno/Uno/Support.cpp.o: include/Uno/Support.h
.uno/Uno/Support.cpp.o: jni/Uno/Support.cpp flags.txt | .uno/Uno
	echo Uno/Support.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Support.cpp.o -c jni/Uno/Support.cpp

.uno/V8Proxy.cpp.o: include/V8Proxy.h
.uno/V8Proxy.cpp.o: include/Fuse.Scripting.V8.Simple.String.h
.uno/V8Proxy.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptException.h
.uno/V8Proxy.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVector.h
.uno/V8Proxy.cpp.o: include/Uno.h
.uno/V8Proxy.cpp.o: jni/V8Proxy.cpp flags.txt | .uno
	echo V8Proxy.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/V8Proxy.cpp.o -c jni/V8Proxy.cpp

include/_root.commaxtedfusetest_FuseControlsButton_Text_Property.h: include/Uno.String.h
include/_root.commaxtedfusetest_FuseControlsButton_Text_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControls_bundle.h: include/Uno.h

include/_root.FuseControlsNative_bundle.h: include/Uno.h

include/_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h: include/Uno.Float4.h
include/_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsBackButton_Text_Property.h: include/Uno.String.h
include/_root.FuseControlsPrimitives_FuseControlsBackButton_Text_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h: include/Uno.String.h
include/_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h: include/Uno.Float.h
include/_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h: include/Uno.Bool.h
include/_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h: include/Uno.Float.h
include/_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h: include/Uno.Float4.h
include/_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h: include/Uno.String.h
include/_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h: include/Uno.Float4.h
include/_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h: include/Uno.Float4.h
include/_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h: include/Uno.Float.h
include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h: include/Uno.Float.h
include/_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h: include/Uno.Bool.h
include/_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-bccebf50.h: include/Uno.Bool.h
include/_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-bccebf50.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h: include/Uno.Bool.h
include/_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-8dbd4f90.h: include/Uno.Bool.h
include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-8dbd4f90.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-43727aab.h: include/Uno.Bool.h
include/_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-43727aab.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsVideo_bundle.h: include/Uno.h

include/_root.FuseCore_bundle.h: include/Uno.h

include/_root.FuseDrawing_bundle.h: include/Uno.h

include/_root.FuseDrawingPrimitives_bundle.h: include/Uno.h

include/_root.FuseEffects_bundle.h: include/Uno.h

include/_root.FuseElements_bundle.h: include/Uno.h

include/_root.FuseEntities_bundle.h: include/Uno.h

include/_root.FuseReactive_bundle.h: include/Uno.h

include/_root.MainView.h: include/Fuse.App.h

include/Android.Base.AndroidBindingMacros.h: include/Uno.Type.h
include/Android.Base.AndroidBindingMacros.h: include/Uno.Exception.h
include/Android.Base.AndroidBindingMacros.h: include/Uno.h

include/Android.Base.JNI.h: include/Uno.Exception.h
include/Android.Base.JNI.h: include/Uno.h
include/Android.Base.JNI.h: include/Uno/JNIHelper.h

include/Android.Base.JNI.RefType.h: include/Uno.Int.h

include/Android.Base.Primitives.ConstCharPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.JavaVMPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.jfieldID.h: include/Uno.Object.h

include/Android.Base.Primitives.jmethodID.h: include/Uno.Object.h

include/Android.Base.Primitives.JNIEnvPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.JNINativeMethod.h: include/Uno.Object.h

include/Android.Base.Primitives.jweak.h: include/Uno.Object.h

include/Android.Base.Primitives.ujboolean.h: include/Uno.Object.h

include/Android.Base.Primitives.ujbyte.h: include/Uno.Object.h

include/Android.Base.Primitives.ujchar.h: include/Uno.Object.h

include/Android.Base.Primitives.ujclass.h: include/Uno.Object.h

include/Android.Base.Primitives.ujdouble.h: include/Uno.Object.h

include/Android.Base.Primitives.ujfloat.h: include/Uno.Object.h

include/Android.Base.Primitives.ujint.h: include/Uno.Object.h

include/Android.Base.Primitives.ujlong.h: include/Uno.Object.h

include/Android.Base.Primitives.ujobject.h: include/Uno.Object.h

include/Android.Base.Primitives.ujshort.h: include/Uno.Object.h

include/Android.Base.Primitives.ujstring.h: include/Uno.Object.h

include/Android.Base.Primitives.ujvalue.h: include/Uno.Object.h

include/Android.Base.Primitives.uweakptr.h: include/Uno.Object.h

include/Android.Base.Types.Arrays.h: include/Android.Base.JNI.h
include/Android.Base.Types.Arrays.h: include/Uno.h

include/Android.Base.Types.Bridge.h: include/Android.Base.JNI.h
include/Android.Base.Types.Bridge.h: include/Uno.Exception.h
include/Android.Base.Types.Bridge.h: include/Uno.h

include/Android.Base.Types.ByteBuffer.h: include/Android.Base.JNI.h
include/Android.Base.Types.ByteBuffer.h: include/Uno.h

include/Android.Base.Types.String.h: include/Android.Base.JNI.h
include/Android.Base.Types.String.h: include/Uno.h

include/Android.Base.Wrappers.IJWrapper.h: include/Uno.Object.h

include/Android.Base.Wrappers.JavaObjectHelper.h: include/Uno.h

include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.AndroidBindingMacros.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.JNI.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Base.Wrappers.JWrapper.h: include/Java.Object.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.Exception.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.IDisposable.h

include/Android.Bootstrapper.h: include/Uno.h

include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Uno.IDisposable.h

include/android_semaphore.h: include/Uno/Uno.h


include/Experimental.Cache.CacheLoaded.h: include/Uno.Delegate.h

include/Experimental.Cache.ICache.h: include/Uno.Object.h

include/Experimental.Cache.ICacheReader.h: include/Uno.Object.h

include/Experimental.Cache.ICacheWriter.h: include/Uno.Object.h

include/Experimental.Cache.ProxyStream.h: include/Uno.IDisposable.h
include/Experimental.Cache.ProxyStream.h: include/Uno.IO.Stream.h

include/Experimental.Http.BinaryLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.HttpLoader.h: include/Uno.h

include/Experimental.Http.HttpResponseHeader.h: include/Uno.Object.h

include/Experimental.Http.Internal.DateUtil.h: include/Uno.h

include/Experimental.Http.Loader.h: include/Uno.Object.h

include/Experimental.Http.LoaderConst.h: include/Uno.h

include/Experimental.Http.TextLoader.h: include/Experimental.Http.Loader.h

include/Experimental.TextureLoader.Callback.h: include/Uno.Object.h

include/Experimental.TextureLoader.InvalidContentTypeException.h: include/Uno.Exception.h

include/Experimental.TextureLoader.TextureLoader.h: include/Uno.h

include/Experimental.TextureLoader.TextureLoaderImpl.h: include/Uno.h

include/Fuse.Android.AppRoot.AppRootParent.h: include/Fuse.Controls.Native.Android.IViewParent.h
include/Fuse.Android.AppRoot.AppRootParent.h: include/Uno.Float2.h
include/Fuse.Android.AppRoot.AppRootParent.h: include/Uno.Object.h

include/Fuse.Android.AppRoot.h: include/Uno.h

include/Fuse.Android.Bitmap.h: include/Uno.IDisposable.h
include/Fuse.Android.Bitmap.h: include/Uno.Object.h

include/Fuse.Android.Blitter.h: include/Uno.Float2.h
include/Fuse.Android.Blitter.h: include/Uno.Object.h
include/Fuse.Android.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Android.Canvas.h: include/Uno.Object.h

include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.Android.LeafView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Android.Controls.WebView.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand.h: include/Uno.Object.h

include/Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager.h: include/Uno.Object.h

include/Fuse.Android.Controls.WebViewUtils.WebViewForeign.h: include/Uno.h

include/Fuse.Android.GLUtils.h: include/Uno.Object.h

include/Fuse.Android.Helpers.h: include/Uno.h

include/Fuse.Android.StaticLayout.Alignment.h: include/Uno.Int.h

include/Fuse.Android.StaticLayout.h: include/Uno.Object.h

include/Fuse.Android.StatusBarConfig.h: include/Fuse.Behavior.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.Binding.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.IList-1.h

include/Fuse.Android.StatusBarHelper.h: include/Uno.h

include/Fuse.Android.TextControlLayout.h: include/Uno.Object.h
include/Fuse.Android.TextControlLayout.h: include/Uno.Recti.h

include/Fuse.Android.TextPaint.h: include/Uno.Object.h

include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Object.h
include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Recti.h

include/Fuse.Android.TextRenderer.h: include/Fuse.Controls.ITextRenderer.h
include/Fuse.Android.TextRenderer.h: include/Uno.Float2.h
include/Fuse.Android.TextRenderer.h: include/Uno.Object.h

include/Fuse.Android.TextUtils.h: include/Uno.Object.h

include/Fuse.Android.TextUtils.TruncateAt.h: include/Uno.Int.h

include/Fuse.AndroidProperties.h: include/Uno.h

include/Fuse.Animations.AnimationVariant.h: include/Uno.Int.h

include/Fuse.Animations.Animator.h: include/Uno.UX.PropertyObject.h

include/Fuse.Animations.AnimatorState.h: include/Uno.Object.h

include/Fuse.Animations.AnimatorVariant.h: include/Uno.Int.h

include/Fuse.Animations.Attractor-1.h: include/Fuse.Behavior.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.Binding.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.MasterProperty-1.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Uno.Object.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.AverageMasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.AverageMasterTransform.h: include/Fuse.Animations.MasterTransform.h

include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Change-1.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.ContinuousTrackChangeState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.ContinuousTrackProvider.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.ContinuousTrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Converter-1.h: include/Uno.Object.h
include/Fuse.Animations.Converter-1.h: include/Uno.Float4.h

include/Fuse.Animations.ConverterDouble.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterDouble.h: include/Uno.Double.h

include/Fuse.Animations.ConverterFloat.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat.h: include/Uno.Float.h

include/Fuse.Animations.ConverterFloat2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat2.h: include/Uno.Float2.h

include/Fuse.Animations.ConverterFloat3.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat3.h: include/Uno.Float3.h

include/Fuse.Animations.ConverterFloat4.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat4.h: include/Uno.Float4.h

include/Fuse.Animations.ConverterSize.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterSize.h: include/Uno.UX.Size.h

include/Fuse.Animations.ConverterSize2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterSize2.h: include/Uno.UX.Size2.h

include/Fuse.Animations.CreateStateParams.h: include/Uno.Object.h

include/Fuse.Animations.Cycle-1.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.CycleState-1.h: include/Fuse.Animations.OpenAnimatorState.h

include/Fuse.Animations.CycleWaveform.h: include/Uno.Int.h

include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.MasterProperty-1.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Uno.Object.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.DiscreteMasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.DiscreteMasterTransform.h: include/Fuse.Animations.MasterTransform.h

include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.DiscreteTrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteTrackChangeState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.DiscreteTrackProvider.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteTrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Easing.h: include/Uno.Int.h

include/Fuse.Animations.EasingFunction.h: include/Uno.Delegate.h

include/Fuse.Animations.EasingFunctions.h: include/Uno.h

include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.ContinuousTrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Uno.Object.h

include/Fuse.Animations.FastMatrixTransform.h: include/Fuse.Binding.h
include/Fuse.Animations.FastMatrixTransform.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.FastMatrixTransform.h: include/Fuse.Transform.h
include/Fuse.Animations.FastMatrixTransform.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.FastMatrixTransform.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.FastMatrixTransform.h: include/Uno.Collections.IList-1.h

include/Fuse.Animations.IMixer.h: include/Uno.Object.h

include/Fuse.Animations.IMixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.IMixerMaster.h: include/Uno.Object.h

include/Fuse.Animations.IPlayerFeedback.h: include/Uno.Object.h

include/Fuse.Animations.IResize.h: include/Uno.Object.h
include/Fuse.Animations.IResize.h: include/Uno.Float2.h

include/Fuse.Animations.IResizeMode.h: include/Uno.Object.h

include/Fuse.Animations.MasterBase-1.GFWResult.h: include/Uno.Object.h

include/Fuse.Animations.MasterBase-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterBase-1.h: include/Uno.Object.h

include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.MasterProperty-1.h: include/Uno.Object.h
include/Fuse.Animations.MasterProperty-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.MasterPropertyGet.h: include/Uno.Object.h

include/Fuse.Animations.MasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterTransform.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.MasterTransform.h: include/Fuse.Transform.h

include/Fuse.Animations.Mixer.h: include/Uno.Object.h

include/Fuse.Animations.MixerBase.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.MixerBase.h: include/Uno.Object.h

include/Fuse.Animations.MixerHandle-1.h: include/Fuse.Animations.IMixerHandle-1.h
include/Fuse.Animations.MixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.MixOp.h: include/Uno.Int.h

include/Fuse.Animations.Move.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Move.h: include/Fuse.Translation.h

include/Fuse.Animations.Nothing.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.NothingAnimatorState.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.OpenAnimator.h: include/Fuse.Animations.Animator.h

include/Fuse.Animations.OpenAnimatorState.h: include/Fuse.Animations.AnimatorState.h

include/Fuse.Animations.Player.h: include/Fuse.IUpdateListener.h
include/Fuse.Animations.Player.h: include/Uno.Object.h

include/Fuse.Animations.PlayerPart.h: include/Uno.Object.h

include/Fuse.Animations.PlayMode.h: include/Uno.Int.h

include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Behavior.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Binding.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.RangeAdapterHelpers.h: include/Uno.h

include/Fuse.Animations.Resize.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.ResizeAnimatorState.h: include/Fuse.Animations.TrackAnimatorState.h
include/Fuse.Animations.ResizeAnimatorState.h: include/Uno.Float4.h

include/Fuse.Animations.Rotate.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Rotate.h: include/Fuse.Rotation.h

include/Fuse.Animations.Scale.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Scale.h: include/Fuse.Scaling.h

include/Fuse.Animations.SeekDirection.h: include/Uno.Int.h

include/Fuse.Animations.SeekResult.h: include/Uno.Int.h

include/Fuse.Animations.Skew.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Skew.h: include/Fuse.Shear.h

include/Fuse.Animations.Spin.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.SpinState.h: include/Fuse.Animations.OpenAnimatorState.h

include/Fuse.Animations.TrackAnimator.h: include/Fuse.Animations.Animator.h
include/Fuse.Animations.TrackAnimator.h: include/Uno.Float4.h

include/Fuse.Animations.TrackAnimatorState.h: include/Fuse.Animations.AnimatorState.h
include/Fuse.Animations.TrackAnimatorState.h: include/Uno.Float4.h

include/Fuse.Animations.TrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.TransformAnimator-1.h: include/Fuse.Animations.TrackAnimator.h
include/Fuse.Animations.TransformAnimator-1.h: include/Uno.Float4.h

include/Fuse.Animations.TransformAnimatorState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.TriggerAnimation.h: include/Uno.Object.h

include/Fuse.Animations.TriggerAnimationState.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Animations.TriggerAnimationState.h: include/Uno.Object.h

include/Fuse.Animations.TriggerAnimationState.SeekFlags.h: include/Uno.Int.h

include/Fuse.App.h: include/Fuse.AppBase.h

include/Fuse.AppBase.h: include/Uno.Application.h

include/Fuse.Behavior.h: include/Fuse.Binding.h
include/Fuse.Behavior.h: include/Fuse.Node.h
include/Fuse.Behavior.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Behavior.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Behavior.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Behavior.h: include/Uno.Collections.IList-1.h

include/Fuse.Binding.h: include/Uno.Object.h

include/Fuse.CacheFramebuffer.h: include/Uno.Object.h

include/Fuse.Controls.BackButton.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BackButton.h: include/Fuse.Binding.h
include/Fuse.Controls.BackButton.h: include/Fuse.Controls.ButtonBase.h
include/Fuse.Controls.BackButton.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BackButton.h: include/Fuse.Node.h
include/Fuse.Controls.BackButton.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BackButton.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.BackButton.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.BackButton.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.BackButton.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.BufferedWebViewCall.h: include/Uno.Object.h

include/Fuse.Controls.Button.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Button.h: include/Fuse.Binding.h
include/Fuse.Controls.Button.h: include/Fuse.Controls.ButtonBase.h
include/Fuse.Controls.Button.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Button.h: include/Fuse.Node.h
include/Fuse.Controls.Button.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Button.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Button.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Button.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Button.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Button.Template.h: include/Uno.Float4.h
include/Fuse.Controls.Button.Template.h: include/Uno.UX.Template.h

include/Fuse.Controls.ButtonBase.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Binding.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Node.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Circle.h: include/Fuse.Binding.h
include/Fuse.Controls.Circle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Circle.h: include/Fuse.Node.h
include/Fuse.Controls.Circle.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Circle.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ContentControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Binding.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Node.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Control.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Control.h: include/Fuse.Binding.h
include/Fuse.Controls.Control.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Control.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Control.h: include/Fuse.Node.h
include/Fuse.Controls.Control.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Control.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Control.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Control.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Control.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.DockPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Node.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Binding.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Node.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.EdgeNavigator.PageData.h: include/Uno.Object.h

include/Fuse.Controls.Element_Opacity_Property.h: include/Uno.Float.h
include/Fuse.Controls.Element_Opacity_Property.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Uno.Object.h

include/Fuse.Controls.ForwardProperties.h: include/Uno.IDisposable.h
include/Fuse.Controls.ForwardProperties.h: include/Uno.Object.h
include/Fuse.Controls.ForwardProperties.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Binding.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Controls.Graphics.Visual.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Node.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Binding.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Node.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Visual.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.GraphicsView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Binding.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.ICommonViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IRenderViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Node.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Float4.h
include/Fuse.Controls.GraphicsView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ISourceReceiver.h: include/Uno.Object.h

include/Fuse.Controls.ITextRenderer.h: include/Uno.Object.h
include/Fuse.Controls.ITextRenderer.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.ITextRenderer.h: include/Uno.Float2.h
include/Fuse.Controls.ITextRenderer.h: include/Uno.Rect.h

include/Fuse.Controls.IWebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.IWebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.IWebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.IWebView.h: include/Uno.Object.h

include/Fuse.Controls.JavaScriptCall.h: include/Fuse.Controls.BufferedWebViewCall.h
include/Fuse.Controls.JavaScriptCall.h: include/Uno.Object.h

include/Fuse.Controls.LayoutControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Binding.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Node.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.LoadHtmlCall.h: include/Fuse.Controls.BufferedWebViewCall.h
include/Fuse.Controls.LoadHtmlCall.h: include/Uno.Object.h

include/Fuse.Controls.Native.Android.Button.h: include/Fuse.Controls.Native.Android.LeafView.h
include/Fuse.Controls.Native.Android.Button.h: include/Fuse.Controls.Native.ILabelView.h
include/Fuse.Controls.Native.Android.Button.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.Android.Button.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Button.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Circle.h: include/Fuse.Controls.Native.Android.Shape.h
include/Fuse.Controls.Native.Android.Circle.h: include/Fuse.Controls.Native.ICircleView.h
include/Fuse.Controls.Native.Android.Circle.h: include/Fuse.Controls.Native.IShapeView.h
include/Fuse.Controls.Native.Android.Circle.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Circle.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Ellipse.h: include/Fuse.Controls.Native.Android.Shape.h
include/Fuse.Controls.Native.Android.Ellipse.h: include/Fuse.Controls.Native.IShapeView.h
include/Fuse.Controls.Native.Android.Ellipse.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Ellipse.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.FocusChangedListener.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.Android.FocusChangedListener.h: include/Uno.Object.h

include/Fuse.Controls.Native.Android.GraphicsView.h: include/Fuse.Controls.Native.Android.View.h
include/Fuse.Controls.Native.Android.GraphicsView.h: include/Fuse.Controls.Native.IGraphicsView.h
include/Fuse.Controls.Native.Android.GraphicsView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.GraphicsView.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Helpers.h: include/Uno.h

include/Fuse.Controls.Native.Android.InputDispatch.h: include/Uno.h

include/Fuse.Controls.Native.Android.IViewParent.h: include/Uno.Object.h
include/Fuse.Controls.Native.Android.IViewParent.h: include/Uno.Float2.h

include/Fuse.Controls.Native.Android.JavaMap.h: include/Uno.Object.h

include/Fuse.Controls.Native.Android.LeafView.h: include/Fuse.Controls.Native.Android.View.h
include/Fuse.Controls.Native.Android.LeafView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.Android.LeafView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.LeafView.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.MotionEvent.h: include/Uno.Object.h

include/Fuse.Controls.Native.Android.Rectangle.h: include/Fuse.Controls.Native.Android.Shape.h
include/Fuse.Controls.Native.Android.Rectangle.h: include/Fuse.Controls.Native.IRectangleView.h
include/Fuse.Controls.Native.Android.Rectangle.h: include/Fuse.Controls.Native.IShapeView.h
include/Fuse.Controls.Native.Android.Rectangle.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Rectangle.h: include/Uno.Float4.h
include/Fuse.Controls.Native.Android.Rectangle.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.ScrollView.h: include/Fuse.Controls.Native.Android.IViewParent.h
include/Fuse.Controls.Native.Android.ScrollView.h: include/Fuse.Controls.Native.Android.View.h
include/Fuse.Controls.Native.Android.ScrollView.h: include/Fuse.Controls.Native.IScrollView.h
include/Fuse.Controls.Native.Android.ScrollView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.ScrollView.h: include/Fuse.Controls.Native.IViewGroup.h
include/Fuse.Controls.Native.Android.ScrollView.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Shape.h: include/Fuse.Controls.Native.Android.View.h
include/Fuse.Controls.Native.Android.Shape.h: include/Fuse.Controls.Native.IShapeView.h
include/Fuse.Controls.Native.Android.Shape.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Shape.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Slider.h: include/Fuse.Controls.Native.Android.LeafView.h
include/Fuse.Controls.Native.Android.Slider.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.Android.Slider.h: include/Fuse.Controls.Native.IRangeView.h
include/Fuse.Controls.Native.Android.Slider.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Slider.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.SurfaceView.h: include/Fuse.Controls.Native.Android.GraphicsView.h
include/Fuse.Controls.Native.Android.SurfaceView.h: include/Fuse.Controls.Native.IGraphicsView.h
include/Fuse.Controls.Native.Android.SurfaceView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.SurfaceView.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Switch.h: include/Fuse.Controls.Native.Android.LeafView.h
include/Fuse.Controls.Native.Android.Switch.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.Android.Switch.h: include/Fuse.Controls.Native.IToggleView.h
include/Fuse.Controls.Native.Android.Switch.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.Switch.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.TextInput.h: include/Fuse.Controls.Native.Android.TextView.h
include/Fuse.Controls.Native.Android.TextInput.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.Android.TextInput.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.Android.TextInput.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.TextInput.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.TextView.h: include/Fuse.Controls.Native.Android.LeafView.h
include/Fuse.Controls.Native.Android.TextView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.Android.TextView.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.Android.TextView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.TextView.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.Android.Typeface.h: include/Uno.Object.h

include/Fuse.Controls.Native.Android.TypefaceCache.h: include/Uno.h

include/Fuse.Controls.Native.Android.View.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.View.h: include/Uno.Float2.h
include/Fuse.Controls.Native.Android.View.h: include/Uno.Float3.h
include/Fuse.Controls.Native.Android.View.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.Android.View.h: include/Uno.Object.h

include/Fuse.Controls.Native.Android.ViewGroup.h: include/Fuse.Controls.Native.Android.IViewParent.h
include/Fuse.Controls.Native.Android.ViewGroup.h: include/Fuse.Controls.Native.Android.View.h
include/Fuse.Controls.Native.Android.ViewGroup.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.Android.ViewGroup.h: include/Fuse.Controls.Native.IViewGroup.h
include/Fuse.Controls.Native.Android.ViewGroup.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.ICircleView.h: include/Fuse.Controls.Native.IShapeView.h
include/Fuse.Controls.Native.ICircleView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ICircleView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ICircleView.h: include/Uno.Object.h

include/Fuse.Controls.Native.IGraphicsView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.IGraphicsView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IGraphicsView.h: include/Uno.Object.h
include/Fuse.Controls.Native.IGraphicsView.h: include/Uno.Int2.h

include/Fuse.Controls.Native.ILabelView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.ILabelView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ILabelView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ILabelView.h: include/Uno.Object.h

include/Fuse.Controls.Native.ILeafView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ILeafView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ILeafView.h: include/Uno.Object.h
include/Fuse.Controls.Native.ILeafView.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.Native.ILeafView.h: include/Uno.Float2.h

include/Fuse.Controls.Native.ImageHandle.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ImageHandle.h: include/Uno.Object.h

include/Fuse.Controls.Native.ImageLoader.h: include/Uno.h

include/Fuse.Controls.Native.ImageLoader.ImageHandlePromise.h: include/Fuse.Controls.Native.ImageHandle.h
include/Fuse.Controls.Native.ImageLoader.ImageHandlePromise.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ImageLoader.ImageHandlePromise.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.Native.iOS.Slider.h: include/Fuse.Controls.Native.IRangeView.h
include/Fuse.Controls.Native.iOS.Slider.h: include/Uno.Object.h

include/Fuse.Controls.Native.iOS.Switch.h: include/Fuse.Controls.Native.IToggleView.h
include/Fuse.Controls.Native.iOS.Switch.h: include/Uno.Object.h

include/Fuse.Controls.Native.IRangeView.h: include/Uno.Object.h

include/Fuse.Controls.Native.IRangeViewHost.h: include/Uno.Object.h

include/Fuse.Controls.Native.IRectangleView.h: include/Fuse.Controls.Native.IShapeView.h
include/Fuse.Controls.Native.IRectangleView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.IRectangleView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IRectangleView.h: include/Uno.Object.h
include/Fuse.Controls.Native.IRectangleView.h: include/Uno.Float4.h

include/Fuse.Controls.Native.IScrollView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.IScrollView.h: include/Fuse.Controls.Native.IViewGroup.h
include/Fuse.Controls.Native.IScrollView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IScrollView.h: include/Uno.Object.h
include/Fuse.Controls.Native.IScrollView.h: include/Uno.Float2.h

include/Fuse.Controls.Native.IScrollViewHost.h: include/Uno.Object.h
include/Fuse.Controls.Native.IScrollViewHost.h: include/Uno.Float2.h

include/Fuse.Controls.Native.IShapeView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.IShapeView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IShapeView.h: include/Uno.Object.h

include/Fuse.Controls.Native.ITextEditHost.h: include/Uno.Object.h

include/Fuse.Controls.Native.ITextView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.ITextView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.Object.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.Float4.h

include/Fuse.Controls.Native.IToggleView.h: include/Uno.Object.h

include/Fuse.Controls.Native.IToggleViewHost.h: include/Uno.Object.h

include/Fuse.Controls.Native.IView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IView.h: include/Uno.Object.h
include/Fuse.Controls.Native.IView.h: include/Uno.Float2.h
include/Fuse.Controls.Native.IView.h: include/Uno.Float4x4.h

include/Fuse.Controls.Native.IViewGroup.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.IViewGroup.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IViewGroup.h: include/Uno.Object.h

include/Fuse.Controls.NavigationControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Node.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.NavigationControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.NavigationControl.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Controls.NavigationControl.h: include/Fuse.Navigation.NavigationPageState.h

include/Fuse.Controls.NavigationControl.PageData.h: include/Uno.Object.h

include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Fuse.Navigation.EnteringAnimation.h
include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.EnterHorizontal.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Fuse.Navigation.EnteringAnimation.h
include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.EnterVertical.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Fuse.Navigation.ExitingAnimation.h
include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.ExitHorizontal.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Fuse.Navigation.ExitingAnimation.h
include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.ExitVertical.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Fuse.Navigation.EnteringAnimation.h
include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.NavEnterHorizontal.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Fuse.Navigation.ExitingAnimation.h
include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.NavExitHorizontal.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Fuse.IBeginRemoveVisualListener.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Fuse.Triggers.RemovingAnimation.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationControlBit.NavRemoveHorizontal.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.NavigationControlInactiveState.h: include/Uno.Int.h

include/Fuse.Controls.NavigationControlInteraction.h: include/Uno.Int.h

include/Fuse.Controls.NavigationControlTransition.h: include/Uno.Int.h

include/Fuse.Controls.Navigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Navigator.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigator.h: include/Fuse.Controls.NavigationControl.h
include/Fuse.Controls.Navigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.Navigator.h: include/Fuse.Node.h
include/Fuse.Controls.Navigator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Navigator.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.NavigatorGotoState.h: include/Uno.Int.h

include/Fuse.Controls.PageControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageControl.h: include/Fuse.Binding.h
include/Fuse.Controls.PageControl.h: include/Fuse.Controls.NavigationControl.h
include/Fuse.Controls.PageControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.ISeekableNavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Node.h
include/Fuse.Controls.PageControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Binding.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Node.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Float4.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageIndicatorDotTemplate.h: include/Uno.UX.Template.h

include/Fuse.Controls.Panel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Panel.h: include/Fuse.Binding.h
include/Fuse.Controls.Panel.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Panel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Panel.h: include/Fuse.Node.h
include/Fuse.Controls.Panel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Panel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PropertyBinding-1.h: include/Fuse.Binding.h
include/Fuse.Controls.PropertyBinding-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RangeControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Binding.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Controls.Native.IRangeViewHost.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Node.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Double.h
include/Fuse.Controls.RangeControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Binding.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Node.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Float4.h
include/Fuse.Controls.Rectangle.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RemoveType.h: include/Uno.Int.h

include/Fuse.Controls.ReuseType.h: include/Uno.Int.h

include/Fuse.Controls.ScrollDirections.h: include/Uno.Int.h

include/Fuse.Controls.ScrollPositionChangedArgs.h: include/Uno.Float2.h
include/Fuse.Controls.ScrollPositionChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Controls.ScrollPositionChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Fuse.Gestures.Scroller.h
include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollView.DefaultScroller.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Fuse.Triggers.Actions.IToggleable.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Fuse.Triggers.WhileTrue.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollView.DefaultTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.ScrollView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.Native.IScrollViewHost.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.ScrollViewBase.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Node.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Controls.Native.IScrollViewHost.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Node.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Float2.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollViewLayoutMode.h: include/Uno.Int.h

include/Fuse.Controls.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Shape.h: include/Fuse.Binding.h
include/Fuse.Controls.Shape.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Shape.h: include/Fuse.Node.h
include/Fuse.Controls.Shape.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Shape.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Slider.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Slider.h: include/Fuse.Binding.h
include/Fuse.Controls.Slider.h: include/Fuse.Controls.Native.IRangeViewHost.h
include/Fuse.Controls.Slider.h: include/Fuse.Controls.RangeControl.h
include/Fuse.Controls.Slider.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Slider.h: include/Fuse.Node.h
include/Fuse.Controls.Slider.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Slider.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Slider.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Slider.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Slider.h: include/Uno.Double.h
include/Fuse.Controls.Slider.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Slider.Template.h: include/Uno.UX.Template.h

include/Fuse.Controls.Slider.Template1.h: include/Uno.UX.Template.h

include/Fuse.Controls.Slider.Template2.h: include/Uno.UX.Template.h

include/Fuse.Controls.StackPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Node.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.StackPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.StackPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.StackPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.StackPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Binding.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Controls.TopFrameBackground.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Node.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.StatusBarBackground.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.StatusBarBackground.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.StatusBarBackground.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.StatusBarBackground.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Switch.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Switch.h: include/Fuse.Binding.h
include/Fuse.Controls.Switch.h: include/Fuse.Controls.Native.IToggleViewHost.h
include/Fuse.Controls.Switch.h: include/Fuse.Controls.ToggleControl.h
include/Fuse.Controls.Switch.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Switch.h: include/Fuse.Node.h
include/Fuse.Controls.Switch.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IToggleable.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Switch.h: include/Uno.Bool.h
include/Fuse.Controls.Switch.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Switch.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Switch.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Switch.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Switch.Template.h: include/Uno.Float4.h
include/Fuse.Controls.Switch.Template.h: include/Uno.UX.Template.h

include/Fuse.Controls.Switch.Template1.h: include/Uno.UX.Template.h

include/Fuse.Controls.Switch.Template2.h: include/Uno.UX.Template.h

include/Fuse.Controls.Text.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Text.h: include/Fuse.Binding.h
include/Fuse.Controls.Text.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.Text.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Text.h: include/Fuse.Node.h
include/Fuse.Controls.Text.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Text.h: include/Uno.String.h
include/Fuse.Controls.Text.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextAlignment.h: include/Uno.Int.h

include/Fuse.Controls.TextControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextControl.h: include/Fuse.Binding.h
include/Fuse.Controls.TextControl.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.TextControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextControl.h: include/Fuse.Node.h
include/Fuse.Controls.TextControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Float4.h
include/Fuse.Controls.TextControl.h: include/Uno.String.h
include/Fuse.Controls.TextControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextInputActionType.h: include/Uno.Int.h

include/Fuse.Controls.TextTruncation.h: include/Uno.Int.h

include/Fuse.Controls.TextWrapping.h: include/Uno.Int.h

include/Fuse.Controls.ToggleControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Binding.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Native.IToggleViewHost.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Node.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IToggleable.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Bool.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Binding.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Node.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TopFrameBackground.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TopFrameBackground.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TopFrameBackground.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TopFrameBackground.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Video.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Video.h: include/Fuse.Binding.h
include/Fuse.Controls.Video.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Video.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Video.h: include/Fuse.Node.h
include/Fuse.Controls.Video.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Video.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Video.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Video.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Video.h: include/Uno.Float4.h
include/Fuse.Controls.Video.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.VideoImpl.Android.MediaPlayer.h: include/Fuse.Controls.VideoImpl.IVideoPlayer.h
include/Fuse.Controls.VideoImpl.Android.MediaPlayer.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.Android.MediaPlayer.h: include/Uno.Object.h

include/Fuse.Controls.VideoImpl.Android.VideoLoader.h: include/Uno.Object.h

include/Fuse.Controls.VideoImpl.Android.VideoLoader.NoHardwareAcceleration.h: include/Fuse.Controls.VideoImpl.IVideoPlayer.h
include/Fuse.Controls.VideoImpl.Android.VideoLoader.NoHardwareAcceleration.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.Android.VideoLoader.NoHardwareAcceleration.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.VideoImpl.Android.VideoLoader.VideoPromise.h: include/Fuse.Controls.VideoImpl.IVideoPlayer.h
include/Fuse.Controls.VideoImpl.Android.VideoLoader.VideoPromise.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.Android.VideoLoader.VideoPromise.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.VideoImpl.EmptyVideo.h: include/Fuse.Controls.VideoImpl.IVideoPlayer.h
include/Fuse.Controls.VideoImpl.EmptyVideo.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.EmptyVideo.h: include/Uno.Object.h

include/Fuse.Controls.VideoImpl.GraphicsVideoService.h: include/Fuse.Controls.VideoImpl.IVideoService.h
include/Fuse.Controls.VideoImpl.GraphicsVideoService.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.GraphicsVideoService.h: include/Uno.Object.h

include/Fuse.Controls.VideoImpl.IVideoCallbacks.h: include/Uno.Object.h

include/Fuse.Controls.VideoImpl.IVideoPlayer.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.IVideoPlayer.h: include/Uno.Object.h
include/Fuse.Controls.VideoImpl.IVideoPlayer.h: include/Uno.Int2.h

include/Fuse.Controls.VideoImpl.IVideoService.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.IVideoService.h: include/Uno.Object.h
include/Fuse.Controls.VideoImpl.IVideoService.h: include/Uno.Int2.h

include/Fuse.Controls.VideoImpl.LoadingClosure.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoImpl.LoadingClosure.h: include/Uno.Object.h

include/Fuse.Controls.VideoImpl.Scale9Rectangle.h: include/Uno.Object.h
include/Fuse.Controls.VideoImpl.Scale9Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Controls.VideoImpl.VideoDiskCache.h: include/Uno.h

include/Fuse.Controls.VideoImpl.VideoDrawElement.h: include/Uno.Float4x4.h
include/Fuse.Controls.VideoImpl.VideoDrawElement.h: include/Uno.Object.h
include/Fuse.Controls.VideoImpl.VideoDrawElement.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Controls.VideoImpl.VideoLoader.h: include/Uno.h

include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Binding.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Controls.Video.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Controls.VideoImpl.IVideoCallbacks.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Node.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.Float2.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.Float4.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.Int2.h
include/Fuse.Controls.VideoImpl.VideoVisual.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.WebView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WebView.h: include/Fuse.Binding.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WebView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.WebView.h: include/Fuse.Node.h
include/Fuse.Controls.WebView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.WebView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Diagnostic.h: include/Uno.Object.h

include/Fuse.DiagnosticHandler.h: include/Uno.Delegate.h

include/Fuse.Diagnostics.h: include/Uno.h

include/Fuse.DiagnosticType.h: include/Uno.Int.h

include/Fuse.DrawContext.h: include/Uno.Int4.h
include/Fuse.DrawContext.h: include/Uno.Object.h
include/Fuse.DrawContext.h: include/Uno/GraphicsContext.h

include/Fuse.DrawHelpers.h: include/Uno.Float2.h
include/Fuse.DrawHelpers.h: include/Uno.Object.h
include/Fuse.DrawHelpers.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Batching.Batch.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.BatchHelpers.h: include/Uno.h

include/Fuse.Drawing.Batching.BatchIndexBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.BatchVertexBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.Entry.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.MeshBatcher.h: include/Uno.Object.h

include/Fuse.Drawing.BlendMode.h: include/Uno.Int.h

include/Fuse.Drawing.BlendModeHelpers.h: include/Uno.h

include/Fuse.Drawing.Brush.Converter.h: include/Fuse.Scripting.Marshal.IConverter.h
include/Fuse.Drawing.Brush.Converter.h: include/Uno.Object.h

include/Fuse.Drawing.Brush.h: include/Uno.UX.PropertyObject.h
include/Fuse.Drawing.Brush.h: include/Uno.Float2.h

include/Fuse.Drawing.DynamicBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.GradientStop.h: include/Uno.Float4.h
include/Fuse.Drawing.GradientStop.h: include/Uno.UX.PropertyObject.h

include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Float2.h
include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Float4.h
include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Object.h

include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Internal.IImageContainerOwner.h
include/Fuse.Drawing.ImageFill.h: include/Uno.Float4.h

include/Fuse.Drawing.Internal.Float2Buffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.FloatBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.TypedBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.UShortBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.ISolidColor.h: include/Uno.Object.h
include/Fuse.Drawing.ISolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.LinearGradient.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h: include/Fuse.Drawing.Primitives.WedgeCoverage.h

include/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h: include/Fuse.Drawing.Primitives.WedgeCoverage.h

include/Fuse.Drawing.Primitives.Coverage.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.Falloff.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.FillCoverage.h: include/Fuse.Drawing.Primitives.Coverage.h

include/Fuse.Drawing.Primitives.LimitCoverage.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.OneLimitCoverage.h: include/Fuse.Drawing.Primitives.LimitCoverage.h

include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.ShadowFalloff.h: include/Fuse.Drawing.Primitives.Falloff.h

include/Fuse.Drawing.Primitives.StrokeCoverage.h: include/Fuse.Drawing.Primitives.Coverage.h

include/Fuse.Drawing.Primitives.Wedge.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.WedgeCoverage.h: include/Fuse.Drawing.Primitives.LimitCoverage.h

include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.SolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.StaticBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.StaticBrush.h
include/Fuse.Drawing.StaticSolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.Stroke.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Drawing.Stroke.h: include/Uno.UX.PropertyObject.h

include/Fuse.Drawing.StrokeAdjustment.h: include/Uno.Int.h

include/Fuse.Drawing.StrokeAlignment.h: include/Uno.Int.h

include/Fuse.Effects.BasicEffect.h: include/Fuse.Binding.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.Effects.Effect.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Rect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Recti.h

include/Fuse.Effects.Blur.h: include/Fuse.Binding.h
include/Fuse.Effects.Blur.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Blur.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Blur.h: include/Uno.Float4x4.h
include/Fuse.Effects.Blur.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Desaturate.h: include/Fuse.Binding.h
include/Fuse.Effects.Desaturate.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Desaturate.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Float4x4.h
include/Fuse.Effects.Desaturate.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Float4x4.h
include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Object.h
include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.DropShadow.h: include/Fuse.Binding.h
include/Fuse.Effects.DropShadow.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.DropShadow.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Float4.h

include/Fuse.Effects.Effect.h: include/Fuse.Binding.h
include/Fuse.Effects.Effect.h: include/Fuse.Node.h
include/Fuse.Effects.Effect.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.IList-1.h

include/Fuse.Effects.EffectHelpers.h: include/Uno.Object.h
include/Fuse.Effects.EffectHelpers.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.EffectType.h: include/Uno.Int.h

include/Fuse.Effects.Halftone.h: include/Fuse.Binding.h
include/Fuse.Effects.Halftone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Halftone.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Halftone.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Mask.h: include/Fuse.Binding.h
include/Fuse.Effects.Mask.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Mask.h: include/Fuse.Internal.IImageContainerOwner.h
include/Fuse.Effects.Mask.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Mask.h: include/Uno.Float4x4.h
include/Fuse.Effects.Mask.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Mask.MaskMode.h: include/Uno.Int.h

include/Fuse.Elements.Alignment.h: include/Uno.Int.h

include/Fuse.Elements.AlignmentHelpers.h: include/Uno.h

include/Fuse.Elements.AspectConstraint.h: include/Uno.Int.h

include/Fuse.Elements.BoxPlacement.h: include/Uno.Float2.h
include/Fuse.Elements.BoxPlacement.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizing.ConstraintFlags.h: include/Uno.Int.h

include/Fuse.Elements.BoxSizing.h: include/Uno.Object.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.Elements.BoxPlacement.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.BoxSizing.h: include/Uno.Float2.h
include/Fuse.Elements.BoxSizing.h: include/Uno.UX.Size.h

include/Fuse.Elements.Cache.h: include/Fuse.Elements.CacheTile.h
include/Fuse.Elements.Cache.h: include/Uno.Object.h
include/Fuse.Elements.Cache.h: include/Uno.Recti.h

include/Fuse.Elements.CacheHelper.h: include/Uno.Float2.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Object.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.CacheTile.h: include/Uno.Float4x4.h
include/Fuse.Elements.CacheTile.h: include/Uno.Object.h
include/Fuse.Elements.CacheTile.h: include/Uno.Recti.h

include/Fuse.Elements.CachingMode.h: include/Uno.Int.h

include/Fuse.Elements.DisplayHelpers.h: include/Uno.h

include/Fuse.Elements.Element.GMSCacheItem.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element.GMSCacheItem.h: include/Uno.Float2.h
include/Fuse.Elements.Element.GMSCacheItem.h: include/Uno.Object.h

include/Fuse.Elements.Element.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Element.h: include/Fuse.Binding.h
include/Fuse.Elements.Element.h: include/Fuse.Elements.Element.GMSCacheItem.h
include/Fuse.Elements.Element.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Element.h: include/Fuse.Node.h
include/Fuse.Elements.Element.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Element.h: include/Fuse.Visual.h
include/Fuse.Elements.Element.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.Element.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.Element.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.Element.h: include/Uno.Float2.h
include/Fuse.Elements.Element.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Elements.Element.h: include/Uno.UX.Size.h
include/Fuse.Elements.Element.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element.h: include/Uno.Float3.h
include/Fuse.Elements.Element.h: include/Uno.Float4.h
include/Fuse.Elements.Element.h: include/Uno.Rect.h
include/Fuse.Elements.Element.h: include/Uno.Recti.h
include/Fuse.Elements.Element.h: include/Uno.UX.Size2.h

include/Fuse.Elements.ElementAtlas.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebuffer.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebufferPool.h: include/Uno.h

include/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.Elements.ElementBatch.h: include/Fuse.Elements.IElementBatchDrawable.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.ElementBatchEntry.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatchEntry.h: include/Uno.Recti.h

include/Fuse.Elements.ElementBatcher.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementBatcher.h: include/Uno.Object.h

include/Fuse.Elements.FillAspectBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.HitTestMode.h: include/Uno.Int.h

include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Object.h
include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Float4x4.h
include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Rect.h

include/Fuse.Elements.InteractiveTransform.h: include/Fuse.Binding.h
include/Fuse.Elements.InteractiveTransform.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.InteractiveTransform.h: include/Fuse.Transform.h
include/Fuse.Elements.InteractiveTransform.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.InteractiveTransform.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.InteractiveTransform.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.InteractiveTransform.h: include/Uno.Float2.h

include/Fuse.Elements.ITransformOrigin.h: include/Uno.Object.h
include/Fuse.Elements.ITransformOrigin.h: include/Uno.Float3.h

include/Fuse.Elements.LayoutMasterBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h: include/Uno.Object.h

include/Fuse.Elements.LayoutMasterMode.h: include/Uno.Int.h

include/Fuse.Elements.LimitBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.PreplacementArgs.h: include/Uno.EventArgs.h

include/Fuse.Elements.PreplacementHandler.h: include/Uno.Delegate.h

include/Fuse.Elements.SimpleAlignment.h: include/Uno.Int.h

include/Fuse.Elements.SingleVisualDrawable.h: include/Fuse.Elements.IElementBatchDrawable.h
include/Fuse.Elements.SingleVisualDrawable.h: include/Uno.Object.h

include/Fuse.Elements.StandardBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.StretchDirection.h: include/Uno.Int.h

include/Fuse.Elements.StretchMode.h: include/Uno.Int.h

include/Fuse.Elements.StretchSizing.h: include/Uno.Int.h

include/Fuse.Elements.TextureAtlas.h: include/Uno.Int2.h
include/Fuse.Elements.TextureAtlas.h: include/Uno.Object.h
include/Fuse.Elements.TextureAtlas.h: include/Uno.Recti.h

include/Fuse.Elements.TransformOrigins.AnchorOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.AnchorOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Uno.Float2.h
include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.CenterOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.CenterOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.h: include/Uno.h

include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h: include/Uno.Object.h

include/Fuse.Elements.Visibility.h: include/Uno.Int.h

include/Fuse.Entities.DefaultMaterial.h: include/Fuse.Entities.Material.h
include/Fuse.Entities.DefaultMaterial.h: include/Uno.Float2.h
include/Fuse.Entities.DefaultMaterial.h: include/Uno.Float3.h

include/Fuse.Entities.DirectArrayMeshIntersecter.h: include/Fuse.Entities.TriangleMeshIntersecter.h
include/Fuse.Entities.DirectArrayMeshIntersecter.h: include/Uno.Float3.h

include/Fuse.Entities.Entity.h: include/Fuse.Binding.h
include/Fuse.Entities.Entity.h: include/Fuse.Node.h
include/Fuse.Entities.Entity.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Entities.Entity.h: include/Fuse.Visual.h
include/Fuse.Entities.Entity.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Entities.Entity.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Entities.Entity.h: include/Uno.Collections.IList-1.h
include/Fuse.Entities.Entity.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Entities.Entry.h: include/Uno.Float4x4.h
include/Fuse.Entities.Entry.h: include/Uno.Object.h

include/Fuse.Entities.IndexedArrayMeshIntersecter.h: include/Fuse.Entities.TriangleMeshIntersecter.h
include/Fuse.Entities.IndexedArrayMeshIntersecter.h: include/Uno.Float3.h

include/Fuse.Entities.Material.h: include/Uno.UX.PropertyObject.h

include/Fuse.Entities.Mesh.h: include/Uno.Geometry.Box.h
include/Fuse.Entities.Mesh.h: include/Uno.Geometry.Sphere.h
include/Fuse.Entities.Mesh.h: include/Uno.IDisposable.h
include/Fuse.Entities.Mesh.h: include/Uno.Object.h

include/Fuse.Entities.MeshBatchingEngine.h: include/Fuse.Entities.Entry.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Fuse.IFlush.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Float4x4.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Object.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.MeshHitTestMode.h: include/Uno.Int.h

include/Fuse.Entities.MeshRenderer.h: include/Fuse.Binding.h
include/Fuse.Entities.MeshRenderer.h: include/Fuse.Node.h
include/Fuse.Entities.MeshRenderer.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Entities.MeshRenderer.h: include/Fuse.Visual.h
include/Fuse.Entities.MeshRenderer.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Entities.MeshRenderer.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Entities.MeshRenderer.h: include/Uno.Collections.IList-1.h
include/Fuse.Entities.MeshRenderer.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Entities.ModelMeshCollision.Direct.h: include/Fuse.Entities.TriangleMeshIntersecter.h

include/Fuse.Entities.ModelMeshCollision.h: include/Uno.Object.h

include/Fuse.Entities.ModelMeshCollision.Indexed.h: include/Fuse.Entities.TriangleMeshIntersecter.h

include/Fuse.Entities.ModelMeshHelpers.h: include/Uno.h

include/Fuse.Entities.RenderNode.h: include/Fuse.Binding.h
include/Fuse.Entities.RenderNode.h: include/Fuse.Node.h
include/Fuse.Entities.RenderNode.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Entities.RenderNode.h: include/Fuse.Visual.h
include/Fuse.Entities.RenderNode.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Entities.RenderNode.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Entities.RenderNode.h: include/Uno.Collections.IList-1.h
include/Fuse.Entities.RenderNode.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Entities.Transform3D.h: include/Fuse.Binding.h
include/Fuse.Entities.Transform3D.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Entities.Transform3D.h: include/Fuse.Transform.h
include/Fuse.Entities.Transform3D.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Entities.Transform3D.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Entities.Transform3D.h: include/Uno.Collections.IList-1.h
include/Fuse.Entities.Transform3D.h: include/Uno.Float3.h
include/Fuse.Entities.Transform3D.h: include/Uno.Float4.h

include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Object.h
include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Geometry.Ray.h
include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Geometry.Triangle.h

include/Fuse.FastMatrix.h: include/Uno.Float4x4.h
include/Fuse.FastMatrix.h: include/Uno.Object.h

include/Fuse.FastProperty1.h: include/Uno.Int.h

include/Fuse.FastProperty1Link.h: include/Uno.Object.h

include/Fuse.FastProperty1Link-1.h: include/Fuse.FastProperty1Link.h

include/Fuse.FastProperty2.h: include/Uno.Int.h

include/Fuse.FastProperty2Link.h: include/Uno.Object.h

include/Fuse.FastProperty2Link-1.h: include/Fuse.FastProperty2Link.h

include/Fuse.FileSystem.AndroidPaths.h: include/Uno.Object.h

include/Fuse.FileSystem.DirectoryInfo.h: include/Fuse.FileSystem.FileSystemInfo.h

include/Fuse.FileSystem.FileAttributes.h: include/Uno.Int.h

include/Fuse.FileSystem.FileInfo.h: include/Fuse.FileSystem.FileSystemInfo.h

include/Fuse.FileSystem.FileStatus.h: include/Uno.Object.h

include/Fuse.FileSystem.FileStatusHelpers.h: include/Uno.h

include/Fuse.FileSystem.FileSystemInfo.h: include/Uno.Object.h

include/Fuse.FileSystem.FileSystemModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.FileSystem.FileSystemModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.FileSystem.FileSystemModule.h: include/Uno.IDisposable.h

include/Fuse.FileSystem.FileSystemOperations.Closure-2.h: include/Uno.Object.h

include/Fuse.FileSystem.FileSystemOperations.Closure-3.h: include/Uno.Object.h

include/Fuse.FileSystem.FileSystemOperations.h: include/Uno.Object.h

include/Fuse.FileSystem.Nothing.h: include/Uno.Object.h

include/Fuse.FileSystem.PathTools.h: include/Uno.h

include/Fuse.FileSystem.UnifiedPaths.h: include/Uno.h

include/Fuse.FixedViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.FixedViewport.h: include/Fuse.IRenderViewport.h
include/Fuse.FixedViewport.h: include/Fuse.IViewport.h
include/Fuse.FixedViewport.h: include/Uno.Float2.h
include/Fuse.FixedViewport.h: include/Uno.Object.h

include/Fuse.Font.h: include/Uno.Object.h

include/Fuse.FramebufferPool.h: include/Uno.h

include/Fuse.FramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.FramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.FrustumViewport.h: include/Uno.Float4x4.h
include/Fuse.FrustumViewport.h: include/Uno.Object.h

include/Fuse.Gestures.Clicked.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Binding.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.ClickedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Clicker.h: include/Uno.Float2.h
include/Fuse.Gestures.Clicker.h: include/Uno.Object.h

include/Fuse.Gestures.ClickerEventHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Binding.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Gestures.Edge.h: include/Uno.Int.h

include/Fuse.Gestures.Internal.EdgeSwiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.EdgeSwiper.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Float4.h
include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.UX.PropertyObject.h

include/Fuse.Gestures.Internal.SwipeRegionArea.h: include/Uno.Int.h

include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Gestures.KeepInViewCommon.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Behavior.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.LinearRangeBehavior.h: include/Fuse.Behavior.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Fuse.Binding.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Uno.Float2.h

include/Fuse.Gestures.Scroller.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Binding.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Float2.h
include/Fuse.Gestures.Scroller.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.Scroller.MoveUserFlags.h: include/Uno.Int.h

include/Fuse.Gestures.ScrollTo.h: include/Fuse.Triggers.Actions.TriggerAction.h
include/Fuse.Gestures.ScrollTo.h: include/Uno.Float2.h

include/Fuse.Gestures.SetSwipeActive.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Gestures.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Behavior.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.SwipeGestureHelper.h: include/Uno.Object.h

include/Fuse.Gestures.SwipeType.h: include/Uno.Int.h

include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Binding.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.Tapped.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Binding.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Tapped.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Tapped.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Tapped.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.TappedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.TappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.TappedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ToggleSwipeActive.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Gestures.WhilePressed.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Binding.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Collections.IList-1.h

include/Fuse.GraphicsWorker.h: include/Uno.h

include/Fuse.HitTestCallback.h: include/Uno.Delegate.h

include/Fuse.HitTestContext.h: include/Uno.Float2.h
include/Fuse.HitTestContext.h: include/Uno.Geometry.Ray.h
include/Fuse.HitTestContext.h: include/Uno.Object.h

include/Fuse.HitTestResult.h: include/Uno.Object.h

include/Fuse.IActualPlacement.h: include/Uno.Object.h
include/Fuse.IActualPlacement.h: include/Uno.Float3.h

include/Fuse.IBeginRemoveVisualListener.h: include/Uno.Object.h

include/Fuse.ICommonViewport.h: include/Uno.Object.h
include/Fuse.ICommonViewport.h: include/Uno.Float2.h
include/Fuse.ICommonViewport.h: include/Uno.Float4x4.h

include/Fuse.IDataProvider.h: include/Uno.Object.h

include/Fuse.IFlush.h: include/Uno.Object.h

include/Fuse.IFrustum.h: include/Uno.Object.h
include/Fuse.IFrustum.h: include/Uno.Float3.h
include/Fuse.IFrustum.h: include/Uno.Float4x4.h

include/Fuse.INameListener.h: include/Uno.Object.h
include/Fuse.INameListener.h: include/Uno.UX.Selector.h

include/Fuse.Input.Capturer.h: include/Uno.Object.h

include/Fuse.Input.CustomPointerEventArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.CustomPointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.Focus.h: include/Uno.h

include/Fuse.Input.FocusDelegator.h: include/Uno.Delegate.h

include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedArgs.h
include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedHandler.h
include/Fuse.Input.FocusGained.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.FocusGainedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.FocusGainedArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.FocusGainedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostArgs.h
include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostHandler.h
include/Fuse.Input.FocusLost.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.FocusLostArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.FocusLostArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.FocusLostHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusNavigationDirection.h: include/Uno.Int.h

include/Fuse.Input.FocusPrediction.h: include/Uno.h

include/Fuse.Input.FocusPrediction.PredictFilter.h: include/Uno.Object.h

include/Fuse.Input.FocusPredictStrategy.h: include/Uno.h

include/Fuse.Input.HitTestHelpers.h: include/Uno.h

include/Fuse.Input.INotifyFocus.h: include/Uno.Object.h

include/Fuse.Input.IPointerEventResponder.h: include/Uno.Object.h

include/Fuse.Input.IsFocusableChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.IsFocusableChangedArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.Input.IsFocusableChangedArgs.h
include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.Input.IsFocusableChangedHandler.h
include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.IsFocusableChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Keyboard.h: include/Uno.h

include/Fuse.Input.KeyEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.KeyEventArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedArgs.h
include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedHandler.h
include/Fuse.Input.KeyPressed.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedArgs.h
include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedHandler.h
include/Fuse.Input.KeyReleased.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.DefaultPointerEventResponder.h: include/Fuse.Input.IPointerEventResponder.h
include/Fuse.Input.Pointer.DefaultPointerEventResponder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.h: include/Uno.h

include/Fuse.Input.Pointer.PELHolder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.PELStatus.h: include/Uno.Int.h

include/Fuse.Input.Pointer.PointerRecord.h: include/Uno.Float2.h
include/Fuse.Input.Pointer.PointerRecord.h: include/Uno.Object.h

include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredArgs.h
include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredHandler.h
include/Fuse.Input.PointerEntered.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerEnteredHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.PointerEventArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.PointerEventData.h: include/Uno.Float2.h
include/Fuse.Input.PointerEventData.h: include/Uno.Object.h

include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftArgs.h
include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftHandler.h
include/Fuse.Input.PointerLeft.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerLeftHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedArgs.h
include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedHandler.h
include/Fuse.Input.PointerMoved.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedArgs.h
include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedHandler.h
include/Fuse.Input.PointerPressed.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedArgs.h
include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedHandler.h
include/Fuse.Input.PointerReleased.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWheelMovedArgs.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWheelMovedHandler.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerWheelMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerWheelMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerWheelMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.SelectionQuery.h: include/Uno.Object.h

include/Fuse.Internal.Blender-1.h: include/Uno.Object.h

include/Fuse.Internal.BlenderMap.h: include/Uno.Object.h

include/Fuse.Internal.DoubleBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.DoubleBlender.h: include/Uno.Double.h

include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Float4x4.h
include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Object.h
include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Internal.Float2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float2Blender.h: include/Uno.Float2.h

include/Fuse.Internal.Float3Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float3Blender.h: include/Uno.Float3.h

include/Fuse.Internal.Float4Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float4Blender.h: include/Uno.Float4.h

include/Fuse.Internal.FloatBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.FloatBlender.h: include/Uno.Float.h

include/Fuse.Internal.FrustumMatrix.h: include/Uno.h

include/Fuse.Internal.IImageContainerOwner.h: include/Uno.Object.h

include/Fuse.Internal.ImageContainer.h: include/Uno.Object.h

include/Fuse.Internal.ScalarBlender-1.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.ScalarBlender-1.h: include/Uno.Object.h

include/Fuse.Internal.Size2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Size2Blender.h: include/Uno.UX.Size2.h

include/Fuse.Internal.SizeBlender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.SizeBlender.h: include/Uno.UX.Size.h

include/Fuse.Internal.SizingContainer.h: include/Uno.Float4.h
include/Fuse.Internal.SizingContainer.h: include/Uno.Object.h

include/Fuse.Internal.Statistics.h: include/Uno.h

include/Fuse.Internal.VectorUtil.h: include/Uno.h

include/Fuse.InvalidateLayoutReason.h: include/Uno.Int.h

include/Fuse.IParentObserver.h: include/Uno.Object.h

include/Fuse.IRenderViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.IRenderViewport.h: include/Uno.Object.h
include/Fuse.IRenderViewport.h: include/Uno.Float3.h
include/Fuse.IRenderViewport.h: include/Uno.Float4x4.h

include/Fuse.IScalingMode.h: include/Fuse.ITransformMode.h
include/Fuse.IScalingMode.h: include/Uno.Object.h
include/Fuse.IScalingMode.h: include/Uno.Float3.h

include/Fuse.ITemplateObserver.h: include/Uno.Object.h

include/Fuse.ITransformMode.h: include/Uno.Object.h

include/Fuse.ITransformRelative.h: include/Uno.Object.h

include/Fuse.ITranslationMode.h: include/Fuse.ITransformMode.h
include/Fuse.ITranslationMode.h: include/Uno.Object.h
include/Fuse.ITranslationMode.h: include/Uno.Float3.h

include/Fuse.IUpdateListener.h: include/Uno.Object.h

include/Fuse.IViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.IViewport.h: include/Uno.Object.h
include/Fuse.IViewport.h: include/Uno.Float2.h
include/Fuse.IViewport.h: include/Uno.Geometry.Ray.h

include/Fuse.KeyboardBootstrapper.h: include/Uno.Object.h

include/Fuse.Layer.h: include/Uno.Int.h

include/Fuse.LayoutDependent.h: include/Uno.Int.h

include/Fuse.LayoutParams.Flags.h: include/Uno.Int.h

include/Fuse.LayoutParams.h: include/Uno.Float2.h
include/Fuse.LayoutParams.h: include/Uno.Object.h

include/Fuse.LayoutPriority.h: include/Uno.h

include/Fuse.LayoutRole.h: include/Uno.Int.h

include/Fuse.Layouts.CircleLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Column.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.ColumnLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.ColumnLayoutSizing.h: include/Uno.Int.h

include/Fuse.Layouts.DefaultLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.DefinitionBase.h: include/Uno.UX.PropertyObject.h

include/Fuse.Layouts.Dock.h: include/Uno.Int.h

include/Fuse.Layouts.DockLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.FlowDirection.h: include/Uno.Int.h

include/Fuse.Layouts.GridLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Layout.h: include/Uno.UX.PropertyObject.h
include/Fuse.Layouts.Layout.h: include/Fuse.LayoutParams.h
include/Fuse.Layouts.Layout.h: include/Uno.Float2.h
include/Fuse.Layouts.Layout.h: include/Uno.Float4.h

include/Fuse.Layouts.Layouts.h: include/Uno.h

include/Fuse.Layouts.Metric.h: include/Uno.Int.h

include/Fuse.Layouts.Orientation.h: include/Uno.Int.h

include/Fuse.Layouts.Row.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.StackLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.StackLayoutMode.h: include/Uno.Int.h

include/Fuse.Layouts.WrapLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.MobileBootstrapping.h: include/Uno.Object.h

include/Fuse.Motion.DestinationMotion-1.h: include/Uno.Object.h

include/Fuse.Motion.MotionConfig.h: include/Uno.Float2.h
include/Fuse.Motion.MotionConfig.h: include/Uno.Object.h

include/Fuse.Motion.MotionDestinationType.h: include/Uno.Int.h

include/Fuse.Motion.MotionUnit.h: include/Uno.Int.h

include/Fuse.Motion.NavigationMotion.h: include/Fuse.Motion.MotionConfig.h

include/Fuse.Motion.OverflowType.h: include/Uno.Int.h

include/Fuse.Motion.ScrollViewMotion.h: include/Fuse.Motion.MotionConfig.h

include/Fuse.Motion.Simulation.AdapterMultiplier-1.h: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
include/Fuse.Motion.Simulation.AdapterMultiplier-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.AdapterMultiplier-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.AdapterMultiplier-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.AngularAdapter-1.h: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
include/Fuse.Motion.Simulation.AngularAdapter-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.AngularAdapter-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.AngularAdapter-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h: include/Fuse.Motion.Simulation.BoundedRegion2D.h
include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h: include/Uno.Float2.h
include/Fuse.Motion.Simulation.BasicBoundedRegion2D.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.BasicBoundedRegion2D.MoveMode.h: include/Uno.Int.h

include/Fuse.Motion.Simulation.BoundedRegion2D.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.BoundedRegion2D.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.BoundedRegion2D.h: include/Uno.Float2.h
include/Fuse.Motion.Simulation.BoundedRegion2D.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.DestinationSimulation-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.DestinationSimulation-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.DestinationSimulation-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.EasingMotion-1.h: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
include/Fuse.Motion.Simulation.EasingMotion-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.EasingMotion-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.EasingMotion-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.ElasticForce-1.h: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
include/Fuse.Motion.Simulation.ElasticForce-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.ElasticForce-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.ElasticForce-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.Friction-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.Friction-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.Friction-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.MotionSimulation-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.MotionSimulation-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.PointerVelocity-1.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.SampleFlags.h: include/Uno.Int.h

include/Fuse.Motion.Simulation.Simulation.h: include/Uno.Object.h

include/Fuse.Motion.Simulation.SmoothSnap-1.h: include/Fuse.Motion.Simulation.DestinationSimulation-1.h
include/Fuse.Motion.Simulation.SmoothSnap-1.h: include/Fuse.Motion.Simulation.MotionSimulation-1.h
include/Fuse.Motion.Simulation.SmoothSnap-1.h: include/Fuse.Motion.Simulation.Simulation.h
include/Fuse.Motion.Simulation.SmoothSnap-1.h: include/Uno.Object.h

include/Fuse.NameRegistry.h: include/Uno.h

include/Fuse.Navigation.ActivatingAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Navigation.ActivatingAnimation.h: include/Fuse.Binding.h
include/Fuse.Navigation.ActivatingAnimation.h: include/Fuse.Navigation.NavigationAnimation.h
include/Fuse.Navigation.ActivatingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.ActivatingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.ActivatingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.ActivatingAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.ActivePageChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.AllowedNavigationDirections.h: include/Uno.Int.h

include/Fuse.Navigation.BackButtonAction.h: include/Uno.Int.h

include/Fuse.Navigation.BackForwardNavigationTriggerAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Navigation.DeactivatingAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Navigation.DeactivatingAnimation.h: include/Fuse.Binding.h
include/Fuse.Navigation.DeactivatingAnimation.h: include/Fuse.Navigation.NavigationAnimation.h
include/Fuse.Navigation.DeactivatingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.DeactivatingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.DeactivatingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.DeactivatingAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.VisualNavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.DirectNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.DirectNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.DirectNavigation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.VisualNavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EndSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.EnterExitAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Navigation.EnterExitAnimation.h: include/Fuse.Binding.h
include/Fuse.Navigation.EnterExitAnimation.h: include/Fuse.Navigation.NavigationAnimation.h
include/Fuse.Navigation.EnterExitAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.EnterExitAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.EnterExitAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.EnterExitAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EnteringAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Navigation.EnteringAnimation.h: include/Fuse.Binding.h
include/Fuse.Navigation.EnteringAnimation.h: include/Fuse.Navigation.EnterExitAnimation.h
include/Fuse.Navigation.EnteringAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.EnteringAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.EnteringAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.EnteringAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.ExitingAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Navigation.ExitingAnimation.h: include/Fuse.Binding.h
include/Fuse.Navigation.ExitingAnimation.h: include/Fuse.Navigation.EnterExitAnimation.h
include/Fuse.Navigation.ExitingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.ExitingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.ExitingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.ExitingAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.ExplicitNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Fuse.Navigation.VisualNavigation.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.ExplicitNavigation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.GoBack.h: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h

include/Fuse.Navigation.GoForward.h: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h

include/Fuse.Navigation.HistoryChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.IBaseNavigation.h: include/Uno.Object.h

include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.INavigation.h: include/Uno.Object.h
include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.NavigationPageState.h

include/Fuse.Navigation.IPagePropertyListener.h: include/Uno.Object.h

include/Fuse.Navigation.IPageResourceBinding.h: include/Uno.Object.h

include/Fuse.Navigation.IRouterOutlet.h: include/Uno.Object.h

include/Fuse.Navigation.ISeekableNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.ISeekableNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.ISeekableNavigation.h: include/Uno.Object.h

include/Fuse.Navigation.NavigatedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Navigation.NavigatedArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigatedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigateTo.h: include/Fuse.Navigation.NavigationTriggerAction.h

include/Fuse.Navigation.NavigateToggle.h: include/Fuse.Navigation.NavigationTriggerAction.h

include/Fuse.Navigation.Navigation.h: include/Uno.Object.h

include/Fuse.Navigation.NavigationAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Navigation.NavigationAnimation.h: include/Fuse.Binding.h
include/Fuse.Navigation.NavigationAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.NavigationAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Navigation.NavigationAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.NavigationAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.NavigationAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.NavigationArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationEdge.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationGotoMode.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationMode.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationPageCountHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationPageProperty.h: include/Uno.h

include/Fuse.Navigation.NavigationPageProxy.h: include/Fuse.Navigation.IPagePropertyListener.h
include/Fuse.Navigation.NavigationPageProxy.h: include/Uno.Object.h

include/Fuse.Navigation.NavigationPageState.h: include/Uno.Object.h

include/Fuse.Navigation.NavigationState.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationStateArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationStateHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationTriggerAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Navigation.OutletType.h: include/Uno.Int.h

include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Behavior.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Binding.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Navigation.IPageResourceBinding.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route.h: include/Uno.Object.h

include/Fuse.Navigation.Router.GetRouteCallback.h: include/Uno.Object.h

include/Fuse.Navigation.Router.h: include/Fuse.Binding.h
include/Fuse.Navigation.Router.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.Router.h: include/Fuse.Node.h
include/Fuse.Navigation.Router.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.RoutingOperation.h: include/Uno.Int.h

include/Fuse.Navigation.RoutingResult.h: include/Uno.Int.h

include/Fuse.Navigation.SnapTo.h: include/Uno.Int.h

include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.ISeekableNavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.VisualNavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.StructuredNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.StructuredNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.StructuredNavigation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.StructuredNavigation.NavigationStructure.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Behavior.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Binding.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Float2.h

include/Fuse.Navigation.UpdateSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.VisualNavigation.h: include/Fuse.Behavior.h
include/Fuse.Navigation.VisualNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.VisualNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.VisualNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.VisualNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.VisualNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.VisualNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.VisualNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.VisualNavigation.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.VisualNavigation.h: include/Fuse.Navigation.NavigationPageState.h

include/Fuse.Navigation.VisualNavigation.PageData.h: include/Uno.Object.h

include/Fuse.Node.CallFuncClosure.h: include/Uno.Object.h

include/Fuse.Node.h: include/Fuse.Binding.h
include/Fuse.Node.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Node.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Node.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Node.h: include/Uno.Collections.IList-1.h
include/Fuse.Node.h: include/Uno.UX.PropertyObject.h
include/Fuse.Node.h: include/Uno.UX.Selector.h

include/Fuse.OrthographicFrustum.h: include/Fuse.IFrustum.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float2.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float4x4.h
include/Fuse.OrthographicFrustum.h: include/Uno.Object.h

include/Fuse.PendingRemoveVisual.h: include/Uno.Object.h

include/Fuse.PlacedArgs.h: include/Uno.EventArgs.h
include/Fuse.PlacedArgs.h: include/Uno.Float2.h

include/Fuse.PlacedHandler.h: include/Uno.Delegate.h

include/Fuse.Platform.ApplicationState.h: include/Uno.Int.h

include/Fuse.Platform.Lifecycle.h: include/Uno.h

include/Fuse.Preview.ISelection.h: include/Uno.Object.h

include/Fuse.Preview.SelectionManager.h: include/Uno.h

include/Fuse.Properties.h: include/Uno.Object.h

include/Fuse.PropertyHandle.h: include/Uno.Object.h

include/Fuse.PushNotifications.AndroidImpl.h: include/Uno.Object.h

include/Fuse.PushNotifications.Push.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.PushNotifications.Push.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.PushNotifications.Push.h: include/Uno.IDisposable.h

include/Fuse.PushNotifications.PushNotify.h: include/Uno.h

include/Fuse.Reactive.AnyChangeObserver.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Reactive.AnyChangeObserver.h: include/Uno.Object.h

include/Fuse.Reactive.BindAttempt.h: include/Uno.Object.h

include/Fuse.Reactive.Console.h: include/Uno.h

include/Fuse.Reactive.ContextBinding.h: include/Fuse.Binding.h

include/Fuse.Reactive.DataBinding-1.h: include/Fuse.INameListener.h
include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Reactive.ContextBinding.h
include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Reactive.DataBinding-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.INameListener.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Reactive.DataBinding-1.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Uno.Object.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.DebugLog.h: include/Uno.h

include/Fuse.Reactive.EventBinding.CallClosure.h: include/Fuse.Scripting.IEventSerializer.h
include/Fuse.Reactive.EventBinding.CallClosure.h: include/Uno.Object.h
include/Fuse.Reactive.EventBinding.CallClosure.h: include/Uno.UX.Selector.h

include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.ContextBinding.h

include/Fuse.Reactive.FuseJS.Builtins.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.FunctionClosure.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.FuseJS.Http.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.Http.h: include/Uno.IDisposable.h

include/Fuse.Reactive.FuseJS.TimerManager.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.TimerManager.Timer.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.TimerModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.FuseJS.TimerModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.TimerModule.h: include/Uno.IDisposable.h

include/Fuse.Reactive.JavaScript.EvaluateDataContext.h: include/Uno.Object.h

include/Fuse.Reactive.JavaScript.h: include/Fuse.Behavior.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Binding.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.IDataProvider.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.JavaScript.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.JavaScript.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.JavaScript.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.PathObserver.h: include/Uno.IDisposable.h
include/Fuse.Reactive.PathObserver.h: include/Uno.Object.h

include/Fuse.Reactive.RootableScriptModule.h: include/Fuse.Scripting.ScriptModule.h
include/Fuse.Reactive.RootableScriptModule.h: include/Uno.IDisposable.h

include/Fuse.Reactive.SegmentObserver.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Reactive.SegmentObserver.h: include/Uno.IDisposable.h
include/Fuse.Reactive.SegmentObserver.h: include/Uno.Object.h

include/Fuse.Reactive.ThreadWorker.h: include/Fuse.Scripting.IThreadWorker.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Object.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Threading.IDispatcher.h

include/Fuse.RelativeTransform-1.h: include/Fuse.Binding.h
include/Fuse.RelativeTransform-1.h: include/Fuse.ITransformRelative.h
include/Fuse.RelativeTransform-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RelativeTransform-1.h: include/Fuse.Transform.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.IList-1.h

include/Fuse.RenderTargetEntry.h: include/Uno.Int2.h
include/Fuse.RenderTargetEntry.h: include/Uno.Int4.h
include/Fuse.RenderTargetEntry.h: include/Uno.Object.h

include/Fuse.RequestBringIntoViewArgs.h: include/Uno.EventArgs.h

include/Fuse.RequestBringIntoViewHandler.h: include/Uno.Delegate.h

include/Fuse.Resources.DisposalManager.h: include/Uno.h

include/Fuse.Resources.DisposalRequest.h: include/Uno.Int.h

include/Fuse.Resources.DoubleResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.DoubleResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.DoubleResourceConverter.h: include/Uno.Double.h

include/Fuse.Resources.FileImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.FileImageSourceImpl.BackgroundLoad.h: include/Uno.Object.h

include/Fuse.Resources.FileImageSourceImpl.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.FileImageSourceImpl.h: include/Fuse.Resources.LoadingImageSource.h

include/Fuse.Resources.FileResource.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.FloatResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.FloatResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.FloatResourceConverter.h: include/Uno.Float.h

include/Fuse.Resources.GenericResourceConverter-1.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.GenericResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.HttpImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.HttpImageSourceImpl.BackgroundLoad.h: include/Uno.Object.h

include/Fuse.Resources.HttpImageSourceImpl.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.HttpImageSourceImpl.h: include/Fuse.Resources.LoadingImageSource.h

include/Fuse.Resources.ImageSource.h: include/Uno.UX.PropertyObject.h
include/Fuse.Resources.ImageSource.h: include/Uno.Float2.h
include/Fuse.Resources.ImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.ImageSourceChangedArgs.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageSourceErrorArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Resources.ImageSourceErrorArgs.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageSourceErrorHandler.h: include/Uno.Delegate.h

include/Fuse.Resources.IMemoryResource.h: include/Uno.Object.h

include/Fuse.Resources.IntResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.IntResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.IntResourceConverter.h: include/Uno.Int.h

include/Fuse.Resources.IResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.ISoftDisposable.h: include/Uno.Object.h

include/Fuse.Resources.LoadingImageSource.CleanupReason.h: include/Uno.Int.h

include/Fuse.Resources.LoadingImageSource.h: include/Fuse.Resources.ImageSource.h
include/Fuse.Resources.LoadingImageSource.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.LoadingImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.MemoryPolicy.h: include/Uno.Object.h

include/Fuse.Resources.MultiDensityImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.NumericResourceConverter-1.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.NumericResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.ProxyImageSource.h: include/Uno.Object.h

include/Fuse.Resources.ResourceBinding-1.h: include/Fuse.Binding.h

include/Fuse.Resources.ResourceConverters.h: include/Uno.h

include/Fuse.Resources.ResourceRegistry.h: include/Uno.h

include/Fuse.Resources.TextureImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.RootStage.h: include/Uno.Int.h

include/Fuse.RootViewport.h: include/Fuse.Binding.h
include/Fuse.RootViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.RootViewport.h: include/Fuse.IViewport.h
include/Fuse.RootViewport.h: include/Fuse.Node.h
include/Fuse.RootViewport.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RootViewport.h: include/Fuse.Visual.h
include/Fuse.RootViewport.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RootViewport.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RootViewport.h: include/Uno.Collections.IList-1.h
include/Fuse.RootViewport.h: include/Uno.Float2.h
include/Fuse.RootViewport.h: include/Uno.IDisposable.h
include/Fuse.RootViewport.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Rotation.h: include/Fuse.Binding.h
include/Fuse.Rotation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Rotation.h: include/Fuse.Transform.h
include/Fuse.Rotation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Rotation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Rotation.h: include/Uno.Collections.IList-1.h
include/Fuse.Rotation.h: include/Uno.Float3.h

include/Fuse.Scaling.h: include/Fuse.Binding.h
include/Fuse.Scaling.h: include/Fuse.IScalingMode.h
include/Fuse.Scaling.h: include/Fuse.ITransformRelative.h
include/Fuse.Scaling.h: include/Fuse.RelativeTransform-1.h
include/Fuse.Scaling.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Scaling.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Scaling.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Scaling.h: include/Uno.Collections.IList-1.h
include/Fuse.Scaling.h: include/Uno.Float3.h

include/Fuse.ScalingModes.h: include/Uno.h

include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.IScalingMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.ITransformMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Uno.Object.h

include/Fuse.Scripting.Array.h: include/Fuse.Scripting.IArray.h
include/Fuse.Scripting.Array.h: include/Uno.Object.h

include/Fuse.Scripting.ArrayMirror.h: include/Fuse.Scripting.IArray.h
include/Fuse.Scripting.ArrayMirror.h: include/Fuse.Scripting.ListMirror.h

include/Fuse.Scripting.BoolChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.Bool.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.ClassInstance.h: include/Uno.Object.h

include/Fuse.Scripting.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Context.h: include/Uno.Object.h

include/Fuse.Scripting.Context.MethodClosure.h: include/Uno.Object.h

include/Fuse.Scripting.Context.PropertyClosure.h: include/Uno.Object.h

include/Fuse.Scripting.DoubleChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.DoubleChangedArgs.h: include/Uno.Double.h
include/Fuse.Scripting.DoubleChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Error.h: include/Uno.Exception.h

include/Fuse.Scripting.ExecutionThread.h: include/Uno.Int.h

include/Fuse.Scripting.External.h: include/Uno.Object.h

include/Fuse.Scripting.FactoryClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.FileModule.h: include/Fuse.Scripting.ScriptModule.h
include/Fuse.Scripting.FileModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.FileSourceConverter.h: include/Fuse.Scripting.Marshal.IConverter.h
include/Fuse.Scripting.FileSourceConverter.h: include/Uno.Object.h

include/Fuse.Scripting.Function.h: include/Uno.Object.h

include/Fuse.Scripting.FutureFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.IArray.h: include/Uno.Object.h

include/Fuse.Scripting.IEventSerializer.h: include/Uno.Object.h

include/Fuse.Scripting.IModuleProvider.h: include/Uno.Object.h

include/Fuse.Scripting.IObject.h: include/Uno.Object.h

include/Fuse.Scripting.IObserver.h: include/Uno.Object.h

include/Fuse.Scripting.IScriptEvent.h: include/Uno.Object.h

include/Fuse.Scripting.IScriptObject.h: include/Uno.Object.h

include/Fuse.Scripting.IThreadWorker.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure-2.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-2.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.h: include/Uno.h

include/Fuse.Scripting.JSCallback.NumberConverter.h: include/Uno.h

include/Fuse.Scripting.JSFileSource.h: include/Uno.UX.FileSource.h

include/Fuse.Scripting.Json.h: include/Uno.h

include/Fuse.Scripting.LazyObservableProperty.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Scripting.LazyObservableProperty.h: include/Fuse.Scripting.ObservableProperty.h
include/Fuse.Scripting.LazyObservableProperty.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Scripting.ListMirror.h: include/Fuse.Scripting.IArray.h
include/Fuse.Scripting.ListMirror.h: include/Fuse.Scripting.ValueMirror.h

include/Fuse.Scripting.Marshal.h: include/Uno.h

include/Fuse.Scripting.Marshal.IConverter.h: include/Uno.Object.h

include/Fuse.Scripting.Module.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Module.h: include/Uno.Object.h

include/Fuse.Scripting.ModuleResult.h: include/Uno.Object.h

include/Fuse.Scripting.NativeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Function.h
include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.NativeProperty-2.h

include/Fuse.Scripting.NativeFunction.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativeFunction.NativeFunctionClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeMember.h: include/Uno.Object.h

include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.Module.h
include/Fuse.Scripting.NativeModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.NativePromise-2.ContextClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativePromise-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativePromise-2.PromiseClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeProperty-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.Object.h: include/Fuse.Scripting.IObject.h
include/Fuse.Scripting.Object.h: include/Uno.Object.h

include/Fuse.Scripting.ObjectMirror.h: include/Fuse.Scripting.IObject.h
include/Fuse.Scripting.ObjectMirror.h: include/Fuse.Scripting.ValueMirror.h

include/Fuse.Scripting.Observable.Add.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.Clear.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.h: include/Fuse.Scripting.IArray.h
include/Fuse.Scripting.Observable.h: include/Fuse.Scripting.ListMirror.h

include/Fuse.Scripting.Observable.InsertAll.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.InsertAt.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.NewAll.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.NewAt.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.Operation.h: include/Uno.Object.h

include/Fuse.Scripting.Observable.RemoveAt.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.RemoveRange.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.Set.h: include/Fuse.Scripting.Observable.Operation.h

include/Fuse.Scripting.Observable.Subscription.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Observable.Subscription.h: include/Uno.Object.h

include/Fuse.Scripting.ObservableProperty.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Scripting.ObservableProperty.h: include/Uno.Object.h
include/Fuse.Scripting.ObservableProperty.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Scripting.ObservableProperty.PushCapture.h: include/Uno.Object.h

include/Fuse.Scripting.ResultConverter-2.h: include/Uno.Delegate.h

include/Fuse.Scripting.ResultFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.ScriptClass.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptException.h: include/Uno.Exception.h

include/Fuse.Scripting.ScriptMember.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptMethod.h: include/Fuse.Scripting.ScriptMember.h

include/Fuse.Scripting.ScriptMethod-1.CallClosure.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptMethod-1.h: include/Fuse.Scripting.ScriptMethod.h

include/Fuse.Scripting.ScriptMethodInline.h: include/Fuse.Scripting.ScriptMethod.h

include/Fuse.Scripting.ScriptModule.h: include/Fuse.Scripting.Module.h
include/Fuse.Scripting.ScriptModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.ScriptModule.RequireContext.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptProperty.h: include/Fuse.Scripting.ScriptMember.h

include/Fuse.Scripting.ScriptProperty-2.h: include/Fuse.Scripting.ScriptProperty.h

include/Fuse.Scripting.StringChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.StringChangedArgs.h: include/Uno.String.h
include/Fuse.Scripting.StringChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.Array.h
include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.IArray.h

include/Fuse.Scripting.V8.ArrayHandle.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.V8.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.V8.Function.h: include/Fuse.Scripting.Function.h

include/Fuse.Scripting.V8.Handle.h: include/Uno.h

include/Fuse.Scripting.V8.Marshaller.CallbackWrapper.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Marshaller.h: include/Uno.h

include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.IObject.h
include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.Object.h

include/Fuse.Scripting.V8.Simple.Array.h: include/Fuse.Scripting.V8.Simple.ArrayImpl.h
include/Fuse.Scripting.V8.Simple.Array.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.ArrayImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Bool.h: include/Fuse.Scripting.V8.Simple.BoolImpl.h
include/Fuse.Scripting.V8.Simple.Bool.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.BoolImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Callback.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.CallbackImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Context.h: include/Fuse.Scripting.V8.Simple.ContextImpl.h
include/Fuse.Scripting.V8.Simple.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Simple.Context.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ContextImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.DelegateCallback.h: include/Fuse.Scripting.V8.Simple.Callback.h

include/Fuse.Scripting.V8.Simple.DelegateExternalFreer.h: include/Fuse.Scripting.V8.Simple.ExternalFreer.h

include/Fuse.Scripting.V8.Simple.DelegateMessageHandler.h: include/Fuse.Scripting.V8.Simple.MessageHandler.h

include/Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h

include/Fuse.Scripting.V8.Simple.DllDirectory.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.Double.h: include/Fuse.Scripting.V8.Simple.DoubleImpl.h
include/Fuse.Scripting.V8.Simple.Double.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.DoubleImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.External.h: include/Fuse.Scripting.V8.Simple.ExternalImpl.h
include/Fuse.Scripting.V8.Simple.External.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.ExternalFreer.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ExternalFreerImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ExternalImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Function.h: include/Fuse.Scripting.V8.Simple.FunctionImpl.h
include/Fuse.Scripting.V8.Simple.Function.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.FunctionImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Int.h: include/Fuse.Scripting.V8.Simple.IntImpl.h
include/Fuse.Scripting.V8.Simple.Int.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.IntImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.MessageHandler.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.MessageHandlerImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Object.h: include/Fuse.Scripting.V8.Simple.ObjectImpl.h
include/Fuse.Scripting.V8.Simple.Object.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.ObjectImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptException.h: include/Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h
include/Fuse.Scripting.V8.Simple.ScriptException.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.String.h: include/Fuse.Scripting.V8.Simple.StringImpl.h
include/Fuse.Scripting.V8.Simple.String.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.StringExtensions.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.StringImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Type.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Simple.UniqueValueVector.h: include/Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h
include/Fuse.Scripting.V8.Simple.UniqueValueVector.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Value.h: include/Fuse.Scripting.V8.Simple.ValueImpl.h
include/Fuse.Scripting.V8.Simple.Value.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ValueExtensions.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.ValueImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Fuse.Scripting.V8.Simple.Value.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Collections.IList-1.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Object.h

include/Fuse.Scripting.Value.h: include/Uno.h

include/Fuse.Scripting.ValueConverter-2.h: include/Uno.Delegate.h

include/Fuse.Scripting.ValueMirror.h: include/Uno.Object.h

include/Fuse.Selection.Selectable.h: include/Fuse.Behavior.h
include/Fuse.Selection.Selectable.h: include/Fuse.Binding.h
include/Fuse.Selection.Selectable.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Selection.h: include/Fuse.Behavior.h
include/Fuse.Selection.Selection.h: include/Fuse.Binding.h
include/Fuse.Selection.Selection.h: include/Fuse.Scripting.IObserver.h
include/Fuse.Selection.Selection.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Selection.How.h: include/Uno.Int.h

include/Fuse.Selection.SelectionReplace.h: include/Uno.Int.h

include/Fuse.Selection.SelectMode.h: include/Uno.Int.h

include/Fuse.Selection.ToggleSelection.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Shear.h: include/Fuse.Binding.h
include/Fuse.Shear.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Shear.h: include/Fuse.Transform.h
include/Fuse.Shear.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Shear.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Shear.h: include/Uno.Collections.IList-1.h
include/Fuse.Shear.h: include/Uno.Float2.h

include/Fuse.Stage.h: include/Fuse.UpdateAction.h
include/Fuse.Stage.h: include/Uno.Object.h

include/Fuse.Storage.ApplicationDir.h: include/Uno.h

include/Fuse.Storage.ApplicationDir.ReadClosure.h: include/Uno.Object.h

include/Fuse.Storage.ApplicationDir.WriteClosure.h: include/Uno.Object.h

include/Fuse.Storage.StorageModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Storage.StorageModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Storage.StorageModule.h: include/Uno.IDisposable.h

include/Fuse.Time.h: include/Uno.h

include/Fuse.Transform.h: include/Fuse.Binding.h
include/Fuse.Transform.h: include/Fuse.Node.h
include/Fuse.Transform.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Transform.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Transform.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Transform.h: include/Uno.Collections.IList-1.h

include/Fuse.Translation.h: include/Fuse.Binding.h
include/Fuse.Translation.h: include/Fuse.ITransformRelative.h
include/Fuse.Translation.h: include/Fuse.ITranslationMode.h
include/Fuse.Translation.h: include/Fuse.RelativeTransform-1.h
include/Fuse.Translation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Translation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Translation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Translation.h: include/Uno.Collections.IList-1.h

include/Fuse.TranslationModes.h: include/Uno.h

include/Fuse.TranslationModes.HeightMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.HeightMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.HeightMode.h: include/Fuse.TranslationModes.SizeMode.h

include/Fuse.TranslationModes.LocalMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.LocalMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.LocalMode.h: include/Uno.Object.h

include/Fuse.TranslationModes.ParentSizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.ParentSizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.ParentSizeMode.h: include/Uno.Object.h

include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Object.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Float3.h

include/Fuse.TranslationModes.WidthMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.WidthMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.WidthMode.h: include/Fuse.TranslationModes.SizeMode.h

include/Fuse.Triggers.Actions.BringIntoView.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.BringToFront.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Callback.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.CancelInteractions.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Collapse.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.DebugAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.DebugProperty-1.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugProperty-1.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.EvaluateJS.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.GiveFocus.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Hide.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.ICollapse.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IHide.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IShow.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.ITaggedDebugProperty.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IToggleable.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.JSEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Triggers.Actions.JSEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Triggers.Actions.JSEventHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.LoadUrl.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Pause.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.PlaybackAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PlayTo.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.Pulse.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PulseBackward.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PulseForward.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.RaiseUserEvent.h: include/Fuse.Triggers.Actions.TriggerAction.h
include/Fuse.Triggers.Actions.RaiseUserEvent.h: include/Uno.UX.Selector.h

include/Fuse.Triggers.Actions.ReleaseFocus.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.ReleasePage.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Reload.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Resume.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.SendToBack.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Set-1.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Show.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Stop.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.StopLoading.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Toggle.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionLayout.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionState.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionStateType.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.TriggerAction.h: include/Uno.UX.PropertyObject.h

include/Fuse.Triggers.Actions.TriggerDirection.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.UserEventArg.h: include/Uno.UX.PropertyObject.h

include/Fuse.Triggers.Actions.WebViewNavAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.BusyTask.h: include/Uno.Object.h

include/Fuse.Triggers.BusyTaskModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Triggers.BusyTaskModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Triggers.BusyTaskModule.h: include/Uno.IDisposable.h

include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IMediaPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IProgress.h: include/Uno.Object.h

include/Fuse.Triggers.IPulseTrigger.h: include/Uno.Object.h

include/Fuse.Triggers.IScrolledLength.h: include/Uno.Object.h
include/Fuse.Triggers.IScrolledLength.h: include/Uno.Float2.h

include/Fuse.Triggers.IValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.h: include/Uno.h

include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Fuse.IScalingMode.h
include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.Triggers.LayoutTransitionedArgs.h
include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.Triggers.LayoutTransitionedHandler.h
include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.VisualEvent-2.h

include/Fuse.Triggers.LayoutTransitionedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Triggers.LayoutTransitionedArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Triggers.LayoutTransitionedHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.ProgressAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.ProgressAnimation.h: include/Fuse.Binding.h
include/Fuse.Triggers.ProgressAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.ProgressAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.ProgressAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.ProgressAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.ProgressAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Binding.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.PulseTrigger-1.PulseHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.Binding.h
include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.IBeginRemoveVisualListener.h
include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.RemovingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.RemovingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.RemovingAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Scrolled.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Binding.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Triggers.PulseTrigger-1.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Triggers.ScrolledArgs.h
include/Fuse.Triggers.Scrolled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Scrolled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Scrolled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.ScrolledArgs.h: include/Uno.EventArgs.h

include/Fuse.Triggers.ScrolledWhere.h: include/Uno.Int.h

include/Fuse.Triggers.ScrollRegion.h: include/Uno.Object.h

include/Fuse.Triggers.State.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.State.h: include/Fuse.Binding.h
include/Fuse.Triggers.State.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.State.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.State.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.State.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.State.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.StateGroup.GotoImpl.h: include/Uno.Object.h

include/Fuse.Triggers.StateGroup.h: include/Fuse.Behavior.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Binding.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.StateTransition.h: include/Uno.Int.h

include/Fuse.Triggers.Timeline.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Binding.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Timeline.State.h: include/Uno.Int.h

include/Fuse.Triggers.Trigger.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Behavior.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.TriggerBypassMode.h: include/Uno.Int.h

include/Fuse.Triggers.WhileBool.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.Actions.IToggleable.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Bool.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h
include/Fuse.Triggers.WhileDisabled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileDisabled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileDisabled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h
include/Fuse.Triggers.WhileEnabled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileEnabled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileEnabled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFailed.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileFailed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFailed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFailed.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFalse.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.Actions.IToggleable.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFocused.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileFocused.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFocused.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFocused.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileLoading.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileLoading.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileLoading.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileLoading.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePaused.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileTrue.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.Actions.IToggleable.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Animations.IPlayerFeedback.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileValueStatic.h: include/Uno.h

include/Fuse.UnhandledExceptionArgs.h: include/Uno.EventArgs.h

include/Fuse.UnhandledExceptionHandler.h: include/Uno.Delegate.h

include/Fuse.UpdateAction.h: include/Uno.Object.h

include/Fuse.UpdateDispatcher.h: include/Uno.Object.h
include/Fuse.UpdateDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.UpdateListener.h: include/Uno.Object.h

include/Fuse.UpdateManager.h: include/Uno.h

include/Fuse.UpdateStage.h: include/Uno.Int.h

include/Fuse.UserEvent.h: include/Fuse.Behavior.h
include/Fuse.UserEvent.h: include/Fuse.Binding.h
include/Fuse.UserEvent.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.UserEvent.h: include/Uno.Collections.ICollection-1.h
include/Fuse.UserEvent.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.UserEvent.h: include/Uno.Collections.IList-1.h

include/Fuse.UserEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.UserEventArgs.h: include/Uno.EventArgs.h

include/Fuse.UserEventDispatch.h: include/Uno.Object.h
include/Fuse.UserEventDispatch.h: include/Uno.UX.Selector.h

include/Fuse.UserEventHandler.h: include/Uno.Delegate.h

include/Fuse.Visual.CancelInteractionsType.h: include/Uno.Int.h

include/Fuse.Visual.h: include/Fuse.Binding.h
include/Fuse.Visual.h: include/Fuse.LayoutParams.h
include/Fuse.Visual.h: include/Fuse.Node.h
include/Fuse.Visual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Visual.h: include/Fuse.Visual.InteractionItem.h
include/Fuse.Visual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Visual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Visual.h: include/Uno.Collections.IList-1.h
include/Fuse.Visual.h: include/Uno.Float2.h
include/Fuse.Visual.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Visual.h: include/Uno.Float3.h
include/Fuse.Visual.h: include/Uno.Float4.h
include/Fuse.Visual.h: include/Uno.Float4x4.h
include/Fuse.Visual.h: include/Uno.Rect.h
include/Fuse.Visual.h: include/Uno.UX.Selector.h

include/Fuse.Visual.HitTestRecord.h: include/Uno.Object.h

include/Fuse.Visual.HitTestTransformMode.h: include/Uno.Int.h

include/Fuse.Visual.InteractionItem.h: include/Uno.Object.h

include/Fuse.Visual.ParameterProperty.h: include/Uno.String.h
include/Fuse.Visual.ParameterProperty.h: include/Uno.UX.Property-1.h

include/Fuse.Visual.VisualBits.h: include/Uno.Int.h

include/Fuse.VisualBounds.h: include/Uno.Geometry.Box.h
include/Fuse.VisualBounds.h: include/Uno.Object.h

include/Fuse.VisualContext.h: include/Uno.Int.h

include/Fuse.VisualEvent-2.h: include/Uno.Object.h

include/Fuse.VisualEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.VisualEventArgs.h: include/Uno.EventArgs.h

include/Fuse.VisualEventHandler.h: include/Uno.Delegate.h

include/Fuse.VisualEventMode.h: include/Uno.Int.h

include/Fuse.VisualListCache.h: include/Uno.h

include/Fuse.WrapException.h: include/Uno.Exception.h

include/FuseJS.Base64.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Base64.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Base64.h: include/Uno.IDisposable.h

include/FuseJS.Bundle.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Bundle.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Bundle.h: include/Uno.IDisposable.h

include/FuseJS.Bundle.ReadClosure.h: include/Uno.Object.h

include/FuseJS.Environment.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Environment.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Environment.h: include/Uno.IDisposable.h

include/FuseJS.FileReaderImpl.FileReadCommand.h: include/Uno.Object.h

include/FuseJS.FileReaderImpl.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.FileReaderImpl.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.FileReaderImpl.h: include/Uno.IDisposable.h

include/FuseJS.Globals.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Globals.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Globals.h: include/Uno.IDisposable.h

include/FuseJS.Lifecycle.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Lifecycle.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Lifecycle.h: include/Uno.IDisposable.h

include/FuseJS.RaiseEvent.h: include/Uno.Object.h

include/FuseJS.UserEvents.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.UserEvents.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.UserEvents.h: include/Uno.IDisposable.h

include/Java.Object.h: include/Uno.Object.h

include/OpenGL.GL.h: include/Uno.h

include/OpenGL.GLBlendEquation.h: include/Uno.Int.h

include/OpenGL.GLBlendingFactor.h: include/Uno.Int.h

include/OpenGL.GLBufferHandle.h: include/Uno.Object.h

include/OpenGL.GLBufferTarget.h: include/Uno.Int.h

include/OpenGL.GLBufferUsage.h: include/Uno.Int.h

include/OpenGL.GLClearBufferMask.h: include/Uno.Int.h

include/OpenGL.GLCullFaceMode.h: include/Uno.Int.h

include/OpenGL.GLDataType.h: include/Uno.Int.h

include/OpenGL.GLDepthFunction.h: include/Uno.Int.h

include/OpenGL.GLEnableCap.h: include/Uno.Int.h

include/OpenGL.GLError.h: include/Uno.Int.h

include/OpenGL.GLFramebufferAttachment.h: include/Uno.Int.h

include/OpenGL.GLFramebufferHandle.h: include/Uno.Object.h

include/OpenGL.GLFramebufferStatus.h: include/Uno.Int.h

include/OpenGL.GLFramebufferTarget.h: include/Uno.Int.h

include/OpenGL.GLFrontFaceDirection.h: include/Uno.Int.h

include/OpenGL.GLIndexType.h: include/Uno.Int.h

include/OpenGL.GLInteger4Name.h: include/Uno.Int.h

include/OpenGL.GLIntegerName.h: include/Uno.Int.h

include/OpenGL.GLPixelFormat.h: include/Uno.Int.h

include/OpenGL.GLPixelType.h: include/Uno.Int.h

include/OpenGL.GLPrimitiveType.h: include/Uno.Int.h

include/OpenGL.GLProgramHandle.h: include/Uno.Object.h

include/OpenGL.GLProgramParameter.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferHandle.h: include/Uno.Object.h

include/OpenGL.GLRenderbufferStorage.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferTarget.h: include/Uno.Int.h

include/OpenGL.GLShaderHandle.h: include/Uno.Object.h

include/OpenGL.GLShaderParameter.h: include/Uno.Int.h

include/OpenGL.GLShaderType.h: include/Uno.Int.h

include/OpenGL.GLTextureHandle.h: include/Uno.Object.h

include/OpenGL.GLTextureParameterName.h: include/Uno.Int.h

include/OpenGL.GLTextureParameterValue.h: include/Uno.Int.h

include/OpenGL.GLTextureTarget.h: include/Uno.Int.h

include/OpenGL.GLTextureUnit.h: include/Uno.Int.h

include/Polyfills.Window.WindowModule.h: include/Fuse.Scripting.FileModule.h
include/Polyfills.Window.WindowModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Polyfills.Window.WindowModule.h: include/Uno.IDisposable.h

include/posix_mutex.h: include/Uno/Uno.h

include/posix_thread.h: include/Uno/Uno.h


include/Uno.Action.h: include/Uno.Delegate.h

include/Uno.Action-1.h: include/Uno.Delegate.h

include/Uno.Action-2.h: include/Uno.Delegate.h

include/Uno.Action-3.h: include/Uno.Delegate.h

include/Uno.Action-4.h: include/Uno.Delegate.h

include/Uno.AggregateException.h: include/Uno.Exception.h

include/Uno.Application.h: include/Uno.Float4.h
include/Uno.Application.h: include/Uno.Object.h

include/Uno.ArgumentException.h: include/Uno.Exception.h

include/Uno.ArgumentNullException.h: include/Uno.ArgumentException.h

include/Uno.ArgumentOutOfRangeException.h: include/Uno.ArgumentException.h

include/Uno.Array.h: include/Uno.h

include/Uno.Bool.h: include/Uno.Object.h

include/Uno.Buffer.h: include/Uno.Object.h

include/Uno.Byte.h: include/Uno.Object.h

include/Uno.Byte4.h: include/Uno.Object.h

include/Uno.Char.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.Bucket.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.BucketState.h: include/Uno.Int.h

include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dictionary-2.Bucket.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IDictionary-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dictionary-2.Enumerator.h

include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h

include/Uno.Collections.EnumerableExtensions.h: include/Uno.h

include/Uno.Collections.EnumerableExtensions.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.HashSet-1.h: include/Uno.Object.h
include/Uno.Collections.HashSet-1.h: include/Uno.Collections.HashSet-1.Enumerator.h

include/Uno.Collections.ICollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ICollection-1.h: include/Uno.Object.h

include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Object.h

include/Uno.Collections.IEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.IList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IList-1.h: include/Uno.Object.h

include/Uno.Collections.IListExtensions.h: include/Uno.h

include/Uno.Collections.KeyValuePair-2.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.LinkedListNode-1.h: include/Uno.Object.h

include/Uno.Collections.List-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.List-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.List-1.h: include/Uno.Object.h
include/Uno.Collections.List-1.h: include/Uno.Collections.List-1.Enumerator.h

include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Object.h

include/Uno.Collections.OfTypeEnumerable-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.OfTypeEnumerable-2.h: include/Uno.Object.h

include/Uno.Collections.OfTypeEnumerator-2.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.OfTypeEnumerator-2.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.OfTypeEnumerator-2.h: include/Uno.IDisposable.h
include/Uno.Collections.OfTypeEnumerator-2.h: include/Uno.Object.h

include/Uno.Collections.OrderByCompare-1.h: include/Uno.Object.h

include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Queue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Queue-1.h: include/Uno.Object.h
include/Uno.Collections.Queue-1.h: include/Uno.Collections.Queue-1.Enumerator.h

include/Uno.Collections.SelectEnumerable-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.SelectEnumerable-2.h: include/Uno.Object.h

include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.IDisposable.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Object.h

include/Uno.Color.h: include/Uno.h

include/Uno.ColorHelper.h: include/Uno.h

include/Uno.Comparison-1.h: include/Uno.Delegate.h

include/Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h: include/Uno.h

include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArray-d4b8b207.h: include/Uno.h

include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h: include/Uno.h

include/Uno.Content.Fonts.CppFontFace.h: include/Uno.Content.Fonts.FontFace.h
include/Uno.Content.Fonts.CppFontFace.h: include/Uno.IDisposable.h

include/Uno.Content.Fonts.CppFontFaceHandle.h: include/Uno.Object.h

include/Uno.Content.Fonts.FontFace.h: include/Uno.IDisposable.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Object.h

include/Uno.Content.Models.IndexArray.h: include/Uno.Object.h

include/Uno.Content.Models.ModelDrawable.h: include/Uno.Object.h

include/Uno.Content.Models.ModelMesh.h: include/Uno.Object.h

include/Uno.Content.Models.VertexAttributeArray.h: include/Uno.Object.h

include/Uno.DateTime.h: include/Uno.Object.h

include/Uno.Delegate.h: include/Uno.Object.h

include/Uno.Diagnostics.AssertionHandler.h: include/Uno.Delegate.h

include/Uno.Diagnostics.Clock.h: include/Uno.h

include/Uno.Diagnostics.Debug.h: include/Uno.h

include/Uno.Diagnostics.DebugMessageType.h: include/Uno.Int.h

include/Uno.Diagnostics.LogHandler.h: include/Uno.Delegate.h

include/Uno.Double.h: include/Uno.Object.h

include/Uno.Enum.h: include/Uno.h

include/Uno.EventArgs.h: include/Uno.Object.h

include/Uno.EventHandler.h: include/Uno.Delegate.h

include/Uno.EventHandler-1.h: include/Uno.Delegate.h

include/Uno.Exception.h: include/Uno.Object.h

include/Uno.Float.h: include/Uno.Object.h

include/Uno.Float2.h: include/Uno.Object.h

include/Uno.Float2x2.h: include/Uno.Object.h

include/Uno.Float3.h: include/Uno.Object.h

include/Uno.Float3x3.h: include/Uno.Object.h

include/Uno.Float4.h: include/Uno.Object.h

include/Uno.Float4x4.h: include/Uno.Object.h

include/Uno.FormatException.h: include/Uno.Exception.h

include/Uno.Func-1.h: include/Uno.Delegate.h

include/Uno.Func-2.h: include/Uno.Delegate.h

include/Uno.Func-3.h: include/Uno.Delegate.h

include/Uno.Func-4.h: include/Uno.Delegate.h

include/Uno.GC.h: include/Uno.h

include/Uno.Generic.h: include/Uno.h

include/Uno.Geometry.Box.h: include/Uno.Float3.h
include/Uno.Geometry.Box.h: include/Uno.Object.h

include/Uno.Geometry.Collision.h: include/Uno.h

include/Uno.Geometry.Ray.h: include/Uno.Float3.h
include/Uno.Geometry.Ray.h: include/Uno.Object.h

include/Uno.Geometry.Sphere.h: include/Uno.Float3.h
include/Uno.Geometry.Sphere.h: include/Uno.Object.h

include/Uno.Geometry.Triangle.h: include/Uno.Float3.h
include/Uno.Geometry.Triangle.h: include/Uno.Object.h

include/Uno.Graphics.BlendEquation.h: include/Uno.Int.h

include/Uno.Graphics.BlendOperand.h: include/Uno.Int.h

include/Uno.Graphics.BufferUsage.h: include/Uno.Int.h

include/Uno.Graphics.CompareFunc.h: include/Uno.Int.h

include/Uno.Graphics.DeviceBuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.DeviceBuffer.h: include/Uno.Object.h

include/Uno.Graphics.Format.h: include/Uno.Int.h

include/Uno.Graphics.Framebuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.Framebuffer.h: include/Uno.Object.h

include/Uno.Graphics.FramebufferFlags.h: include/Uno.Int.h

include/Uno.Graphics.GraphicsContext.h: include/Uno.Object.h
include/Uno.Graphics.GraphicsContext.h: include/Uno.Recti.h
include/Uno.Graphics.GraphicsContext.h: include/Uno/GraphicsContext.h

include/Uno.Graphics.IndexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.IndexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.IndexType.h: include/Uno.Int.h

include/Uno.Graphics.IndexTypeHelpers.h: include/Uno.h

include/Uno.Graphics.PolygonFace.h: include/Uno.Int.h

include/Uno.Graphics.PolygonWinding.h: include/Uno.Int.h

include/Uno.Graphics.PrimitiveType.h: include/Uno.Int.h

include/Uno.Graphics.RenderTarget.h: include/Uno.IDisposable.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Int2.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Object.h

include/Uno.Graphics.SamplerState.h: include/Uno.Object.h

include/Uno.Graphics.Texture2D.h: include/Uno.IDisposable.h
include/Uno.Graphics.Texture2D.h: include/Uno.Int2.h
include/Uno.Graphics.Texture2D.h: include/Uno.Object.h

include/Uno.Graphics.TextureAddressMode.h: include/Uno.Int.h

include/Uno.Graphics.TextureFilter.h: include/Uno.Int.h

include/Uno.Graphics.TextureHelpers.h: include/Uno.h

include/Uno.Graphics.VertexAttributeInfo.h: include/Uno.Object.h

include/Uno.Graphics.VertexAttributeType.h: include/Uno.Int.h

include/Uno.Graphics.VertexAttributeTypeHelpers.h: include/Uno.h

include/Uno.Graphics.VertexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.VertexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.VideoTexture.h: include/Uno.IDisposable.h
include/Uno.Graphics.VideoTexture.h: include/Uno.Object.h

include/Uno.h: include/Uno/ObjectModel.h

include/Uno.IDisposable.h: include/Uno.Object.h

include/Uno.IndexOutOfRangeException.h: include/Uno.Exception.h

include/Uno.Int.h: include/Uno.Object.h

include/Uno.Int2.h: include/Uno.Object.h

include/Uno.Int3.h: include/Uno.Object.h

include/Uno.Int4.h: include/Uno.Object.h

include/Uno.IntPtr.h: include/Uno.Object.h

include/Uno.InvalidCastException.h: include/Uno.Exception.h

include/Uno.InvalidOperationException.h: include/Uno.Exception.h

include/Uno.IO.BinaryReader.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryReader.h: include/Uno.Object.h

include/Uno.IO.BinaryWriter.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryWriter.h: include/Uno.Object.h

include/Uno.IO.Bundle.h: include/Uno.Object.h

include/Uno.IO.BundleFile.h: include/Uno.Object.h

include/Uno.IO.CppXliStream.h: include/Uno.IDisposable.h
include/Uno.IO.CppXliStream.h: include/Uno.IO.Stream.h

include/Uno.IO.CppXliStreamHandle.h: include/Uno.Object.h

include/Uno.IO.Directory.h: include/Uno.h

include/Uno.IO.EndOfStreamException.h: include/Uno.IO.IOException.h

include/Uno.IO.File.h: include/Uno.h

include/Uno.IO.FileMode.h: include/Uno.Int.h

include/Uno.IO.FileSystemEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.IO.FileSystemEnumerable.h: include/Uno.Object.h
include/Uno.IO.FileSystemEnumerable.h: include/Uno.String.h

include/Uno.IO.FileSystemEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.IDisposable.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.Object.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.String.h

include/Uno.IO.FileSystemEnumeratorHandle.h: include/CppXliFileSystemEnumerator.h
include/Uno.IO.FileSystemEnumeratorHandle.h: include/Uno.Object.h

include/Uno.IO.FileSystemEnumeratorImpl.h: include/Uno.h

include/Uno.IO.FileSystemEnumeratorMode.h: include/Uno.Int.h

include/Uno.IO.FileSystemImpl.h: include/Uno.h

include/Uno.IO.IOException.h: include/Uno.Exception.h

include/Uno.IO.MemoryStream.h: include/Uno.IDisposable.h
include/Uno.IO.MemoryStream.h: include/Uno.IO.Stream.h

include/Uno.IO.Path.h: include/Uno.h

include/Uno.IO.Stream.h: include/Uno.IDisposable.h
include/Uno.IO.Stream.h: include/Uno.Object.h

include/Uno.IO.StreamReader.h: include/Uno.IDisposable.h
include/Uno.IO.StreamReader.h: include/Uno.IO.TextReader.h

include/Uno.IO.StreamWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StreamWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.TextReader.h: include/Uno.IDisposable.h
include/Uno.IO.TextReader.h: include/Uno.Object.h

include/Uno.IO.TextWriter.h: include/Uno.IDisposable.h
include/Uno.IO.TextWriter.h: include/Uno.Object.h

include/Uno.IO.UserDirectory.h: include/Uno.Int.h

include/Uno.Long.h: include/Uno.Object.h

include/Uno.Math.h: include/Uno.h

include/Uno.Matrix.h: include/Uno.h

include/Uno.Net.Http.HttpDefaultDispatcher.h: include/Uno.Object.h
include/Uno.Net.Http.HttpDefaultDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Net.Http.HttpMessageCache.h: include/Uno.h

include/Uno.Net.Http.HttpMessageHandler.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMessageHandler.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandler.StaticData.h: include/Uno.h

include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMessageHandlerRequest.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h: include/Uno.Object.h

include/Uno.Net.Http.HttpRequestState.h: include/Uno.Int.h

include/Uno.Net.Http.HttpResponseType.h: include/Uno.Int.h

include/Uno.Net.Http.HttpStatusReasonPhrase.h: include/Uno.h

include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Uno.Net.Http.Implementation.IHttpRequest.h

include/Uno.Net.Http.Implementation.IHttpRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implementation.IHttpRequest.h: include/Uno.Object.h

include/Uno.Net.Http.InvalidResponseTypeException.h: include/Uno.Exception.h

include/Uno.Net.Http.InvalidStateException.h: include/Uno.Exception.h

include/Uno.Net.NetworkHelpers.h: include/Uno.Object.h

include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IO.Stream.h

include/Uno.Net.Sockets.Socket.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.Socket.h: include/Uno.Object.h

include/Uno.Net.Sockets.Socket.SocketHandle.h: include/Uno.Object.h

include/Uno.Net.Sockets.SocketException.h: include/Uno.Exception.h

include/Uno.Net.Sockets.SocketFlags.h: include/Uno.Int.h

include/Uno.NotSupportedException.h: include/Uno.Exception.h

include/Uno.NullReferenceException.h: include/Uno.Exception.h

include/Uno.Object.h: include/Uno.h

include/Uno.ObjectDisposedException.h: include/Uno.Exception.h

include/Uno.OverflowException.h: include/Uno.Exception.h

include/Uno.Platform.EventModifiers.h: include/Uno.Int.h

include/Uno.Platform.FrameChangedEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.FrameChangedEventArgs.h: include/Uno.Rect.h

include/Uno.Platform.Key.h: include/Uno.Int.h

include/Uno.Platform.KeyEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.MouseButton.h: include/Uno.Int.h

include/Uno.Platform.PointerEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.PointerEventArgs.h: include/Uno.Float2.h

include/Uno.Platform.PointerType.h: include/Uno.Int.h

include/Uno.Platform.SystemUI.h: include/Uno.h
include/Uno.Platform.SystemUI.h: include/Uno/Platform2.h

include/Uno.Platform.SystemUIID.h: include/Uno.Int.h

include/Uno.Platform.SystemUIResizeReason.h: include/Uno.Int.h

include/Uno.Platform.SystemUIWillResizeEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.SystemUIWillResizeEventArgs.h: include/Uno.Rect.h

include/Uno.Platform.TextInputEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.TimerEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.ViewNativeHandle.h: include/Uno.Object.h
include/Uno.Platform.ViewNativeHandle.h: include/Uno/Platform2.h

include/Uno.Platform.WheelDeltaMode.h: include/Uno.Int.h

include/Uno.Platform.Window.h: include/Uno.Object.h

include/Uno.Platform2.Application.h: include/Uno.h
include/Uno.Platform2.Application.h: include/Uno/Platform2.h

include/Uno.Platform2.ApplicationState.h: include/Uno.Int.h

include/Uno.Platform2.ApplicationStateTransitionHandler.h: include/Uno.Delegate.h

include/Uno.Platform2.Display.h: include/Uno.Object.h
include/Uno.Platform2.Display.h: include/Uno.Rect.h
include/Uno.Platform2.Display.h: include/Uno/Platform2.h

include/Uno.Platform2.Display.PrivateState.h: include/Uno.Object.h
include/Uno.Platform2.Display.PrivateState.h: include/Uno/Platform2.h

include/Uno.Predicate-1.h: include/Uno.Delegate.h

include/Uno.Quaternion.h: include/Uno.h

include/Uno.Rect.h: include/Uno.Object.h

include/Uno.Recti.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ArrayCopyImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ArraySortImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.BufferImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ClockImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.DebugImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.GenericEqualsImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.GraphicsContextHandle.h: include/Uno.Object.h
include/Uno.Runtime.Implementation.GraphicsContextHandle.h: include/Uno/GraphicsContext.h

include/Uno.Runtime.Implementation.GraphicsContextImpl.h: include/Uno.h
include/Uno.Runtime.Implementation.GraphicsContextImpl.h: include/Uno/GraphicsContext.h

include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.BootstrapHints.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.Bootstrapper.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.BufferConverters.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.FormatSpecifier.h: include/Uno.Int.h

include/Uno.Runtime.Implementation.Internal.FormatStringItem.h: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h

include/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h

include/Uno.Runtime.Implementation.Internal.FormatStringToken.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h: include/Uno.Int.h

include/Uno.Runtime.Implementation.Internal.NumericFormatter.h: include/Uno.h

include/Uno.Runtime.Implementation.PlatformWindowHandle.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.PlatformWindowImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h: include/Uno.Exception.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.TextEncodingImpl.h: include/Uno.h

include/Uno.SByte.h: include/Uno.Object.h

include/Uno.SByte4.h: include/Uno.Object.h

include/Uno.Short.h: include/Uno.Object.h

include/Uno.Short2.h: include/Uno.Object.h

include/Uno.Short4.h: include/Uno.Object.h

include/Uno.String.h: include/Uno.Object.h

include/Uno.Text.Ascii.h: include/Uno.h

include/Uno.Text.Base64.h: include/Uno.h

include/Uno.Text.Decoder.h: include/Uno.Object.h

include/Uno.Text.Encoding.h: include/Uno.Object.h

include/Uno.Text.StringBuilder.h: include/Uno.Object.h

include/Uno.Text.StringBuilderElement.h: include/Uno.Object.h

include/Uno.Text.Utf8.h: include/Uno.h

include/Uno.Text.UTF8Decoder.h: include/Uno.Text.Decoder.h

include/Uno.Text.UTF8Encoding.h: include/Uno.Text.Encoding.h

include/Uno.Threading.AutoResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.AutoResetEvent.h: include/Uno.Object.h

include/Uno.Threading.CancellationToken.h: include/Uno.Object.h

include/Uno.Threading.CancellationTokenSource.h: include/Uno.Object.h

include/Uno.Threading.ConcurrentDictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Threading.ConcurrentDictionary-2.h: include/Uno.Collections.IDictionary-2.h
include/Uno.Threading.ConcurrentDictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Threading.ConcurrentDictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Threading.ConcurrentDictionary-2.h: include/Uno.Object.h

include/Uno.Threading.ConcurrentQueue-1.h: include/Uno.IDisposable.h
include/Uno.Threading.ConcurrentQueue-1.h: include/Uno.Object.h

include/Uno.Threading.Future.h: include/Uno.IDisposable.h
include/Uno.Threading.Future.h: include/Uno.Object.h

include/Uno.Threading.Future-1.Closure-1.h: include/Uno.Object.h

include/Uno.Threading.Future-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Future-1.h: include/Uno.Threading.Future.h

include/Uno.Threading.FutureState.h: include/Uno.Int.h

include/Uno.Threading.IDispatcher.h: include/Uno.Object.h

include/Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h: include/Uno.Object.h

include/Uno.Threading.IDispatcherExtensions.h: include/Uno.h

include/Uno.Threading.ITaskScheduler.h: include/Uno.IDisposable.h
include/Uno.Threading.ITaskScheduler.h: include/Uno.Object.h

include/Uno.Threading.LockGuard.h: include/Uno.IDisposable.h
include/Uno.Threading.LockGuard.h: include/Uno.Object.h

include/Uno.Threading.ManualResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.ManualResetEvent.h: include/Uno.Object.h

include/Uno.Threading.Monitor.h: include/Uno.h

include/Uno.Threading.Mutex.h: include/Uno.IDisposable.h
include/Uno.Threading.Mutex.h: include/Uno.Object.h

include/Uno.Threading.PosixAutoResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.PosixAutoResetEvent.h: include/Uno.Threading.AutoResetEvent.h

include/Uno.Threading.PosixManualResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.PosixManualResetEvent.h: include/Uno.Threading.ManualResetEvent.h

include/Uno.Threading.POSIXMutex.h: include/Uno.IDisposable.h
include/Uno.Threading.POSIXMutex.h: include/Uno.Threading.Mutex.h

include/Uno.Threading.POSIXThread.h: include/Uno.Threading.Thread.h

include/Uno.Threading.POSIXThread.ReleasingLauncher.h: include/Uno.Object.h

include/Uno.Threading.Promise-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Promise-1.h: include/Uno.Object.h
include/Uno.Threading.Promise-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.SyncDispatcher.h: include/Uno.Object.h
include/Uno.Threading.SyncDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Threading.Task.h: include/Uno.IDisposable.h
include/Uno.Threading.Task.h: include/Uno.Object.h

include/Uno.Threading.TaskDelegate.h: include/Uno.Delegate.h

include/Uno.Threading.TaskFuture-1.h: include/Uno.IDisposable.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Object.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.TaskStatus.h: include/Uno.Int.h

include/Uno.Threading.Thread.h: include/Uno.Object.h

include/Uno.Threading.ThreadPool.DefaultWorkItem.h: include/Uno.Threading.ThreadPool.WorkItem.h

include/Uno.Threading.ThreadPool.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadPool.h: include/Uno.Object.h

include/Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h: include/Uno.Threading.ThreadPool.WorkItem.h

include/Uno.Threading.ThreadPool.WorkItem.h: include/Uno.Object.h

include/Uno.Threading.ThreadPoolTaskScheduler.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadPoolTaskScheduler.h: include/Uno.Object.h
include/Uno.Threading.ThreadPoolTaskScheduler.h: include/Uno.Threading.ITaskScheduler.h

include/Uno.Time.Calendars.Era.h: include/Uno.Object.h

include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h: include/Uno.Time.Calendars.YearMonthDayCalculator.h

include/Uno.Time.Calendars.TimeOfDayCalculator.h: include/Uno.h

include/Uno.Time.Calendars.WeekYearCalculator.h: include/Uno.Object.h

include/Uno.Time.Calendars.YearMonthDayCalculator.h: include/Uno.Object.h
include/Uno.Time.Calendars.YearMonthDayCalculator.h: include/Uno.Time.Instant.h

include/Uno.Time.CalendarSystem.h: include/Uno.Object.h

include/Uno.Time.Constants.h: include/Uno.h

include/Uno.Time.Converter.h: include/Uno.h

include/Uno.Time.DateTimeZone.h: include/Uno.Object.h
include/Uno.Time.DateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.DeviceTimeZone.h: include/Uno.Time.DateTimeZone.h

include/Uno.Time.Duration.h: include/Uno.Object.h

include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.DateTimeZone.h
include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.HashCodeHelper.h: include/Uno.h

include/Uno.Time.Instant.h: include/Uno.Object.h

include/Uno.Time.LocalDateTime.h: include/Uno.Object.h
include/Uno.Time.LocalDateTime.h: include/Uno.Time.Instant.h

include/Uno.Time.Offset.h: include/Uno.Object.h

include/Uno.Time.Preconditions.h: include/Uno.h

include/Uno.Time.Text.FixedFormatPattern-1.h: include/Uno.Object.h

include/Uno.Time.Text.IPatternPart-1.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDateTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h: include/Uno.Object.h

include/Uno.Time.Text.NumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.OffsetPattern.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPattern.OffsetBucket.h: include/Uno.Object.h

include/Uno.Time.Text.PatternPart-2.h: include/Uno.Object.h
include/Uno.Time.Text.PatternPart-2.h: include/Uno.Time.Text.IPatternPart-1.h

include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Char.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SignPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.ZonedDateTime.h: include/Uno.Object.h
include/Uno.Time.ZonedDateTime.h: include/Uno.Time.Offset.h

include/Uno.Type.h: include/Uno.Object.h

include/Uno.UInt.h: include/Uno.Object.h

include/Uno.ULong.h: include/Uno.Object.h

include/Uno.UShort.h: include/Uno.Object.h

include/Uno.UShort2.h: include/Uno.Object.h

include/Uno.UShort4.h: include/Uno.Object.h

include/Uno.UX.BundleFileSource.h: include/Uno.UX.FileSource.h

include/Uno.UX.Expression-1.h: include/Uno.Delegate.h

include/Uno.UX.FileSource.h: include/Uno.Object.h

include/Uno.UX.IPropertyListener.h: include/Uno.Object.h
include/Uno.UX.IPropertyListener.h: include/Uno.UX.Selector.h

include/Uno.UX.NameTable.h: include/Uno.Object.h

include/Uno.UX.Property.h: include/Uno.Object.h
include/Uno.UX.Property.h: include/Uno.UX.Selector.h

include/Uno.UX.Property-1.h: include/Uno.UX.Property.h

include/Uno.UX.PropertyObject.h: include/Uno.Object.h

include/Uno.UX.Resource.h: include/Uno.Object.h

include/Uno.UX.Selector.h: include/Uno.Object.h

include/Uno.UX.SelectorRegistry.h: include/Uno.h

include/Uno.UX.Size.h: include/Uno.Object.h

include/Uno.UX.Size2.h: include/Uno.Object.h
include/Uno.UX.Size2.h: include/Uno.UX.Size.h

include/Uno.UX.StreamExtensions.h: include/Uno.h

include/Uno.UX.Template.h: include/Uno.Object.h

include/Uno.UX.Unit.h: include/Uno.Int.h

include/Uno.UX.ValueChangedArgs-1.h: include/Uno.EventArgs.h

include/Uno.UX.ValueChangedHandler-1.h: include/Uno.Delegate.h

include/Uno.Vector.h: include/Uno.h



include/Uno/_internal.h: include/Uno/ObjectModel.h
include/Uno/_internal.h: include/Uno/_gc.h

include/Uno/Activity/AApplication.h: include/Uno/Common/AndroidCommon.h
include/Uno/Activity/AApplication.h: include/Uno.Platform2.Display.h

include/Uno/Activity/EntryPoints.h: include/Uno/Graphics/GLHelper.h
include/Uno/Activity/EntryPoints.h: include/Uno/Common/AndroidCommon.h



include/Uno/Graphics/GLHelper.h: include/Uno/Common/AndroidCommon.h

include/Uno/GraphicsContext.h: include/Uno/Support.h

include/Uno/JNIHelper.h: include/Uno/Uno.h
include/Uno/JNIHelper.h: include/Uno/Common/AndroidCommon.h

include/Uno/Memory.h: include/Uno/_config.h

include/Uno/ObjectModel.h: include/Uno/Memory.h

include/Uno/Platform2.h: include/Uno.Rect.h
include/Uno/Platform2.h: include/Uno/Common/AndroidCommon.h
include/Uno/Platform2.h: include/Uno/Graphics/GLHelper.h
include/Uno/Platform2.h: include/Uno/JNIHelper.h

include/Uno/Support.h: include/Uno.Int2.h
include/Uno/Support.h: include/Uno.Float2.h

include/Uno/Uno.h: include/Uno.h
include/Uno/Uno.h: include/Uno/Support.h

include/Uno/XliInterop.h: include/Uno/Support.h

include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.MessageHandler.h
include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h
include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.Callback.h
include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.ExternalFreer.h

libs/$(ABI): | libs
	$(UNO) mkdir libs/$(ABI)

libs:
	$(UNO) mkdir libs

.uno:
	$(UNO) mkdir .uno

.uno/Uno: | .uno
	$(UNO) mkdir .uno/Uno

.uno/Uno/Activity: | .uno/Uno
	$(UNO) mkdir .uno/Uno/Activity

.uno/Uno/Graphics: | .uno/Uno
	$(UNO) mkdir .uno/Uno/Graphics
