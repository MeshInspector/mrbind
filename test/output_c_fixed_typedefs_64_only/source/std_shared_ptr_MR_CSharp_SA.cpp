#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SA.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<MR::CSharp::SA>());
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)(new std::shared_ptr<MR::CSharp::SA>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::SA>);
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SA>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SA_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SA *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::SA>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SA> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SA>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SA_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SA> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SA_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SA> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)(((const std::shared_ptr<MR::CSharp::SA> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)(((std::shared_ptr<MR::CSharp::SA> *)ptr) + i);
}

MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_get(const MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    return (MR_CSharp_SA *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SA> *)(_this)).get());
}

bool MR_C_std_shared_ptr_MR_CSharp_SA_has_value(const MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SA> *)(_this)));
}

int MR_C_std_shared_ptr_MR_CSharp_SA_use_count(const MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SA> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_MR_CSharp_SA_reset(MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SA> *)(_this)).reset();
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromValue(const MR_CSharp_SA *value)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(std::make_shared<MR::CSharp::SA>(
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), MR::CSharp::SA(*(MR::CSharp::SA *)value))
    ));
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_Construct(MR_CSharp_SA *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<MR::CSharp::SA>(
        std::unique_ptr<MR::CSharp::SA>((MR::CSharp::SA *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SA_Assign(MR_C_std_shared_ptr_MR_CSharp_SA *_this, MR_CSharp_SA *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SA> *)(_this)) = std::shared_ptr<MR::CSharp::SA>(
        std::unique_ptr<MR::CSharp::SA>((MR::CSharp::SA *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning(MR_CSharp_SA *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<void>{}, ((MR::CSharp::SA *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SA_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SA *_this, MR_CSharp_SA *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SA> *)(_this)) = std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<void>{}, ((MR::CSharp::SA *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SA *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(std::shared_ptr<MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SA *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SA_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SA *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SA *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SA> *)(_this)) = std::shared_ptr<MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SA *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_CSharp_SA_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_SA *_this)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SA> *)(_this))));
}

void MR_C_std_shared_ptr_MR_CSharp_SA_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_SA *_this, MR_C_std_shared_ptr_void *_target)
{
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SA> *)(_this));
}

