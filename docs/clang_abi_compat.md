# Maintaining ABI compatibility with older compilers

Certain language backends (Python) require building the bindings with the same Clang as what MRBind uses for parsing, since other compilers can have trouble with certain complex templates in the generated code (especially older compilers).

It's easier to build your target library with the same Clang version as well, but it's not strictly necessary.

The ABI is usually stable across compiler versions, and Clang is ABI-compatible with other compilers, so in general you can build your library with any other compiler, while still building the bindings with the required Clang version, and they will work together fine.

So far we know only one issue with this:

* GCC 13 and older, and Clang 17 and older are mangling functions with `requires`-clauses differently than newer versions. Those old compilers don't mangle the `requires`-clauses at all, and the newer ones do.

  This will cause undefined references to functions with `requires`-clauses when linking together code compiled by new and old compilers.

  The fix is to pass `-fclang-abi-compat=17` to Clang 18 or newer used for the bindings, to make it imitate the old behavior. This works fine even for interop with code compiled with old GCC, despite the flag saying "clang".

  If you interop with code compiled with older Clang (instead of GCC), you can pass its exact version in there, but it doesn't seem to be necessary.

  This isn't a problem when using Clang in MSVC-compatible mode, because modern MSVC still doesn't mangle `requires`, and neitehr does modern Clang when in MSVC-compatible mode.
