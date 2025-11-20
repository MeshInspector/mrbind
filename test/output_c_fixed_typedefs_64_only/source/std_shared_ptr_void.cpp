#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_void.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>());
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_void *)(new std::shared_ptr<void>[num_elems]{});
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_void *other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<void>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<void>) MRBINDC_CLASSARG_END(other, std::shared_ptr<void>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFromAnother(MR_C_std_shared_ptr_void *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_void *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<void>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<void>), std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<void>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<void>) MRBINDC_CLASSARG_END(other, std::shared_ptr<void>))
    );
}

void MR_C_std_shared_ptr_void_Destroy(const MR_C_std_shared_ptr_void *_this)
{
    delete ((const std::shared_ptr<void> *)_this);
}

void MR_C_std_shared_ptr_void_DestroyArray(const MR_C_std_shared_ptr_void *_this)
{
    delete[] ((const std::shared_ptr<void> *)_this);
}

const MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_OffsetPtr(const MR_C_std_shared_ptr_void *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_void *)(((const std::shared_ptr<void> *)ptr) + i);
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_OffsetMutablePtr(MR_C_std_shared_ptr_void *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_void *)(((std::shared_ptr<void> *)ptr) + i);
}

void *MR_C_std_shared_ptr_void_Get(const MR_C_std_shared_ptr_void *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<void> *)(_this)).get();
}

int MR_C_std_shared_ptr_void_UseCount(const MR_C_std_shared_ptr_void *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<void> *)(_this)).use_count());
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(std::shared_ptr<void>{}, ptr));
}

void MR_C_std_shared_ptr_void_AssignNonOwning(MR_C_std_shared_ptr_void *_this, void *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = std::shared_ptr<void>(std::shared_ptr<void>{}, ptr);
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, void *ptr)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
}

void MR_C_std_shared_ptr_void_AssignAliasing(MR_C_std_shared_ptr_void *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, void *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
}

