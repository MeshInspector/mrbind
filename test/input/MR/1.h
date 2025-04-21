// #include <iostream>

#include "2.h"

namespace MR
{
    enum E {e1};

    inline int global;
    inline E global2;

    int foo(int a, int b = 42);
    E foo(E a, E b = E::e1);

    int bar(int &a, int &b = global);
    E bar(E &a, E &b = global2);
}
