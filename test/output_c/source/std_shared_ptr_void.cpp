#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_void.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)(new std::shared_ptr<void>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_void *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<void>);
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<void>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<void>) MRBINDC_CLASSARG_END(other, std::shared_ptr<void>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_void_AssignFromAnother(MR_C_std_shared_ptr_void *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_void *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<void>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<void>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<void>) MRBINDC_CLASSARG_END(other, std::shared_ptr<void>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_void_Destroy(const MR_C_std_shared_ptr_void *_this)
{
    MRBINDC_TRY(
    delete ((const std::shared_ptr<void> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_void_DestroyArray(const MR_C_std_shared_ptr_void *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::shared_ptr<void> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_OffsetPtr(const MR_C_std_shared_ptr_void *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_shared_ptr_void *)(((const std::shared_ptr<void> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_OffsetMutablePtr(MR_C_std_shared_ptr_void *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)(((std::shared_ptr<void> *)ptr) + i);
    ) // MRBINDC_TRY
}

void *MR_C_std_shared_ptr_void_get(const MR_C_std_shared_ptr_void *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<void> *)(_this)).get();
    ) // MRBINDC_TRY
}

bool MR_C_std_shared_ptr_void_has_value(const MR_C_std_shared_ptr_void *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<void> *)(_this)));
    ) // MRBINDC_TRY
}

int MR_C_std_shared_ptr_void_use_count(const MR_C_std_shared_ptr_void *_this)
{
    MRBINDC_TRY(
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<void> *)(_this)).use_count());
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_void_reset(MR_C_std_shared_ptr_void *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)).reset();
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(std::shared_ptr<void>{}, ptr));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_void_AssignNonOwning(MR_C_std_shared_ptr_void *_this, void *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = std::shared_ptr<void>(std::shared_ptr<void>{}, ptr);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, void *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_void_AssignAliasing(MR_C_std_shared_ptr_void *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, void *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
    ) // MRBINDC_TRY
}

