#pragma once

namespace MR::OmittingTargsAndQuals
{
    // Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
    //   and omit qualifiers for friend functions (since they are normally only accessible via ADL).

    template <typename T>
    struct A
    {
        void operator+();
        template <typename U> void operator-(A<U>);

        friend void a(A);
        template <typename U> friend void b(A, A<U>);
    };

    void operator*(A<int>);
    template <typename T> void operator~(A<T>);

    void c(A<int>);
    template <typename T> void d(A<T>);

    inline void inst()
    {
        A<int> x;
        A<float> y;
        +x;
        x - y;
        a(x);
        b(x, y);
        *x;
        ~x;
        c(x);
        d(x);
    }
}
