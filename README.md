Compress Files and Decompress Files
==================================
Let's do it

This is compiled/written on Linux(Ubuntu14.04) with gcc 4.8.2, Qt 5.2.1, Qt Creator 3.0.1 with an empty GUI which works actually by the time of writting.

### What is this?
This is a file compressor in C++ built from stratch. Will add GUI in the future.

### How to open it?
Use Qt creator to open the project file `cpp_zip/myzip1/myzip1.pro`

Structure looks like this

    ![img](static/snapshot376.png)


### Who are they?

`quazip-0.7.2.zip` is a QT/C++ wrapper for zlib

`zlib128-dll.zip` is the dynamic link library pre-built for Windows platforms.

`zlib-1.2.8.tar.gz` is the source codes for Windows/MacOS/Linux/BSD

### How to build?

Tested on Ubuntu 14.04 amd64, qt creator 5.2.1

#### Compile zlib
`cd zlib-1.2.8 && ./configure && make` It will have `libz.so* ...`.

There is a `quazip.pro` in the folder `quazip-0.7.2`. Use Qt Creator to open the project `quazip.pro`.

#### Add zlib in project quazip
In file `quazip.pro`, change the value of `LIBDIR_UNIX` or `LIBDIR_WIN32` to your local path where you put `libz.so, libz.so.1, libz.so.1.2.8`

Copy file `zlib.h, zconf.h` from zlib-1.2.8 and in qt creator add click **Add Existing Files ...** to add these 2 files again to the project.

Then click build of this `quazip` project. If promising, you will find a folder named `build-quazip-Desktop-Debug` which contains dynamic libs you have just compiled.

### Pre-compiled libs included for future development

The folder `Libs/Unix/` has zlib compiled lib files: `libz.a  libz.so  libz.so.1  libz.so.1.2.8`

The folder `Libs/Windows/` has zlib compiled lib files: `zdll.lib  zlib1.dll  zlib.def`

The folder `build-quazip-Desktop-Debug/quazip` has quazip compiled lib files with zlib headers: `libquazip.so  libquazip.so.1  libquazip.so.1.0  libquazip.so.1.0.0  Makefile`

We will use `libquazip.so` to build compressing/decompressing applications.


## myzip1

This project demonstrates how to compress / decompress files in C++ using zlib and quazip.

What does it look like after being started?

   ![img2](static/snapshot377.png)

Please look at the main file `myzip1/main.cpp`

Video tutorials can be found at [here](https://www.youtube.com/watch?v=mxlcKmvMK9Q) [there](https://www.youtube.com/watch?v=bVqVR2V3n3M) Thanks to [VoidRealms](voidrealms.com)
