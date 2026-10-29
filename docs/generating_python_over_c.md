# Generating Python bindings over the C bindings

This is an alternative to the [pybind11-based Python bindings](/docs/generating_python.md): a CPython extension module that calls our C bindings, like the C#, Rust, Java and JavaScript backends do. It aims to produce the **same Python API** as the pybind11 target for the same headers: the same names, overloads with keyword arguments and default arguments, docstrings, aliases, containers, `std::function` wrappers and so on.

The extension builds against the CPython limited API (`Py_LIMITED_API`), so one binary serves every Python version. It doesn't depend on pybind11.

## Generating the C bindings

Pass `--output-desc-json c_desc.json` to the C generator. Also pass [`--copy-inherited-members`](/docs/generating_c.md#inherit-class-members) if you want, the copies of the inherited members are recognized and skipped (pybind11 binds them in the base classes only).

The description carries everything the Python generator needs from the parser: the field offsets (for `_offsetof_<field>`), the typedefs and the alternative type spellings (for the aliases), and which members were copied from bases.

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

* `--ignore-for-python <regex>` skips the entities with matching C++ names, for the ones the pybind11 build ignores with annotations that the C bindings don't see.

* `--hide-field <name>` skips the fields with this name, e.g. the ones that are public only for the C bindings.

The output is `out/<module>.cpp` and `out/mrbind_py_runtime.h`. Compile the former as C++20 with `-DPy_LIMITED_API=0x03080000` (or newer), the Python headers, the C bindings headers, and link it to the C bindings library and `python3` (`python3.lib` on Windows; nothing on Linux and macOS).

The extension and the C bindings must use the same C++ standard library, because `__repr__` and the stream parameters pass `std::ostream`/`std::istream` objects created on the extension side.

## Comparing with the pybind11 bindings

[`scripts/python_api_dump.py`](/scripts/python_api_dump.py) dumps everything observable about a module (names, signatures, docstrings, properties, enum members) and diffs two dumps:
```sh
python3 scripts/python_api_dump.py dump mypackage.mylib --strip mypackage.mylib. -o old.json
python3 scripts/python_api_dump.py dump mypackage.mylib --path new_build --strip mypackage.mylib. -o new.json
python3 scripts/python_api_dump.py diff old.json new.json
```

## Known differences from pybind11

* Calling an unbound method with a wrong `self` raises CPython's own `TypeError` text.
* The iterators are lists built eagerly.
* Non-literal default arguments are printed as spelled in C++ (pybind11 prints the evaluated values).
* The equality-based container methods (`__eq__`, `count`, `remove`, ...) are added only when the C bindings have an `operator==` for the element type.
