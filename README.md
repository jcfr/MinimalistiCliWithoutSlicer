MinimalistiCliWithoutSlicer
==============

Overview
--------

This project serves as an example of command line module (CLI) built against a SlicerExecutionModel build tree.

Prerequisites
-------------

* Build SlicerExecutionModel using default options.

* We will assume ITK is built in `/home/jchris/Projects/ITKv3-build`

```bash
$ git clone git://github.com/Slicer/SlicerExecutionModel.git
$ mkdir SlicerExecutionModel-build
$ cmake -DITK_DIR:PATH=/home/jchris/Projects/ITKv3-build ../SlicerExecutionModel
$ make
```


Checkout, configure and build
-----------------------------

```bash
$ git clone git://github.com/jcfr/MinimalistiCliWithoutSlicer.git
$ mkdir MinimalistiCliWithoutSlicer-build
$ cd MinimalistiCliWithoutSlicer-build

$ cmake -DSlicerExecutionModel_DIR:PATH=/home/jchris/Projects/SlicerExecutionModel-build/ ../MinimalistiCliWithoutSlicer
-- The C compiler identification is GNU
-- The CXX compiler identification is GNU
-- Check for working C compiler: /usr/local/bin/gcc
-- Check for working C compiler: /usr/local/bin/gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: /usr/local/bin/c++
-- Check for working CXX compiler: /usr/local/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Configuring SEM CLI module: MinimalistiCliWithoutSlicer
-- Defaulting RUNTIME_OUTPUT_DIRECTORY to bin
-- Defaulting LIBRARY_OUTPUT_DIRECTORY to lib
-- Defaulting ARCHIVE_OUTPUT_DIRECTORY to lib
-- Defaulting INSTALL_RUNTIME_DESTINATION to bin
-- Defaulting INSTALL_LIBRARY_DESTINATION to lib
-- Defaulting INSTALL_ARCHIVE_DESTINATION to lib
-- Configuring done
-- Generating done
-- Build files have been written to: /home/jchris/Projects/MinimalistiCliWithoutSlicer-build

$ make
[ 50%] Generating MinimalistiCliWithoutSlicerCLP.h
GenerateCLP --InputXML /home/jchris/Projects/MinimalistiCliWithoutSlicer/MinimalistiCliWithoutSlicer.xml --OutputCxx /home/jchris/Projects/MinimalistiCliWithoutSlicer-build/MinimalistiCliWithoutSlicerCLP.h
GenerateCLP: Found 1 parameters groups
GenerateCLP: Group "IO" has 2 parameters
Scanning dependencies of target MinimalistiCliWithoutSlicer
[100%] Building CXX object CMakeFiles/MinimalistiCliWithoutSlicer.dir/MinimalistiCliWithoutSlicer.cxx.o
Linking CXX executable /home/jchris/Projects/SlicerExecutionModel-build/bin/MinimalistiCliWithoutSlicer
[100%] Built target MinimalistiCliWithoutSlicer
```

Run
---

```bash
$ ./bin/MinimalistiCliWithoutSlicer -r 1 -r 2
3
```

