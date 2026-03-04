#define MR_C_BUILD_LIBRARY
#include "std_pair_const_int_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>());
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_float *)(new std::pair<const int, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_ConstructFromAnother(const MR_C_std_pair_const_int_float *other)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<const int, float>(*(std::pair<const int, float> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_pair_const_int_float_Destroy(const MR_C_std_pair_const_int_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::pair<const int, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_pair_const_int_float_DestroyArray(const MR_C_std_pair_const_int_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::pair<const int, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_OffsetPtr(const MR_C_std_pair_const_int_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_const_int_float *)(((const std::pair<const int, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_OffsetMutablePtr(MR_C_std_pair_const_int_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_float *)(((std::pair<const int, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_Construct(int first, float second)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>(
        first,
        second
    ));
    ) // MRBINDC_TRY
}

const int *MR_C_std_pair_const_int_float_first(const MR_C_std_pair_const_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int, float> *)(_this)).first);
    ) // MRBINDC_TRY
}

const float *MR_C_std_pair_const_int_float_second(const MR_C_std_pair_const_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int, float> *)(_this)).second);
    ) // MRBINDC_TRY
}

float *MR_C_std_pair_const_int_float_second_mut(MR_C_std_pair_const_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<const int, float> *)(_this)).second);
    ) // MRBINDC_TRY
}

