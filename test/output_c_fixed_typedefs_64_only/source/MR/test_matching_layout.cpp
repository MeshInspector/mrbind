#define MR_C_BUILD_LIBRARY
#include "MR/test_matching_layout.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_matching_layout.h>

#include <cstddef>
#include <memory>


const int *MR_MatchingLayout_A_Get_x(void)
{
    return std::addressof(MR::MatchingLayout::A::x);
}

void MR_MatchingLayout_A_Set_x(int value)
{
    MR::MatchingLayout::A::x = value;
}

int *MR_MatchingLayout_A_GetMutable_x(void)
{
    return std::addressof(MR::MatchingLayout::A::x);
}

MR_MatchingLayout_B MR_MatchingLayout_B_DefaultConstruct(void)
{
    return MRBINDC_BIT_CAST((MR_MatchingLayout_B), MR::MatchingLayout::B());
}

MR_MatchingLayout_B *MR_MatchingLayout_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_MatchingLayout_B *)(new MR::MatchingLayout::B[num_elems]{});
}

MR_MatchingLayout_B MR_MatchingLayout_foo(void)
{
    return MRBINDC_BIT_CAST((MR_MatchingLayout_B), ::MR::MatchingLayout::foo());
}

void MR_MatchingLayout_bar(MR_MatchingLayout_B _1)
{
    ::MR::MatchingLayout::bar(
        MRBINDC_BIT_CAST((MR::MatchingLayout::B), _1)
    );
}

void MR_MatchingLayout_baz(const MR_MatchingLayout_B *_1)
{
    using namespace MR;
    using namespace MatchingLayout;
    ::MR::MatchingLayout::baz(
        (_1 ? MRBINDC_BIT_CAST((MR::MatchingLayout::B), *_1) : MR::MatchingLayout::B(MR::MatchingLayout::B{}))
    );
}

MR_MatchingLayout_B *MR_MatchingLayout_bleh(MR_MatchingLayout_B *_1)
{
    return (MR_MatchingLayout_B *)(::MR::MatchingLayout::bleh(
        ((MR::MatchingLayout::B *)_1)
    ));
}

