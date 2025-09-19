# Compiling MRBind

MRBind is written in C++ and needs to be compiled before use. There are no binary releases.

MRBind depends on Clang's libraries for parsing, which you have to install. Clang 18 or newer is required. At the time of writing this, versions up to 21 (latest) are known to work.

### Installing Clang libraries

* **On Ubuntu**:

  Clang provides [binary packages](https://apt.llvm.org/llvm.sh), so you can install an up-to-date Clang even on an outdated Ubuntu.,

  ```cpp
  CLANG_VER=21
  wget https://apt.llvm.org/llvm.sh
  chmod +x llvm.sh
  sudo ./llvm.sh $CLANG_VER
  sudo apt install clang-tools-$CLANG_VER libclang-$CLANG_VER-dev llvm-$CLANG_VER-dev
  ```

* **On Windows**:

  The official LLVM/Clang installer doesn't include the C++ libraries.

  You could install LLVM in Vcpkg, but that would build it from source.

  I recommend installing it in MSYS2, as they provide prebuilt packages. Yes, even if you're not planning to use MinGW. MSYS2 Clang can operate in MSVC-compatible mode.

  I recommend using MSYS2 CLANG64 environment (use the corresponding shortcut in the Start menu), but any of them should work. Install the required packages via:

  ```sh
  pacman -S $MINGW_PACKAGE_PREFIX-{clang,clang-tools-extra,cmake} procps-ng
  ```
  Notice that we're installing MSYS2's own CMake, since it will find the compilers and libraries installed in MSYS2 by default, which is helpful.

  I've thrown in `procps-ng` for the `nproc` utility, but this is optional.

* **On Mac**: Install LLVM in Brew.

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

---

After successful compilation, proceed to [running the parser on your code](/docs/running_parser.md).
