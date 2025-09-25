# How to skip certain parsed entities?

## Using parser flags

As [mentioned previously](/docs/running_parser.md), you can use `--ignore ...` to skip certain namespaces, and then optionally `--allow ...` to unskip nested namespaces.

For example, `--ignore :: --allow MyLib --ignore MyLib::detail` skips everything in the global namespace, other than `namespace MyLib`, and additionally skips `namespace MyLib::detail.

Those flags can also take the names of classes/functions/etc, but this is rarely useful, because if those are under your control, they should instead be [annotated directly in headers](#using-annotations), and if they aren't under your control, then the entire namespace should be `--ignore`d, not the individual components.

If the namespace is already ignored, but its contents still cause problems because they are used as function parameters/bases/fields/etc, perhaps you want [`--skip-mentions-of`, see below](#skipping-mentions-of-types).

## Using annotations

You sometimes might need to skip individual functions/classes/etc, either because you don't want the user to access them, or because the binding generator has issues with them.

To do that, create a macro in your library, along the lines of:
```cpp
#ifdef MYLIB_PARSING_FOR_BINDINGS
#define MYLIB_NO_BIND __attribute__((__annotate__("mrbind::ignore")))
#else
#define MYLIB_NO_BIND
#endif
```
Define `MYLIB_PARSING_FOR_BINDINGS` only when running the parser, via `-DMYLIB_PARSING_FOR_BINDINGS`. (The parser doesn't define any special macros of its own to indicate its presence.) Alternatively, you can replace the condition with `#ifdef __clang__`, as Clang will silently ignore this attribute.

You can also use the C++ spelling for this attribute: `[[clang::annotate("mrbind::ignore")]]`.

This attribute can be applied to:

* Functions: `MYLIB_NO_BIND void foo();`

* Structs/classes: `class MYLIB_NO_BIND MyClass {...};`

* Struct fields: `struct A { MYLIB_NO_BIND int x; };`

* `using` declarations: `using MyInt MYLIB_NO_BIND = int;`

* For base classes, the closest alternative is [`--skip-mentions-of`](#skipping-mentions-of-types).

* Possibly some other things too.

## Skipping mentions of types

This is primarily useful for third-party types that are causing issues, that you don't want to expose to the bindings.

`--skip-mentions-of SomeLibrary::SomeType` will silently hide all fields and bases of this type, and remove all functions that have this as a parameter or a return type.

Don't pass `const` or `&` to this flag, they are ignored for the purposes of this check.

If the type is a template, do pass its template arguments.

This flags can accepts regexes, which are useful e.g. to ignore templates with different arguments: `--skip-mentions-of '/SomeLibrary::SomeType<.*>/'`. (Use quotes appropriate for your shell, here `'...'` is not a part of the syntax. `/.../` is a part of the syntax, it indicates that this is a regex.)

## Not passing headers to the parser (a bad idea)

If certain headers are causing trouble, you might get the idea to just not pass them to the parser. (I.e. when generating the one big header to parse, don't include the troublesome headers in it.)

This is usually not a good idea, because those headers might still end up being included via other headers. Instead, either [annotate](#using-annotations) the contents of those headers, or [ignore them using flags](#using-parser-flags).

## Using `#ifdef` (a bad idea)

You can use `#ifdef` to hide certain parts of your headers from the parser. The parser doesn't define any macros of its own, but you could make it do so via `-DMYLIB_PARSING_FOR_BINDINGS`.

This is usually not a good idea, because if those contents are needed elsewhere (e.g. in an inline function in a header that the parser also sees), you'll get a parsing error.
