#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_const_int_array.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(std::shared_ptr<const int[]>());
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_int_array *)(new std::shared_ptr<const int[]>[num_elems]{});
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_int_array *other)
{
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(std::shared_ptr<const int[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const int[]>))
    ));
}

void MR_C_std_shared_ptr_const_int_array_AssignFromAnother(MR_C_std_shared_ptr_const_int_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_int_array *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int[]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const int[]>))
    );
}

void MR_C_std_shared_ptr_const_int_array_Destroy(const MR_C_std_shared_ptr_const_int_array *_this)
{
    delete ((const std::shared_ptr<const int[]> *)_this);
}

void MR_C_std_shared_ptr_const_int_array_DestroyArray(const MR_C_std_shared_ptr_const_int_array *_this)
{
    delete[] ((const std::shared_ptr<const int[]> *)_this);
}

const MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_OffsetPtr(const MR_C_std_shared_ptr_const_int_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_int_array *)(((const std::shared_ptr<const int[]> *)ptr) + i);
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_OffsetMutablePtr(MR_C_std_shared_ptr_const_int_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_int_array *)(((std::shared_ptr<const int[]> *)ptr) + i);
}

const int *MR_C_std_shared_ptr_const_int_array_Get(const MR_C_std_shared_ptr_const_int_array *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int[]> *)(_this)).get();
}

const int *MR_C_std_shared_ptr_const_int_array_At(const MR_C_std_shared_ptr_const_int_array *_this, ptrdiff_t i)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int[]> *)(_this))[i]);
}

int MR_C_std_shared_ptr_const_int_array_UseCount(const MR_C_std_shared_ptr_const_int_array *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int[]> *)(_this)).use_count());
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_Construct(const int *ptr)
{
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(std::shared_ptr<const int[]>(
        std::unique_ptr<const int[]>(ptr)
    ));
}

void MR_C_std_shared_ptr_const_int_array_Assign(MR_C_std_shared_ptr_const_int_array *_this, const int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int[]> *)(_this)) = std::shared_ptr<const int[]>(
        std::unique_ptr<const int[]>(ptr)
    );
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_ConstructNonOwning(const int *ptr)
{
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(std::shared_ptr<const int[]>(std::shared_ptr<void>{}, ptr));
}

void MR_C_std_shared_ptr_const_int_array_AssignNonOwning(MR_C_std_shared_ptr_const_int_array *_this, const int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int[]> *)(_this)) = std::shared_ptr<const int[]>(std::shared_ptr<void>{}, ptr);
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_int_array *ptr)
{
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(std::shared_ptr<const int[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<int[]>))
    ));
}

void MR_C_std_shared_ptr_const_int_array_AssignFromMutable(MR_C_std_shared_ptr_const_int_array *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_int_array *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int[]> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<int[]>));
}

MR_C_std_shared_ptr_const_int_array *MR_C_std_shared_ptr_const_int_array_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const int *ptr)
{
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(std::shared_ptr<const int[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
}

void MR_C_std_shared_ptr_const_int_array_AssignAliasing(MR_C_std_shared_ptr_const_int_array *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int[]> *)(_this)) = std::shared_ptr<const int[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int_array(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_int_array *_other)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<const int[]>))
    ));
}

void MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int_array(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_int_array *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<const int[]>), std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<const int[]>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<const int[]>));
}

