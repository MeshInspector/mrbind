#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_std_tuple_like.h"

#include <input/MR/test_std_tuple_like.h>

#include <cstdint>
#include <stdexcept>
#include <tuple>
#include <utility>


void MR_StdTupleLike_SetPair(const MR_C_std_pair_int32_t_float *_1)
{
    ::MR::StdTupleLike::SetPair(
        (_1 ? std::pair<int32_t, float>(*(std::pair<int32_t, float> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_pair_int32_t_float *MR_StdTupleLike_GetPair(void)
{
    return (MR_C_std_pair_int32_t_float *)new std::pair<int32_t, float>(::MR::StdTupleLike::GetPair());
}

MR_C_std_pair_const_int32_t_float *MR_StdTupleLike_GetPair2(void)
{
    return (MR_C_std_pair_const_int32_t_float *)new std::pair<const int32_t, float>(::MR::StdTupleLike::GetPair2());
}

MR_C_std_pair_int32_t_ref_float_ref *MR_StdTupleLike_GetPair3(void)
{
    return (MR_C_std_pair_int32_t_ref_float_ref *)new std::pair<int32_t &, float &>(::MR::StdTupleLike::GetPair3());
}

MR_C_std_pair_const_int32_t_ref_const_float_ref *MR_StdTupleLike_GetPair4(void)
{
    return (MR_C_std_pair_const_int32_t_ref_const_float_ref *)new std::pair<const int32_t &, const float &>(::MR::StdTupleLike::GetPair4());
}

MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *MR_StdTupleLike_GetPair5(void)
{
    return (MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *)new std::pair<int32_t &&, float &&>(::MR::StdTupleLike::GetPair5());
}

MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetPair6(void)
{
    return (MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref *)new std::pair<const int32_t &&, const float &&>(::MR::StdTupleLike::GetPair6());
}

void MR_StdTupleLike_SetTuple(const MR_C_std_tuple_int32_t_float *_1)
{
    ::MR::StdTupleLike::SetTuple(
        (_1 ? std::tuple<int32_t, float>(*(std::tuple<int32_t, float> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_tuple_int32_t_float *MR_StdTupleLike_GetTuple(void)
{
    return (MR_C_std_tuple_int32_t_float *)new std::tuple<int32_t, float>(::MR::StdTupleLike::GetTuple());
}

MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetTuple2(void)
{
    return (MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&>(::MR::StdTupleLike::GetTuple2());
}

MR_C_std_tuple *MR_StdTupleLike_GetTuple7(void)
{
    return (MR_C_std_tuple *)new std::tuple<>(::MR::StdTupleLike::GetTuple7());
}

MR_C_std_tuple_float_double_int32_t_int32_t *MR_StdTupleLike_GetTuple8(void)
{
    return (MR_C_std_tuple_float_double_int32_t_int32_t *)new std::tuple<float, double, int32_t, int32_t>(::MR::StdTupleLike::GetTuple8());
}

