# How to customize the generated type names?

For templates, MRBind primarily relies on Clang's attribute [`preferred_name`](https://clang.llvm.org/docs/AttributeReference.html#preferred-name). Since that only works for templates and their partial specializations, we also provide our own attribute `mrbind::preferred_name` for non-templates and full specializations.

## Clang's `preferred_name`

This attribute only works for templates, only when they're not fully specialized.

This is usable outside of MRBind too, it can be used to change type names in the error messages, and in some cases in the type name strings, if you use them.

In *theory*, you're supposed to use it like this:
```cpp
template <typename T>
struct basic_string;

using string = basic_string<char>;
using wstring = basic_string<wchar_t>;

template <typename T>
struct
    [[clang::preferred_name(string)]]
    [[clang::preferred_name(wstring)]
    basic_string
{
    // ...
};
```
And now `string` will be used instead of `basic_string<char>` everywhere, and similarly `wstring` instead of `basic_string<wchar_t>`.

But since it's buggy, what you *actually* should use is a macro that additionally applies the workaround for that bug. Copy the macro below to your library.

<details><summary><b>Click to show the macro implementation</b></summary>

```cpp
#include <type_traits>

#define MYLIB_IDENTITY(...) __VA_ARGS__
#define MYLIB_END(...) MYLIB_END_(__VA_ARGS__)
#define MYLIB_END_(...) __VA_ARGS__##_END

#define MYLIB_CANONICAL_TYPEDEFS(type_, name_, aliases_) \
    MYLIB_IDENTITY type_ name_; \
    MYLIB_END(DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_A aliases_) \
    DETAIL_MYLIB_CANONICAL_TYPEDEFS(type_, name_, aliases_)

#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_BODY(name_, ...) using name_ = __VA_ARGS__;
// Adding `MYLIB_IDENTITY()` here to keep the legacy MSVC preprocessor happy.
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_A(...) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_BODY MYLIB_IDENTITY()(__VA_ARGS__) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_B
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_B(...) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_BODY MYLIB_IDENTITY()(__VA_ARGS__) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_A
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_A_END
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_USING_B_END

#if defined(__has_attribute)
#if __has_attribute(__preferred_name__)
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS(type_, name_, aliases_) \
    MYLIB_IDENTITY type_ \
        MYLIB_END(DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_A aliases_) \
        name_; \
    DETAIL_MYLIB_CANONICAL_TYPEDEFS_CLANG_WORKAROUND(aliases_)

#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_BODY(name_, ...) __attribute__((__preferred_name__(name_)))
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_A(...) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_BODY(__VA_ARGS__) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_B
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_B(...) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_BODY(__VA_ARGS__) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_A
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_A_END
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_ATTR_B_END

#ifdef __clang__ // Workaround for bug: https://github.com/llvm/llvm-project/issues/106358

#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_CLANG_WORKAROUND(aliases_) \
    MYLIB_END(DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_A aliases_)

#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_BODY(name_, ...) static_assert((void(std::type_identity<__VA_ARGS__>{}), true));
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_A(...) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_BODY(__VA_ARGS__) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_B
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_B(...) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_BODY(__VA_ARGS__) DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_A
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_A_END
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_LOOP_TOUCH_B_END

#else // no workaround needed
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS_CLANG_WORKAROUND(aliases_)
#endif

#else // this attribute is not supported
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS(type_, name_, aliases_)
#endif

#else // no __has_attribute
#define DETAIL_MYLIB_CANONICAL_TYPEDEFS(type_, name_, aliases_)
#endif
```

</details>

You can then use it like this:

```cpp
MYLIB_CANONICAL_TYPEDEFS( (template <typename T> struct), basic_string,
    (string, basic_string<char>)
    (wstring, basic_string<wchar_t>)
)
```

This should be done before defining the class template, like in the examples above.

This macro automatically does
```cpp
template <typename T> struct basic_string;
using string = basic_string<char>;
using wstring = basic_string<wchar_t>;
```
So you don't need to write those parts, just use the macro.

This macro automatically disables itself for other compilers, only having effect on Clang and by extension on the binding generator. If you don't want this to affect your Clang builds (the effect is changing the type names in the error messages, and perhaps in the type name strings), you can change the `#if` condition accodingly (define your own macro when running the parser, check if in the `#if`).

## Our `mrbind::preferred_name`

Clang's `preferred_name` has one notable issue, it breaks when applied to a full specialization of a template. (E.g. if you do `template <> struct basic_string {....};`, the example above stops working.)

MRBind has a custom attribute `mrbind::preferred_name` that addresses this specific usecase:

```cpp
#if __clang__ // Or your custom macro to check if the parser is running. But this attribute has no effect in Clang the compiler anyway.
#define MYLIB_PREFERRED_NAME(...) __attribute__((__annotate__(DETAIL_MYLIB_PREFERRED_NAME(mrbind::preferred_name=__VA_ARGS__))))
#define DETAIL_MYLIB_PREFERRED_NAME(...) #__VA_ARGS__
#else
#define MYLIB_PREFERRED_NAME(...)
#endif
```

Now you can add this macro to your full specializations:
```cpp
namespace mylib
{
    template <typename T>
    struct basic_string
    {
        // ...
    };

    template <>
    struct
        MYLIB_PREFERRED_NAME(mylib::string)
        basic_string<char>
    {
        // ...
    };
}
```
This can be combined with Clang's [`preferred_name`](#clangs-preferred_name), using that for template arguments that don't have full specializations, and this for the full specializations.

This attribute can also be used for non-template classes, if you need that.

> [!IMPORTANT]
> This attribute/macro takes a **fully qualified name**, meaning you must specify all namespaces in its parameter. Failing to do so will cause issues.
