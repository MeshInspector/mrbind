#define MR_C_BUILD_LIBRARY
#include "std_pair_int_rvalue_ref_float_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *other)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(std::pair<int &&, float &&>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::pair<int &&, float &&>(std::move(*(std::pair<int &&, float &&> *)other)))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    MRBINDC_TRY(
    delete ((const std::pair<int &&, float &&> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_DestroyArray(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::pair<int &&, float &&> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_OffsetPtr(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)(((const std::pair<int &&, float &&> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_OffsetMutablePtr(MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)(((std::pair<int &&, float &&> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(int *first, float *second)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(std::pair<int &&, float &&>(
        ((first ? void() : MRBINDC_THROW("Parameter `first` can not be null.", void)), std::move(*first)),
        ((second ? void() : MRBINDC_THROW("Parameter `second` can not be null.", void)), std::move(*second))
    ));
    ) // MRBINDC_TRY
}

int *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_first(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    MRBINDC_TRY(
    return std::addressof(mrbindc_details::unmove(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<int &&, float &&> *)(_this)).first));
    ) // MRBINDC_TRY
}

float *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_second(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    MRBINDC_TRY(
    return std::addressof(mrbindc_details::unmove(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<int &&, float &&> *)(_this)).second));
    ) // MRBINDC_TRY
}

