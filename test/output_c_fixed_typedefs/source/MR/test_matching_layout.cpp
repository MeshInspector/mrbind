#include "MR/test_matching_layout.h"

#include <input/MR/test_matching_layout.h>

#include <bit>


MR_MatchingLayout_B MR_MatchingLayout_B_DefaultConstruct(void)
{
    return std::bit_cast<MR_MatchingLayout_B>(MR::MatchingLayout::B());
}

MR_MatchingLayout_B *MR_MatchingLayout_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_MatchingLayout_B *)(new MR::MatchingLayout::B[num_elems]{});
}

MR_MatchingLayout_B MR_MatchingLayout_foo(void)
{
    return std::bit_cast<MR_MatchingLayout_B>(::MR::MatchingLayout::foo());
}

void MR_MatchingLayout_bar(MR_MatchingLayout_B _1)
{
    ::MR::MatchingLayout::bar(
        std::bit_cast<MR::MatchingLayout::B>(_1)
    );
}

void MR_MatchingLayout_baz(const MR_MatchingLayout_B *_1)
{
    using namespace MR;
    using namespace MatchingLayout;
    ::MR::MatchingLayout::baz(
        (_1 ? std::bit_cast<MR::MatchingLayout::B>(*_1) : MR::MatchingLayout::B(MR::MatchingLayout::B{}))
    );
}

MR_MatchingLayout_B *MR_MatchingLayout_bleh(MR_MatchingLayout_B *_1)
{
    return (MR_MatchingLayout_B *)(::MR::MatchingLayout::bleh(
        ((MR::MatchingLayout::B *)_1)
    ));
}

