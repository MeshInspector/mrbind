#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_const_MR_StdSharedPtr_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<const MR::StdSharedPtr::A>());
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)(new std::shared_ptr<const MR::StdSharedPtr::A>[num_elems]{});
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<const MR::StdSharedPtr::A>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<const MR::StdSharedPtr::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A>), std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A>), std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A>))
    ));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_AssignFromAnother(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<const MR::StdSharedPtr::A>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A>), std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A>), std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A>))
    );
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_Destroy(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    delete ((const std::shared_ptr<const MR::StdSharedPtr::A> *)_this);
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_DestroyArray(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    delete[] ((const std::shared_ptr<const MR::StdSharedPtr::A> *)_this);
}

const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_OffsetPtr(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)(((const std::shared_ptr<const MR::StdSharedPtr::A> *)ptr) + i);
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_OffsetMutablePtr(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)(((std::shared_ptr<const MR::StdSharedPtr::A> *)ptr) + i);
}

const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_get(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    return (const MR_StdSharedPtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)).get());
}

bool MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_has_value(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)));
}

int MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_use_count(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_reset(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)).reset();
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_ConstructFromValue(const MR_StdSharedPtr_A *value)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::make_shared<const MR::StdSharedPtr::A>(
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::StdSharedPtr::A(*(MR::StdSharedPtr::A *)value))
    ));
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_Construct(const MR_StdSharedPtr_A *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<const MR::StdSharedPtr::A>(
        std::unique_ptr<const MR::StdSharedPtr::A>((const MR::StdSharedPtr::A *)ptr)
    ));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_Assign(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this, const MR_StdSharedPtr_A *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A>(
        std::unique_ptr<const MR::StdSharedPtr::A>((const MR::StdSharedPtr::A *)ptr)
    );
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_ConstructNonOwning(const MR_StdSharedPtr_A *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<void>{}, ((const MR::StdSharedPtr::A *)ptr)));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_AssignNonOwning(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this, const MR_StdSharedPtr_A *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<void>{}, ((const MR::StdSharedPtr::A *)ptr));
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *ptr)
{
    MRBINDC_CLASSARG_GUARD(ptr, std::shared_ptr<MR::StdSharedPtr::A>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<const MR::StdSharedPtr::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::StdSharedPtr::A>))
    ));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_AssignFromMutable(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *ptr)
{
    MRBINDC_CLASSARG_GUARD(ptr, std::shared_ptr<MR::StdSharedPtr::A>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::StdSharedPtr::A>));
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(std::shared_ptr<const MR::StdSharedPtr::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::StdSharedPtr::A *)ptr)
    ));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_AssignAliasing(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::StdSharedPtr::A *)ptr)
    );
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_ConvertTo_MR_C_std_shared_ptr_const_void(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A> *)(_this))));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_AssignTo_MR_C_std_shared_ptr_const_void(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *_this, MR_C_std_shared_ptr_const_void *_target)
{
    ((_target ? void() : throw std::runtime_error("Parameter `_target` can not be null.")), *(std::shared_ptr<const void> *)(_target)) = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A> *)(_this));
}

