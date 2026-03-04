#define MR_C_BUILD_LIBRARY
#include "std_unique_ptr_MR_StdUniquePtr_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_unique_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)new std::unique_ptr<MR::StdUniquePtr::A>(std::unique_ptr<MR::StdUniquePtr::A>());
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)(new std::unique_ptr<MR::StdUniquePtr::A>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)new std::unique_ptr<MR::StdUniquePtr::A>(std::unique_ptr<MR::StdUniquePtr::A>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<MR::StdUniquePtr::A>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A> *)other)))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(MR_StdUniquePtr_A *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)new std::unique_ptr<MR::StdUniquePtr::A>(std::unique_ptr<MR::StdUniquePtr::A>(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)other)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this, const MR_C_std_unique_ptr_MR_StdUniquePtr_A *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<MR::StdUniquePtr::A>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A> *)other)))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this, MR_StdUniquePtr_A *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).operator=(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)other)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    MRBINDC_TRY(
    delete ((const std::unique_ptr<MR::StdUniquePtr::A> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_DestroyArray(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::unique_ptr<MR::StdUniquePtr::A> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetPtr(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_unique_ptr_MR_StdUniquePtr_A *)(((const std::unique_ptr<MR::StdUniquePtr::A> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetMutablePtr(MR_C_std_unique_ptr_MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)(((std::unique_ptr<MR::StdUniquePtr::A> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_get(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).get());
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_release(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).release());
    ) // MRBINDC_TRY
}

