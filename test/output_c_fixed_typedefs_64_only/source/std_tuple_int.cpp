#define MR_C_BUILD_LIBRARY
#include "std_tuple_int.h"

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_int *MR_C_std_tuple_int_DefaultConstruct(void)
{
    return (MR_C_std_tuple_int *)new std::tuple<int>(std::tuple<int>());
}

MR_C_std_tuple_int *MR_C_std_tuple_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple_int *)(new std::tuple<int>[num_elems]{});
}

MR_C_std_tuple_int *MR_C_std_tuple_int_ConstructFromAnother(const MR_C_std_tuple_int *other)
{
    return (MR_C_std_tuple_int *)new std::tuple<int>(std::tuple<int>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<int>(*(std::tuple<int> *)other))
    ));
}

void MR_C_std_tuple_int_AssignFromAnother(MR_C_std_tuple_int *_this, const MR_C_std_tuple_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<int> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<int>(*(std::tuple<int> *)other))
    );
}

void MR_C_std_tuple_int_Destroy(const MR_C_std_tuple_int *_this)
{
    delete ((const std::tuple<int> *)_this);
}

void MR_C_std_tuple_int_DestroyArray(const MR_C_std_tuple_int *_this)
{
    delete[] ((const std::tuple<int> *)_this);
}

const MR_C_std_tuple_int *MR_C_std_tuple_int_OffsetPtr(const MR_C_std_tuple_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_int *)(((const std::tuple<int> *)ptr) + i);
}

MR_C_std_tuple_int *MR_C_std_tuple_int_OffsetMutablePtr(MR_C_std_tuple_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_int *)(((std::tuple<int> *)ptr) + i);
}

MR_C_std_tuple_int *MR_C_std_tuple_int_Construct(int _0)
{
    return (MR_C_std_tuple_int *)new std::tuple<int>(std::tuple<int>(
        _0
    ));
}

const int *MR_C_std_tuple_int_get_int(const MR_C_std_tuple_int *_this)
{
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int> *)(_this))));
}

int *MR_C_std_tuple_int_get_int_mut(MR_C_std_tuple_int *_this)
{
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<int> *)(_this))));
}

