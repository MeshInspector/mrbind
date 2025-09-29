# How to bind specific template specializations?

MRBind will cover all template specializations that it sees, for both classes and functions.

```cpp
template <typename T> struct Vec3 {T x, y, z;};

template <typename T> Vec3<T> foo();

using Vec3f = Vec3<float>; // This binds `Vec3<float>`, even though in the standard C++ it doesn't even instantiate it.

inline void bar()
{
    foo<int>(); // This binds `foo<int>()`, and by extension `Vec3<int>`.
}
```

For classes this is usually desirable. Notice how having `using Vec3f = Vec3<float>;` is enough to bind `Vec3<float>` (you might also want to use the [`preferred_name`](/docs/customizing_type_names.md) attribute here).

Note that when a class is instnatiated, MRBind also implicitly instantiates all its members (non-template ones), and binds them too.

For functions this implicit instantiation is typically not how you want to instantiate them, it's better to manually list the specializations you want, using the approach explaining below.

## Manually binding specializations

Let's say you have:
```cpp
template <typename T> T foo();
```
...and want to bind it for a known list of types.

To do that, create a macro like this:

```cpp
#ifdef MYLIB_PARSING_FOR_BINDINGS
#define MYLIB_BIND_TEMPLATE(...) extern template __VA_ARGS__;
#else
#define MYLIB_BIND_TEMPLATE(...)
#endif
```
Define `MYLIB_PARSING_FOR_BINDINGS` only when running the parser, via `-DMYLIB_PARSING_FOR_BINDINGS`.

This allows you to do the following:
```cpp
template <typename T> T foo(T x, T y) {return x + y;}

MYLIB_BIND_TEMPLATE( int foo(int x, int y) )
MYLIB_BIND_TEMPLATE( float foo(float x, float y) )
// And so on.
```

This should also work for class templates.

Since we're using `extern template` for a non-intended purpose, this should only be seen by the parser, not during compilation. That's why we need the `#ifdef`.
