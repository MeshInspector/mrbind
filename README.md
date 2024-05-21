See `--help` for more details.

## Example usage

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

## Dependencies

* Windows MSYS2: `
` (LLVM's CMake config scripts expect `clang-tools-extra`, which choke otherwise).

  Note that you must choose an environment. UCRT64 and CLANG64 are good choices (use the respective shortcuts in the Start menu).

Other things:

  * Generate `compile_commands.json` from MSVC logs.

    * Perform a full build from Visual Studio to generate the required logs.

    * In MSYS2 UCRT64 terminal, `cd` to the project directory and run `path/to/mrbind/scripts/msvc_comp_db.sh Debug 'clang++ --target=x86_64-pc-windows-msvc'`.

  * Apply `mrbind` to multiple files.

    On Windows, do this from MSYS2 UCRT64 terminal.

    On Windows, to choose a specific VS version, prepend e.g. following to the command: <br/>
    `VCToolsInstallDir='C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\'`. **NOTE:** If you get cryptic errors in standard headers, you either forgot `-std=c++??` or this env variable!

    * Run `make -f path/to/mrbind/scripts/apply_to_files.mk ...`. Consult that file for the flags you need to specify (missing flags will be reported as errors).