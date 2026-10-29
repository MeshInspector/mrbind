#define MR_C_BUILD_LIBRARY
#include "std_deque_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <deque>
#include <memory>
#include <stdexcept>


MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct(void)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable *)new std::deque<MR::StdContainers::NonAssignable>(std::deque<MR::StdContainers::NonAssignable>());
}

MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable *)(new std::deque<MR::StdContainers::NonAssignable>[num_elems]{});
}

MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_MR_StdContainers_NonAssignable *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::deque<MR::StdContainers::NonAssignable>);
    return (MR_C_std_deque_MR_StdContainers_NonAssignable *)new std::deque<MR::StdContainers::NonAssignable>(std::deque<MR::StdContainers::NonAssignable>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::deque<MR::StdContainers::NonAssignable>), std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::deque<MR::StdContainers::NonAssignable>), std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::deque<MR::StdContainers::NonAssignable>))
    ));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_MR_StdContainers_NonAssignable *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::deque<MR::StdContainers::NonAssignable>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::deque<MR::StdContainers::NonAssignable>), std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::deque<MR::StdContainers::NonAssignable>), std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::deque<MR::StdContainers::NonAssignable>))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    delete ((const std::deque<MR::StdContainers::NonAssignable> *)_this);
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_DestroyArray(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    delete[] ((const std::deque<MR::StdContainers::NonAssignable> *)_this);
}

const MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_OffsetPtr(const MR_C_std_deque_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_MR_StdContainers_NonAssignable *)(((const std::deque<MR::StdContainers::NonAssignable> *)ptr) + i);
}

MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_C_std_deque_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable *)(((std::deque<MR::StdContainers::NonAssignable> *)ptr) + i);
}

size_t MR_C_std_deque_MR_StdContainers_NonAssignable_size(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).size();
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_empty(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty();
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_resize(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_clear(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).clear();
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_at(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).at(
        i
    ));
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i)
{
    return (MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).at(
        i
    ));
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_front(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).front());
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).front());
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_back(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).back());
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).back());
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::StdContainers::NonAssignable);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).pop_back();
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::StdContainers::NonAssignable);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).push_front(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).pop_front();
}

