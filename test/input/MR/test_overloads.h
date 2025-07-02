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
}
