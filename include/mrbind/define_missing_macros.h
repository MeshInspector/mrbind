// Intentionally no include guard.

// This file defines any `MB_*` macros you haven't already defined.
// You can use this if you don't care about some of the macros, to avoid having to manually define stubs.

// This also serves as the documentation for the macros.

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
// `params_` - a list of parameters `(...)(...)(...)`, or empty if none.
//     Each parameter is `(type_, name_, default_arg_)`, where:
//     * `type_` - parenthesized parameter type.
//     * `name_` - parameter name.
//     * `default_arg_` - parenthesized default argument, or empty if none.
// `comment_` - a string literal with the comment, or empty if none.
#define MB_FUNC(ret_, ns_, name_, params_, comment_)
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
//     Each constructor is `(params_, comment_)`, where:
//     * `params_` - a parameter list `(...)(...)(...)`.
//         Each parameter is `(type_, name_, default_arg_)`, where:
//         * `type_` - parenthesized parameter type.
//         * `name_` - parameter name.
//         * `default_arg_` - parenthesized default argument, or empty if none.
//     * `comment_` - a string literal with the comment, or empty if none.
// `methods_` - a list of public methods `(...)(...)(...)`, or empty if none.
//     Each method is `(ret_, name_, params_, const_, comment_)`, where:
//     * `ret_` - parenthesized return type, or empty if void.
//     * `name_` - method name.
//     * `params_` - a parameter list, same as for constructors as documented above.
//     * `const_` - either `const` or nothing if non-const.
//     * `comment_` - a string literal with the comment, or empty if none.
#define MB_CLASS(kind_, ns_, name_, comment_, fields_, ctors_, methods_)
#endif

#ifndef MB_END_CLASS
// A class ends.
// The only things that can be inside classes are other classes, since member variables and functions are embedded directly into `MB_CLASS(...)`.
// `class_` - class name.
#define MB_END_CLASS(class_)
#endif
