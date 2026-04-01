# Compiling MRBind

MRBind is written in C++ and needs to be compiled before use. There are no binary releases.

MRBind depends on Clang's libraries for parsing, which you have to install. Clang 18 or newer is required. Versions up to 22 are known to work (which the latest version at the time of writing).

If a new version of Clang is released and I haven't updated this file yet, you can still try it. It might work with no code changes or minimal code changes. Please report the results in a ticket, or send a PR.

### Installing the Clang compiler and libraries

<details><summary><b>Ubuntu:</b></summary>

```sh
CLANG_VER=22
sudo apt install clang-tools-$CLANG_VER libclang-$CLANG_VER-dev llvm-$CLANG_VER-dev
```

Newer Clang versions could be missing from the repositories. In that case, use Clang's [official binary packages](https://apt.llvm.org/llvm.sh). This makes it possible to install newer Clang even on older Ubuntu versions:

```sh
CLANG_VER=22
wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh $CLANG_VER
rm llvm.sh
sudo apt install libclang-$CLANG_VER-dev llvm-$CLANG_VER-dev
```

</details>

<details><summary><b>Arch:</b></summary>

```sh
sudo pacman -S --needed clang llvm
```

Note that Clang in the Arch repositories is usually outdated by one major version. If this is an issue, you might want to build from source, or use AUR.

</details>

<details><summary><b>Windows + MSVC:</b></summary>

You may wish to test MRBind in WSL first, using the instructions for Ubuntu. We provide bash scripts to run the samples, that won't work on Windows (outside of MSYS2). Otherwise MRBind itself works on Windows just fine.

You must have Visual Studio installed, since the official builds of Clang rely on the libraries provided by MSVC by default. Alternative insturctions for MinGW are provided below.

You need to install Clang in a particular way:

* The official Clang installer **doesn't** work, since it doesn't include the C++ interface for Clang libraries.
* The version of Clang from the Visual Studio installer **doesn't** work for the same reason.
* Instead, download the archive named `clang+llvm-X.Y.Z-x86_64-pc-windows-msvc.tar.xz` from [the LLVM releases page](https://github.com/llvm/llvm-project/releases), and unzip it somewhere.

You must also install CMake and Ninja. I recommend not using CMake provided by VS, just in case.

The instructions below assume that you've added following directories to PATH:

* `clang+llvm-X.Y.Z-x86_64-pc-windows-msvc\bin` from the archive you downloaded. (`clang.exe` should be available.)
* CMake. (`cmake.exe` should be available.)
* Ninja. (`ninja.exe` should be available.)

At the time of writing, this archive includes broken CMake files. If you run into errors, [read this](#common-build-issues).

</details>

<details><summary><b>Windows + MSYS2 (MinGW):</b></summary>

  In this case you don't need a Visual Studio installation.

  Install MSYS2. I recommend using the MSYS2 CLANG64 [environment](https://www.msys2.org/docs/environments/) (use the corresponding shortcut in the Start menu), but any of them should work. Install the required packages via:

  ```sh
  pacman -S $MINGW_PACKAGE_PREFIX-{clang,clang-tools-extra,llvm,cmake}
  ```
  Notice that we're installing MSYS2's own CMake, since it will find the compilers and libraries installed in MSYS2 by default, which is helpful.

  After you get everything to work, back up your MSYS2 installation, either manually or using [this](https://github.com/HolyBlackCat/msys2-lockfiles). MSYS2 doesn't directly allow downgrading packages, so if a Clang update breaks something, you can get stuck with the newer version.

</details>

<details><summary><b>Mac:</b></summary>

Install `llvm` in Brew.

</details>

### Building MRBind

Ensure that Git submodules are downloaded: `git submodule update --recursive --init`. If you get errors about `cppdecl` includes not being found, it means you forgot the submodules.

Then build with CMake, keeping following in mind:

* **Compiler choice:** Use the same Clang compiler that provides the parsing libraries. Other compilers may work, but that is not supported by us.

* **Path to Clang libraries (primarily on Linux):** If you have multiple versions of Clang libraries in the system, CMake is prone to finding the wrong ones, which can cause issues.

  If you're on Ubuntu, **or** if you built Clang from source and have another copy installed in the system, you must pass the path to Clang libraries to `-DClang_DIR=...`.

  For example:

  * On Ubuntu: `-DClang_DIR=/usr/lib/cmake/clang-$CLANG_VER`.

  * When building Clang from source: `-DClang_DIR=__/lib/cmake/clang` (where `__` is your Clang installation .directory).

Here are examples for specific OSes:

* **Ubuntu:**
  ```sh
  CC=clang-$CLANG_VER CXX=clang++-$CLANG_VER cmake -B build -DClang_DIR=/usr/lib/cmake/clang-$CLANG_VER -GNinja -DCMAKE_BUILD_TYPE=RelWithDebInfo
  cmake --build build
  ```

* **Arch:**
  ```sh
  CC=clang CXX=clang++ cmake -B build -GNinja -DCMAKE_BUILD_TYPE=RelWithDebInfo
  cmake --build build
  ```
* **Windows + MSVC:**

  Add Clang, CMake, and Ninja to PATH. Then:
  ```sh
  cmake -B build -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja -DCMAKE_BUILD_TYPE=RelWithDebInfo
  cmake --build build
  ```

  Notice the `-DClang_DIR=...` flag. It forces a specific version of Clang's libraries to be used. Without it, an arbitrary installed version will be picked, and not necessarily the one you want.

* **Windows + MSYS2 (MinGW):**

  ```sh
  CC=clang CXX=clang++ cmake -B build -DCMAKE_BUILD_TYPE=RelWithDebInfo
  ```
  The `CC=clang CXX=clang++` is implied in MSYS2 CLANG64, but is necessary in other [environments](https://www.msys2.org/docs/environments/).

After successful compilation, proceed to [running the parser on your code](/docs/running_parser.md). If something doesn't work, read the following section.

### Common build issues

* **`/usr/bin/ld: /usr/bin/ld: DWARF error: invalid or unhandled FORM value: 0x23`** or similar:

  * This used to happen on Linux sometimes. Work around this by switching to the LLD linker by passing `-DCMAKE_LINKER_TYPE=LLD` to CMake.

    Don't forget to delete the build directory before rebuilding with this flag.

* **`ninja: error: 'C:/Program Files/Microsoft Visual Studio/2022/Enterprise/DIA SDK/lib/amd64/diaguids.lib', needed by 'mrbind.exe', missing and no known rule to make it`** or similar:

  * The Clang distribution for Windows ships with buggy CMake files ([bug report](https://github.com/llvm/llvm-project/issues/86250)). You must patch them.

    Open `clang+llvm-X.Y.Z-x86_64-pc-windows-msvc\lib\cmake\llvm\LLVMExports.cmake` in a text editor, and search for `LLVMDebugInfoPDB PROPERTIES`. You should see a line similar to this:
    ```cmake
    INTERFACE_LINK_LIBRARIES "C:/Program Files/Microsoft Visual Studio/2022/Enterprise/DIA SDK/lib/amd64/diaguids.lib;LLVMBinaryFormat;LLVMObject;LLVMSupport;LLVMDebugInfoCodeView;LLVMDebugInfoMSF"
    ```
    1\. You can either paste the correct path here, which in my case was:
    ```cmake
    INTERFACE_LINK_LIBRARIES "C:/Program Files/Microsoft Visual Studio/18/Community/DIA SDK/lib/amd64/diaguids.lib;...
    ```
    2\. Or you can read the environment variable:
    ```cmake
    INTERFACE_LINK_LIBRARIES "$ENV{VSINSTALLDIR}/DIA SDK/lib/amd64/diaguids.lib;...
    ```
    Option (2) only works when running CMake from the VS developer prompt (click `x64 Native Tools Command Prompt for VS` in the Start menu).

    To determine the path for option (1), open the same VS developer prompt, and `echo %VSINSTALLDIR%`.

    Don't forget to delete the build directory before rebuilding with those changes.
