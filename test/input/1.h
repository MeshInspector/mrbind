template <typename T> struct A {};

namespace MR
{
    __attribute__((__annotate__(("mrbind::instantiate_only")))) void foo(A<int>);
    void bar(A<float>);
    using B __attribute__((__annotate__(("mrbind::instantiate_only")))) = A<char>;
}
