// Intentionally no include guard.

// This file defines any `MB_*` macros you haven't already defined.
// You can use this if you don't care about some of the macros, to avoid having to manually define stubs.

// This also serves as the documentation for the macros.

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
// A non-member function.
// `ret_` - parenthesized return type, or empty if void.
// `ns_` - enclosing namespaces as `(A)(B)(C)`, or empty if none.
// `name_` - function name.
// `comment_` - a string literal with the comment, or empty if none.
// `params_` - a list of parameters `(...)(...)(...)`, or empty if none.
//     Each parameter is `(type_, name_, default_arg_)`, where:
//     * `type_` - parenthesized parameter type.
//     * `name_` - parameter name.
//     * `default_arg_` - parenthesized default argument, or empty if none.
#define MB_FUNC(ret_, ns_, name_, comment_, params_)
#endif

#ifndef MB_CLASS
// A class declaration begins.
// `kind_` - either `struct` or `class`.
// `ns_` - enclosing namespaces/classes as `(A)(B)(C)`, or empty if none.
// `name_` - class name. Anonymous classes are not emitted at all.
// `comment_` - a string literal with the comment, or empty if none.
// `fields_` - a list of public member variables `(...)(...)(...)`, or empty if none.
//     Each member variable is `(type_, name_, comment_)`, where:
//     * `type_` - parenthesized type.
//     * `name_` - field name.
//     * `comment_` - a string literal with the comment, or empty if none.
// `ctors_` - a list of public constructors, or empty if none.
//     Each constructor is `(comment_, params_)`, where:
//     * `comment_` - a string literal with the comment, or empty if none.
//     * `params_` - a parameter list `(...)(...)(...)`.
//         Each parameter is `(type_, name_, default_arg_)`, where:
//         * `type_` - parenthesized parameter type.
//         * `name_` - parameter name.
//         * `default_arg_` - parenthesized default argument, or empty if none.
// `methods_` - a list of public methods `(...)(...)(...)`, or empty if none.
//     Each method is `(ret_, name_, const_, comment_, params_)`, where:
//     * `ret_` - parenthesized return type, or empty if void.
//     * `name_` - method name.
//     * `const_` - either `const` or nothing if non-const.
//     * `comment_` - a string literal with the comment, or empty if none.
//     * `params_` - a parameter list, same as for constructors as documented above.
#define MB_CLASS(kind_, ns_, name_, comment_, fields_, ctors_, methods_)
#endif

#ifndef MB_END_CLASS
// A class ends.
// Enums and other classes can be inside classes, but member variables and functions are embedded into the `MB_CLASS(...)` call.
// `class_` - class name.
#define MB_END_CLASS(class_)
#endif

#ifndef MB_ENUM
// A enum declaration.
// `kind_` - empty for unscoped enums, `class` for scoped enums.
// `ns_` - enclosing namespaces/classes as `(A)(B)(C)`, or empty if none.
// `name_` - the enum name.
// `type_` - the underlying type (even if not manually specified) (spelled as directly as the builtin type, expanding any typedefs).
// * `comment_` - a string literal with the comment, or empty if none.
// `elems_` - a list of enum elements `(...)(...)(...)`, or empty if none.
//     Each element is `(name_, value_, comment_)`, where:
//     * `name_` - the element name.
//     * `value_` - the element value (even if not manually specified) (computed as a `int64_t` or `uint64_t` number, ignoring the original spelling).
//     * `comment_` - a string literal with the comment, or empty if none.
//         NOTE: Clang 18 currently has a bug where if an element is missing a comment, the comment from the previous element is reused for it.
#define MB_ENUM(kind_, ns_, name_, type_, comment_, elems_)
#endif
