The scripts for building those examples were only tested on Linux.

Windows users can run those in WSL. MRBind itself can run natively on Windows, but the example scripts weren't ported yet.

---

Before running those scripts, you need to:

* Compile MRBind [as documented here](/docs/building_mrbind.md), in the directory named `./build`.

* Create a file named `example/cxx.txt` with your compiler name in it, which must be a version of Clang used to build MRBind itself. Typically it will contain either `clang++` or one with a version number, e.g. `clang++-22`.

Then run one of the following scripts:

* `example/make_c.sh`

  It generates a C library from the C++ header `example/input.h`, creating the code in `example/output_c`.

  Then it compiles and runs `example/run_example.c`, which calls into this library.
