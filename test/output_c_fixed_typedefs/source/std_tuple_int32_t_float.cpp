#define MR_C_BUILD_LIBRARY
#include "std_tuple_int32_t_float.h"

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_std_tuple_int32_t_float *)new std::tuple<int32_t, float>(std::tuple<int32_t, float>());
}

MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple_int32_t_float *)(new std::tuple<int32_t, float>[num_elems]{});
}

MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_ConstructFromAnother(const MR_C_std_tuple_int32_t_float *other)
{
    return (MR_C_std_tuple_int32_t_float *)new std::tuple<int32_t, float>(std::tuple<int32_t, float>(
        (other ? std::tuple<int32_t, float>(*(std::tuple<int32_t, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_int32_t_float_AssignFromAnother(MR_C_std_tuple_int32_t_float *_this, const MR_C_std_tuple_int32_t_float *other)
{
    (_this ? *(std::tuple<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::tuple<int32_t, float>(*(std::tuple<int32_t, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_tuple_int32_t_float_Destroy(const MR_C_std_tuple_int32_t_float *_this)
{
    delete ((const std::tuple<int32_t, float> *)_this);
}

void MR_C_std_tuple_int32_t_float_DestroyArray(const MR_C_std_tuple_int32_t_float *_this)
{
    delete[] ((const std::tuple<int32_t, float> *)_this);
}

const MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_OffsetPtr(const MR_C_std_tuple_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_int32_t_float *)(((const std::tuple<int32_t, float> *)ptr) + i);
}

MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_OffsetMutablePtr(MR_C_std_tuple_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_int32_t_float *)(((std::tuple<int32_t, float> *)ptr) + i);
}

MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_Construct(int32_t _0, float _1)
{
    return (MR_C_std_tuple_int32_t_float *)new std::tuple<int32_t, float>(std::tuple<int32_t, float>(
        _0,
        _1
    ));
}

const int32_t *MR_C_std_tuple_int32_t_float_Get_int32_t(const MR_C_std_tuple_int32_t_float *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int32_t *MR_C_std_tuple_int32_t_float_GetMutable_int32_t(MR_C_std_tuple_int32_t_float *_this)
{
    return &(std::get<0>((_this ? *(std::tuple<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_int32_t_float_Get_float(const MR_C_std_tuple_int32_t_float *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_int32_t_float_GetMutable_float(MR_C_std_tuple_int32_t_float *_this)
{
    return &(std::get<1>((_this ? *(std::tuple<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

