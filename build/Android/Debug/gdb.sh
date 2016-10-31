#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/targets/android/gdb.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

PATH="/Users/cslim/Library/Application Support/Fusetools/Fuse/Android/AndroidSDK/platform-tools:$PATH"

##if #(DEBUG:Defined)
set -e
cd "`dirname "$0"`"
PATH="/Users/cslim/Library/Application Support/Fusetools/Fuse/Android/AndroidSDK/platform-tools:$PATH"

echo ""
echo "## Waiting for activity before connection gdb"
adb shell sleep 2

NDK_DIR="/Users/cslim/Library/Application Support/Fusetools/Fuse/Android/AndroidNDK"

AWK_SCRIPTS=$NDK_DIR/build/awk
PID=`adb shell ps | awk -f $NDK_DIR/build/awk/extract-pid.awk -v PACKAGE="com.maxted.fusetest"`
DATA_DIR=/data/data/com.maxted.fusetest #`adb shell run-as com.maxted.fusetest /system/bin/sh -c pwd`
DEVICE_GDBSERVER=$DATA_DIR/lib/gdbserver

echo ""
echo "## Starting gdbserver at $DEVICE_GDBSERVER"
adb shell run-as com.maxted.fusetest $DEVICE_GDBSERVER +debug-socket --attach $PID &

echo ""
echo "## Forwarding GDB to localhost port:1234"
adb forward tcp:1234 localfilesystem:$DATA_DIR/debug-socket &
##else
#echo "Uno project was not compiled for debugging"
##endif
wait
