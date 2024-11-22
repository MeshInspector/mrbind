#include <memory>

namespace MR
{
    inline int foo(const std::shared_ptr<const volatile float *const volatile>&&) {return 0;}
    inline float bar() {return 0;}
}
