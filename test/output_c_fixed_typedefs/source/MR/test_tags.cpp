#include "MR/test_tags.h"

#include <input/MR/test_tags.h>


void MR_Tags_foo_1_std_less_int32_t(void)
{
    ::MR::Tags::foo(
        std::less<int32_t>{}
    );
}

void MR_Tags_foo_1_const_std_less_void_ref(void)
{
    ::MR::Tags::foo(
        std::less<void>{}
    );
}

void MR_Tags_foo_1_std_greater_int32_t_rvalue_ref(void)
{
    ::MR::Tags::foo(
        std::greater<int32_t>{}
    );
}

void MR_Tags_foo_1_const_std_greater_void_rvalue_ref(void)
{
    ::MR::Tags::foo(
        std::greater<void>{}
    );
}

void MR_Tags_foo_0(void)
{
    ::MR::Tags::foo();
}

