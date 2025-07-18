#include "MR/test_tags.h"

#include <input/MR/test_tags.h>


void MR_Tags_foo_1_std_less_int(void)
{
    ::MR::Tags::foo(
        std::less<int>{}
    );
}

void MR_Tags_foo_1_std_less_void(void)
{
    ::MR::Tags::foo(
        std::less<void>{}
    );
}

void MR_Tags_foo_1_std_greater_int(void)
{
    ::MR::Tags::foo(
        std::greater<int>{}
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

