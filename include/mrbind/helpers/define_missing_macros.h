// Intentionally no include guard.

// This file defines any `MB_*` macros you haven't already defined.
// You can use this if you don't care about some of the macros, to avoid having to manually define stubs.

// This also serves as the documentation for the macros.

// This is set automatically to 1 in a single .cpp file, so you can emit your implementation there.
#ifndef MRBIND_IS_IMPL_FILE
#define MRBIND_IS_IMPL_FILE 0
#endif

#ifndef MB_FILE
// A generated file begins.
#define MB_FILE
#endif

#ifndef MB_END_FILE
// A generated file ends.
#define MB_END_FILE
#endif

#ifndef MB_NAMESPACE
// A namespace begins.
// `namespace_` - namespace name, or empty if anonymous.
// `inline_` - either `inline` if this is an inline namespace, or empty otherwise.
// `comment_` - either a string literal with the comment, or empty if none.
// The namespace name never contains `::`, for multiple stacked namespaces (`namespace A::B::C`) this is emitted multiple times.
#define MB_NAMESPACE(namespace_, inline_, comment_)
#endif

#ifndef MB_END_NAMESPACE
// A namespace ends.
// `namespace_` - namespace name, or empty if anonymous.
#define MB_END_NAMESPACE(namespace_)
#endif

#ifndef MB_FUNC
// A non-member function, or a friend function defined inside of a class.
// `ret_` - parenthesized return type, or empty if void.
// `ns_` - enclosing namespaces as `(A)(B)(C)`, or empty if none.
// `name_` - function name as a single word.
// `qualname_` - fully qualified function name, parenthesized.
// `comment_` - a string literal with the comment, or empty if none.
// `params_` - a list of parameters `(...)(...)(...)`, or empty if none.
//     Each parameter is `(type_, name_, default_arg_)`, where:
//     * `type_` - parenthesized parameter type.
//     * `name_` - parameter name.
//     * `default_arg_` - parenthesized default argument, or empty if none.
#define MB_FUNC(ret_, name_, qualname_, comment_, params_)
#endif

#ifndef MB_CLASS
// A class declaration begins.
// `kind_` - one of: `struct`, `class`, `union`.
// `name_` - class name as a single word. Anonymous classes are not emitted at all.
// `qualname_` - fully qualified class name, parenthesized.
// `comment_` - a string literal with the comment, or empty if none.
// `bases_` - a list of public base classes `(...)(...)(...)`.
//     Each base is `(type_, virtual_)`, where:
//     * `type_` - parenthesized base type, fully qualified.
//     * `virtual_` - either `virtual` or nothing if not virtual.
// `members_` - a list of some kinds of members `(...)(...)(...)`, or empty if none.
//     Each element starts with its kind. We have following members:
//     * A public member variable `(field, static_, type_, name_, comment_)`, where:
//         * `static_` - either `static` or nothing if non-static.
//         * `type_` - parenthesized type.
//         * `name_` - field name.
//         * `comment_` - a string literal with the comment, or empty if none.
//     * A public constructor `(ctor, comment_, params_)`, where:
//       * `comment_` - a string literal with the comment, or empty if none.
//       * `params_` - a parameter list `(...)(...)(...)`.
//           Each parameter is `(type_, name_, default_arg_)`, where:
//           * `type_` - parenthesized parameter type.
//           * `name_` - parameter name (can be empty).
//           * `default_arg_` - parenthesized default argument, or empty if none.
//     * A public method `(method, static_, ret_, name_, simplename_, const_, comment_, params_)`, where:
//         * `static_` - either `static` or nothing if non-static.
//         * `ret_` - parenthesized return type, or empty if void.
//         * `name_` - method name.
//         * `simplename_` - usually same as `name_`, but overloaded operators instead have an identifier placeholder here, such as `_Subscript`.
//         * `const_` - either `const` or nothing if non-const.
//         * `comment_` - a string literal with the comment, or empty if none.
//         * `params_` - a parameter list, same as for constructors as documented above.
//     * A public conversion operator `(conv_op, ret_, const_, comment_)`, with the same parameter meaning as above.
#define MB_CLASS(kind_, name_, qualname_, comment_, bases_, members_)
#endif

#ifndef MB_END_CLASS
// A class ends.
// Member variables and member functions are embedded into the `MB_CLASS(...)` call, and will not appear as standalone macro calls.
// Except friend function definitions are included as `MB_FUNC()` instead.
// `name_` - class name.
#define MB_END_CLASS(name_)
#endif

#ifndef MB_ENUM
// A enum declaration.
// `kind_` - empty for unscoped enums, `class` for scoped enums (even if declared using `enum struct`).
// `name_` - enum name, as a single word.
// `qualname_` - fully qualified enum name, parenthesized.
// `type_` - the underlying type (even if not manually specified) (spelled as directly as the builtin type, expanding any typedefs).
// * `comment_` - a string literal with the comment, or empty if none.
// `elems_` - a list of enum elements `(...)(...)(...)`, or empty if none.
//     Each element is `(name_, value_, comment_)`, where:
//     * `name_` - the element name.
//     * `value_` - the element value (even if not manually specified) (computed as a `int64_t` or `uint64_t` number, ignoring the original spelling).
//     * `comment_` - a string literal with the comment, or empty if none.
//         NOTE: Clang 18 currently has a bug where if an element is missing a comment, the comment from the previous element is reused for it.
#define MB_ENUM(kind_, name_, qualname_, type_, comment_, elems_)
#endif
