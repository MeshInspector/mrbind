#define MR_C_BUILD_LIBRARY
#include "std_pair_const_int32_t_float.h"

#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int32_t_float *MR_C_std_pair_const_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_std_pair_const_int32_t_float *)new std::pair<const int32_t, float>(std::pair<const int32_t, float>());
}

MR_C_std_pair_const_int32_t_float *MR_C_std_pair_const_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_const_int32_t_float *)(new std::pair<const int32_t, float>[num_elems]{});
}

MR_C_std_pair_const_int32_t_float *MR_C_std_pair_const_int32_t_float_ConstructFromAnother(const MR_C_std_pair_const_int32_t_float *other)
{
    return (MR_C_std_pair_const_int32_t_float *)new std::pair<const int32_t, float>(std::pair<const int32_t, float>(
        (other ? std::pair<const int32_t, float>(*(std::pair<const int32_t, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_pair_const_int32_t_float_Destroy(const MR_C_std_pair_const_int32_t_float *_this)
{
    delete ((const std::pair<const int32_t, float> *)_this);
}

void MR_C_std_pair_const_int32_t_float_DestroyArray(const MR_C_std_pair_const_int32_t_float *_this)
{
    delete[] ((const std::pair<const int32_t, float> *)_this);
}

const MR_C_std_pair_const_int32_t_float *MR_C_std_pair_const_int32_t_float_OffsetPtr(const MR_C_std_pair_const_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_const_int32_t_float *)(((const std::pair<const int32_t, float> *)ptr) + i);
}

MR_C_std_pair_const_int32_t_float *MR_C_std_pair_const_int32_t_float_OffsetMutablePtr(MR_C_std_pair_const_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_const_int32_t_float *)(((std::pair<const int32_t, float> *)ptr) + i);
}

MR_C_std_pair_const_int32_t_float *MR_C_std_pair_const_int32_t_float_Construct(int32_t first, float second)
{
    return (MR_C_std_pair_const_int32_t_float *)new std::pair<const int32_t, float>(std::pair<const int32_t, float>(
        first,
        second
    ));
}

const int32_t *MR_C_std_pair_const_int32_t_float_First(const MR_C_std_pair_const_int32_t_float *_this)
{
    return &((_this ? *(const std::pair<const int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

const float *MR_C_std_pair_const_int32_t_float_Second(const MR_C_std_pair_const_int32_t_float *_this)
{
    return &((_this ? *(const std::pair<const int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

float *MR_C_std_pair_const_int32_t_float_MutableSecond(MR_C_std_pair_const_int32_t_float *_this)
{
    return &((_this ? *(std::pair<const int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

