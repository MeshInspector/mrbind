#define MR_C_BUILD_LIBRARY
#include "MR/test_std_tuple_like.h"

#include <input/MR/test_std_tuple_like.h>

#include <stdexcept>
#include <tuple>
#include <utility>


void MR_StdTupleLike_SetPair(const MR_C_std_pair_int_float *_1)
{
    ::MR::StdTupleLike::SetPair(
        (_1 ? std::pair<int, float>(*(std::pair<int, float> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_pair_int_float *MR_StdTupleLike_GetPair(void)
{
    return (MR_C_std_pair_int_float *)new std::pair<int, float>(::MR::StdTupleLike::GetPair());
}

MR_C_std_pair_const_int_float *MR_StdTupleLike_GetPair2(void)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(::MR::StdTupleLike::GetPair2());
}

MR_C_std_pair_int_ref_float_ref *MR_StdTupleLike_GetPair3(void)
{
    return (MR_C_std_pair_int_ref_float_ref *)new std::pair<int &, float &>(::MR::StdTupleLike::GetPair3());
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_StdTupleLike_GetPair4(void)
{
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(::MR::StdTupleLike::GetPair4());
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_StdTupleLike_GetPair5(void)
{
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(::MR::StdTupleLike::GetPair5());
}

MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetPair6(void)
{
    return (MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)new std::pair<const int &&, const float &&>(::MR::StdTupleLike::GetPair6());
}

void MR_StdTupleLike_SetTuple(const MR_C_std_tuple_int_float *_1)
{
    ::MR::StdTupleLike::SetTuple(
        (_1 ? std::tuple<int, float>(*(std::tuple<int, float> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_tuple_int_float *MR_StdTupleLike_GetTuple(void)
{
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(::MR::StdTupleLike::GetTuple());
}

MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetTuple2(void)
{
    return (MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>(::MR::StdTupleLike::GetTuple2());
}

MR_C_std_tuple *MR_StdTupleLike_GetTuple7(void)
{
    return (MR_C_std_tuple *)new std::tuple<>(::MR::StdTupleLike::GetTuple7());
}

MR_C_std_tuple_float_double_int_int *MR_StdTupleLike_GetTuple8(void)
{
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(::MR::StdTupleLike::GetTuple8());
}

