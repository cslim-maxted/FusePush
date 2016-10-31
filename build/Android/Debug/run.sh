#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.38.2/targets/android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "com.maxted.fusetest"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "com.maxted.fusetest.apk" \
    --package=com.maxted.fusetest \
    --activity=commaxtedfusetest \
    --sym-dir="com.maxted.fusetest/app/src/main/.uno" \
    "$@"
