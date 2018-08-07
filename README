## Standalone crossplatform menuconfig 

!(https://raw.githubusercontent.com/pechenkin/menuconfig/master/img/img_linux.png)

### Intro

This is the menuconfig functionality from linux kernel 4.18 
and tests from kbuild tree (kernel/git/mmarek/kbuild.git)
extracted into a separate application for POSIX and
Windows by cross compiling. It may be built, from the sources
provided, using the command sequence:

  ./configure [--options...] && make

For a list of available configuration options, run:

  ./configure --help

### How to build menuconfig for mingw32

#### Create a workspace

Fire up your terminal and run the following:

export TARGETMACH=x86_64-w64-mingw32
export BUILDMACH=x86_64-linux-gnu
export CROSS=x86_64-w64-mingw32
export CC=${CROSS}-gcc
export LD=${CROSS}-ld
export AS=${CROSS}-as
export PYTHON3=python3

#### ncurses build

$ wget http://ftp.gnu.org/pub/gnu/ncurses/ncurses-6.1.tar.gz
$ tar -pxzf ncurses-6.1.tar.gz
$ cd ./ncurses-6.1
$ ./configure --host=$TARGETMACH --prefix=/usr/x86_64-w64-mingw32 --without-debug --without-ada --enable-overwrite --with-cxx --without-ada --enable-warnings --enable-assertions --disable-home-terminfo --enable-database --enable-sp-funcs --enable-term-driver --enable-interop --disable-termcap --with-progs --enable-pc-files 
$ make
$ make install

#### gnurx build

$ wget https://codeload.github.com/TimothyGu/libgnurx/tar.gz/libgnurx-2.6.1
$ tar -pxzf libgnurx-2.6.1
$ cd libgnurx-libgnurx-2.6.1
$ ./configure --host=$TARGETMACH --prefix=/usr/x86_64-w64-mingw32/
$ make
$ make install

#### build menuconfig

$ git clone https://github.com/pechenkin/menuconfig.git
$ ./configure --host=$TARGETMACH
$ make
$ make check

### How to build menuconfig for POSIX

$ wget https://github.com/pechenkin/menuconfig/archive/0.4.18.tar.gz
$ tar -pxzf menuconfig-0.4.18.tar.gz
$ cd ./menuconfig-0.4.18
$ ./configure
$ make
$ make check
$ make install


[0] https://www.kernel.org/doc/Documentation/kbuild/kconfig-language.txt
[1] https://en.wikipedia.org/wiki/Menuconfig