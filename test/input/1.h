#include <iostream>

namespace MR
{
    inline void foo(int) {std::cout << "1\n";}
    inline void foo(std::istream &) {std::cout << "2\n";}
    inline void foo(float) {std::cout << "3\n";}

    struct A
    {
        A(int) {std::cout << "1\n";}
        A(std::istream &) {std::cout << "2\n";}
        A(float) {std::cout << "3\n";}

        void foo(int) {std::cout << "1\n";}
        void foo(std::istream &) {std::cout << "2\n";}
        void foo(float) {std::cout << "3\n";}
    };
}
