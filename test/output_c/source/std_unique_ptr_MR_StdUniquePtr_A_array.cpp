#define MR_C_BUILD_LIBRARY
#include "std_unique_ptr_MR_StdUniquePtr_A_array.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_unique_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)new std::unique_ptr<MR::StdUniquePtr::A[]>(std::unique_ptr<MR::StdUniquePtr::A[]>());
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)(new std::unique_ptr<MR::StdUniquePtr::A[]>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)new std::unique_ptr<MR::StdUniquePtr::A[]>(std::unique_ptr<MR::StdUniquePtr::A[]>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::unique_ptr<MR::StdUniquePtr::A[]>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A[]> *)other)))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(MR_StdUniquePtr_A *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)new std::unique_ptr<MR::StdUniquePtr::A[]>(std::unique_ptr<MR::StdUniquePtr::A[]>(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)other)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::unique_ptr<MR::StdUniquePtr::A[]>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A[]> *)other)))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, MR_StdUniquePtr_A *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this)).operator=(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)other)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    MRBINDC_TRY(
    delete ((const std::unique_ptr<MR::StdUniquePtr::A[]> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DestroyArray(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::unique_ptr<MR::StdUniquePtr::A[]> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetPtr(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)(((const std::unique_ptr<MR::StdUniquePtr::A[]> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetMutablePtr(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)(((std::unique_ptr<MR::StdUniquePtr::A[]> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this)).get());
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this))[i]);
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this)).release());
    ) // MRBINDC_TRY
}

