#define MR_C_BUILD_LIBRARY
#include "std_pair_const_int_float.h"

#include <cstddef>
#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstruct(void)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>());
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_const_int_float *)(new std::pair<const int, float>[num_elems]{});
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_ConstructFromAnother(const MR_C_std_pair_const_int_float *other)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<const int, float>(*(std::pair<const int, float> *)other))
    ));
}

void MR_C_std_pair_const_int_float_Destroy(const MR_C_std_pair_const_int_float *_this)
{
    delete ((const std::pair<const int, float> *)_this);
}

void MR_C_std_pair_const_int_float_DestroyArray(const MR_C_std_pair_const_int_float *_this)
{
    delete[] ((const std::pair<const int, float> *)_this);
}

const MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_OffsetPtr(const MR_C_std_pair_const_int_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_const_int_float *)(((const std::pair<const int, float> *)ptr) + i);
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_OffsetMutablePtr(MR_C_std_pair_const_int_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_const_int_float *)(((std::pair<const int, float> *)ptr) + i);
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_Construct(int first, float second)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>(
        first,
        second
    ));
}

const int *MR_C_std_pair_const_int_float_First(const MR_C_std_pair_const_int_float *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int, float> *)(_this)).first);
}

const float *MR_C_std_pair_const_int_float_Second(const MR_C_std_pair_const_int_float *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int, float> *)(_this)).second);
}

float *MR_C_std_pair_const_int_float_MutableSecond(MR_C_std_pair_const_int_float *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<const int, float> *)(_this)).second);
}

