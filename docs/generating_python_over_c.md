# Generating Python bindings over the C bindings

This is an alternative to the [pybind11-based Python bindings](/docs/generating_python.md): a CPython extension module that calls our C bindings, like the C#, Rust, Java and JavaScript backends do. It aims to produce the **same Python API** as the pybind11 target for the same headers: the same names, overloads with keyword arguments and default arguments, docstrings, aliases, containers, `std::function` wrappers and so on.

The extension builds against the CPython limited API (`Py_LIMITED_API`), so one binary serves every Python version. It doesn't depend on pybind11.

## Generating the C bindings

Pass `--output-desc-json c_desc.json` to the C generator. Also pass [`--copy-inherited-members`](/docs/generating_c.md#inherit-class-members) if you want, the copies of the inherited members are recognized and skipped (pybind11 binds them in the base classes only).

The description carries everything the Python generator needs from the parser: the field offsets (for `_offsetof_<field>`), the typedefs and the alternative type spellings (for the aliases), which members were copied from bases, and which classes satisfy `std::equality_comparable` (for the comparison methods of the containers).

## Running the generator

```sh
build/mrbind_gen_python \
    --input-json c_desc.json \
    --output-dir out \
    --module-name mylib \
    --module-qualname mypackage.mylib \
    --replace-namespace MyLib :: \
    --adjust-name '\bMyLib::' ''
```
Where:

* `--module-name` is the extension module name (`PyInit_<name>`), and `--module-qualname` is how it's imported, for the type names in the docstrings.

* `--replace-namespace A ::` puts the contents of `A` directly into the module, like `MB_PB11_STRIPPED_NAMESPACES` of the pybind11 target.

* `--adjust-name <regex> <replacement>` is applied to the C++ type names before making the Python names from them, like `MB_PB11_ADJUST_NAMES`. The pybind11 target names many types after their demangled `typeid()`, which is platform-specific. E.g. to match a Windows build, also pass `--adjust-name '\b(std::)?(size_t|uint64_t)\b' 'unsigned long long' --adjust-name '\b(std::)?(ptrdiff_t|int64_t)\b' 'long long' --adjust-name '(\w|>)\(' '$1 __cdecl('`.

* `--alias <alias> <target>` adds extra names, like `RegisterCustomAlias()` of the pybind11 target. Both are dotted paths in the module.

* `--extra-python <file.py>` embeds this Python code into the module and runs it in the module's namespace at the end of its initialization, for the functions written in C++ only for the pybind11 target. The code sees the module's names directly; don't import the module itself from it.

* `--ignore-for-python <regex>` skips the entities with matching C++ names, for the ones the pybind11 build ignores with annotations that the C bindings don't see.

* `--hide-field <name>` skips the fields with this name, e.g. the ones that are public only for the C bindings.

* `--iterate-by-index <regex>` gives the matching classes `__iter__` over `[0, elements)` with `operator[]`, for the free `begin()`/`end()` templates that the C bindings don't instantiate.

* `--ignore-c-file <regex>` skips the entities from the matching C headers (relative to the include directory, without the extension), e.g. `^MyLibCuda/` to leave out a sub-library.

* `--adjust-typeid-name <regex> <replacement>` is applied to the C++ names before spelling them like `typeid()` does, e.g. `--adjust-typeid-name '(^|[^:\w])expected<' '$1tl::expected<'` if the C bindings were generated with `--merge-std-and-tl-expected`.

* `--adjust-doc-name <regex> <replacement>` is applied to the C++ names in the docs (`Generated from:`), e.g. to spell `size_t` as its underlying type if the pybind11 build was parsed without the `size_t` support.

The output is `out/<module>.cpp` and `out/mrbind_py_runtime.h`. Compile the former as C++20 with `-DPy_LIMITED_API=0x03080000` (or newer), the Python headers, the C bindings headers, and link it to the C bindings library and `python3` (`python3.lib` on Windows; nothing on Linux and macOS).

The extension and the C bindings must use the same C++ standard library, because `__repr__` and the stream parameters pass `std::ostream`/`std::istream` objects created on the extension side.

## Extension modules in C++

The generated module exports a C++ interop API (see [`include/mrbind/python_over_c/cpp_api.h`](/include/mrbind/python_over_c/cpp_api.h)) in the capsule `<module qualname>.__mrbind_cpp_api__`: other extension modules can accept its objects as C++ objects, and return C++ objects as its objects, by the C++ type names of the bindings (e.g. `MR::Mesh`).

For pybind11 modules, [`include/mrbind/python_over_c/pybind11_casters.h`](/include/mrbind/python_over_c/pybind11_casters.h) has the type casters:
```cpp
#define MRBIND_PY_CPP_API_CAPSULE "mypackage.mylib.__mrbind_cpp_api__"
#include <mrbind/python_over_c/pybind11_casters.h>

MRBIND_PY_FOREIGN_TYPE(MyLib::Mesh, "MyLib::Mesh", "mypackage.mylib.Mesh")
```
Then the pybind11 functions can take and return `MyLib::Mesh` by value, reference, pointer and `std::shared_ptr`. Such a module must use the same C++ standard library as the C bindings.

## Comparing with the pybind11 bindings

[`scripts/python_api_dump.py`](/scripts/python_api_dump.py) dumps everything observable about a module (names, signatures, docstrings, properties, enum members) and diffs two dumps:
```sh
python3 scripts/python_api_dump.py dump mypackage.mylib --strip mypackage.mylib. -o old.json
python3 scripts/python_api_dump.py dump mypackage.mylib --path new_build --strip mypackage.mylib. -o new.json
python3 scripts/python_api_dump.py diff old.json new.json
```

## Deliberate differences from pybind11

The pybind11 target has a few naming bugs that this generator doesn't copy:

* The assignments (`operator=`) are `assign(self, other)`, not `operator`. There is one overload for the copy and the move assignment, since they are the same in Python.
* `*=` is `__imul__`, not `__imatmul__` (which is `@=`).
* `<`, `>`, `<=`, `>=` are `__lt__`, `__gt__`, `__le__`, `__ge__`, not `operator`, so the Python operators and `sorted()` work. The reflected ones are their mirrors (`x < y` is `y > x`).
* The prefix `++` and `--` are `increment()` and `decrement()`, not `operator` and `operator_minus_minus`. The postfix ones aren't bound: Python has no such operators, and they modify the object the same way.

## Known differences from pybind11

* Calling an unbound method with a wrong `self` raises CPython's own `TypeError` text.
* The iterators are lists built eagerly.
* Default arguments that aren't arithmetic constants are printed as spelled in C++ (pybind11 prints their `repr()`). The arithmetic ones are evaluated by the parser for its target platform, e.g. `size_t(-1)` differs if the C bindings were parsed for wasm32.
* The overloads are in the order of the C bindings, which can differ from the registration order of the pybind11 build.
* `_offsetof_<field>` of the reference fields is the one on the parser's target platform (the other offsets are computed on this one).
* The whitespace of the block comments (`/** ... */`) that depends on their indentation in the source.
* A C++ extension module that uses `pybind11_casters.h` returns the `std::vector`s that have no class in the C bindings (no C function takes or returns them) as Python lists.
