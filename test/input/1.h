#include <string>

namespace MR
{
    inline void foo(std::string *out = nullptr) {if (out) *out = "Hello!";}
}
