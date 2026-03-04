# Examples

The scripts for building those examples were only tested on Linux. Windows users can run those in WSL.

MRBind itself works on Windows, MacOS, and Linux, but the scripts building the examples weren't ported to other platforms yet.

## Prerequisites

Before running those scripts, you need to:

* Compile MRBind [as documented here](/docs/building_mrbind.md), in the directory named `./build`.

* Create a file named `example/cxx.txt` with your compiler name in it, which must be a version of Clang matching the version of libclang that was used when building MRBind. Typically it will contain either `clang++` or one with a version number, e.g. `clang++-22`.

Then run any of the language-specific examples:

## C


Run `example/make_c.sh`.

It generates a C library from the C++ header `example/input.h`, creating the code in `example/output_c`.

  Then it compiles and runs `example/run_example.c`, which calls into this library.

## C#

Run `example/make_csharp.sh`.
