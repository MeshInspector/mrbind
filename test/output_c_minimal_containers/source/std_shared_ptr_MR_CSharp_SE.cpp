#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SE.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)(new std::shared_ptr<MR::CSharp::SE>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SE *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::SE>);
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SE>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SE *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::SE>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SE> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SE>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    delete ((const std::shared_ptr<MR::CSharp::SE> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::shared_ptr<MR::CSharp::SE> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_shared_ptr_MR_CSharp_SE *)(((const std::shared_ptr<MR::CSharp::SE> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)(((std::shared_ptr<MR::CSharp::SE> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_get(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_SE *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SE> *)(_this)).get());
    ) // MRBINDC_TRY
}

bool MR_C_std_shared_ptr_MR_CSharp_SE_has_value(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SE> *)(_this)));
    ) // MRBINDC_TRY
}

int MR_C_std_shared_ptr_MR_CSharp_SE_use_count(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SE> *)(_this)).use_count());
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_reset(MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SE> *)(_this)).reset();
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromValue(MR_C_PassBy value_pass_by, MR_CSharp_SE *value)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(value, MR::CSharp::SE);
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::make_shared<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(value, MR::CSharp::SE) MRBINDC_CLASSARG_COPY(value, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_MOVE(value, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, MR::CSharp::SE) MRBINDC_CLASSARG_END(value, MR::CSharp::SE))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_Construct(MR_CSharp_SE *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(
        std::unique_ptr<MR::CSharp::SE>((MR::CSharp::SE *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_Assign(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_CSharp_SE *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SE> *)(_this)) = std::shared_ptr<MR::CSharp::SE>(
        std::unique_ptr<MR::CSharp::SE>((MR::CSharp::SE *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructNonOwning(MR_CSharp_SE *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<void>{}, ((MR::CSharp::SE *)ptr)));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_CSharp_SE *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SE> *)(_this)) = std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<void>{}, ((MR::CSharp::SE *)ptr));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SE *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SE *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SE *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SE> *)(_this)) = std::shared_ptr<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SE *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_CSharp_SE_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SE> *)(_this))));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_C_std_shared_ptr_void *_target)
{
    MRBINDC_TRY(
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SE> *)(_this));
    ) // MRBINDC_TRY
}

