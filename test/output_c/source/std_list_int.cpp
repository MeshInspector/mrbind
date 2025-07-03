#include "std_list_int.h"

#include <__mrbind_c_details.h>

#include <list>
#include <stdexcept>


MR_C_std_list_int *MR_C_std_list_int_DefaultConstruct(void)
{
    return (MR_C_std_list_int *)new std::list<int>(std::list<int>());
}

MR_C_std_list_int *MR_C_std_list_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_int *)(new std::list<int>[num_elems]{});
}

MR_C_std_list_int *MR_C_std_list_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_list_int *other)
{
    return (MR_C_std_list_int *)new std::list<int>(std::list<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<int>) MRBINDC_CLASSARG_COPY(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_MOVE(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<int>) MRBINDC_CLASSARG_END(other, std::list<int>))
    ));
}

void MR_C_std_list_int_AssignFromAnother(MR_C_std_list_int *_this, MR_C_PassBy other_pass_by, MR_C_std_list_int *other)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<int>) MRBINDC_CLASSARG_COPY(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_MOVE(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<int>) MRBINDC_CLASSARG_END(other, std::list<int>))
    );
}

void MR_C_std_list_int_Destroy(const MR_C_std_list_int *_this)
{
    delete ((const std::list<int> *)_this);
}

void MR_C_std_list_int_DestroyArray(const MR_C_std_list_int *_this)
{
    delete[] ((const std::list<int> *)_this);
}

const MR_C_std_list_int *MR_C_std_list_int_OffsetPtr(const MR_C_std_list_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_int *)(((const std::list<int> *)ptr) + i);
}

MR_C_std_list_int *MR_C_std_list_int_OffsetMutablePtr(MR_C_std_list_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_int *)(((std::list<int> *)ptr) + i);
}

size_t MR_C_std_list_int_Size(const MR_C_std_list_int *_this)
{
    return (_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_list_int_IsEmpty(const MR_C_std_list_int *_this)
{
    return (_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_list_int_Resize(MR_C_std_list_int *_this, size_t new_size)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_list_int_Clear(MR_C_std_list_int *_this)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

const int *MR_C_std_list_int_Front(const MR_C_std_list_int *_this)
{
    return (_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr;
}

int *MR_C_std_list_int_MutableFront(MR_C_std_list_int *_this)
{
    return (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr;
}

const int *MR_C_std_list_int_Back(const MR_C_std_list_int *_this)
{
    return (_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr;
}

int *MR_C_std_list_int_MutableBack(MR_C_std_list_int *_this)
{
    return (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr;
}

void MR_C_std_list_int_PushBack(MR_C_std_list_int *_this, int new_elem)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        new_elem
    );
}

void MR_C_std_list_int_PopBack(MR_C_std_list_int *_this)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_list_int_PushFront(MR_C_std_list_int *_this, int new_elem)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_front(
        new_elem
    );
}

void MR_C_std_list_int_PopFront(MR_C_std_list_int *_this)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_front();
}

void MR_C_std_list_int_InsertAtMutableIter(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *position, int new_elem)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::list<int>::iterator(*(std::list<int>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_list_int_EraseAtMutableIter(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *position)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::list<int>::iterator(*(std::list<int>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_list_int_InsertAtIter(MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *position, int new_elem)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::list<int>::const_iterator(*(std::list<int>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_list_int_EraseAtIter(MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *position)
{
    (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::list<int>::const_iterator(*(std::list<int>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_Begin(const MR_C_std_list_int *_this)
{
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator((_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_list_int_IsBegin(const MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *iter)
{
    return (_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::list<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_int_iterator *MR_C_std_list_int_MutableBegin(MR_C_std_list_int *_this)
{
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator((_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_list_int_IsMutableBegin(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *iter)
{
    return (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::list<int>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_End(const MR_C_std_list_int *_this)
{
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator((_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_list_int_IsEnd(const MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *iter)
{
    return (_this ? *(const std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::list<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_int_iterator *MR_C_std_list_int_MutableEnd(MR_C_std_list_int *_this)
{
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator((_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_list_int_IsMutableEnd(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *iter)
{
    return (_this ? *(std::list<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::list<int>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(std::list<int>::const_iterator());
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_int_const_iterator *)(new std::list<int>::const_iterator[num_elems]{});
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_ConstructFromAnother(const MR_C_std_list_int_const_iterator *other)
{
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(std::list<int>::const_iterator(
        (other ? std::list<int>::const_iterator(*(std::list<int>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_list_int_const_iterator_AssignFromAnother(MR_C_std_list_int_const_iterator *_this, const MR_C_std_list_int_const_iterator *other)
{
    (_this ? *(std::list<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::list<int>::const_iterator(*(std::list<int>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_list_int_const_iterator_Destroy(const MR_C_std_list_int_const_iterator *_this)
{
    delete ((const std::list<int>::const_iterator *)_this);
}

void MR_C_std_list_int_const_iterator_DestroyArray(const MR_C_std_list_int_const_iterator *_this)
{
    delete[] ((const std::list<int>::const_iterator *)_this);
}

const MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_OffsetPtr(const MR_C_std_list_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_int_const_iterator *)(((const std::list<int>::const_iterator *)ptr) + i);
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_OffsetMutablePtr(MR_C_std_list_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_int_const_iterator *)(((std::list<int>::const_iterator *)ptr) + i);
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_FromMutable(const MR_C_std_list_int_iterator *iter)
{
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(std::list<int>::iterator(
        (iter ? std::list<int>::iterator(*(std::list<int>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_DefaultConstruct(void)
{
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator(std::list<int>::iterator());
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_int_iterator *)(new std::list<int>::iterator[num_elems]{});
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_ConstructFromAnother(const MR_C_std_list_int_iterator *other)
{
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator(std::list<int>::iterator(
        (other ? std::list<int>::iterator(*(std::list<int>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_list_int_iterator_AssignFromAnother(MR_C_std_list_int_iterator *_this, const MR_C_std_list_int_iterator *other)
{
    (_this ? *(std::list<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::list<int>::iterator(*(std::list<int>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_list_int_iterator_Destroy(const MR_C_std_list_int_iterator *_this)
{
    delete ((const std::list<int>::iterator *)_this);
}

void MR_C_std_list_int_iterator_DestroyArray(const MR_C_std_list_int_iterator *_this)
{
    delete[] ((const std::list<int>::iterator *)_this);
}

const MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_OffsetPtr(const MR_C_std_list_int_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_int_iterator *)(((const std::list<int>::iterator *)ptr) + i);
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_OffsetMutablePtr(MR_C_std_list_int_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_int_iterator *)(((std::list<int>::iterator *)ptr) + i);
}

const int *MR_C_std_list_int_const_iterator_Deref(const MR_C_std_list_int_const_iterator *_this)
{
    return &(*(_this ? *(const std::list<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_list_int_const_iterator_Incr(MR_C_std_list_int_const_iterator *_this)
{
    ++(_this ? *(std::list<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_list_int_const_iterator_Decr(MR_C_std_list_int_const_iterator *_this)
{
    --(_this ? *(std::list<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

int *MR_C_std_list_int_iterator_Deref(const MR_C_std_list_int_iterator *_this)
{
    return &(*(_this ? *(const std::list<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_list_int_iterator_Incr(MR_C_std_list_int_iterator *_this)
{
    ++(_this ? *(std::list<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_list_int_iterator_Decr(MR_C_std_list_int_iterator *_this)
{
    --(_this ? *(std::list<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

