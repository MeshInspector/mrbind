#define MR_C_BUILD_LIBRARY
#include "std_deque_int.h"

#include <__mrbind_c_details.h>

#include <deque>
#include <stdexcept>


MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstruct(void)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>());
}

MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int *)(new std::deque<int>[num_elems]{});
}

MR_C_std_deque_int *MR_C_std_deque_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_int *other)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<int>) MRBINDC_CLASSARG_COPY(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_MOVE(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<int>) MRBINDC_CLASSARG_END(other, std::deque<int>))
    ));
}

void MR_C_std_deque_int_AssignFromAnother(MR_C_std_deque_int *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_int *other)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<int>) MRBINDC_CLASSARG_COPY(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_MOVE(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<int>) MRBINDC_CLASSARG_END(other, std::deque<int>))
    );
}

void MR_C_std_deque_int_Destroy(const MR_C_std_deque_int *_this)
{
    delete ((const std::deque<int> *)_this);
}

void MR_C_std_deque_int_DestroyArray(const MR_C_std_deque_int *_this)
{
    delete[] ((const std::deque<int> *)_this);
}

const MR_C_std_deque_int *MR_C_std_deque_int_OffsetPtr(const MR_C_std_deque_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int *)(((const std::deque<int> *)ptr) + i);
}

MR_C_std_deque_int *MR_C_std_deque_int_OffsetMutablePtr(MR_C_std_deque_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int *)(((std::deque<int> *)ptr) + i);
}

MR_C_std_deque_int *MR_C_std_deque_int_ConstructFromRange(const int *ptr, size_t size)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>(ptr, ptr + size));
}

void MR_C_std_deque_int_AssignFromRange(MR_C_std_deque_int *_this, const int *ptr, size_t size)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::deque<int>(ptr, ptr + size);
}

size_t MR_C_std_deque_int_Size(const MR_C_std_deque_int *_this)
{
    return (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_deque_int_IsEmpty(const MR_C_std_deque_int *_this)
{
    return (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_deque_int_Resize(MR_C_std_deque_int *_this, size_t new_size)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_deque_int_ResizeWithDefaultValue(MR_C_std_deque_int *_this, size_t new_size, int value)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size,
        value
    );
}

void MR_C_std_deque_int_Clear(MR_C_std_deque_int *_this)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

const int *MR_C_std_deque_int_At(const MR_C_std_deque_int *_this, size_t i)
{
    return &((_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

int *MR_C_std_deque_int_MutableAt(MR_C_std_deque_int *_this, size_t i)
{
    return &((_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const int *MR_C_std_deque_int_Front(const MR_C_std_deque_int *_this)
{
    return (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front();
}

int *MR_C_std_deque_int_MutableFront(MR_C_std_deque_int *_this)
{
    return (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front();
}

const int *MR_C_std_deque_int_Back(const MR_C_std_deque_int *_this)
{
    return (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back();
}

int *MR_C_std_deque_int_MutableBack(MR_C_std_deque_int *_this)
{
    return (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back();
}

void MR_C_std_deque_int_PushBack(MR_C_std_deque_int *_this, int new_elem)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        new_elem
    );
}

void MR_C_std_deque_int_PopBack(MR_C_std_deque_int *_this)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_deque_int_PushFront(MR_C_std_deque_int *_this, int new_elem)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_front(
        new_elem
    );
}

void MR_C_std_deque_int_PopFront(MR_C_std_deque_int *_this)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_front();
}

void MR_C_std_deque_int_Insert(MR_C_std_deque_int *_this, size_t position, int new_elem)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_deque_int_Erase(MR_C_std_deque_int *_this, size_t position)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_deque_int_InsertAtMutableIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *position, int new_elem)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::deque<int>::iterator(*(std::deque<int>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_deque_int_EraseAtMutableIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *position)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::deque<int>::iterator(*(std::deque<int>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_deque_int_InsertAtIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *position, int new_elem)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_deque_int_EraseAtIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *position)
{
    (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_Begin(const MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator((_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_deque_int_IsBegin(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter)
{
    return (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::deque<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_MutableBegin(MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator((_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_deque_int_IsMutableBegin(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter)
{
    return (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::deque<int>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_End(const MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator((_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_deque_int_IsEnd(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter)
{
    return (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::deque<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_MutableEnd(MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator((_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_deque_int_IsMutableEnd(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter)
{
    return (_this ? *(std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::deque<int>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_deque_int_ToIndex(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter)
{
    return (iter ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_deque_int_MutableToIndex(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter)
{
    return (iter ? std::deque<int>::iterator(*(std::deque<int>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::deque<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(std::deque<int>::const_iterator());
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int_const_iterator *)(new std::deque<int>::const_iterator[num_elems]{});
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_ConstructFromAnother(const MR_C_std_deque_int_const_iterator *other)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(std::deque<int>::const_iterator(
        (other ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_deque_int_const_iterator_AssignFromAnother(MR_C_std_deque_int_const_iterator *_this, const MR_C_std_deque_int_const_iterator *other)
{
    (_this ? *(std::deque<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_deque_int_const_iterator_Destroy(const MR_C_std_deque_int_const_iterator *_this)
{
    delete ((const std::deque<int>::const_iterator *)_this);
}

void MR_C_std_deque_int_const_iterator_DestroyArray(const MR_C_std_deque_int_const_iterator *_this)
{
    delete[] ((const std::deque<int>::const_iterator *)_this);
}

const MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_OffsetPtr(const MR_C_std_deque_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int_const_iterator *)(((const std::deque<int>::const_iterator *)ptr) + i);
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_OffsetMutablePtr(MR_C_std_deque_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int_const_iterator *)(((std::deque<int>::const_iterator *)ptr) + i);
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_FromMutable(const MR_C_std_deque_int_iterator *iter)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(std::deque<int>::iterator(
        (iter ? std::deque<int>::iterator(*(std::deque<int>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_DefaultConstruct(void)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator(std::deque<int>::iterator());
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int_iterator *)(new std::deque<int>::iterator[num_elems]{});
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_ConstructFromAnother(const MR_C_std_deque_int_iterator *other)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator(std::deque<int>::iterator(
        (other ? std::deque<int>::iterator(*(std::deque<int>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_deque_int_iterator_AssignFromAnother(MR_C_std_deque_int_iterator *_this, const MR_C_std_deque_int_iterator *other)
{
    (_this ? *(std::deque<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::deque<int>::iterator(*(std::deque<int>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_deque_int_iterator_Destroy(const MR_C_std_deque_int_iterator *_this)
{
    delete ((const std::deque<int>::iterator *)_this);
}

void MR_C_std_deque_int_iterator_DestroyArray(const MR_C_std_deque_int_iterator *_this)
{
    delete[] ((const std::deque<int>::iterator *)_this);
}

const MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_OffsetPtr(const MR_C_std_deque_int_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int_iterator *)(((const std::deque<int>::iterator *)ptr) + i);
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_OffsetMutablePtr(MR_C_std_deque_int_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int_iterator *)(((std::deque<int>::iterator *)ptr) + i);
}

const int *MR_C_std_deque_int_const_iterator_Deref(const MR_C_std_deque_int_const_iterator *_this)
{
    return &(*(_this ? *(const std::deque<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_deque_int_const_iterator_Incr(MR_C_std_deque_int_const_iterator *_this)
{
    ++(_this ? *(std::deque<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_int_const_iterator_Decr(MR_C_std_deque_int_const_iterator *_this)
{
    --(_this ? *(std::deque<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_int_const_iterator_OffsetBy(MR_C_std_deque_int_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::deque<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_deque_int_const_iterator_Distance(const MR_C_std_deque_int_const_iterator *a, const MR_C_std_deque_int_const_iterator *b)
{
    return (b ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

int *MR_C_std_deque_int_iterator_Deref(const MR_C_std_deque_int_iterator *_this)
{
    return &(*(_this ? *(const std::deque<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_deque_int_iterator_Incr(MR_C_std_deque_int_iterator *_this)
{
    ++(_this ? *(std::deque<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_int_iterator_Decr(MR_C_std_deque_int_iterator *_this)
{
    --(_this ? *(std::deque<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_deque_int_iterator_OffsetBy(MR_C_std_deque_int_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::deque<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_deque_int_iterator_Distance(const MR_C_std_deque_int_iterator *a, const MR_C_std_deque_int_iterator *b)
{
    return (b ? std::deque<int>::iterator(*(std::deque<int>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::deque<int>::iterator(*(std::deque<int>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

