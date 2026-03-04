# Examples

The scripts for building those examples were only tested on Linux. Windows users can run those in WSL.

MRBind itself works on Windows, MacOS, and Linux, but the scripts building the examples weren't ported to other platforms yet.

## Prerequisites

Before running those scripts, you need to:

* Compile MRBind [as documented here](/docs/building_mrbind.md), in the directory named `./build`.

* Create a file named `examples/cxx.txt` with your compiler name in it, which must be a version of Clang matching the version of libclang that was used when building MRBind. Typically it will contain either `clang++` or one with a version number, e.g. `clang++-22`.

Then run any of the language-specific examples:


## C

Run `examples/c/run.sh`.

It parses the C++ header `examples/input.h` and generates the C bindings in `examples/c/output`.

Then it compiles and runs `examples/run_example.c`, which calls into this library.


## C#

Run `examples/csharp/run.sh`.

It parses the C++ header `examples/input.h` and generates the C# bindings in `examples/csharp/library`. It also generates the C bindings required for C#, like the C example, in `examples/csharp/c_library`.

Then it runs the test executable at `examples/csharp/example_consumer`, which calls into this library.

## Python

Run `examples/python/run.sh`.

It parses the C++ header `examples/input.h` and generates the Python module for it using Pybind. The Pybind is cloned automatically on first build.

It then runs a test Python program at `examples/python/example_consumer.py`.
