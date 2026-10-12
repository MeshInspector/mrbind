# Generating Rust bindings

We generate a Rust crate that calls the C bindings through `extern "C"` declarations, so you're required to [generate our C bindings first](/docs/generating_c.md).

The crate is portable, but it loads the C shared library at runtime, so you must compile the C bindings for every platform you want to support.

## Generating the C bindings

Pass `--output-desc-json c_desc.json` to the C generator to make it dump the C bindings description, which the Rust generator consumes. The description includes the C signature of every generated function, so the Rust generator never needs to see the C headers.

You must also pass `--force-emit-common-helpers`, since the generated Rust code calls the common helper functions (memory deallocation and the exception handler).

It's recommended to pass [`--copy-inherited-members`](/docs/generating_c.md#inherit-class-members) too, otherwise the derived classes won't have the methods of their bases.

## Running the Rust generator

The Rust bindings are produced by a separate executable, `build/mrbind_gen_rust`:
```sh
build/mrbind_gen_rust \
    --input-json c_desc.json \
    --output-dir output \
    --imported-lib-name MyLib \
    --crate-name mylib
```
Where:

* `c_desc.json` is the file produced by the C generator in response to `--output-desc-json`.

* `--output-dir output` is the crate root. `src/` is generated inside of it.

  The default behavior is to error if this directory is not empty, pass `--clean-output-dir` to delete the contents instead.

* `--imported-lib-name MyLib` is the C shared library name that we'll link against (`#[link(name = "MyLib")]`). It must be produced by compiling the code produced by our C bindings generator.

  Don't add any extensions, and don't add the `lib` prefix. On Windows we link with `kind = "raw-dylib"` by default, which needs no import library, only `MyLib.dll` at runtime. Pass `--no-windows-raw-dylib` to use a regular import library instead.

  If you used `--split-library` in the C generator, pass `--imported-split-lib-name <macro_prefix> <name>` for every part, like with the C# generator.

* `--crate-name mylib` is optional. If specified, a minimal `Cargo.toml` and a `build.rs` are generated. The `build.rs` adds the directory from the `MYLIB_LIB_DIR` environment variable (the crate name uppercased, plus `_LIB_DIR`) to the linker search path, so set it to the directory with the compiled C bindings when building something that links against the crate. Otherwise provide your own `Cargo.toml`, pointing `[lib] path` to `src/lib.rs`.

Then build the crate with `cargo build`.

The generator prints a summary at the end: how many functions got wrappers, how many of those use raw C types, and how many were skipped because their C types can't be spelled in Rust (`long double` and such). Pass `--verbose` to list the skipped ones.

## What the generated crate looks like

The crate has two layers.

`ffi` is the raw layer: one `extern "C"` declaration per C function, opaque `#[repr(C)]` structs for the C++ classes, `#[repr(C)]` structs with real fields for the classes exposed with `--expose-as-struct` (with compile-time assertions of the size, alignment and field offsets), and `#[repr(transparent)]` newtypes for enums, with the constants as associated constants.

The safe layer sits on top of it. C++ namespaces become modules (`MR::Foo` → `mr::foo`), classes become types in those modules, and their methods become methods:

* Classes that need to live on the heap are opaque: `pub struct A(ffi::MR_A)`. Functions returning them by value return `Owned<A>`, which is an owning handle that destroys the object on drop and dereferences to `A`. `Owned<A>` is `Clone` if the C++ class is copy-constructible.

* Parameters map to borrows: `const T &` and by-value copies become `&T`, `T &` becomes `&mut T`, pointers and default arguments become `Option<&T>` or `Option<&mut T>`. By-value parameters of non-copyable classes consume an `Owned<T>`. `std::optional<T>` parameters are `Option<..>` too.

* `std::string`, `std::string_view` and `std::filesystem::path` parameters become `&str`. Returned strings are `Owned<std_string>`, which has `to_str()`, `as_bytes()` and `Display`.

* Returned references become references tied to `&self` for methods, or to the single reference parameter for free functions. When the lifetime can't be elided this way, a raw pointer is returned instead.

* Exposed structs are used by value, with public fields.

* Functions that the safe layer doesn't understand (callbacks, `std::shared_ptr`, arrays of unknown bound, ...) are still generated, but take and return the raw `ffi` types, and are `unsafe fn`. The doc comment of each wrapper names the C function it calls, so the C bindings documentation applies.

Overloaded functions get the disambiguated names of their C functions, converted to `snake_case`. Functions that aren't overloaded keep their C++ names.

C++ exceptions are caught by the C bindings (unless the C generator ran with `--no-handle-exceptions`) and turned into Rust panics with the exception message.

## Known limitations

This is the youngest backend, and it's missing things that the C# backend has:

* Inherited members are only available if the C generator copied them (`--copy-inherited-members`); there are no conversions between a class and its bases.
* `std::function` parameters take raw C function pointers.
* Containers only expose the methods that the C bindings have (`size()`, `at()`, ...), there's no `Iterator` or `Index` integration yet.
* Lifetimes of returned references are inferred from the function shape, not from the `[[clang::lifetimebound]]` annotations.
