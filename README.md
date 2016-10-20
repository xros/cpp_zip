Compress Files and Decompress Files
==================================

### Who are they?
Let's do it

`quazip-0.7.2.zip` is a QT/C++ wrapper for zlib

`zlib128-dll.zip` is the dynamic link libary for Windows platforms.

`zlib-1.2.8.tar.gz` is the source codes for Windows/MacOS/Linux/BSD

### How to build?

There is a `quazip.pro` in the folder `quazip-0.7.2`. Use Qt Creator to open the project `quazip.pro`.

Try to change the value of `LIBDIR_UNIX` or `LIBDIR_WIN32` to your local path where you put `libz.so, libz.so.1, libz.so.1.2.8`

Then click build of this `quazip` project. If promising, you will find a dolder named `build-quazip-Desktop-Debug` which contains dynamic libs you have just compiled.

### Pre-compiled libs included for future development

The folder `Libs/Unix/` has zlib compiled lib files: `libz.a  libz.so  libz.so.1  libz.so.1.2.8`

The folder `Libs/Windows/` has zlib compiled lib files: `zdll.lib  zlib1.dll  zlib.def`

The folder `build-quazip-Desktop-Debug/quazip` has quazip compiled lib files with zlib headers: `libquazip.so  libquazip.so.1  libquazip.so.1.0  libquazip.so.1.0.0  Makefile`

We will use `libquazip.so` to build compressing/decompressing applications.

