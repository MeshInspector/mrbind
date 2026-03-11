# Splitting libraries

Let's say you want to produce more than one library, and have them depend on each other. How to do this?

## C

The parser and generator should be ran only once, on the combined public API.

In the resulting hierarchy, there must be one main library that all others depend on (maybe indirectly), even if it contains no parsed code at all, just the basic generated helpers.

All other libraries must be created by passing `--split-library A_ "" foo/bar:foo/baz` to the generator (this flag can be used multiple times), where:

* `A_` is a macro prefix that this split library should use for its export macros, to replace the similar prefix passed to `--helper[-macro]-name-prefix`.

* `foo/bar:foo/baz` is a `:`-separated list of relative paths, relative to the `--output-{header,source}-dir` directories, where the contents of this split library are generated. This flag modifies the files in those directories to use a different export macro.

  The first directory in the list will have `exports.h` generated in it. If you want, you can pass an otherwise empty directory as the first element, to have `exports.h` generated there, away from any other headers.

* `""` is a list of other sub-libraries that this one depends on, which should match the list of libraries you will link into this one.

  This information is only used in rare cases to determine where to place generated bindings for standard containers and such, more on this below.

  `""` (an empty string) indicates that it only depends on the main sub-library. Otherwise it's a `:`-separate list of macro prefixes of its depedencies, which can include an empty string to indicate the main sub-library.

  For example, to express following hierarchy: (where the arrows mean "depends on")

  ```
      default
       ^   ^
      /     \
    Foo     Bar
      ^     ^
       \   /
       FooBar
  ```

  You would use:
  ```
  --split-library FOO_ "" foo
  --split-library BAR_ "" bar
  --split-library FOOBAR_ "FOO_:BAR_" foobar
  ```
  Where `FOO_`, `BAR_`, `FOOBAR_` are macro prefixes, and `foo`, `bar`, `foobar` are output directories.

  Then if the sub-library `Foo` defines `struct Foo {};` and the sub-library `Bar` defines `struct Bar {};`, and you try to use `std::vector<std::pair<Foo, Bar>>`, we will use this dependency information to determine that the vector belongs in `FooBar`. And of course it is a bad idea to use this vector in sub-libraries `FooBar` (or those depending on it, if any).

After that, just compile the sources of each library separately, and link the resulting shared libraries to each other.

## C#

Currently you might not be able to split C# output to several C# assemblies, but even when using one big assembly, it can still consume the split C libraries (which are loaded on demand at runtime).

You must tell the C# generator the name of the shared library for each of the sub-libraries.

For example, if you passed `--split-library BLAH_ ....` to the C generator, you must pass `--imported-split-lib-name BLAH_ blah` to C#, where `blah` is the shared library name for this sub-library, that replaces `--imported-lib-name` for it.

The flag `--imported-split-lib-name` can be repeated multiple times if you have multiple sub-libraries.

The reason why we don't currently recommend splitting the C# assemblies is because C# doesn't let us populate the same partial class (which we use as namespaces) from different assemblies. We might fix this eventually by adding per-sub-library namespace customization rules.

Simply using different C++ namespaces in the input for different C# assemblies might work in simple cases, but the namespace `Std` will still be used by all of them if you use the standard containers in several different sub-libraries.

## Python

The parser must be invoked separately for each library, and the results must be compiled separately.

Compile modules with `-DMB_PB11_MODULE_DEPS='"foo", "bar"'` to indicate which other modules they need to import on startup, as documented [here](/docs/generating_python.md#tuning-generated-bindings).

Make sure `-DPYBIND11_COMPILER_TYPE='"..."' -DPYBIND11_BUILD_ABI='"..."'` match for all your modules, as documented [here](/docs/generating_python.md#the-build-process).
