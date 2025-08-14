#pragma once

namespace MR::Deprecation
{
    [[deprecated]] inline void foo() {}
    [[deprecated("Some \\message\n")]] inline void bar() {}
}
