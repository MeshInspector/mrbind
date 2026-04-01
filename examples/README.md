# Examples

The scripts for building those examples were only tested on Linux and in MSYS2. Windows users can run those either in WSL or in MSYS2.

MRBind itself works on more platforms (including Windows without MSYS2, and MacOS) but the scripts building the examples weren't ported to other platforms yet.

## Prerequisites

Before running those scripts, you need to:

* Compile MRBind [as documented here](/docs/building_mrbind.md), in the directory named `./build`.

* Create a file named `examples/cxx.txt` with your compiler name in it, which must be a version of Clang matching the version of libclang that was used when building MRBind. Typically it will contain either `clang++` or one with a version number, e.g. `clang++-22`.

Then run any of the language-specific examples:


## C

Run `examples/c/run.sh`.

It parses all C++ headers in  `examples/input` and generates the C bindings in `examples/c/output`.

Then it compiles and runs `examples/run_example.c`, which calls into this library.


## C#

You need to have .NET SDK installed (instructions: [Ubuntu](https://learn.microsoft.com/en-us/dotnet/core/install/linux-ubuntu-install), [Windows](https://dotnet.microsoft.com/en-us/download/dotnet/8.0)). The example uses .NET 8 by default, but you can edit [the project file](/examples/csharp/example_consumer/example_consumer.csproj) to use a different version.

Run `examples/csharp/run.sh`.

It parses all C++ headers in  `examples/input` and generates the C# bindings in `examples/csharp/library`. It also generates the C bindings required for C#, like the C example, in `examples/csharp/c_library`.

Then it runs the test executable at `examples/csharp/example_consumer`, which calls into this library.

## Python

Run `examples/python/run.sh`.

It parses all C++ headers in  `examples/input` and generates the Python module for it using Pybind. The Pybind is cloned automatically on first build.

It then runs a test Python program at `examples/python/example_consumer.py`.
