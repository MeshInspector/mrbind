#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_const_void.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>());
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_void *)(new std::shared_ptr<const void>[num_elems]{});
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_void *other)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const void>))
    ));
}

void MR_C_std_shared_ptr_const_void_AssignFromAnother(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_void *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const void>))
    );
}

void MR_C_std_shared_ptr_const_void_Destroy(const MR_C_std_shared_ptr_const_void *_this)
{
    delete ((const std::shared_ptr<const void> *)_this);
}

void MR_C_std_shared_ptr_const_void_DestroyArray(const MR_C_std_shared_ptr_const_void *_this)
{
    delete[] ((const std::shared_ptr<const void> *)_this);
}

const MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_OffsetPtr(const MR_C_std_shared_ptr_const_void *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_void *)(((const std::shared_ptr<const void> *)ptr) + i);
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_OffsetMutablePtr(MR_C_std_shared_ptr_const_void *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_void *)(((std::shared_ptr<const void> *)ptr) + i);
}

const void *MR_C_std_shared_ptr_const_void_Get(const MR_C_std_shared_ptr_const_void *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const void> *)(_this)).get();
}

int MR_C_std_shared_ptr_const_void_UseCount(const MR_C_std_shared_ptr_const_void *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const void> *)(_this)).use_count());
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructNonOwning(const void *ptr)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(std::shared_ptr<void>{}, ptr));
}

void MR_C_std_shared_ptr_const_void_AssignNonOwning(MR_C_std_shared_ptr_const_void *_this, const void *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)) = std::shared_ptr<const void>(std::shared_ptr<void>{}, ptr);
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_void *ptr)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<void>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<void>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<void>))
    ));
}

void MR_C_std_shared_ptr_const_void_AssignFromMutable(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_void *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<void>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<void>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<void>));
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const void *ptr)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
}

void MR_C_std_shared_ptr_const_void_AssignAliasing(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const void *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)) = std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
}

