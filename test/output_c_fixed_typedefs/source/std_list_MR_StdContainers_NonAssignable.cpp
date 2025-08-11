#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_list_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <list>
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
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
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
    return (_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsEmpty(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_list_MR_StdContainers_NonAssignable_Resize(MR_C_std_list_MR_StdContainers_NonAssignable *_this, size_t new_size)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_ResizeWithDefaultValue(MR_C_std_list_MR_StdContainers_NonAssignable *_this, size_t new_size, const MR_StdContainers_NonAssignable *value)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size,
        (value ? *(const MR::StdContainers::NonAssignable *)(value) : throw std::runtime_error("Parameter `value` can not be null."))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_Clear(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

const MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_Front(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)((_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_MutableFront(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)((_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

const MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_Back(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)((_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_MutableBack(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)((_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PushBack(MR_C_std_list_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PopBack(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PushFront(MR_C_std_list_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_front(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_PopFront(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_front();
}

void MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtMutableIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *position, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtMutableIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *position)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtIter(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *position)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_Begin(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsBegin(const MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::list<MR::StdContainers::NonAssignable>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_MutableBegin(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)new std::list<MR::StdContainers::NonAssignable>::iterator((_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableBegin(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::list<MR::StdContainers::NonAssignable>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_End(const MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *)new std::list<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsEnd(const MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (_this ? *(const std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::list<MR::StdContainers::NonAssignable>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_MR_StdContainers_NonAssignable_iterator *MR_C_std_list_MR_StdContainers_NonAssignable_MutableEnd(MR_C_std_list_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable_iterator *)new std::list<MR::StdContainers::NonAssignable>::iterator((_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableEnd(MR_C_std_list_MR_StdContainers_NonAssignable *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (_this ? *(std::list<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::list<MR::StdContainers::NonAssignable>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
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
        (other ? std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *other)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::list<MR::StdContainers::NonAssignable>::const_iterator(*(std::list<MR::StdContainers::NonAssignable>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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
        (iter ? std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
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
        (other ? std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this, const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *other)
{
    (_this ? *(std::list<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::list<MR::StdContainers::NonAssignable>::iterator(*(std::list<MR::StdContainers::NonAssignable>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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
    return (const MR_StdContainers_NonAssignable *)&(*(_this ? *(const std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Incr(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    ++(_this ? *(std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Decr(MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    --(_this ? *(std::list<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_StdContainers_NonAssignable *MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Deref(const MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    return (MR_StdContainers_NonAssignable *)&(*(_this ? *(const std::list<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Incr(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    ++(_this ? *(std::list<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Decr(MR_C_std_list_MR_StdContainers_NonAssignable_iterator *_this)
{
    --(_this ? *(std::list<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

