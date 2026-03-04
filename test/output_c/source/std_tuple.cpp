#define MR_C_BUILD_LIBRARY
#include "std_tuple.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple *MR_C_std_tuple_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple *)new std::tuple<>(std::tuple<>());
    ) // MRBINDC_TRY
}

MR_C_std_tuple *MR_C_std_tuple_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple *)(new std::tuple<>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_tuple *MR_C_std_tuple_ConstructFromAnother(const MR_C_std_tuple *other)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple *)new std::tuple<>(std::tuple<>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<>(*(std::tuple<> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_AssignFromAnother(MR_C_std_tuple *_this, const MR_C_std_tuple *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<>(*(std::tuple<> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_Destroy(const MR_C_std_tuple *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_DestroyArray(const MR_C_std_tuple *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple *MR_C_std_tuple_OffsetPtr(const MR_C_std_tuple *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple *)(((const std::tuple<> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple *MR_C_std_tuple_OffsetMutablePtr(MR_C_std_tuple *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple *)(((std::tuple<> *)ptr) + i);
    ) // MRBINDC_TRY
}

