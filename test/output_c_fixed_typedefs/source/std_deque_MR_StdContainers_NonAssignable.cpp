#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
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
    return (MR_C_std_deque_MR_StdContainers_NonAssignable *)new std::deque<MR::StdContainers::NonAssignable>(std::deque<MR::StdContainers::NonAssignable>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::deque<MR::StdContainers::NonAssignable>), std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::deque<MR::StdContainers::NonAssignable>), std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::deque<MR::StdContainers::NonAssignable>))
    ));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_MR_StdContainers_NonAssignable *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).operator=(
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
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).size();
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_empty(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty();
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_resize(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_clear(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).clear();
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_at(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).at(
        i
    ));
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i)
{
    return (MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).at(
        i
    ));
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_front(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).front());
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).front());
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_back(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).back());
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).back());
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).pop_back();
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).push_front(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).pop_front();
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_begin(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).cbegin());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)new std::deque<MR::StdContainers::NonAssignable>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).begin());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable>::iterator *)(iter));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_end(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).cend());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_is_end(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)new std::deque<MR::StdContainers::NonAssignable>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable> *)(_this)).end());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable>::iterator *)(iter));
}

ptrdiff_t MR_C_std_deque_MR_StdContainers_NonAssignable_to_index(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable> *)(_this)).begin();
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator(std::deque<MR::StdContainers::NonAssignable>::const_iterator());
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)(new std::deque<MR::StdContainers::NonAssignable>::const_iterator[num_elems]{});
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *other)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator(std::deque<MR::StdContainers::NonAssignable>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)other))
    ));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)other))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Destroy(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete ((const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DestroyArray(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete[] ((const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_OffsetPtr(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)(((const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_OffsetMutablePtr(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)(((std::deque<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator(std::deque<MR::StdContainers::NonAssignable>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)iter))
    ));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct(void)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)new std::deque<MR::StdContainers::NonAssignable>::iterator(std::deque<MR::StdContainers::NonAssignable>::iterator());
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)(new std::deque<MR::StdContainers::NonAssignable>::iterator[num_elems]{});
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *other)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)new std::deque<MR::StdContainers::NonAssignable>::iterator(std::deque<MR::StdContainers::NonAssignable>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)other))
    ));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)other))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Destroy(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    delete ((const std::deque<MR::StdContainers::NonAssignable>::iterator *)_this);
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DestroyArray(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    delete[] ((const std::deque<MR::StdContainers::NonAssignable>::iterator *)_this);
}

const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_OffsetPtr(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)(((const std::deque<MR::StdContainers::NonAssignable>::iterator *)ptr) + i);
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_OffsetMutablePtr(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)(((std::deque<MR::StdContainers::NonAssignable>::iterator *)ptr) + i);
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this)));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *a, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)a));
}

bool MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *a, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)b));
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    return (MR_StdContainers_NonAssignable *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this)));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *a, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)a));
}

bool MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *a, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)b));
}

