#define MR_C_BUILD_LIBRARY
#include "MR/test_std_tuple_like.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_tuple_like.h>

#include <stdexcept>
#include <tuple>
#include <utility>


void MR_StdTupleLike_SetPair(const MR_C_std_pair_int_float *_1)
{
    MRBINDC_TRY(
    ::MR::StdTupleLike::SetPair(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::pair<int, float>(*(std::pair<int, float> *)_1))
    );
    ) // MRBINDC_TRY
}

MR_C_std_pair_int_float *MR_StdTupleLike_GetPair(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_float *)new std::pair<int, float>(::MR::StdTupleLike::GetPair());
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_float *MR_StdTupleLike_GetPair2(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(::MR::StdTupleLike::GetPair2());
    ) // MRBINDC_TRY
}

MR_C_std_pair_int_ref_float_ref *MR_StdTupleLike_GetPair3(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_ref_float_ref *)new std::pair<int &, float &>(::MR::StdTupleLike::GetPair3());
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_StdTupleLike_GetPair4(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(::MR::StdTupleLike::GetPair4());
    ) // MRBINDC_TRY
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_StdTupleLike_GetPair5(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(::MR::StdTupleLike::GetPair5());
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetPair6(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)new std::pair<const int &&, const float &&>(::MR::StdTupleLike::GetPair6());
    ) // MRBINDC_TRY
}

void MR_StdTupleLike_SetTuple(const MR_C_std_tuple_int_float *_1)
{
    MRBINDC_TRY(
    ::MR::StdTupleLike::SetTuple(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::tuple<int, float>(*(std::tuple<int, float> *)_1))
    );
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_float *MR_StdTupleLike_GetTuple(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(::MR::StdTupleLike::GetTuple());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetTuple2(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>(::MR::StdTupleLike::GetTuple2());
    ) // MRBINDC_TRY
}

MR_C_std_tuple *MR_StdTupleLike_GetTuple7(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple *)new std::tuple<>(::MR::StdTupleLike::GetTuple7());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_float_double_int_int *MR_StdTupleLike_GetTuple8(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(::MR::StdTupleLike::GetTuple8());
    ) // MRBINDC_TRY
}

