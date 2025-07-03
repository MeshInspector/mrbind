#pragma once

namespace MR::SignatureFilters
{
    struct A {};
    struct B {};

    void foo(A);
    A foo();
    void foo2(A &);
    A &foo2();
    void foo3(A &&);
    A &&foo3();
    void foo4(const A &);
    const A &foo4();
    void foo5(const A &&);
    const A &&foo5();

    void bar(B);
    B bar();
    void bar2(B &);
    B &bar2();
    void bar3(B &&);
    B &&bar3();
    void bar4(const B &);
    const B &bar4();
    void bar5(const B &&);
    const B &&bar5();

    template <typename T>
    struct AA {};

    const AA<int> &bleh();

    struct Blah
    {
        A a;
        B b;
        AA<int> aa;
    };
}
