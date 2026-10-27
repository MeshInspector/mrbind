# Generating JavaScript bindings

We generate JavaScript sources (ES modules, with TypeScript `.d.mts` declarations next to them) that call the C bindings compiled to WebAssembly with Emscripten, so you're required to [generate our C bindings first](/docs/generating_c.md). There's no Embind and no C++ glue: the JS calls the C functions directly through the raw `wasmExports` of the module, so the C bindings only need to be compiled with the link flags the generator writes out.

The pointers, `size_t` and `long` are JS numbers (32-bit in the default `wasm32` modules, 64-bit with `--wasm64` for the modules linked with `-sMEMORY64`), `long long` is a JS `bigint`.

## Generating the C bindings

Pass `--output-desc-json c_desc.json` to the C generator to make it dump the C bindings description, which the JS generator consumes. The description includes the C signature of every generated function, so the JS generator never needs to see the C headers.

You must also pass `--force-emit-common-helpers`, since the generated JS calls the common helper functions (the exception handler).

It's recommended to pass [`--copy-inherited-members`](/docs/generating_c.md#inherit-class-members) too, otherwise the derived classes won't have the methods of their bases.

If you generate the C bindings on a 64-bit host and compile them for wasm, make the parser pretend to be Emscripten (`--target=wasm32-unknown-emscripten`, see [Making the bindings cross-platform](/docs/generating_c.md#making-the-bindings-cross-platform)), so that `size_t` and `long` come out 32-bit. The JS generator checks the layout of every exposed struct without platform-sized fields against the description, and complains if the description was made for a different platform.

## Running the JS generator

The JS bindings are produced by a separate executable, `build/mrbind_gen_js`:
```sh
build/mrbind_gen_js \
    --input-json c_desc.json \
    --output-dir mylib/js \
    --wasm-module ./MyLib.mjs \
    --replace-namespace MyLib ::
```
Where:

* `c_desc.json` is the file produced by the C generator in response to `--output-desc-json`.

* `--output-dir mylib/js` is the directory of the generated sources.

  The default behavior is to error if this directory is not empty, pass `--clean-output-dir` to delete the contents instead.

* `--wasm-module ./MyLib.mjs` is the import specifier (relative to the output directory) of the module factory that Emscripten emits for `-sMODULARIZE -sEXPORT_ES6`, see below. The root module imports it for `init()`. Without this flag the bindings can only be initialized with `initWithModule()`, from a module you instantiated yourself.

* `--wasm-module-node ./MyLib.node.mjs` optionally names a second build of the module for Node (typically `-sENVIRONMENT=node -sNODERAWFS=1`, so the file functions see the real file system). `init()` then imports it instead of the other one when running in Node; both are imported dynamically, so the bundlers see both.

* `--wasm64` generates for a module linked with `-sMEMORY64`: the pointers, `size_t` and `long` are 64-bit. They stay JS numbers in the API and become `bigint`s only at the wasm boundary. The output can't be shared with a wasm32 module, generate into another directory.

* `--replace-namespace A::B C::D` is optional and works like in the C#, Rust and Java generators: it replaces the leading namespaces of the entities, which decides their modules. It can be repeated, the replacements apply in order, and the second argument can be `::` to remove a namespace: `--replace-namespace MyLib ::` exports the entities of `MyLib` from the root module and its nested namespaces at the top level, so the users write `lib.Foo` and not `lib.MyLib.Foo`.

* `--force-namespace MyLib` puts the entities of the global C++ namespace (which includes the `std::` container instantiations) into the module of this namespace. Without it they're exported from the root module. It applies after the replacements, to what ended up in the global namespace.

File names longer than 100 characters (the files of the C bindings named after long `std::` instantiations) are truncated and suffixed with a hash, since Windows limits the path length. `--max-file-name-length` changes the limit, 0 disables it.

The generator prints a summary at the end: how many functions got wrappers, how many of those use raw C types, and how many were skipped because their C types can't be spelled in JS (`long double` and such). Pass `--verbose` to list the skipped ones.

### Compiling the C bindings for wasm

Compile the C bindings (and the C++ library) with Emscripten into an ES module, with the link flags from `emcc_link_flags.rsp` in the output directory:
```sh
em++ c_bindings/source/*.cpp ... -o mylib/js/MyLib.mjs \
    -sMODULARIZE=1 -sEXPORT_ES6=1 -sALLOW_MEMORY_GROWTH=1 \
    @mylib/js/emcc_link_flags.rsp \
    -sEXPORTED_FUNCTIONS=@mylib/js/exported_functions.txt
```
`exported_functions.txt` lists every C function the JS calls (`@file` is resolved relative to the current directory, which is why it's not inside the response file). The response file holds `-sEXPORTED_RUNTIME_METHODS=...` (the heap views, the stack functions, `addFunction`, the string helpers, `FS`), `-sALLOW_TABLE_GROWTH=1` (for the callbacks), `-sWASM_BIGINT=1`, `-sMINIFY_WASM_EXPORT_NAMES=0` (an optimized link would otherwise rename the wasm exports; without it the wrappers fall back to the `_name` functions of the module), and `-sEXPORT_EXCEPTION_HANDLING_HELPERS=1` when the C bindings don't catch exceptions themselves (`--no-handle-exceptions`), so that the escaping C++ exceptions get their messages.

C++ exceptions must be enabled (`-fexceptions` or `-fwasm-exceptions`), unless the C generator ran with `--no-handle-exceptions`.

For `-pthread` modules nothing changes on the JS side: the wrappers run on the thread that instantiated the module, the heap views are over the shared memory.

### Using the bindings

```js
import * as lib from "./mylib/js/index.mjs";
await lib.init(); // Or `lib.init({locateFile: ...})`, the options go to the Emscripten module factory.
const mesh = new lib.Mesh();
```
`init()` instantiates the wasm module and binds the wrappers to it, and returns the module. `initWithModule(module)` binds to a module you instantiated yourself.

The generated code needs ES2022 (class fields, `FinalizationRegistry`, `bigint`), and runs in Node 22+ and the current browsers (Node 24+ and the current browsers for the `-sMEMORY64` modules). `using` declarations work where the runtime supports `Symbol.dispose`.

The `.d.mts` declarations make the bindings typed for TypeScript users; there's nothing to compile.

## What the generated code looks like

The output directory holds:

* `index.mjs` — the root module: `init()`, `initWithModule()`, the runtime classes, and the entities of the root C++ namespace exported by their C++ names, with the nested namespaces as namespace objects (`export * as Foo from "./ns/Foo.mjs"`), so `MyLib::Foo::bar()` is `lib.Foo.bar()` after `--replace-namespace MyLib ::`.
* `ns/<namespace path>.mjs` — the nested namespace modules.
* `lib/<C file>.mjs` — the wrappers, one module per C bindings file, exported by their C names (`MR_Mesh`, `MR_std_vector_int`). The namespace modules re-export them; you don't normally import these directly. `lib/_all.mjs` re-exports all of them, which is how the wrappers refer to each other.
* `ffi.mjs` — the runtime support: the module and its exports (`ffi.M`, `ffi.C`), the memory helpers, the callback registry, the exception handler, and the base classes `CppObject` and `CppStruct`, the exceptions `CppException` and `UnexpectedResultException`.
* `emcc_link_flags.rsp`, `exported_functions.txt` — for compiling the C bindings, see above.

Every `.mjs` has a `.d.mts` next to it with the same exports, with the doc comments of the C++ entities.

A C++ class becomes a JS class of the same name (nested C++ classes are flattened: `A::B` → `A_B`, template instantiations and `std::` types get the names of their C types minus the prefix: `std_vector_int`). The free functions of a namespace are exported from its module.

A function returning `expected<T, E>` (`std::` or `tl::`) by value returns `T` instead, nothing for `expected<void, E>`, and throws `UnexpectedResultException` with the error converted to a string when the result holds an error, like the Python and C# bindings do. The `expected` classes themselves are still generated, since they appear as parameters and fields, and get a `valueOrThrow()` doing the same. `--no-deref-expected` turns the unwrapping off, the functions then return the `expected` objects as is.

A function returning `std::string` by value returns a JS string (`--no-string-conversion` turns this off). Returned references to strings are `std_string` wrappers, whose `toString()` decodes them as UTF-8.

The wrappers:

* Classes that need to live on the heap are opaque, their wrappers hold a pointer. A wrapper created by a constructor or returned by value *owns* the C++ object: it's destroyed when `delete()` is called (or `using` disposes it), or when the wrapper is garbage-collected (through `FinalizationRegistry`, which isn't prompt, so `delete()` the large objects). A wrapper returned by reference doesn't own the object, and keeps alive what the reference points into, so it doesn't dangle: the objects named by the `[[clang::lifetimebound]]` annotations (and by the lifetimes the C generator infers, e.g. for field getters), or without annotations `this` for methods and the only object parameter for free functions.

* Parameters take wrappers: `const T &`, `T &` and by-value copies all take a `T`. Pointers and parameters with default arguments are nullable, `null` or `undefined` (or omitting a trailing parameter) passes a null pointer or asks for the default argument. `std::optional<T>` parameters are nullable too. Passing a non-copyable class by value moves from the wrapper, which can't be used after that (see `CppObject.release()`).

* `std::string`, `std::string_view` and `std::filesystem::path` parameters take a string.

* Scalars by const pointer or reference take the number (`bigint` or number for the 64-bit ones), and are returned as numbers (`bigint` for the 64-bit ones). Scalars by non-const pointer stay raw.

* Enums are frozen objects with the constants as numbers, with the reverse mapping like TypeScript's numeric enums (`E.a === 10`, `E[10] === "a"`), and are declared as `enum`s in the `.d.mts`. The values are passed and returned as plain numbers.

* Class fields are accessor properties: `obj.x`, `obj.x = value`. Static fields are static accessors.

* The structs exposed with `--expose-as-struct` are views over wasm memory with the C++ layout: the fields are accessor properties reading and writing the memory in place (array fields have `getX(i)`/`setX(i, value)`), `copy()` makes an independent copy, `set()` overwrites the contents, `SIZE` is the size in bytes. Instances created in JS own their memory, those returned by reference point into the memory of their owner. The layout is computed with the wasm32 C ABI rules, and checked against the description JSON.

* A class with bases gets `upcastTo<Base>()`, `staticDowncastFrom<Base>(base)` for the non-virtual bases (undefined behavior if the object isn't actually of the derived class), and `dynamicDowncastFrom<Base>(base)` for the polymorphic ones (returns null if it isn't). Those call the cast functions of the C bindings, and the results are references to the object that was cast.

* `std::function<R(Args...)>` parameters take the `std_function_...` wrapper class, which you construct from a JS function with `of(func)` (or replace with `assignFn()`), or just a JS function, which is wrapped into a temporary for the call. The function receives scalars and enums by value, exposed structs by value (as copies), and classes by reference, and returns scalars by value or classes by value (an owned wrapper, which the C++ side takes over). The copies of the `std::function` share the function. An exception thrown by the function is rethrown by the wrapper that called into C, once the C call returns. Callback parameters the generator doesn't understand are raw numbers.

* The contiguous containers (`std::vector<T>` and the like, anything with `data()` and `size()` in the C bindings) whose elements are scalars, exposed structs of identical scalars, or `std::array`s of those, get `toArray()` (a new typed array of the scalars, e.g. a `Float32Array` of `x, y, z, x, y, z, ...` for a vector of `Vector3f`), `view()` (a typed array over the wasm memory, valid until the memory grows or the container changes), and when the container is resizable, `setFromArray(array)` and `static fromArray(array)`.

* Functions that the safe layer doesn't understand (`std::shared_ptr`, arrays of unknown bound, ...) are still generated, but take and return raw numbers (pointers and such). The doc comment of each wrapper names the C function it calls, so the C bindings documentation applies.

Overloaded functions keep their names: the overloads are resolved at runtime by the argument count and types (`instanceof` for the wrappers, `typeof` for the scalars and strings), the first declared match wins. Overloads that can't be told apart from JS (`int` vs `float`) get the disambiguated names of their C functions (e.g. `foo_float`). The disambiguated names are always exported too. Constructors are resolved the same way. Overloaded operators are `opAdd`, `opEqual`, `opNotEqual`, `opAddAssign`, etc.

C++ exceptions are caught by the C bindings (unless the C generator ran with `--no-handle-exceptions`) and rethrown as `CppException` with the exception message.

`new X(ffi.RAW, pointer, owned, owner)` wraps an existing pointer, for interoperating with other code using the same wasm module.

## Known limitations

This backend is as young as the Rust and Java ones, and shares their limitations:

* Inherited members are only available if the C generator copied them (`--copy-inherited-members`). Otherwise upcast to the base explicitly to call its methods, there are no implicit conversions.
* Containers only expose the methods that the C bindings have (`size()`, `at()`, ...), there's no iterator integration yet.
* Output parameters of scalar types (`int &`) are raw.
* Objects don't keep alive what they reference (the `[[clang::lifetime_capture_by]]` annotations), the doc comments only mention it. A reference parameter that gets stored must outlive the object.
* The wrappers must be called from the thread that initialized them, there's no worker-side API.
