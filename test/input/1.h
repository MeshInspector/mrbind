namespace MR
{
    template <typename T> struct __attribute__((__annotate__("mrbind::ignore"))) A {};
    template <typename T> struct A<T *> {};

    using A0 = A<int>;
    using A1 = A<int *>;
}
