#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>());
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_int *)(new std::shared_ptr<int>[num_elems]{});
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int *other)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int>))
    ));
}

void MR_C_std_shared_ptr_int_AssignFromAnother(MR_C_std_shared_ptr_int *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int>))
    );
}

void MR_C_std_shared_ptr_int_Destroy(const MR_C_std_shared_ptr_int *_this)
{
    delete ((const std::shared_ptr<int> *)_this);
}

void MR_C_std_shared_ptr_int_DestroyArray(const MR_C_std_shared_ptr_int *_this)
{
    delete[] ((const std::shared_ptr<int> *)_this);
}

const MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_OffsetPtr(const MR_C_std_shared_ptr_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_int *)(((const std::shared_ptr<int> *)ptr) + i);
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_OffsetMutablePtr(MR_C_std_shared_ptr_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_int *)(((std::shared_ptr<int> *)ptr) + i);
}

int *MR_C_std_shared_ptr_int_Get(const MR_C_std_shared_ptr_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int> *)(_this)).get();
}

int MR_C_std_shared_ptr_int_UseCount(const MR_C_std_shared_ptr_int *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int> *)(_this)).use_count());
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_Construct(int *ptr)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        std::unique_ptr<int>(ptr)
    ));
}

void MR_C_std_shared_ptr_int_Assign(MR_C_std_shared_ptr_int *_this, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int> *)(_this)) = std::shared_ptr<int>(
        std::unique_ptr<int>(ptr)
    );
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructNonOwning(int *ptr)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(std::shared_ptr<void>{}, ptr));
}

void MR_C_std_shared_ptr_int_AssignNonOwning(MR_C_std_shared_ptr_int *_this, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int> *)(_this)) = std::shared_ptr<int>(std::shared_ptr<void>{}, ptr);
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
}

void MR_C_std_shared_ptr_int_AssignAliasing(MR_C_std_shared_ptr_int *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int> *)(_this)) = std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_int *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<int>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_int *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<int>));
}

