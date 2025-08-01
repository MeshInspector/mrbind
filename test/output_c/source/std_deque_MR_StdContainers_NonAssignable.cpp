#define MR_C_BUILD_LIBRARY
#include "std_deque_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <deque>
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
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
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

size_t MR_C_std_deque_MR_StdContainers_NonAssignable_Size(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_IsEmpty(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_Resize(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t new_size)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_Clear(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_At(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i)
{
    return (const MR_StdContainers_NonAssignable *)&((_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_MutableAt(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i)
{
    return (MR_StdContainers_NonAssignable *)&((_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_Front(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)((_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_MutableFront(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)((_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_Back(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (const MR_StdContainers_NonAssignable *)((_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_MutableBack(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_StdContainers_NonAssignable *)((_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_PushBack(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_PopBack(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_PushFront(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_front(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_PopFront(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_front();
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_Begin(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_IsBegin(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_MutableBegin(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)new std::deque<MR::StdContainers::NonAssignable>::iterator((_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_IsMutableBegin(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::deque<MR::StdContainers::NonAssignable>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_End(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_IsEnd(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_MutableEnd(MR_C_std_deque_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *)new std::deque<MR::StdContainers::NonAssignable>::iterator((_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_deque_MR_StdContainers_NonAssignable_IsMutableEnd(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (_this ? *(std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::deque<MR::StdContainers::NonAssignable>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_deque_MR_StdContainers_NonAssignable_ToIndex(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (iter ? std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_deque_MR_StdContainers_NonAssignable_MutableToIndex(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (iter ? std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::deque<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
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
        (other ? std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *other)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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

MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_FromMutable(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *iter)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *)new std::deque<MR::StdContainers::NonAssignable>::const_iterator(std::deque<MR::StdContainers::NonAssignable>::iterator(
        (iter ? std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
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
        (other ? std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *other)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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

const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Deref(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)&(*(_this ? *(const std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Incr(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    ++(_this ? *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Decr(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    --(_this ? *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_OffsetBy(MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Distance(const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *a, const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator *b)
{
    return (b ? std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::deque<MR::StdContainers::NonAssignable>::const_iterator(*(std::deque<MR::StdContainers::NonAssignable>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Deref(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    return (MR_StdContainers_NonAssignable *)&(*(_this ? *(const std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Incr(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    ++(_this ? *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Decr(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this)
{
    --(_this ? *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_OffsetBy(MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::deque<MR::StdContainers::NonAssignable>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Distance(const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *a, const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator *b)
{
    return (b ? std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::deque<MR::StdContainers::NonAssignable>::iterator(*(std::deque<MR::StdContainers::NonAssignable>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

