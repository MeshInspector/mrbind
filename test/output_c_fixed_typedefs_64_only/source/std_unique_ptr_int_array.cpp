#define MR_C_BUILD_LIBRARY
#include "std_unique_ptr_int_array.h"

#include <common.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_int_array *MR_C_std_unique_ptr_int_array_DefaultConstruct(void)
{
    return (MR_C_std_unique_ptr_int_array *)new std::unique_ptr<int[]>(std::unique_ptr<int[]>());
}

MR_C_std_unique_ptr_int_array *MR_C_std_unique_ptr_int_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unique_ptr_int_array *)(new std::unique_ptr<int[]>[num_elems]{});
}

MR_C_std_unique_ptr_int_array *MR_C_std_unique_ptr_int_array_ConstructFromAnother(const MR_C_std_unique_ptr_int_array *other)
{
    return (MR_C_std_unique_ptr_int_array *)new std::unique_ptr<int[]>(std::unique_ptr<int[]>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<int[]>(std::move(*(std::unique_ptr<int[]> *)other)))
    ));
}

MR_C_std_unique_ptr_int_array *MR_C_std_unique_ptr_int_array_ConstructFrom(int *other)
{
    return (MR_C_std_unique_ptr_int_array *)new std::unique_ptr<int[]>(std::unique_ptr<int[]>(
        std::unique_ptr<int[]>(other)
    ));
}

void MR_C_std_unique_ptr_int_array_AssignFromAnother(MR_C_std_unique_ptr_int_array *_this, const MR_C_std_unique_ptr_int_array *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<int[]> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<int[]>(std::move(*(std::unique_ptr<int[]> *)other)))
    );
}

void MR_C_std_unique_ptr_int_array_AssignFrom(MR_C_std_unique_ptr_int_array *_this, int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<int[]> *)(_this)).operator=(
        std::unique_ptr<int[]>(other)
    );
}

void MR_C_std_unique_ptr_int_array_Destroy(const MR_C_std_unique_ptr_int_array *_this)
{
    delete ((const std::unique_ptr<int[]> *)_this);
}

void MR_C_std_unique_ptr_int_array_DestroyArray(const MR_C_std_unique_ptr_int_array *_this)
{
    delete[] ((const std::unique_ptr<int[]> *)_this);
}

const MR_C_std_unique_ptr_int_array *MR_C_std_unique_ptr_int_array_OffsetPtr(const MR_C_std_unique_ptr_int_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unique_ptr_int_array *)(((const std::unique_ptr<int[]> *)ptr) + i);
}

MR_C_std_unique_ptr_int_array *MR_C_std_unique_ptr_int_array_OffsetMutablePtr(MR_C_std_unique_ptr_int_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_unique_ptr_int_array *)(((std::unique_ptr<int[]> *)ptr) + i);
}

int *MR_C_std_unique_ptr_int_array_Get(const MR_C_std_unique_ptr_int_array *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unique_ptr<int[]> *)(_this)).get();
}

int *MR_C_std_unique_ptr_int_array_At(const MR_C_std_unique_ptr_int_array *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unique_ptr<int[]> *)(_this))[i]);
}

int *MR_C_std_unique_ptr_int_array_Release(MR_C_std_unique_ptr_int_array *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<int[]> *)(_this)).release();
}

