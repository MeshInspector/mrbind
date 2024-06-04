# Building

## Dependencies

Libclang must be installed (the C++ API of it). It's not included in the official Windows installer.

* On Windows, using MSYS2 is recommended. Open the UCRT64 environment (using the appropriate Start menu shortcut), install following dependencies:
  ```
  pacman -S --needed make gawk perl $MINGW_PACKAGE_PREFIX-{clang,clang-tools-extra,iconv,jq}`
  ```
  (LLVM's CMake config scripts expect `clang-tools-extra`, and choke otherwise)

* On Linux, if you have more than one version installed, pass e.g. `-DClang_DIR=/usr/lib/cmake/clang-18` to CMake to select the desired version. (Or an env variable with the same name.)

# Running

See `--help` for more details.

## Example usage

* Generate source:
  `mrbind -o generated_binding.cpp -- clang++ -xc++-header input_file.h -fparse-all-comments # Other compiler flags here.`

  There are three ways to specify the input and flags:
  * After `--` (as a compiler flag).
  * Before `--` as `-i input.h`.
  * Before `--` as `-i input.h`, plus `-d dir` where we should search for `compile_commands.json` to extract the flags from. Then you must not specify the (simulated) compiler name after `--`. Then the only flags that should be after `--` are `-xc++-header -fparse-all-comments`.

    * Useful Clang flags:

      * `-xc++-header` - assume the input is a C++ file, rather than C, despite the `.h` extension.

      * `-fparse-all-comments` - respect all comments, rather than only doxygen-style ones.

      * Windows only, when using MSYS2 Clang to parse in MSVC mode:

        * `--target=x86_64-pc-windows-msvc` - operate in MSVC-compatible mode, rather than MinGW-compatible.
        * Env variable `VCToolsInstallDir='C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\'`

          Selects a specific VS installation. Can fix some really weird header.

          Grab the exact value from the VS developer command prompt, this one is just an example.

        * `-resource-dir=$(clang -print-resource-dir)` - fix Clang being unable to find its own internal header overrides (such as the one providing a proper `constexpr` `offsetof`). I wonder why libclang doesn't set this automatically, when `clang` itself does. (Do note that `$(...)` is a Bash syntax, pasting the output of the command into the flag. You could run and paste it manually.)

* Python binding:
  * Compile: `clang++ -c generated_binding.cpp -o generated_binding.o -std=c++20 -I. -Imrbind/include `pkg-config --cflags python3-embed` -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' -DMB_PB11_MODULE_NAME=mrbind_example -fPIC`<br/>
    (or `g++` instead of `clang++`)

  * Link: `clang++ generated_binding.o -shared -o test/mrbind_example$(python3-config --extension-suffix) `pkg-config --libs python3-embed``

    Note that all instances of `mrbind_example` above *must* always be the same string.

    `$(python3-config --extension-suffix)` outputs the file extension, and includes the Python version number and the platform information. On Linux you can use `.so` instead, and on Windows you can use `.pyd` (this was discovered experimetally).

    If you need a specific non-default Python on Linux, use e.g. `python3.12-config` instead of `python3-config`.

    I wasn't able to find `python3-config` for MSVC on Windows (but MSYS2 does have it), so for MSVC always hardcode the `.pyd` extension.

  * Use: `cd test`, `python3`, `import mrbind_example`.

## Dependencies


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
