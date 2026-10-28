#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)(new std::shared_ptr<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<int>);
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_AssignFromAnother(MR_C_std_shared_ptr_int *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<int>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_Destroy(const MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::shared_ptr<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_DestroyArray(const MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::shared_ptr<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_OffsetPtr(const MR_C_std_shared_ptr_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_shared_ptr_int *)(((const std::shared_ptr<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_OffsetMutablePtr(MR_C_std_shared_ptr_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)(((std::shared_ptr<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

int *MR_C_std_shared_ptr_int_get(const MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<int> *)(_this)).get();
    ) // MRBINDC_TRY
}

bool MR_C_std_shared_ptr_int_has_value(const MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<int> *)(_this)));
    ) // MRBINDC_TRY
}

int MR_C_std_shared_ptr_int_use_count(const MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<int> *)(_this)).use_count());
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_reset(MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<int> *)(_this)).reset();
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructFromValue(int value)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::make_shared<int>(
        value
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_Construct(int *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        std::unique_ptr<int>(ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_Assign(MR_C_std_shared_ptr_int *_this, int *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<int> *)(_this)) = std::shared_ptr<int>(
        std::unique_ptr<int>(ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructNonOwning(int *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(std::shared_ptr<void>{}, ptr));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_AssignNonOwning(MR_C_std_shared_ptr_int *_this, int *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<int> *)(_this)) = std::shared_ptr<int>(std::shared_ptr<void>{}, ptr);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_AssignAliasing(MR_C_std_shared_ptr_int *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<int> *)(_this)) = std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_int_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<int> *)(_this))));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_int_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_int *_this, MR_C_std_shared_ptr_void *_target)
{
    MRBINDC_TRY(
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<int> *)(_this));
    ) // MRBINDC_TRY
}

