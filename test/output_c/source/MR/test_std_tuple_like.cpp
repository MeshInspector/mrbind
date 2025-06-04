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

MR_C_std_pair_const_int_float *MR_StdTupleLike_GetPair2(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(MR::StdTupleLike::GetPair2());
}

MR_C_std_pair_int_ref_float_ref *MR_StdTupleLike_GetPair3(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_pair_int_ref_float_ref *)new std::pair<int &, float &>(MR::StdTupleLike::GetPair3());
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_StdTupleLike_GetPair4(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(MR::StdTupleLike::GetPair4());
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_StdTupleLike_GetPair5(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(MR::StdTupleLike::GetPair5());
}

MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetPair6(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)new std::pair<const int &&, const float &&>(MR::StdTupleLike::GetPair6());
}

void MR_StdTupleLike_SetTuple(MR_C_PassBy _1_pass_by, MR_C_std_tuple_int_float *_1)
{
    using namespace MR;
    using namespace StdTupleLike;
    MR::StdTupleLike::SetTuple(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::tuple<int, float>) MRBINDC_CLASSARG_COPY(_1, std::tuple<int, float>) MRBINDC_CLASSARG_MOVE(_1, std::tuple<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, std::tuple<int, float>) MRBINDC_CLASSARG_END(_1, std::tuple<int, float>))
    );
}

MR_C_std_tuple_int_float *MR_StdTupleLike_GetTuple(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(MR::StdTupleLike::GetTuple());
}

MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetTuple2(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>(MR::StdTupleLike::GetTuple2());
}

MR_C_std_tuple_ *MR_StdTupleLike_GetTuple7(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_tuple_ *)new std::tuple<>(MR::StdTupleLike::GetTuple7());
}

MR_C_std_tuple_float_double_int_int *MR_StdTupleLike_GetTuple8(void)
{
    using namespace MR;
    using namespace StdTupleLike;
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(MR::StdTupleLike::GetTuple8());
}

