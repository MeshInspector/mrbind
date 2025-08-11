#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_tags.h"

#include <input/MR/test_tags.h>

#include <cstdint>
#include <functional>


void MR_Tags_foo_1_std_less_int32_t(void)
{
    ::MR::Tags::foo(
        std::less<int32_t>{}
    );
}

void MR_Tags_foo_1_std_less_void(void)
{
    ::MR::Tags::foo(
        std::less<void>{}
    );
}

void MR_Tags_foo_1_std_greater_int32_t(void)
{
    ::MR::Tags::foo(
        std::greater<int32_t>{}
    );
}

void MR_Tags_foo_1_std_greater_void(void)
{
    ::MR::Tags::foo(
        std::greater<void>{}
    );
}

void MR_Tags_foo_0(void)
{
    ::MR::Tags::foo();
}

