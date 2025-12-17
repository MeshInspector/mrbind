#define MR_C_BUILD_LIBRARY
#include "std_list_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <list>
#include <memory>
#include <stdexcept>


MR_C_std_list_MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct(void)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable *)new std::list<MR::StdContainers::NonAssignable>(std::list<MR::StdContainers::NonAssignable>());
}

MR_C_std_list_MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable *)(new std::list<MR::StdContainers::NonAssignable>[num_elems]{});
}

MR_C_std_list_MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_list_MR_StdContainers_NonAssignable *other)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable *)new std::list<MR::StdContainers::NonAssignable>(std::list<MR::StdContainers::NonAssignable>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::list<MR::StdContainers::NonAssignable>), std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::list<MR::StdContainers::NonAssignable>), std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::list<MR::StdContainers::NonAssignable>))
    ));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_list_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_list_MR_StdContainers_NonAssignable *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::list<MR::StdContainers::NonAssignable>), std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::list<MR::StdContainers::NonAssignable>), std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::list<MR::StdContainers::NonAssignable>))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_Destroy(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    delete ((const std::list<MR::StdContainers::NonAssignable> *)_this);
}

void MR_C_std_list_MR_StdContainers_NonAssignable_DestroyArray(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    delete[] ((const std::list<MR::StdContainers::NonAssignable> *)_this);
}

const MR_C_std_list_MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_OffsetPtr(const MR_C_std_list_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_MR_StdContainers_NonAssignable *)(((const std::list<MR::StdContainers::NonAssignable> *)ptr) + i);
}

MR_C_std_list_MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_C_std_list_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable *)(((std::list<MR::StdContainers::NonAssignable> *)ptr) + i);
}

size_t MR_C_std_list_MR_StdContainers_NonAssignable_Size(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).size();
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsEmpty(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).empty();
}

void MR_C_std_list_MR_StdContainers_NonAssignable_Resize(MR_C_std_list_MR_StdContainers_NonAssignable *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_ResizeWithDefaultValue(MR_C_std_list_MR_StdContainers_NonAssignable *_this, size_t new_size, const MR_StdContainers_NonAssignable *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const MR::StdContainers::NonAssignable *)(value))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_Clear(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).clear();
}

const MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_Front(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).front());
}

MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_MutableFront(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).front());
}

const MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_Back(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).back());
}

MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_MutableBack(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).back());
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PushBack(MR_C_std_list_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PopBack(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).pop_back();
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PushFront(MR_C_std_list_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).push_front(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PopFront(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).pop_front();
}

void MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtMutableIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *position, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtMutableIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)position))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)position))
    );
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_Begin(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).cbegin());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsBegin(const MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_MutableBegin(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)new std::list<MR::StdContainers::NonAssignable>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).begin());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableBegin(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable>::iterator *)(iter));
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_End(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).cend());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsEnd(const MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_MutableEnd(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)new std::list<MR::StdContainers::NonAssignable>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).end());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableEnd(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable>::iterator *)(iter));
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator(std::list<MR::StdContainers::NonAssignable>::const_iterator());
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)(new std::list<MR::StdContainers::NonAssignable>::const_iterator[num_elems]{});
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *other)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator(std::list<MR::StdContainers::NonAssignable>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)other))
    ));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)other))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Destroy(const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete ((const std::list<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DestroyArray(const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete[] ((const std::list<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_OffsetPtr(const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)(((const std::list<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_OffsetMutablePtr(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)(((std::list<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator(std::list<MR::StdContainers::NonAssignable>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)iter))
    ));
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct(void)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)new std::list<MR::StdContainers::NonAssignable>::iterator(std::list<MR::StdContainers::NonAssignable>::iterator());
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)(new std::list<MR::StdContainers::NonAssignable>::iterator[num_elems]{});
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *other)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)new std::list<MR::StdContainers::NonAssignable>::iterator(std::list<MR::StdContainers::NonAssignable>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)other))
    ));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)other))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Destroy(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    delete ((const std::list<MR::StdContainers::NonAssignable>::iterator *)_this);
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DestroyArray(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    delete[] ((const std::list<MR::StdContainers::NonAssignable>::iterator *)_this);
}

const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_OffsetPtr(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)(((const std::list<MR::StdContainers::NonAssignable>::iterator *)ptr) + i);
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_OffsetMutablePtr(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)(((std::list<MR::StdContainers::NonAssignable>::iterator *)ptr) + i);
}

const MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Deref(const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this)));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Incr(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Decr(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
}

MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Deref(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    return (MR_StdContainers_NonAssignable *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<MR::StdContainers::NonAssignable>::iterator *)(_this)));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Incr(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable>::iterator *)(_this));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Decr(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<MR::StdContainers::NonAssignable>::iterator *)(_this));
}

