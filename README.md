# mrbind

MRBind parses C++ headers and generates **C**, **C#**, and **Python** bindings for them. The parse results can also be dumped for reflection purposes (either as JSON or as C macros).

* The C backend is custom. We can dump the information about the generated C functions as JSON, so you can build bindings for other languages on top of those, like we do with C#.

* The C# backend is custom, and uses `[DllImport]` to load the C bindings. The resulting C# assembly is cross-platform (at least across all of: Win/Linux/Mac, both x64 and ARM64) as long as you compile the generated C shared library for every platform you want to support.

* The Python backend uses [pybind11](https://github.com/pybind/pybind11), with some custom logic to better handle certain types.

Our main features are:

* No separate interface description files (as in SWIG).

  All annotations are done in the headers themselves, and are minimal (primarily just marking certain functions/classes as hidden from the bindings).

* Proper support for most containers/classes from the C++ standard library.

* Proper support for templates. MRBind aggressively instantiates most class templates it sees, and annotations can be added to instantiate class/function templates for specific template arguments. The (non-skipped) templates are required to be SFINAE-friendly.

MRBind still has some rough edges, but it is used in production for [MeshLib](https://github.com/MeshInspector/MeshLib).

MRBind is meant to cover a large API surface area with minimal effort, but in turn you give up the flexibility of handwritten bindings.

## Usage

1. [Build MRBind itself.](/docs/building_mrbind.md)

2. [Run examples.](/examples/README.md)

3. [Run the parser on your code.](/docs/running_parser.md)

4. Follow language-specific instructions:

   * [Generate Python bindings.](/docs/generating_python.md)

   * [Generate C bindings.](/docs/generating_c.md)

   * [Generate C# / .NET bindings.](/docs/generating_csharp.md)

5. Additional articles:

   * [Skipping certain types/functions/etc.](/docs/skipping_entities.md)

   * [Adding specific template specializations.](/docs/adding_template_specializations.md)

   * [Splitting the output library.](/docs/splitting_libraries.md)

   * [Lifetime extension / keep-alive.](/docs/keep_alive.md)

   * [Customizing type names.](/docs/customizing_type_names.md)

   * [Adjusting parsed comments.](/docs/adjusting_comments.md)

   * [State of the project.](/docs/state_of_the_project.md)

## Supported C++ features

### Language features

Which language features we can expose to the bindings.

It's impotant to note that this only applies to the functions/classes you expose. It's fine if unsupported features appear in code that's not exposed, such as any libraries you use, or your own entities you manually exclude from the bindings.

Feature | C | C# | Python | Comments
---|---|---|---|---
Templates                                        | ✅ | ✅ | ✅ | We don't use the templating mechanism in any of the languages, instead the template arguments are baked into the names. Also read about [Adding specific template specializations](/docs/adding_template_specializations.md).
Customizing type names                           | ✅ | ✅ | ⚠️ | In Python, doesn't work in template arguments. Read about [Customizing type names](/docs/customizing_type_names.md).
Function overloading                             | ✅ | ✅ | ✅ | In C, functions are automatically renamed to disambiguate them. Sometimes this is done in other languages too.
Const-correctness                                | ✅ | ✅ | ⚠️ | In C#, each class is emitted in two halves, one for const methods and another for non-const, with the latter inheriting from the former. This allows emulating C++ const references in C#.<br/>In Python, Pybind doesn't support const references properly, so when you have a function returning `const T &`, we copy the result, because otherwise the default Pybind behavior would be to `const_cast<T &>(...)` it, which lets the user modify const C++ objects (define `-DMB_PB11_CONST_CAST_RETURNED_CONST_REFS` to switch to that behavior). Eventually we want to replace this with the same system we're using for C#.
Inheritance (including multiple inheritance)     | ✅ | ✅ | ✅ | In C, we generate upcast/downcast functions, and can optionally copy members from bases to derived classes, to allow accessing them without the upcasts.<br/>In C#, we don't use C# inheritance, because there's no multiple inheritance support, and because the single inheritance is already spent on implementing const-correctness (see above). Instead we emit unrelated classes with upcast/downcast conversion operators between them, and copy the members from bases to derived classes to imitate inheritance.
Aggregate initialization                         | ✅ | ✅ | ✅ | Aggregates (structs/classes with no custom constructor, initializable in C++ with a list of their members) get member-wise constructors.
Overloaded operators                             | ✅ | ✅ | ✅ | In C, they become functions. In C# and Python, they become operators if possible, falling back to functions.
`operator<=>`                                    | ❌ | ❌ | ❌ | Not implemented yet. It's recommended that you `--ignore '/.*operator<=>.*/'` in the parser.
Conversion operators                             | ✅ | ✅ | ✅ | Overloaded as conversion operators if possible, falling back to constructors.<br/>In C# and Python, we also generate implicit conversion operators from implicit constructors callable with a single argument.
Exceptions                                       | ✅ | ✅ | ✅ | In Python, Pybind translates C++ exceptions to Python exceptions.<br/>In C, we [call a user-provided callback on an exception](/docs/generating_c.md#exception-handling).
Explicit object parameter, aka "deducing `this`" | ❌ | ❌ | ❌ | Not implemented yet. There is some provisional work in language backends.
Bitfields                                        | ❌ | ❌ | ❌ | Ignored.
Non-public members                               | N/A | N/A | N/A | Intentionally ignored by the parser.<br/>It's not supported to return non-public nested classes from public member functions.
`typedef`/`using`                                | ❌ | ❌ | ✅ | Ignored in C/C#. Become aliases in Python. Python also automatically builds aliases from different spellings of a type used in code.
`union`                                          | N/A | N/A | N/A | Not planned.
Global variables (outside of classes)            | ❌ | ❌ | ❌ | Not yet implemented.

### Types

Those are the C++ types that can appear as parameters and return types of bound functions, and as fields of bound classes.

The list includes both standard types, and some types from third-party libraries.

If you need something from here that's marked "simple to implement", open an issue.

Type | C | C# | Python | Comments
---|---|---|---|---
`std::vector`             | ✅ | ✅ | ✅ |
`std::deque`              | ✅ | ✅ | ❌ | Not yet implemented, should be simple to add.
`std::list`               | ✅ | ✅ | ❌ | Not yet implemented, should be simple to add.
`std::set`                | ✅ | ✅ | ✅ |
`std::multiset`           | ✅ | ✅ | ✅ |
`std::unordered_set`      | ✅ | ✅ | ✅ |
`std::unordered_multiset` | ✅ | ✅ | ✅ |
`std::map`                | ✅ | ✅ | ✅ |
`std::multimap`           | ✅ | ✅ | ✅ |
`std::unordered_map`      | ✅ | ✅ | ✅ |
`std::unordered_multimap` | ✅ | ✅ | ✅ |
`std::array`              | ✅ | ✅ | ✅ |
`std::optional`           | ✅ | ✅ | ✅ |
`std::variant`            | ✅ | ✅ | ✅ |
`std::any`                | ❌ | ❌ | ❌ | I don't see a good way of implementing this.
`std::function`           | ✅ | ✅ | ✅ |
`std::tuple`              | ✅ | ✅ | ✅ |
`std::pair`               | ✅ | ✅ | ✅ |
`std::string`             | ✅ | ✅ | ✅ |
`std::string_view`        | ✅ | ✅ | ✅ |
`std::span`               | ❌ | ❌ | ❌ | Unclear how to implement in Python, ideas welcome. Simple in C/C# but not yet implemented there.
`std::filesystem::path`   | ✅ | ✅ | ✅ |
`std::unique_ptr`         | ✅ | ✅ | ⚠️ | In Python it dissolves into the underlying type.<br/>In Python it can't be a function parameter. (Newer Pybind would allow us to suppor this via `pybind11::smart_holder`, but our minimum target version is too old for that.)
`std::shared_ptr`         | ✅ | ✅ | ⚠️ | In Python it dissolves into the underlying type.<br/>In Python it can't point to built-in types, such as `int`, but can point to user classes (due to Pybind limitations).
`std::weak_ptr`           | ❌ | ❌ | ❌ | In Python difficult to support because of Pybind limitations. In C/C# simply not implemented yet.
`std::expected`           | ✅ | ✅ | ✅ | In C# and Python it's auto-dereferenced when returned, throwing if it holds an error.
`tl::expected`            | ✅ | ✅ | ✅ | Same as `std::expected`.
Merging `{std,tl}::expected` | ✅ | ✅ | ⚠️ | We can optionally rename `{std,tl}::expected` to remove the namespace, which is helpful if you use different implementations in different platforms.<br/>In Python, this renaming doesn't work in template arguments.
`phmap::flat_hash_map`    | ✅ | ✅ | ✅ |
The rest of `phmap`       | ✅ | ✅ | ❌ | Not yet implemented in Python, should be relatively simple.
`std::future`             | ❌ | ❌ | ✅ | Not yet implemented in C/C#.
`std::ostream`            | ⚠️ | ⚠️ | ✅ | C/C# only support `std::cout`/`cerr`/`clog` for now, but it's easy to extend.
`std::istream`            | ⚠️ | ⚠️ | ✅ | Same as `std::ostream`.
`std::initializer_list`   | N/A | N/A | N/A | Intentionally not implemented, difficult to implement without hacks. You should either use `--skip-mentions-of '/std::initializer_list<.*>/'` or manually exclude all functions accepting `std::initializer_list`s.
