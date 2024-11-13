#include <vector>

namespace MR
{
    struct A
    {
        float *x = nullptr;
    };

    inline std::vector<int> foo() {return {1,2,3};}

    inline void a(int &out) {out = 42;}
    inline void b(int *out) {out[0] = 1; out[1] = 2; out[2] = 3;}
}
