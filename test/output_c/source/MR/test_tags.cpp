#define MR_C_BUILD_LIBRARY
#include "MR/test_tags.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_tags.h>

#include <functional>


void MR_Tags_foo_1_std_less_int(void)
{
    MRBINDC_TRY(
    ::MR::Tags::foo(
        std::less<int>{}
    );
    ) // MRBINDC_TRY
}

void MR_Tags_foo_1_std_less_void(void)
{
    MRBINDC_TRY(
    ::MR::Tags::foo(
        std::less<void>{}
    );
    ) // MRBINDC_TRY
}

void MR_Tags_foo_1_std_greater_int(void)
{
    MRBINDC_TRY(
    ::MR::Tags::foo(
        std::greater<int>{}
    );
    ) // MRBINDC_TRY
}

void MR_Tags_foo_1_std_greater_void(void)
{
    MRBINDC_TRY(
    ::MR::Tags::foo(
        std::greater<void>{}
    );
    ) // MRBINDC_TRY
}

void MR_Tags_foo_0(void)
{
    MRBINDC_TRY(
    ::MR::Tags::foo();
    ) // MRBINDC_TRY
}

