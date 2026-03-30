#define MR_C_BUILD_LIBRARY
#include "std_tuple_int_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_float *)(new std::tuple<int, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_ConstructFromAnother(const MR_C_std_tuple_int_float *other)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::tuple<int, float>(*(std::tuple<int, float> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_float_AssignFromAnother(MR_C_std_tuple_int_float *_this, const MR_C_std_tuple_int_float *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int, float> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::tuple<int, float>(*(std::tuple<int, float> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_float_Destroy(const MR_C_std_tuple_int_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<int, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_float_DestroyArray(const MR_C_std_tuple_int_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<int, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_OffsetPtr(const MR_C_std_tuple_int_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple_int_float *)(((const std::tuple<int, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_OffsetMutablePtr(MR_C_std_tuple_int_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_float *)(((std::tuple<int, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_Construct(int _0, float _1)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>(
        _0,
        _1
    ));
    ) // MRBINDC_TRY
}

const int *MR_C_std_tuple_int_float_get_int(const MR_C_std_tuple_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::tuple<int, float> *)(_this))));
    ) // MRBINDC_TRY
}

int *MR_C_std_tuple_int_float_get_int_mut(MR_C_std_tuple_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int, float> *)(_this))));
    ) // MRBINDC_TRY
}

const float *MR_C_std_tuple_int_float_get_float(const MR_C_std_tuple_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<1>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::tuple<int, float> *)(_this))));
    ) // MRBINDC_TRY
}

float *MR_C_std_tuple_int_float_get_float_mut(MR_C_std_tuple_int_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<1>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int, float> *)(_this))));
    ) // MRBINDC_TRY
}

