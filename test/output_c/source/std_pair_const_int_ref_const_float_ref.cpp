#define MR_C_BUILD_LIBRARY
#include "std_pair_const_int_ref_const_float_ref.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_ConstructFromAnother(const MR_C_std_pair_const_int_ref_const_float_ref *other)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(std::pair<const int &, const float &>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<const int &, const float &>(*(std::pair<const int &, const float &> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_pair_const_int_ref_const_float_ref_Destroy(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    MRBINDC_TRY(
    delete ((const std::pair<const int &, const float &> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_pair_const_int_ref_const_float_ref_DestroyArray(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::pair<const int &, const float &> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_OffsetPtr(const MR_C_std_pair_const_int_ref_const_float_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_const_int_ref_const_float_ref *)(((const std::pair<const int &, const float &> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_OffsetMutablePtr(MR_C_std_pair_const_int_ref_const_float_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_ref_const_float_ref *)(((std::pair<const int &, const float &> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_Construct(const int *first, const float *second)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(std::pair<const int &, const float &>(
        ((first ? void() : throw std::runtime_error("Parameter `first` can not be null.")), *first),
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), *second)
    ));
    ) // MRBINDC_TRY
}

const int *MR_C_std_pair_const_int_ref_const_float_ref_first(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int &, const float &> *)(_this)).first);
    ) // MRBINDC_TRY
}

const float *MR_C_std_pair_const_int_ref_const_float_ref_second(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int &, const float &> *)(_this)).second);
    ) // MRBINDC_TRY
}

