This is a version of LyX with very simple modifications to run at retina resolution.

I have modified it to compile under the clang as shipped with OS X 10 (Yosemite). YMMV with earlier versions.

You will need to have Qt4 and libmagic installed
```shell
brew install qt4 libmagic
```
or
```shell
sudo port install qt4 libmagic
```shell

To compile & install run
```shell
./autogen.sh
./clang_configure.sh
make
make install
```
