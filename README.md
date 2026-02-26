# mrbind

MRBind parses C++ headers and generates **C**, **C#**, and **Python** bindings for them. The parse results can also be dumped for reflection purposes (either as JSON or as C macros).

* The Python backend uses [pybind11](https://github.com/pybind/pybind11), with some custom logic to better handle certain types.

* The C backend is custom.

* The C# backend is custom, and uses `[DllImport]` to load the C bindings. The resulting C# assembly is cross-platform as long as you compile the C DLL for every platform you want to support.

Out main selling points are:

* No separate interface description files (as in SWIG).

  All annotations are done in the headers themselves, and are minimal (primarily just marking certain functions/classes as hidden from the bindings).

* Proper support for most containers/classes from the C++ standard library.

* Proper support for templates. MRBind aggressively instantiates most class templates it sees, and annotations can be added to instantiate class/function templates for specific template arguments. The (non-skipped) templates are required to be SFINAE-friendly.

MRBind still has some rough edges, but it is used in production for [MeshLib](https://github.com/MeshInspector/MeshLib).

## Setting expectations

MRBind is meant to cover a large API surface area with minimal effort.

It'll never be as flexible as handwritten bindings, and doesn't offer as many customization knobs as raw Pybind11, for example.

The point is making maintaining large bindings easy, with acceptable binding quality.

## Usage

1. [Build MRBind itself.](/docs/building_mrbind.md)

2. [Run the parser on your code.](/docs/running_parser.md)

3. Follow language-specific instructions:

   * [Generate Python bindings.](/docs/generating_python.md)

   * [Generate C bindings.](/docs/generating_c.md)

4. Additional articles:

   * [Skipping certain types/functions/etc.](/docs/skipping_entities.md)

   * [Adding specific template specializations.](/docs/adding_template_specializations.md)

   * [Customizing type names.](/docs/customizing_type_names.md)

   * [Adjusting parsed comments.](/docs/adjusting_comments.md)

## Supported C++ features

### Language features

Which language features we can expose to the bindings.

It's impotant to note that this only applies to the functions you expose. It's fine if unsupported features appear in code that's not exposed, such as any libraries you use, or entities you manually exclude.

Feature | C | C# | Python | Comments
---|---|---|---|---
Templates | ✅ | ✅ | ✅ | We don't use the templating mechanism in any of the languages, instead the template arguments are baked into the names. Also read about [Adding specific template specializations](/docs/adding_template_specializations.md).
Customizing type names | ✅ | ✅ | ⚠️ | In Python, doesn't work in template arguments. Read about [Customizing type names](/docs/customizing_type_names.md).
Function overloading | ✅ | ✅ | ✅ | In C, functions are automatically renamed to disambiguate them. Sometimes this is done in other languages too.
Aggregate initialization | ✅ | ✅ | ✅ | Aggregates (structs/classes with no custom constructor, initializable in C++ with a list of members) get member-wise constructors.
Overloaded operators | ✅ | ✅ | ✅ | In C, they become functions. In C# and Python, they become operators if possible, falling back to functions.
`operator<=>` | ❌ | ❌ | ❌ | Not implemented yet. It's recommended that you `--ignore '/.*operator<=>.*/'` in the parser.
Conversion operators | ✅ | ✅ | ✅ | Overloaded as conversion operators if possible, falling back to constructors. In C# and Python, we also generate implicit conversion operators from implicit constructors callable with a single argument.
Explicit object parameter, aka "deducing `this`" | ❌ | ❌ | ❌ | Not supported. There is some provisional work in language backends.
Bitfields | ❌ | ❌ | ❌ | Ignored.
`typedef`/`using` | ❌ | ❌ | ✅ | Ignored in C/C#. Become aliases in Python. Python also automatically builds aliases from different spellings of a type used in code.

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
`std::shared_ptr`         | ✅ | ❌ | ⚠️ | In Python it dissolves into the underlying type.<br/>In Python it can't point to built-in types, such as `int`, but can point to user classes (due to Pybind limitations).<br/>In C# it's currently buggy.
`std::weak_ptr`           | ❌ | ❌ | ❌ | In Python difficult to support because of Pybind limitations. In C/C# simply not implemented yet.
`std::expected`           | ✅ | ✅ | ✅ | In C# and Python it's auto-dereferenced when returned, throwing if it holds an error.
`tl::expected`            | ✅ | ✅ | ✅ | Same as `std::expected`.
Merging `{std,tl}::expected` | ✅ | ✅ | ⚠️ | We can optionally rename `{std,tl}::expected` to remove the namespace, which is helpful if you use different implementations in different platforms.<br/>In Python, this renaming doesn't work in template arguments.
`phmap::flat_hash_map`    | ✅ | ✅ | ✅ |
The rest of `phmap`       | ✅ | ✅ | ❌ | Not yet implemented in Python, should be relatively simple.
`std::future`             | ❌ | ❌ | ✅ | Not yet implemented in C/C#.
`std::ostream`            | ⚠️ | ⚠️ | ✅ | C/C# only support `std::cout`/`cerr`/`clog` for now, but it's easy to extend.
`std::istream`            | ⚠️ | ⚠️ | ✅ | Same as `std::ostream`.
