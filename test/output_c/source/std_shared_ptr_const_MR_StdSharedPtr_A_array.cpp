#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_const_MR_StdSharedPtr_A_array.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<const MR::StdSharedPtr::A[]>());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)(new std::shared_ptr<const MR::StdSharedPtr::A[]>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<const MR::StdSharedPtr::A[]>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<const MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A[]>), std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A[]>), std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A[]>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignFromAnother(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<const MR::StdSharedPtr::A[]>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A[]>), std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A[]>), std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A[]>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    delete ((const std::shared_ptr<const MR::StdSharedPtr::A[]> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DestroyArray(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::shared_ptr<const MR::StdSharedPtr::A[]> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_OffsetPtr(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)(((const std::shared_ptr<const MR::StdSharedPtr::A[]> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_OffsetMutablePtr(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)(((std::shared_ptr<const MR::StdSharedPtr::A[]> *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_get(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    return (const MR_StdSharedPtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)).get());
    ) // MRBINDC_TRY
}

bool MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_has_value(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_at(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_StdSharedPtr_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this))[i]);
    ) // MRBINDC_TRY
}

int MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_use_count(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)).use_count());
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_reset(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)).reset();
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromSize(size_t size)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::make_shared<MR::StdSharedPtr::A[]>(
        size
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Construct(const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<const MR::StdSharedPtr::A[]>(
        std::unique_ptr<const MR::StdSharedPtr::A[]>((const MR::StdSharedPtr::A *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Assign(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[]>(
        std::unique_ptr<const MR::StdSharedPtr::A[]>((const MR::StdSharedPtr::A *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructNonOwning(const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<void>{}, ((const MR::StdSharedPtr::A *)ptr)));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignNonOwning(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<void>{}, ((const MR::StdSharedPtr::A *)ptr));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ptr, std::shared_ptr<MR::StdSharedPtr::A[]>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<const MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::StdSharedPtr::A[]>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignFromMutable(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ptr, std::shared_ptr<MR::StdSharedPtr::A[]>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::StdSharedPtr::A[]>));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(std::shared_ptr<const MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::StdSharedPtr::A *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignAliasing(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::StdSharedPtr::A *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConvertTo_MR_C_std_shared_ptr_const_void(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this))));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignTo_MR_C_std_shared_ptr_const_void(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_std_shared_ptr_const_void *_target)
{
    MRBINDC_TRY(
    ((_target ? void() : throw std::runtime_error("Parameter `_target` can not be null.")), *(std::shared_ptr<const void> *)(_target)) = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[]> *)(_this));
    ) // MRBINDC_TRY
}

