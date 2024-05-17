See `--help` for more details.

Example usage:

* Generate source:
  `mrbind -o output_file.cpp -- clang++ -xc++-header input_file.h -fparse-all-comments # Other compiler flags here.`

  There are three ways to specify the input and flags:
  * After `--` (as a compiler flag).
  * Before `--` as `-i input.h`.
  * Before `--` as `-i input.h`, plus `-d dir` where we should search for `compile_commands.json` to extract the flags from. Then you must not specify the (simulated) compiler name after `--`. Then the only flags that should be after `--` are `-xc++-header -fparse-all-comments`.
* Python binding:
  * Build: ``clang++ -std=c++20 test/2.out.cpp -I. -Iinclude `pkg-config --cflags --libs python3-embed` -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' -DMB_PYBIND11_MODULE_NAME=mrbind_example -fPIC -shared -o test/mrbind_example$(python3-config --extension-suffix)``<br/>
    (or `g++` instead of `clang++`)

    Note that the two instances of `mrbind_example` here must always be the same thing.

  * Use: `cd test`, `python3`, `import mrbind_example`.
