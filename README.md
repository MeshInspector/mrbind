See `--help` for more details.

Example usage:

* Generate source:
  `mrbind -o output_file.cpp -- clang++ -xc++-header input_file.h -fparse-all-comments # Other compiler flags here.`
* Python binding:
  * Build: ``clang++ -fuse-ld=lld test/2.out.cpp -I. -Iinclude `pkg-config --cflags --libs python3-embed` -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' -DMB_PYBIND11_MODULE_NAME=mrbind_example -fPIC -shared -o test/mrbind_example$(python3-config --extension-suffix)``<br/>
    (or `g++` instead of `clang++`)

    Note that the two instances of `mrbind_example` here must always be the same thing.

  * Use: `cd test`, `python3`, `import mrbind_example`.
