# Splitting libraries

Let's say you want to produce more than one library, and have them depend on each other. How to do this?

## C

The parser and generator should be ran only once, on the combined public API.

In the resulting hierarchy, there must be one main library that all others depend on (maybe indirectly), even if it contains no parsed code at all, just the basic generated helpers.

All other libraries must be created by passing `--split-library A_ foo/bar:foo/baz` to the generator (this flag can be used multiple times), where:

* `A_` is a macro prefix that this split library should use for its export macros, to replace the similar prefix passed to `--helper[-macro]-name-prefix`.

* `foo/bar:foo/baz` is a `:`-separated list of relative paths, relative to the `--output-{header,source}-dir` directories, where the contents of this split library are generated. This flag modifies the files in those directories to use a different export macro.

  The first directory in the list will have `exports.h` generated in it. If you want, you can pass an otherwise empty directory as the first element, to have `exports.h` generated there, away from any other headers.

After that, just compile the sources of each library separately, and link the resulting shared libraries to each other.

## C#

TODO

## Python

The parser must be invoked separately for each library, and the results must be compiled separately.

Compile modules with `-DMB_PB11_MODULE_DEPS='"foo", "bar"'` to indicate which other modules they need to import on startup, as documented [here](/docs/generating_python.md#tuning-generated-bindings).

Make sure `-DPYBIND11_COMPILER_TYPE='"..."' -DPYBIND11_BUILD_ABI='"..."'` match for all your modules, as documented [here](/docs/generating_python.md#the-build-process).
