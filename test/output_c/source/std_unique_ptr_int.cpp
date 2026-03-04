#define MR_C_BUILD_LIBRARY
#include "std_unique_ptr_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_int *)new std::unique_ptr<int>(std::unique_ptr<int>());
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_int *)(new std::unique_ptr<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_ConstructFromAnother(const MR_C_std_unique_ptr_int *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_int *)new std::unique_ptr<int>(std::unique_ptr<int>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<int>(std::move(*(std::unique_ptr<int> *)other)))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_ConstructFrom(int *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_int *)new std::unique_ptr<int>(std::unique_ptr<int>(
        std::unique_ptr<int>(other)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_int_AssignFromAnother(MR_C_std_unique_ptr_int *_this, const MR_C_std_unique_ptr_int *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<int> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<int>(std::move(*(std::unique_ptr<int> *)other)))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_int_AssignFrom(MR_C_std_unique_ptr_int *_this, int *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<int> *)(_this)).operator=(
        std::unique_ptr<int>(other)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_int_Destroy(const MR_C_std_unique_ptr_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::unique_ptr<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_int_DestroyArray(const MR_C_std_unique_ptr_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::unique_ptr<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_OffsetPtr(const MR_C_std_unique_ptr_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_unique_ptr_int *)(((const std::unique_ptr<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_OffsetMutablePtr(MR_C_std_unique_ptr_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_int *)(((std::unique_ptr<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

int *MR_C_std_unique_ptr_int_get(const MR_C_std_unique_ptr_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unique_ptr<int> *)(_this)).get();
    ) // MRBINDC_TRY
}

int *MR_C_std_unique_ptr_int_release(MR_C_std_unique_ptr_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<int> *)(_this)).release();
    ) // MRBINDC_TRY
}

