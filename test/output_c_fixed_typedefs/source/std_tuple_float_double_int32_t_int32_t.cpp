#define MR_C_BUILD_LIBRARY
#include "std_tuple_float_double_int32_t_int32_t.h"

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_tuple_float_double_int32_t_int32_t *)new std::tuple<float, double, int32_t, int32_t>(std::tuple<float, double, int32_t, int32_t>());
}

MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple_float_double_int32_t_int32_t *)(new std::tuple<float, double, int32_t, int32_t>[num_elems]{});
}

MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother(const MR_C_std_tuple_float_double_int32_t_int32_t *other)
{
    return (MR_C_std_tuple_float_double_int32_t_int32_t *)new std::tuple<float, double, int32_t, int32_t>(std::tuple<float, double, int32_t, int32_t>(
        (other ? std::tuple<float, double, int32_t, int32_t>(*(std::tuple<float, double, int32_t, int32_t> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother(MR_C_std_tuple_float_double_int32_t_int32_t *_this, const MR_C_std_tuple_float_double_int32_t_int32_t *other)
{
    (_this ? *(std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::tuple<float, double, int32_t, int32_t>(*(std::tuple<float, double, int32_t, int32_t> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_tuple_float_double_int32_t_int32_t_Destroy(const MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    delete ((const std::tuple<float, double, int32_t, int32_t> *)_this);
}

void MR_C_std_tuple_float_double_int32_t_int32_t_DestroyArray(const MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    delete[] ((const std::tuple<float, double, int32_t, int32_t> *)_this);
}

const MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_OffsetPtr(const MR_C_std_tuple_float_double_int32_t_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_float_double_int32_t_int32_t *)(((const std::tuple<float, double, int32_t, int32_t> *)ptr) + i);
}

MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_OffsetMutablePtr(MR_C_std_tuple_float_double_int32_t_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_float_double_int32_t_int32_t *)(((std::tuple<float, double, int32_t, int32_t> *)ptr) + i);
}

MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_Construct(float _0, double _1, int32_t _2, int32_t _3)
{
    return (MR_C_std_tuple_float_double_int32_t_int32_t *)new std::tuple<float, double, int32_t, int32_t>(std::tuple<float, double, int32_t, int32_t>(
        _0,
        _1,
        _2,
        _3
    ));
}

const float *MR_C_std_tuple_float_double_int32_t_int32_t_Get_float(const MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_float(MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<0>((_this ? *(std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const double *MR_C_std_tuple_float_double_int32_t_int32_t_Get_double(const MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

double *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_double(MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<1>((_this ? *(std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_Get_int32_t_2(const MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<2>((_this ? *(const std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_int32_t_2(MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<2>((_this ? *(std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_Get_int32_t_3(const MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_int32_t_3(MR_C_std_tuple_float_double_int32_t_int32_t *_this)
{
    return &(std::get<3>((_this ? *(std::tuple<float, double, int32_t, int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

