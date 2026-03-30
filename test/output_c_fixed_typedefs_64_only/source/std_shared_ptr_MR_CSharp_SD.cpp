#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SD.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>());
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)(new std::shared_ptr<MR::CSharp::SD>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SD *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::SD>);
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SD>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SD *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CSharp::SD>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SD> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SD>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SD_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SD> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SD_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SD> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SD *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SD *)(((const std::shared_ptr<MR::CSharp::SD> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SD *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)(((std::shared_ptr<MR::CSharp::SD> *)ptr) + i);
}

MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_get(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    return (MR_CSharp_SD *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SD> *)(_this)).get());
}

bool MR_C_std_shared_ptr_MR_CSharp_SD_has_value(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SD> *)(_this)));
}

int MR_C_std_shared_ptr_MR_CSharp_SD_use_count(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SD> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_MR_CSharp_SD_reset(MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SD> *)(_this)).reset();
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructFromValue(MR_C_PassBy value_pass_by, MR_CSharp_SD *value)
{
    MRBINDC_CLASSARG_GUARD(value, MR::CSharp::SD);
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::make_shared<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(value, MR::CSharp::SD) MRBINDC_CLASSARG_COPY(value, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_MOVE(value, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, MR::CSharp::SD) MRBINDC_CLASSARG_END(value, MR::CSharp::SD))
    ));
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_Construct(MR_CSharp_SD *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(
        std::unique_ptr<MR::CSharp::SD>((MR::CSharp::SD *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_Assign(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_CSharp_SD *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SD> *)(_this)) = std::shared_ptr<MR::CSharp::SD>(
        std::unique_ptr<MR::CSharp::SD>((MR::CSharp::SD *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructNonOwning(MR_CSharp_SD *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<void>{}, ((MR::CSharp::SD *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_CSharp_SD *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SD> *)(_this)) = std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<void>{}, ((MR::CSharp::SD *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SD *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SD *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SD *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CSharp::SD> *)(_this)) = std::shared_ptr<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SD *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_CSharp_SD_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SD> *)(_this))));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_C_std_shared_ptr_void *_target)
{
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CSharp::SD> *)(_this));
}

