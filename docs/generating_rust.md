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
    --output-dir mylib/src \
    --imported-lib-name MyLib \
    --force-namespace MyLib
```
Where:

* `c_desc.json` is the file produced by the C generator in response to `--output-desc-json`.

* `--output-dir mylib/src` is the `src` directory of your crate. Only the sources are generated, you provide the `Cargo.toml` yourself (see below).

  The default behavior is to error if this directory is not empty, pass `--clean-output-dir` to delete the contents instead.

* `--imported-lib-name MyLib` is the C shared library name that we'll link against (`#[link(name = "MyLib")]`). It must be produced by compiling the code produced by our C bindings generator.

  Don't add any extensions, and don't add the `lib` prefix. On Windows we link with `kind = "raw-dylib"` by default, which needs no import library, only `MyLib.dll` at runtime. Pass `--no-windows-raw-dylib` to use a regular import library instead.

  If you used `--split-library` in the C generator, pass `--imported-split-lib-name <macro_prefix> <name>` for every part, like with the C# generator.

* `--force-namespace MyLib` is optional, but you'll usually want it. It puts the entities of the global C++ namespace (which includes the `std::` container instantiations) into the module of this namespace (`mylib` here, `Foo::Bar` becomes `foo::bar`). Without it they go to the crate root, where they can clash with the modules named after the C files (see the layout below), and the generator errors out on a clash.

* `--root-namespace MyLib` is optional. The entities of this namespace go to the crate root instead of the `mylib` module, and its nested namespaces become top-level modules, so the users write `mylib::Mesh` and not `mylib::mylib::Mesh`. Use it when the whole library lives in one namespace. Combined with `--force-namespace` of the same namespace, the global entities go to the crate root too. The file modules give way to the names at the root as usual (`mod A_` for a file directory `A` next to a type `A`).

The generator prints a summary at the end: how many functions got wrappers, how many of those use raw C types, and how many were skipped because their C types can't be spelled in Rust (`long double` and such). Pass `--verbose` to list the skipped ones.

### The crate manifest

Put a `Cargo.toml` next to the generated `src`:
```toml
[package]
name = "mylib"
version = "0.1.0"
edition = "2021"
rust-version = "1.82"

[lib]
path = "src/lib.rs"
```
The crate itself links against nothing, but anything that links against the crate must be able to find the compiled C bindings. The usual way is a `build.rs` reading the directory from an environment variable:
```rust
fn main()
{
    println!("cargo:rerun-if-env-changed=MYLIB_LIB_DIR");
    if let Ok(dir) = std::env::var("MYLIB_LIB_DIR")
    {
        if !dir.is_empty()
        {
            println!("cargo:rustc-link-search=native={dir}");
        }
    }
}
```
Then `MYLIB_LIB_DIR=/path/to/c/bindings cargo build`. On Windows the `raw-dylib` linking needs no library at build time at all, only the `.dll` at runtime.

## What the generated crate looks like

The source hierarchy mirrors that of the C bindings. For every C source `foo/bar.h` there's a `src/foo/bar.rs` with the safe wrappers and a `src/ffi/foo/bar.rs` with the raw declarations (directories get a `mod.rs`). Those file modules are where everything is defined, but you normally don't name them directly, so their identifiers are adjusted freely when the file names aren't valid Rust identifiers or clash with the namespace modules (e.g. `example.h` next to `namespace Example` becomes `mod example_`), with `#[path]` pointing to the file.

Instead, `src/lib.rs` declares a module per C++ namespace (`MR::Foo` → `mr::foo`), which re-exports the types and functions of that namespace from wherever they're defined. So `mr::Mesh` is the right name of a class regardless of which C file it came from, and moving an entity to a different file is not a breaking change. The entities of the global namespace are re-exported into the module given by `--force-namespace`, or at the crate root without it. With `--root-namespace MR`, the module of `MR` is the crate root itself: `crate::Mesh`, `crate::foo`.

The crate has two layers.

`ffi` is the raw layer: one `extern "C"` declaration per C function, opaque `#[repr(C)]` structs for the C++ classes, `#[repr(C)]` structs with real fields for the classes exposed with `--expose-as-struct` (with compile-time assertions of the size, alignment and field offsets, except for structs with pointer-sized fields, since the sizes in the JSON are those of the platform the C bindings were generated on), and `#[repr(transparent)]` newtypes for enums, with the constants as associated constants. `ffi/mod.rs` re-exports everything from the per-file `ffi` modules, so `ffi::MR_Mesh` is always valid.

The safe layer sits on top of it. Classes become types, and their methods become methods:

* Classes that need to live on the heap are opaque: `pub struct A(ffi::MR_A)`. Functions returning them by value return `Owned<A>`, which is an owning handle that destroys the object on drop and dereferences to `A`. `Owned<A>` is `Clone` if the C++ class is copy-constructible.

* Parameters map to borrows: `const T &` and by-value copies become `&T`, `T &` becomes `&mut T`, pointers and default arguments become `Option<&T>` or `Option<&mut T>`. By-value parameters of non-copyable classes consume an `Owned<T>`. `std::optional<T>` parameters are `Option<..>` too.

* `std::string`, `std::string_view` and `std::filesystem::path` parameters become `&str`. Returned strings are `Owned<std_string>`, which has `to_str()`, `as_bytes()` and `Display`.

* Returned references become references tied to `&self` for methods, or to the single reference parameter for free functions. When the lifetime can't be elided this way, a raw pointer is returned instead.

* Exposed structs are used by value, with public fields.

* The `[[clang::lifetimebound]]` annotations (and the lifetimes the C generator infers, e.g. for field getters) become explicit lifetimes: `fn at<'a>(&'a self, ...) -> &'a T`. Without annotations the returned reference is tied to `self`, or to the only reference parameter.

* A class with bases gets `upcast_to_<base>()` / `upcast_to_<base>_mut()` methods and `AsRef<Base>` / `AsMut<Base>` impls, `unsafe fn static_downcast_from_<base>()` for the non-virtual bases, and `dynamic_downcast_from_<base>()` returning `Option<&Self>` for the polymorphic ones. Those call the cast functions of the C bindings.

* `std::function<R(Args...)>` parameters take the `std_function_...` wrapper class, which you construct from a closure with `from_fn(|args| ...)` (or replace with `assign_fn()`). The closure must be `Fn + Send + Sync + 'static`; the copies of the `std::function` share it. The closure receives scalars, enums and exposed structs by value, and classes by reference (`&T` or `&mut T`), and returns scalars by value or classes as `Owned<T>`. The wrappers with other signatures (e.g. returning a reference) only have the raw `ffi` functions.

* Functions that the safe layer doesn't understand (`std::shared_ptr`, arrays of unknown bound, ...) are still generated, but take and return the raw `ffi` types, and are `unsafe fn`. The doc comment of each wrapper names the C function it calls, so the C bindings documentation applies.

Overloaded functions get the disambiguated names of their C functions, converted to `snake_case`. Functions that aren't overloaded keep their C++ names.

C++ exceptions are caught by the C bindings (unless the C generator ran with `--no-handle-exceptions`) and turned into Rust panics with the exception message.

## Known limitations

This is the youngest backend, and it's missing things that the C# backend has:

* Inherited members are only available if the C generator copied them (`--copy-inherited-members`). Otherwise upcast to the base explicitly to call its methods, there are no implicit conversions.
* Containers only expose the methods that the C bindings have (`size()`, `at()`, ...), there's no `Iterator` or `Index` integration yet.
* Objects don't keep alive what they reference (the `[[clang::lifetime_capture_by]]` annotations), the doc comments only mention it. A reference parameter that gets stored must outlive the object, which the borrow checker doesn't enforce.
