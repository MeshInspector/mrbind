# mrbind

MRBind parses C++ headers and generates Python and C bindings for them. The parse results can also be dumped for reflection purposes (either as JSON or as C macros).

* The Python backend uses [pybind11](https://github.com/pybind/pybind11), with some custom logic to better handle the standard library types.

* The C backend is our own.

Our selling points are:

* No separate interface description files (as in SWIG).

  All annotations are done in the headers themselves, and are minimal (primarily just marking certain functions/classes as hidden from the bindings).

* Proper support for most containers/classes from the C++ standard library.

* Proper support for templates. MRBind aggressively instantiates most class templates it sees, and annotations can be added to instantiate class/function templates for specific template arguments. The (non-skipped) templates are required to be SFINAE-friendly.

MRBind still has some rough edges, but it is used in production for [MeshLib](https://github.com/MeshInspector/MeshLib).

## Limitations

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

## Supported types

Those are the C++ types that can appear as parameters and return types of bound functions, and as fields of bound classes.

The list includes both standard types, and some types from third-party libraries.

Type | C | Python | Comments
---|---|---|---
`std::vector` | ✅ | ✅ |
`std::deque` | ✅ | ❌ | Not yet implemented, should be simple to add.
`std::list` | ✅ | ❌ | Not yet implemented, should be simple to add.
`std::set` | ✅ | ✅ |
`std::multiset` | ✅ | ✅ |
`std::unordered_set` | ✅ | ✅ |
`std::unordered_multiset` | ✅ | ✅ |
`std::map` | ✅ | ✅ |
`std::multimap` | ✅ | ✅ |
`std::unordered_map` | ✅ | ✅ |
`std::unordered_multimap` | ✅ | ✅ |
`std::array` | ✅ | ✅ |
`std::optional` | ✅ | ✅ |
`std::variant` | ✅ | ✅ |
`std::any` | ❌ | ❌ | I don't see a good way of implementing this.
`std::function` | ✅ | ✅ |
`std::tuple` | ✅ | ✅ |
`std::pair` | ✅ | ✅ |
`std::string` | ✅ | ✅ |
`std::string_view` | ✅ | ✅ |
`std::filesystem::path` | ✅ | ✅ |
`std::expected` | ✅ | ✅ |
`tl::expected` | ✅ | ✅ |
`phmap::flat_hash_map` | ✅ | ✅ |
The rest of `phmap` | ✅ | ❌ | Not yet implemented, should be relatively simply.
`std::future` | ❌ | ✅ | Not yet implemented.
`std::ostream` | ✅ | ⚠️ | Python writes into a callback. C only supports `std::cout`/`cerr`/`clog` for now, but it's easy to extend.
`std::istream` | ✅ | ⚠️ | Same as `std::ostream`.
