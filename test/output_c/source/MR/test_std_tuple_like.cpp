#include "MR/test_std_tuple_like.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_tuple_like.h>


void MR_StdTupleLike_SetPair(MR_C_PassBy _1_pass_by, MR_C_std_pair_int_float *_1)
{
    using namespace MR;
    using namespace StdTupleLike;
    MR::StdTupleLike::SetPair(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::pair<int, float>) MRBINDC_CLASSARG_COPY(_1, std::pair<int, float>) MRBINDC_CLASSARG_MOVE(_1, std::pair<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, std::pair<int, float>) MRBINDC_CLASSARG_END(_1, std::pair<int, float>))
    );
}

MR_C_std_pair_int_float *MR_StdTupleLike_GetPair(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_pair_int_float *)new std::pair<int, float>(MR::StdTupleLike::GetPair());
}

