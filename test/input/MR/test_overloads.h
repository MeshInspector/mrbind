#pragma once

namespace MR::Overloads
{
    void a(int);
    void a(int, int);

    template <typename T>
    void b();

    extern template void b<int>();
    extern template void b<float>();

    void c(int);
    void c(float);

    void d(char, int, char);
    void d(char, float, char);

    void e(const int &, int &&);
    void e(int &&, int &&);
    void e(int &&, float &&);

    // This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
    //   because that ultimately leads to an ambiguity.
    // So we can only omit cvref if each function has cvref in that parameter).
    void f(float, int);
    void f(int &&, float);
    void f(const int &, float);
}
