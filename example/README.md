The scripts for building those examples were only tested on Linux.

Before running those scripts, you need to:

* Compile MRBind [as documented here](/docs/building_mrbind.md), in the directory named `./build`.

* Create a file named `example/cxx.txt` with your compiler name in it, which must be a version of Clang used to build MRBind itself. Typically it will contain either `clang++` or one with a version number, e.g. `clang++-22`.

Then run one of the following scripts:

* `example/make_c.sh` for C.
