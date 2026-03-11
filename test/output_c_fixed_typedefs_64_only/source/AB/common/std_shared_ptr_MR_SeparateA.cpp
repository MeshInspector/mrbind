#define MR_AB_BUILD_LIBRARY
#include "AB/common/std_shared_ptr_MR_SeparateA.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_SeparateA *)new std::shared_ptr<MR::SeparateA>(std::shared_ptr<MR::SeparateA>());
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_SeparateA *)(new std::shared_ptr<MR::SeparateA>[num_elems]{});
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_SeparateA *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::SeparateA>);
    return (MR_C_std_shared_ptr_MR_SeparateA *)new std::shared_ptr<MR::SeparateA>(std::shared_ptr<MR::SeparateA>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::SeparateA>), std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::SeparateA>), std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::SeparateA>))
    ));
}

void MR_C_std_shared_ptr_MR_SeparateA_AssignFromAnother(MR_C_std_shared_ptr_MR_SeparateA *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_SeparateA *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::SeparateA>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::SeparateA> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::SeparateA>), std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::SeparateA>), std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::SeparateA>))
    );
}

void MR_C_std_shared_ptr_MR_SeparateA_Destroy(const MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    delete ((const std::shared_ptr<MR::SeparateA> *)_this);
}

void MR_C_std_shared_ptr_MR_SeparateA_DestroyArray(const MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    delete[] ((const std::shared_ptr<MR::SeparateA> *)_this);
}

const MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_OffsetPtr(const MR_C_std_shared_ptr_MR_SeparateA *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_SeparateA *)(((const std::shared_ptr<MR::SeparateA> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_OffsetMutablePtr(MR_C_std_shared_ptr_MR_SeparateA *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_SeparateA *)(((std::shared_ptr<MR::SeparateA> *)ptr) + i);
}

MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_get(const MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    return (MR_SeparateA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::SeparateA> *)(_this)).get());
}

bool MR_C_std_shared_ptr_MR_SeparateA_has_value(const MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::SeparateA> *)(_this)));
}

int MR_C_std_shared_ptr_MR_SeparateA_use_count(const MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::SeparateA> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_MR_SeparateA_reset(MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::SeparateA> *)(_this)).reset();
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_ConstructFromValue(MR_C_PassBy value_pass_by, MR_SeparateA *value)
{
    MRBINDC_CLASSARG_GUARD(value, MR::SeparateA);
    return (MR_C_std_shared_ptr_MR_SeparateA *)new std::shared_ptr<MR::SeparateA>(std::make_shared<MR::SeparateA>(
        (MRBINDC_CLASSARG_COPY(value, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(value, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(value, MR::SeparateA))
    ));
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_Construct(MR_SeparateA *ptr)
{
    return (MR_C_std_shared_ptr_MR_SeparateA *)new std::shared_ptr<MR::SeparateA>(std::shared_ptr<MR::SeparateA>(
        std::unique_ptr<MR::SeparateA>((MR::SeparateA *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_SeparateA_Assign(MR_C_std_shared_ptr_MR_SeparateA *_this, MR_SeparateA *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::SeparateA> *)(_this)) = std::shared_ptr<MR::SeparateA>(
        std::unique_ptr<MR::SeparateA>((MR::SeparateA *)ptr)
    );
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_ConstructNonOwning(MR_SeparateA *ptr)
{
    return (MR_C_std_shared_ptr_MR_SeparateA *)new std::shared_ptr<MR::SeparateA>(std::shared_ptr<MR::SeparateA>(std::shared_ptr<void>{}, ((MR::SeparateA *)ptr)));
}

void MR_C_std_shared_ptr_MR_SeparateA_AssignNonOwning(MR_C_std_shared_ptr_MR_SeparateA *_this, MR_SeparateA *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::SeparateA> *)(_this)) = std::shared_ptr<MR::SeparateA>(std::shared_ptr<void>{}, ((MR::SeparateA *)ptr));
}

MR_C_std_shared_ptr_MR_SeparateA *MR_C_std_shared_ptr_MR_SeparateA_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_SeparateA *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_SeparateA *)new std::shared_ptr<MR::SeparateA>(std::shared_ptr<MR::SeparateA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::SeparateA *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_SeparateA_AssignAliasing(MR_C_std_shared_ptr_MR_SeparateA *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_SeparateA *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::SeparateA> *)(_this)) = std::shared_ptr<MR::SeparateA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::SeparateA *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_SeparateA_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_SeparateA *_this)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::SeparateA> *)(_this))));
}

void MR_C_std_shared_ptr_MR_SeparateA_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_SeparateA *_this, MR_C_std_shared_ptr_void *_target)
{
    ((_target ? void() : throw std::runtime_error("Parameter `_target` can not be null.")), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::SeparateA> *)(_this));
}

