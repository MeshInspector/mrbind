#define MR_C_BUILD_LIBRARY
#include "std_tuple_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_int *MR_C_std_tuple_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int *)new std::tuple<int>(std::tuple<int>());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int *MR_C_std_tuple_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int *)(new std::tuple<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int *MR_C_std_tuple_int_ConstructFromAnother(const MR_C_std_tuple_int *other)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int *)new std::tuple<int>(std::tuple<int>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::tuple<int>(*(std::tuple<int> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_AssignFromAnother(MR_C_std_tuple_int *_this, const MR_C_std_tuple_int *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::tuple<int>(*(std::tuple<int> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_Destroy(const MR_C_std_tuple_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_DestroyArray(const MR_C_std_tuple_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple_int *MR_C_std_tuple_int_OffsetPtr(const MR_C_std_tuple_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple_int *)(((const std::tuple<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int *MR_C_std_tuple_int_OffsetMutablePtr(MR_C_std_tuple_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int *)(((std::tuple<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int *MR_C_std_tuple_int_Construct(int _0)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int *)new std::tuple<int>(std::tuple<int>(
        _0
    ));
    ) // MRBINDC_TRY
}

const int *MR_C_std_tuple_int_get_int(const MR_C_std_tuple_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::tuple<int> *)(_this))));
    ) // MRBINDC_TRY
}

int *MR_C_std_tuple_int_get_int_mut(MR_C_std_tuple_int *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int> *)(_this))));
    ) // MRBINDC_TRY
}

