#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_ExposedLayoutSh.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<MR::CSharp::ExposedLayoutSh>());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)(new std::shared_ptr<MR::CSharp::ExposedLayoutSh>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::ExposedLayoutSh>);
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<MR::CSharp::ExposedLayoutSh>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::ExposedLayoutSh>), std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::ExposedLayoutSh>), std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::ExposedLayoutSh>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::ExposedLayoutSh>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::ExposedLayoutSh>), std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::ExposedLayoutSh>), std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::ExposedLayoutSh>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::ExposedLayoutSh>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    delete ((const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)(((const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)(((std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_get(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayoutSh *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)).get());
    ) // MRBINDC_TRY
}

bool MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_has_value(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)));
    ) // MRBINDC_TRY
}

int MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_use_count(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)).use_count());
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_reset(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)).reset();
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructFromValue(MR_CSharp_ExposedLayoutSh value)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::make_shared<MR::CSharp::ExposedLayoutSh>(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), value)
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Construct(MR_CSharp_ExposedLayoutSh *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<MR::CSharp::ExposedLayoutSh>(
        std::unique_ptr<MR::CSharp::ExposedLayoutSh>((MR::CSharp::ExposedLayoutSh *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Assign(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_CSharp_ExposedLayoutSh *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)) = std::shared_ptr<MR::CSharp::ExposedLayoutSh>(
        std::unique_ptr<MR::CSharp::ExposedLayoutSh>((MR::CSharp::ExposedLayoutSh *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructNonOwning(MR_CSharp_ExposedLayoutSh *ptr)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<void>{}, ((MR::CSharp::ExposedLayoutSh *)ptr)));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_CSharp_ExposedLayoutSh *ptr)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)) = std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<void>{}, ((MR::CSharp::ExposedLayoutSh *)ptr));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_ExposedLayoutSh *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(std::shared_ptr<MR::CSharp::ExposedLayoutSh>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::ExposedLayoutSh *)ptr)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_ExposedLayoutSh *ptr)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this)) = std::shared_ptr<MR::CSharp::ExposedLayoutSh>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::ExposedLayoutSh *)ptr)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this))));
    ) // MRBINDC_TRY
}

void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_C_std_shared_ptr_void *_target)
{
    MRBINDC_TRY(
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::ExposedLayoutSh> *)(_this));
    ) // MRBINDC_TRY
}

