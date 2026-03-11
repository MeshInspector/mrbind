#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_shared_ptr_MR_StdSharedPtr_A_array.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>());
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)(new std::shared_ptr<MR::StdSharedPtr::A[]>[num_elems]{});
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::StdSharedPtr::A[]>);
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::StdSharedPtr::A[]>))
    ));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignFromAnother(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::StdSharedPtr::A[]>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Destroy(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    delete ((const std::shared_ptr<MR::StdSharedPtr::A[]> *)_this);
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DestroyArray(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    delete[] ((const std::shared_ptr<MR::StdSharedPtr::A[]> *)_this);
}

const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_OffsetPtr(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)(((const std::shared_ptr<MR::StdSharedPtr::A[]> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_OffsetMutablePtr(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)(((std::shared_ptr<MR::StdSharedPtr::A[]> *)ptr) + i);
}

MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_get(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    return (MR_StdSharedPtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)).get());
}

bool MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_has_value(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)));
}

MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_at(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, ptrdiff_t i)
{
    return (MR_StdSharedPtr_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this))[i]);
}

int MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_use_count(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_reset(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)).reset();
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromSize(size_t size)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::make_shared<MR::StdSharedPtr::A[]>(
        size
    ));
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct(MR_StdSharedPtr_A *ptr)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>(
        std::unique_ptr<MR::StdSharedPtr::A[]>((MR::StdSharedPtr::A *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Assign(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_StdSharedPtr_A *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)) = std::shared_ptr<MR::StdSharedPtr::A[]>(
        std::unique_ptr<MR::StdSharedPtr::A[]>((MR::StdSharedPtr::A *)ptr)
    );
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning(MR_StdSharedPtr_A *ptr)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<void>{}, ((MR::StdSharedPtr::A *)ptr)));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignNonOwning(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_StdSharedPtr_A *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)) = std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<void>{}, ((MR::StdSharedPtr::A *)ptr));
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_StdSharedPtr_A *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::StdSharedPtr::A *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignAliasing(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_StdSharedPtr_A *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this)) = std::shared_ptr<MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::StdSharedPtr::A *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this))));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_C_std_shared_ptr_void *_target)
{
    ((_target ? void() : throw std::runtime_error("Parameter `_target` can not be null.")), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this));
}

