#include <memory>

namespace MR
{
    inline void foo(int, int *p = {}, long long l = {}, int i = {}) {(void)p; (void)l; (void)i;}
}
