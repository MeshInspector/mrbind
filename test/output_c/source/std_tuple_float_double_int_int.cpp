#define MR_C_BUILD_LIBRARY
#include "std_tuple_float_double_int_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_float_double_int_int *)(new std::tuple<float, double, int, int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_ConstructFromAnother(const MR_C_std_tuple_float_double_int_int *other)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<float, double, int, int>(*(std::tuple<float, double, int, int> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_float_double_int_int_AssignFromAnother(MR_C_std_tuple_float_double_int_int *_this, const MR_C_std_tuple_float_double_int_int *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<float, double, int, int> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<float, double, int, int>(*(std::tuple<float, double, int, int> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_float_double_int_int_Destroy(const MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<float, double, int, int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_float_double_int_int_DestroyArray(const MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<float, double, int, int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_OffsetPtr(const MR_C_std_tuple_float_double_int_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple_float_double_int_int *)(((const std::tuple<float, double, int, int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_OffsetMutablePtr(MR_C_std_tuple_float_double_int_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_float_double_int_int *)(((std::tuple<float, double, int, int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_Construct(float _0, double _1, int _2, int _3)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>(
        _0,
        _1,
        _2,
        _3
    ));
    ) // MRBINDC_TRY
}

const float *MR_C_std_tuple_float_double_int_int_get_float(const MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

float *MR_C_std_tuple_float_double_int_int_get_float_mut(MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

const double *MR_C_std_tuple_float_double_int_int_get_double(const MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

double *MR_C_std_tuple_float_double_int_int_get_double_mut(MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

const int *MR_C_std_tuple_float_double_int_int_get_int_2(const MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<2>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

int *MR_C_std_tuple_float_double_int_int_get_int_2_mut(MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<2>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

const int *MR_C_std_tuple_float_double_int_int_get_int_3(const MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<3>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

int *MR_C_std_tuple_float_double_int_int_get_int_3_mut(MR_C_std_tuple_float_double_int_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<3>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<float, double, int, int> *)(_this))));
    ) // MRBINDC_TRY
}

