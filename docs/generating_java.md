# Generating Java bindings

We generate Java sources that call the C bindings through the foreign function API (`java.lang.foreign`, final since Java 22), so you're required to [generate our C bindings first](/docs/generating_c.md). There's no JNI glue to compile.

The sources are portable, but they load the C shared library at runtime, so you must compile the C bindings for every platform you want to support. Only 64-bit platforms are supported.

## Generating the C bindings

Pass `--output-desc-json c_desc.json` to the C generator to make it dump the C bindings description, which the Java generator consumes. The description includes the C signature of every generated function, so the Java generator never needs to see the C headers.

You must also pass `--force-emit-common-helpers`, since the generated Java code calls the common helper functions (the exception handler).

It's recommended to pass [`--copy-inherited-members`](/docs/generating_c.md#inherit-class-members) too, otherwise the derived classes won't have the methods of their bases.

## Running the Java generator

The Java bindings are produced by a separate executable, `build/mrbind_gen_java`:
```sh
build/mrbind_gen_java \
    --input-json c_desc.json \
    --output-dir mylib/src \
    --package com.example.mylib \
    --imported-lib-name MyLib \
    --force-namespace MyLib
```
Where:

* `c_desc.json` is the file produced by the C generator in response to `--output-desc-json`.

* `--output-dir mylib/src` is the root of the generated sources, the package directories are created in it.

  The default behavior is to error if this directory is not empty, pass `--clean-output-dir` to delete the contents instead.

* `--package com.example.mylib` is the base Java package. The runtime support classes go directly into it, so it should be dedicated to the bindings. The C++ namespaces become its subpackages, and the raw downcall handles go to its `ffi` subpackage.

* `--imported-lib-name MyLib` is the C shared library name that we'll load at runtime with `System.loadLibrary("MyLib")`. It must be produced by compiling the code produced by our C bindings generator.

  Don't add any extensions, and don't add the `lib` prefix.

  If you used `--split-library` in the C generator, pass `--imported-split-lib-name <macro_prefix> <name>` for every part, like with the C# generator.

* `--force-namespace MyLib` is optional, but you'll usually want it. It puts the entities of the global C++ namespace (which includes the `std::` container instantiations) into the package of this namespace (`com.example.mylib.mylib` here, `Foo::Bar` becomes `foo.bar`). Without it they go directly to the base package, next to the runtime classes.

Class names longer than 100 characters (some `std::function` instantiations) are truncated and suffixed with a hash, since each class is a file and Windows limits the path length. `--max-class-name-length` changes the limit, 0 disables it.

The generator prints a summary at the end: how many functions got wrappers, how many of those use raw C types, and how many were skipped because their C types can't be spelled in Java (`long double` and such). Pass `--verbose` to list the skipped ones.

### Compiling and running

Compile the sources with any JDK 22 or newer. There are usually too many files for the command line, so pass them through a file:
```sh
find mylib/src -name '*.java' > sources.txt
javac --release 22 -d mylib/classes @sources.txt
jar --create --file mylib.jar -C mylib/classes .
```
The generated code has no dependencies. It compiles with `-Xlint:all -Werror`.

At runtime the C bindings library must be in `java.library.path` (`-Djava.library.path=/path/to/c/bindings`), or at least loadable by its file name through the system library search path.

The libraries can also be bundled in a jar on the classpath, as resources `<package dir>/native/<os>-<arch>/` (e.g. `example/native/linux-x86_64/`, see `Ffi.nativePlatform()`) with a `files.txt` listing them in the format of `sha256sum` (`<sha256> <file name>` lines). These take precedence: on the first use they all are extracted to `<package>-native-<hash of files.txt>` in `java.io.tmpdir` (or in the directory from the system property `<package>.native.cache`), reused by later runs, and the C bindings library is loaded from there by its full path. Its dependencies must be found next to it: rpath `$ORIGIN` on Linux, `@loader_path` on macOS; on Windows the library's directory is searched first anyway. The foreign function API is a restricted API, so pass `--enable-native-access=ALL-UNNAMED` (or the name of your module) to `java` to avoid a warning on the first call.

## What the generated code looks like

A C++ namespace becomes a Java package named after it in lower case (`MR::Foo` → `mr.foo`), nested in the base package. A class in it becomes a Java class of the same name (nested C++ classes are flattened: `A::B` → `A_B`, template instantiations and `std::` types get the names of their C types minus the prefix: `std_vector_int`). The free functions of a namespace are the static methods of its `Functions` class.

The `ffi` subpackage mirrors the file hierarchy of the C bindings: for every C source `foo/bar.h` there's a `ffi/foo/bar.java` holding the downcall `MethodHandle` of every function of that file (in nested classes of 200 handles each, to keep the static initializers small). You don't normally name those, the wrappers do.

The runtime support classes live in the base package: `Ffi` (library loading, the struct layout helper, the exception handler), `CppObject`, `CppStruct`, `Native` and `CppException`.

The wrappers:

* Classes that need to live on the heap are opaque, their wrappers hold a pointer. A wrapper created by a constructor or returned by value *owns* the C++ object: it's destroyed when the wrapper is garbage-collected (through `java.lang.ref.Cleaner`), or earlier when `close()` is called (the wrappers are `AutoCloseable`, so `try (var mesh = ...)` works). A wrapper returned by reference doesn't own the object, and keeps alive what the reference points into, so it doesn't dangle: the objects named by the `[[clang::lifetimebound]]` annotations (and by the lifetimes the C generator infers, e.g. for field getters), or without annotations `this` for methods and the only object parameter for free functions.

* Parameters take wrappers: `const T &`, `T &` and by-value copies all take a `T`. Pointers and parameters with default arguments are nullable, `null` passes a null pointer or asks for the default argument. `std::optional<T>` parameters are nullable too. Passing a non-copyable class by value moves from the wrapper, which can't be used after that (see `CppObject.release()`).

* `std::string`, `std::string_view` and `std::filesystem::path` parameters take a `String`. Returned strings are `std_string` wrappers, whose `toString()` decodes them as UTF-8.

* Scalars by const pointer or reference take the Java primitive (boxed when nullable), and are returned as the primitive. Scalars by non-const pointer stay raw, Java can't write through them.

* Enums are classes with the constants as static fields, and the underlying value in the `value` field, so they can also hold values that aren't named constants. `E.of(value)` finds the constant.

* The structs exposed with `--expose-as-struct` are views over native memory with the C++ layout: the fields are accessed in place with `x()`/`setX()` (arrays with an index), `copy()` makes an independent copy, `set()` overwrites the contents. Instances created in Java own their memory, those returned by reference point into the memory of their owner. The layout is built at runtime with the C alignment rules, and checked against the sizes the C bindings were generated with when the struct has no platform-sized fields.

* A class with bases gets `upcastTo<Base>()`, `staticDowncastFrom<Base>(base)` for the non-virtual bases (undefined behavior if the object isn't actually of the derived class), and `dynamicDowncastFrom<Base>(base)` for the polymorphic ones (returns null if it isn't). Those call the cast functions of the C bindings, and the results are references to the object that was cast.

* `std::function<R(Args...)>` parameters take the `std_function_...` wrapper class, which you construct from a Java lambda with `of(lambda)` (or replace with `assignFn()`). The lambda implements the nested `Fn` interface: it receives scalars and enums by value, exposed structs by value (as copies), and classes by reference, and returns scalars by value or classes by value (an owned wrapper, which the C++ side takes over). The copies of the `std::function` share the lambda. An exception thrown by the lambda is rethrown by the wrapper that called into C, once the C call returns. Callback parameters the generator doesn't understand are raw `MemorySegment`s in `Fn`.

* Functions that the safe layer doesn't understand (`std::shared_ptr`, arrays of unknown bound, ...) are still generated, but take and return raw `MemorySegment`s and primitives. The doc comment of each wrapper names the C function it calls, so the C bindings documentation applies.

Overloaded functions keep their names as long as their Java parameter types differ. Those that would clash get the disambiguated names of their C functions (e.g. `boolean_4_const_MR_Mesh_ref`). Constructors become Java constructors on the same condition, else static factories. Overloaded operators are `opAdd`, `opEqual`, `opNotEqual`, `opAddAssign`, etc.

C++ exceptions are caught by the C bindings (unless the C generator ran with `--no-handle-exceptions`) and rethrown as `CppException` with the exception message.

## Known limitations

This backend is as young as the Rust one, and shares its limitations:

* Inherited members are only available if the C generator copied them (`--copy-inherited-members`). Otherwise upcast to the base explicitly to call its methods, there are no implicit conversions.
* Containers only expose the methods that the C bindings have (`size()`, `at()`, ...), there's no `Iterable` or `List` integration yet.
* Output parameters of scalar types (`int &`) are raw.
* Objects don't keep alive what they reference (the `[[clang::lifetime_capture_by]]` annotations), the doc comments only mention it. A reference parameter that gets stored must outlive the object.
