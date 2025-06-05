#include "std_vector_int.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <vector>


MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>());
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    ));
}

void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    );
}

void MR_C_std_vector_int_Destroy(MR_C_std_vector_int *_this)
{
    delete &(_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

size_t MR_C_std_vector_int_Size(const MR_C_std_vector_int *_this)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_vector_int_IsEmpty(const MR_C_std_vector_int *_this)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_vector_int_Resize(MR_C_std_vector_int *_this, size_t new_size)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_vector_int_Clear(MR_C_std_vector_int *_this)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_vector_int_Capacity(const MR_C_std_vector_int *_this)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).capacity();
}

void MR_C_std_vector_int_Reserve(MR_C_std_vector_int *_this, size_t new_capacity)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).reserve(
        new_capacity
    );
}

void MR_C_std_vector_int_ShrinkToFit(MR_C_std_vector_int *_this)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).shrink_to_fit();
}

const int *MR_C_std_vector_int_At(const MR_C_std_vector_int *_this, size_t i)
{
    return &((_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

int *MR_C_std_vector_int_MutableAt(MR_C_std_vector_int *_this, size_t i)
{
    return &((_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const int *MR_C_std_vector_int_Front(const MR_C_std_vector_int *_this)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr;
}

int *MR_C_std_vector_int_MutableFront(MR_C_std_vector_int *_this)
{
    return (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr;
}

const int *MR_C_std_vector_int_Back(const MR_C_std_vector_int *_this)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr;
}

int *MR_C_std_vector_int_MutableBack(MR_C_std_vector_int *_this)
{
    return (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr;
}

const int *MR_C_std_vector_int_Data(const MR_C_std_vector_int *_this)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

int *MR_C_std_vector_int_MutableData(MR_C_std_vector_int *_this)
{
    return (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

void MR_C_std_vector_int_PushBack(MR_C_std_vector_int *_this, int new_elem)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        new_elem
    );
}

void MR_C_std_vector_int_PopBack(MR_C_std_vector_int *_this)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_vector_int_Insert(MR_C_std_vector_int *_this, size_t position, int new_elem)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_int_Erase(MR_C_std_vector_int *_this, size_t position)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_int_InsertAtMutableIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *position, int new_elem)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<int>::iterator(*(std::vector<int>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_vector_int_EraseAtMutableIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *position)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<int>::iterator(*(std::vector<int>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_vector_int_InsertAtIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *position, int new_elem)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_vector_int_EraseAtIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *position)
{
    (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_Begin(const MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator((_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_vector_int_IsBegin(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::vector<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_MutableBegin(MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator((_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_vector_int_IsMutableBegin(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    return (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::vector<int>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_End(const MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator((_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_vector_int_IsEnd(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    return (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::vector<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_MutableEnd(MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator((_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_vector_int_IsMutableEnd(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    return (_this ? *(std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::vector<int>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_vector_int_ToIndex(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    return (iter ? std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_vector_int_MutableToIndex(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    return (iter ? std::vector<int>::iterator(*(std::vector<int>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::const_iterator());
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int_const_iterator *other)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::const_iterator(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>::const_iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<int>::const_iterator), std::vector<int>::const_iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>::const_iterator), std::vector<int>::const_iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>::const_iterator) MRBINDC_CLASSARG_END(other, std::vector<int>::const_iterator))
    ));
}

void MR_C_std_vector_int_const_iterator_AssignFromAnother(MR_C_std_vector_int_const_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int_const_iterator *other)
{
    (_this ? *(std::vector<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>::const_iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<int>::const_iterator), std::vector<int>::const_iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>::const_iterator), std::vector<int>::const_iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>::const_iterator) MRBINDC_CLASSARG_END(other, std::vector<int>::const_iterator))
    );
}

void MR_C_std_vector_int_const_iterator_Destroy(MR_C_std_vector_int_const_iterator *_this)
{
    delete &(_this ? *(std::vector<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_FromMutable(const MR_C_std_vector_int_iterator *iter)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::iterator(
        (iter ? std::vector<int>::iterator(*(std::vector<int>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(std::vector<int>::iterator());
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int_iterator *other)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(std::vector<int>::iterator(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>::iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<int>::iterator), std::vector<int>::iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>::iterator), std::vector<int>::iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>::iterator) MRBINDC_CLASSARG_END(other, std::vector<int>::iterator))
    ));
}

void MR_C_std_vector_int_iterator_AssignFromAnother(MR_C_std_vector_int_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int_iterator *other)
{
    (_this ? *(std::vector<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>::iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<int>::iterator), std::vector<int>::iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>::iterator), std::vector<int>::iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>::iterator) MRBINDC_CLASSARG_END(other, std::vector<int>::iterator))
    );
}

void MR_C_std_vector_int_iterator_Destroy(MR_C_std_vector_int_iterator *_this)
{
    delete &(_this ? *(std::vector<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int *MR_C_std_vector_int_const_iterator_Deref(const MR_C_std_vector_int_const_iterator *_this)
{
    return &(*(_this ? *(const std::vector<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_int_const_iterator_Incr(MR_C_std_vector_int_const_iterator *_this)
{
    ++(_this ? *(std::vector<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int_const_iterator_Decr(MR_C_std_vector_int_const_iterator *_this)
{
    --(_this ? *(std::vector<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int_const_iterator_OffsetBy(MR_C_std_vector_int_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_int_const_iterator_Distance(const MR_C_std_vector_int_const_iterator *a, const MR_C_std_vector_int_const_iterator *b)
{
    return (b ? std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

int *MR_C_std_vector_int_iterator_Deref(const MR_C_std_vector_int_iterator *_this)
{
    return &(*(_this ? *(const std::vector<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_int_iterator_Incr(MR_C_std_vector_int_iterator *_this)
{
    ++(_this ? *(std::vector<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int_iterator_Decr(MR_C_std_vector_int_iterator *_this)
{
    --(_this ? *(std::vector<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int_iterator_OffsetBy(MR_C_std_vector_int_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<int>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_int_iterator_Distance(const MR_C_std_vector_int_iterator *a, const MR_C_std_vector_int_iterator *b)
{
    return (b ? std::vector<int>::iterator(*(std::vector<int>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<int>::iterator(*(std::vector<int>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

