# mrbind

MRBind generates Python and C bindings for C++.

* The input C++ headers are parsed using Clang (the C++ libtooling API). The parse results can be dumped for reflection purposes (either as JSON or as C macros).

* The Python backend is based on [pybind11](https://github.com/pybind/pybind11), with some custom logic to better handle the standard types.

* The C backend is our own.

Our selling points are:

* No separate interface description files (as in SWIG). Any annotations (such as excluding certain functions/classes for the bindings) are done in the headers themselves.

* Proper support for most containers/classes from the C++ standard library.

* Proper support for templates. MRBind aggressively instantiates most class templates it sees, and annotations can be added to instantiate class/function templates for specific template arguments.

MRBind is used in production in https://github.com/MeshInspector/MeshLib

## Compiling MRBind

MRBind is written in C++ and needs to be compiled before use. There are no binary releases.

MRBind depends on Clang's libraries, which you have to install. Clang 18 or newer is required.

### Installing Clang libraries

* **On Ubuntu**:

  Clang provides [binary packages](https://apt.llvm.org/llvm.sh), so you can install an up-to-date Clang even on an outdated Ubuntu.,

  ```cpp
  CLANG_VER=20
  wget https://apt.llvm.org/llvm.sh
  chmod +x llvm.sh
  sudo ./llvm.sh $CLANG_VER
  sudo apt install clang-tools-$CLANG_VER libclang-$CLANG_VER-dev llvm-$CLANG_VER-dev
  ```

* **On Windows**:

  The official LLVM/Clang installer doesn't include the C++ libraries.

  You could install LLVM in Vcpkg, but that would build it from source.

  I recommend installing it in MSYS2, as they provide prebuilt packages. Yes, even if you're not planning to use MinGW. MSYS2 Clang can operate in MSVC-compatible mode.

  I recommend using MSYS2 CLANG64 environment, but any of them should work. Install the required packages like this this:

  ```sh
  pacman -S $MINGW_PACKAGE_PREFIX-{clang,clang-tools-extra,cmake} procps-ng
  ```
  Notice that we're installing MSYS2's own CMake, since it will find the compilers and libraries installed in MSYS2 by default, which is helpful.

  I've thrown in `procps-ng` for the `nproc` utility, but this is optional.

* **On Mac**: install LLVM in Brew.

### Building MRBind itself

Ensure the Git submodules are cloned: `git submodule update --recursive --init`

Then build with CMake. Use the same Clang compiler that provides the parsing libraries. Other compilers may work, but that is not supported.

* **On Ubuntu:**
  ```sh
  CC=clang-$CLANG_VER CXX=clang++-$CLANG_VER cmake -B build -DClang_DIR=/usr/lib/cmake/clang-$CLANG_VER
  cmake --build build -j$(nproc)
  ```

  Notice the `-DClang_DIR=...` flag. It forces a specific version of Clang's libraries to be used. Without it, an arbitrary installed version will be picked, and not necessarily the most recent one.

* **On other OSes:**

  Just `cmake -B build && cmake --build build -j$(nproc)` as usual.

## Running the parser

The first step to generating the bindings (regardless of the target language) is parsing your headers with MRBind's parser, which will generate the list of all functions/classes to bind.

It's recommended to prepare one big header file that includes all C++ headers you want to bind, as the parser accepts one header at a time. In theory you can parse all your headers individually, but that's a lot slower.

The parser is built at `build/mrbind`. The usage is as follows: `mrbind <mrbind_flags> -- <clang_flags>`.

`<mrbind_flags>` are our own flags (see `--help` for the full list). The minimal flags to test the parser are `YourHeader.h -o parse_result.json --format=json --ignore :: --allow YourNamespace`. Some additional flags might be needed here depending on the target language, more on that below.

Notice `--ignore :: --allow YourNamespace`, which limits the parser output to your namespace (replace `YourNamespace` with your library's namespace name). Not excluding the standard library like this is not supported. You can additionally `--ignore` more namespaces here, such as `--ignore YourLibrary::detail`.

`<clang_flags>` are the normal Clang/GCC-style compiler flags. Any `-I`, `-D`, `-std=c++??` go here. Other useful flags that can be added here are:

* `-xc++-header` — if your input header has the `.h` extension, add this flag to treat it as a C++ header rather than a C one.
* `-resource-dir=...` — on most OSes this is necessary for Clang to find its own internal headers. Skipping this can lead to cryptic errors. Get the `...` by running `clang -print-resource-dir` (or `clang-$CLANG_VER -print-resource-dir` on Ubuntu, use the same version as you installed above).
* `-fparse-all-comments` — preserve all comments in the bindings, not only Doxygen-style ones.
* `--target=x86_64-pc-windows-msvc -rtlib=platform -D_DLL -D_MT` — if you're on Windows, using Clang from MSYS2, but the rest of the project uses MSVC, use this to switch Clang to a MSVC-compatible mode (which will make it use MSVC's standard library, among other things).

Notice that omitting `--` (and the subsequent flags) altogether will make Clang extract the flags the `compile_commands.json` if available. So `--` with nothing after it isn't the same thing as omitting it entirely.

On success, `parse_result.json` will be generated. Now you're ready to generate the bindings for a specific language.

## Generating Python bindings

[pybind11](https://github.com/pybind/pybind11) needs to be downloaded. It's a header-only library, so just clone the repo.

It's recommended to use a specific Pybind11 commit, currently `741d86f2e3527b667ba85d273a5eea19a0978ef5`. Use later versions on your own risk.

The parser needs to be ran with `--format=macros -o parse_result.cpp --combine-types=cv,ref,ptr,smart_ptr` instead of `--format=json -o parse_result.json`. (`--combine-type` is optional, it speeds up the compilation times of the resulting bindings).


(TODO)

---



## Dependencies

Libclang must be installed (the C++ API of it). It's not included in the official Windows installer.

* On Windows, using MSYS2 is recommended. Open the UCRT64 environment (using the appropriate Start menu shortcut), install following dependencies:
  ```
  pacman -S --needed make gawk perl $MINGW_PACKAGE_PREFIX-{clang,clang-tools-extra,iconv,jq}`
  ```
  (LLVM's CMake config scripts expect `clang-tools-extra`, and choke otherwise)

* On Linux, if you have more than one version installed, pass e.g. `-DClang_DIR=/usr/lib/cmake/clang-18` to CMake to select the desired version. (Or an env variable with the same name.)

  To install libclang on Ubuntu:


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
