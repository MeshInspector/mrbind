#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_pair_int32_t_float.h"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_int32_t_float *MR_C_std_pair_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_std_pair_int32_t_float *)new std::pair<int32_t, float>(std::pair<int32_t, float>());
}

MR_C_std_pair_int32_t_float *MR_C_std_pair_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_int32_t_float *)(new std::pair<int32_t, float>[num_elems]{});
}

MR_C_std_pair_int32_t_float *MR_C_std_pair_int32_t_float_ConstructFromAnother(const MR_C_std_pair_int32_t_float *other)
{
    return (MR_C_std_pair_int32_t_float *)new std::pair<int32_t, float>(std::pair<int32_t, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<int32_t, float>(*(std::pair<int32_t, float> *)other))
    ));
}

void MR_C_std_pair_int32_t_float_AssignFromAnother(MR_C_std_pair_int32_t_float *_this, const MR_C_std_pair_int32_t_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<int32_t, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<int32_t, float>(*(std::pair<int32_t, float> *)other))
    );
}

void MR_C_std_pair_int32_t_float_Destroy(const MR_C_std_pair_int32_t_float *_this)
{
    delete ((const std::pair<int32_t, float> *)_this);
}

void MR_C_std_pair_int32_t_float_DestroyArray(const MR_C_std_pair_int32_t_float *_this)
{
    delete[] ((const std::pair<int32_t, float> *)_this);
}

const MR_C_std_pair_int32_t_float *MR_C_std_pair_int32_t_float_OffsetPtr(const MR_C_std_pair_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_int32_t_float *)(((const std::pair<int32_t, float> *)ptr) + i);
}

MR_C_std_pair_int32_t_float *MR_C_std_pair_int32_t_float_OffsetMutablePtr(MR_C_std_pair_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_int32_t_float *)(((std::pair<int32_t, float> *)ptr) + i);
}

MR_C_std_pair_int32_t_float *MR_C_std_pair_int32_t_float_Construct(int32_t first, float second)
{
    return (MR_C_std_pair_int32_t_float *)new std::pair<int32_t, float>(std::pair<int32_t, float>(
        first,
        second
    ));
}

const int32_t *MR_C_std_pair_int32_t_float_First(const MR_C_std_pair_int32_t_float *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int32_t, float> *)(_this)).first);
}

int32_t *MR_C_std_pair_int32_t_float_MutableFirst(MR_C_std_pair_int32_t_float *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<int32_t, float> *)(_this)).first);
}

const float *MR_C_std_pair_int32_t_float_Second(const MR_C_std_pair_int32_t_float *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int32_t, float> *)(_this)).second);
}

float *MR_C_std_pair_int32_t_float_MutableSecond(MR_C_std_pair_int32_t_float *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<int32_t, float> *)(_this)).second);
}

