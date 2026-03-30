#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_const_MR_StdSharedPtr_A_array_42.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)(new std::shared_ptr<const MR::StdSharedPtr::A[42]>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromAnother(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Destroy(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    delete ((const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DestroyArray(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_OffsetPtr(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)(((const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_OffsetMutablePtr(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)(((std::shared_ptr<const MR::StdSharedPtr::A[42]> *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_get(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    return (const MR_StdSharedPtr_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).get());
    ) // MRBINDC_TRY
}

bool MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_has_value(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)));
    ) // MRBINDC_TRY
}

int MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_use_count(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).use_count());
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_reset(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).reset();
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct(const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::unique_ptr<const MR::StdSharedPtr::A[]>((const MR::StdSharedPtr::A *)ptr).release()));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Assign(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::unique_ptr<const MR::StdSharedPtr::A[]>((const MR::StdSharedPtr::A *)ptr).release());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning(const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<void>{}, ((const MR::StdSharedPtr::A *)ptr)));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignNonOwning(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<void>{}, ((const MR::StdSharedPtr::A *)ptr));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ptr, std::shared_ptr<MR::StdSharedPtr::A[42]>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromMutable(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ptr, std::shared_ptr<MR::StdSharedPtr::A[42]>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::StdSharedPtr::A[42]>));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::StdSharedPtr::A *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignAliasing(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::StdSharedPtr::A *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConvertTo_MR_C_std_shared_ptr_const_void(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this))));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignTo_MR_C_std_shared_ptr_const_void(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, MR_C_std_shared_ptr_const_void *_target)
{
    MRBINDC_TRY(
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<const void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this));
    ) // MRBINDC_TRY
}

