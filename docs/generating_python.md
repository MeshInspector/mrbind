# Generating Python bindings

We generate Python bindings using [Pybind11](https://github.com/pybind/pybind11). You can try the latest version of it. Or, at the time of writing this, the commit [`741d86f`](https://github.com/pybind/pybind11/commit/741d86f2e3527b667ba85d273a5eea19a0978ef5) is known to work.

You're expected to have a basic understanding of how to work with Pybind. I recommend going through [the basic Pybind tutorial](https://pybind11.readthedocs.io/en/stable/basics.html), compiling at least one test module, and making sure you can import it in Python.

Python modules are shared libraries (sometimes with a customized extension, typically `.pyd` instead of `.dll` on Windows, and `.so` elsewhere). When using Pybind, you create a `.cpp` file with a function that gets called on module import (using the `PYBIND11_MODULE` macro, the name passed to it must match the module filename minus the extension), where you register all your functions/classes using Pybind API (see the link above).

Pybind is a header-only library, so you'll need to clone it and add it to your include paths. You also need some [platform-dependent linker flags](https://pybind11.readthedocs.io/en/stable/compiling.html#building-manually). On Windows, you must link `pythonXY.lib`. On Linux, you don't link anything. On Mac, you don't link anything and also pass `-Xlinker -undefined -Xlinker dynamic_lookup`.

Modules generated with Pybind need to be recompiled on every OS, for every minor Python version (X.Y, e.g. 3.13) that you want to support. We have a [Pybind fork](https://github.com/MeshInspector/mrbind-pybind11) that produces Python-version-agnostic modules, but I suggest getting the upstream version to work first, and then thinking about portability.

## The basic idea

We don't generate Pybind code (C++ code calling Pybind) directly. Instead we generate target-language-agnostic macros.

E.g. given:
```cpp
void foo();
void bar();
```
We generate something along the lines of:
```cpp
#define MRBIND_HEADER
MB_FUNC(foo)
MB_FUNC(bar)
```
But much more complex.

Then for each target language using this format (currently only Python), we have a header that defines `MB_FUNC()` and other macros (in the case of Python they expand to Pybind calls). You defined `MRBIND_HEADER` to the name of that header.

## The build process

[Previously](/docs/running_parser.md) the parser output format was set to JSON for testing (`--format=json`), but the Python backend requires a different format, `--format=macros`. This generates a `.cpp` file. (See above for more info.)

Then you compile this file. Only the Clang compiler is supported, the same version that you used to compile MRBind (the generated code has some complex templating, that other compilers may or may not choke on).

Compile with the following flags:

* All flags needed for Pybind, as explained earlier.

* `-DMRBIND_HEADER='<mrbind/targets/pybind11.h>'` (Use the approproate quotes for your shell, `'...'` in Bash.)

* `-DMB_PB11_MODULE_NAME=MyModule` — Set this to your module name. This should match the filename of the compiled module, minus the extension.

* `-DMB_DEFINE_IMPLEMENTATION` — When compiling multiple source files, exactly one of them should have this defined. More on that below.

* If the Clang comes from MSYS2, but you're building in MSVC-compatible mode, then `--target=x86_64-pc-windows-msvc -rtlib=platform -D_DLL -D_MT` (same as what you passed to the parser before), plus additionally in Release mode: `-Xclang --dependent-lib=msvcrt` or in Debug mode: `-Xclang --dependent-lib=msvcrtd -D_DEBUG`.

There are more optional knobs to tune, but this should work.

Try importing the resulting module and use `help(...)` and <kbd>Tab</kbd> to navigate around the contents.

## RAM usage during compilation; compiling in multiple fragments

The generated `.cpp` file can be huge for large inputs, and compiling it can easily exhaust your RAM. The solution is compiling it in parts.

Define `-DMB_NUM_FRAGMENTS=42` to the desired number of parts ("fragments"), then compile the `.cpp` file this many times with different values of `-DMB_FRAGMENT=i` (where `i` goes from `0` to `N-1`). If you take a look at the generated `.cpp` file, you'll see `#ifdef`s used to split the contents evenly between fragments.

Only one fragments (probably the 0th one) should define `-DMB_DEFINE_IMPLEMENTATION`.

Then link the N resulting object files together into the final module.

Don't compile *all* fragments in parallel, as that will use as much RAM if not more. Compile them sequentally, a few at a time.

Also see [Improving compilation time](#improving-compilation-time).

## Multiple input headers

It is possible to run the parser several times, and then link together the results, But our testing has shown that parsing the entire input as one big header is faster, so processing each *individual* header like this isn't a good idea.

Each generated `.cpp` file can be compiled using a different number of [fragments](#ram-usage-during-compilation-compiling-in-multiple-fragments).

When linking together multiple generated files, only one fragment across all files must defined `-DMB_DEFINE_IMPLEMENTATION`.

## Tuning generated bindings

There are a few additional macros that you can define to tune the bindings:

* **`-DMB_PB11_STRIPPED_NAMESPACES='"MyLib","MyLib.Nested"'`** — The default behavior is to copy the namespaces from the input. If your library uses `namespace MyLib { void foo(); }`, then in Python you'll get `MyModule.MyLib.foo();`

  It's easy to see that having the top-level namespace (`MyLib`) in Python is usually pointless. This macro lets you remove it.

  Set it to a comma-separate list of quoted namespace names. You have to remove multiple nested namespaces, separate them with `.` instead of `::`, Python style (see example above).

  Here `'...'` is the shell's quoting, not a part of the syntax.

* **`-DMB_PB11_ADJUST_NAMES='"..."'`** — This is closely related to the previous macro.

  This one is used to tweak names like `MyModule.std_vector_MyLib_Foo` (originally `std::vector<MyLib::Foo>`) into e.g. `MyModule.std_vector_Foo`.

  The macro takes a string literal, which is a `;`-separated list of `sed`-style regex replacement rules, where each rule is `s/A/B/g` (replaces regex `A` with string `B`), or without `g` (to act only once instead of multiple times).

  Those rules apply to C++ type names. For example, `'"s/\\bMyLib:://g"'` will strip the `MyLib::` namespace, like in the example above.

* **`-DMB_PB11_MERGE_STL_TL_EXPECTED`** — If you mix `std::expected` and `tl::expected` on different platforms (depending on what's available), defining this should make the names more consistent across platforms, by stripping `std::` and `tl::` from `expected`.

* **`-DMB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS`** — When binding the C++ standard containers, add some additional C++-style methods to them, in addition to the Python-style ones.

## Improving compilation time

* First of all, pass **`--combine-types=cv,ref,ptr,smart_ptr`** to the parser. This reduces the amount of duplicate work performed by different [fragments](#ram-usage-during-compilation-compiling-in-multiple-fragments) by merging type information for similar types at parse time. This doesn't have any downsides, and just improves compilation time.

* Make your big input header a **PCH**. Note that you typically don't want to feed the same PCH to the parser, even though that's technically possible, because you might want to define some macros to apply only to the parser or only to the compilation, and sharing a PCH prevents that.

* **`-DMB_PB11_NO_REGISTER_TYPE_DEPS`** — This can dramatically reduce compilation time, at the cost of having to do more manual work.

  Imagine the following input code:
  ```cpp
  std::vector<std::string> foo();
  std::list<std::string> foo();
  ```
  The job of generating the type bindings (`std::vector<std::string>`, `std::list<std::string>`) is split evenly across [fragments](#ram-usage-during-compilation-compiling-in-multiple-fragments). But the problem here is that `std::string` needs a binding too, and it doesn't appear standalone in this example, we don't know which fragment should handle it. The default behavior is to generate it in *every* fragment that needs it, which duplicates work between fragments at compile-time.

  By defining this macro, *none* of the fragments will handle this type, which will give you a runtime error in Python when using those containers.

  How is this not stupid?

  First of all, this doesn't apply to parsed types, e.g. `std::vector<MyLib::MyClass>` will work fine. Only the types with handwritten bindings (such as the standard library classes) are affected.

  Second of all, this is a very rare situation. Usually the element type will happen to be mentioned somewhere else standalone, so it will be handled by some other fragment.

  And lastly, if you *do* get errors because of this, it's easy to manually poke the offending type to give it a binding. To do that, create an extra header (include it in the big one that you feed to the parser), and in it use following macros:
  ```cpp
  #define FORCE_REGISTER_TYPE(...) using MR_CONCAT(_mrbind_inst_,__LINE__) __attribute__((__annotate__("mrbind::instantiate_only"))) = __VA_ARGS__
  #define FORCE_REGISTER_PARAM_TYPE(...) __attribute__((__annotate__("mrbind::instantiate_only"))) void MR_CONCAT(_mrbind_inst_,__LINE__)(__VA_ARGS__)
  #define FORCE_REGISTER_RETURN_TYPE(...) __attribute__((__annotate__("mrbind::instantiate_only"))) __VA_ARGS__ MR_CONCAT(_mrbind_inst_,__LINE__)()
  ```
  Now having `FORCE_REGISTER_TYPE(std::string);` in that header would generate the binding for `std::string` even if it's not otherwise mentioned anywhere.

  The reason why the other two macros exist is because some types behave differently in different contexts. E.g. using `int *` specifically as a function parameter generates a helper Python class `MyModule.int_output`, so registering an `int *` parameter needs to be done via `FORCE_REGISTER_PARAM_TYPE(int *)`.

  Only the parser needs to see those macros. You can `#ifdef` them away for the compilation.
