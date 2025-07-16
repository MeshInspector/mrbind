#include "std_vector_long.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <vector>


MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstruct(void)
{
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>());
}

MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_long *)(new std::vector<long>[num_elems]{});
}

MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_long *other)
{
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<long>) MRBINDC_CLASSARG_COPY(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(other, std::vector<long>))
    ));
}

void MR_C_std_vector_long_AssignFromAnother(MR_C_std_vector_long *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_long *other)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<long>) MRBINDC_CLASSARG_COPY(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(other, std::vector<long>))
    );
}

void MR_C_std_vector_long_Destroy(const MR_C_std_vector_long *_this)
{
    delete ((const std::vector<long> *)_this);
}

void MR_C_std_vector_long_DestroyArray(const MR_C_std_vector_long *_this)
{
    delete[] ((const std::vector<long> *)_this);
}

const MR_C_std_vector_long *MR_C_std_vector_long_OffsetPtr(const MR_C_std_vector_long *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_long *)(((const std::vector<long> *)ptr) + i);
}

MR_C_std_vector_long *MR_C_std_vector_long_OffsetMutablePtr(MR_C_std_vector_long *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_long *)(((std::vector<long> *)ptr) + i);
}

MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromRange(const long *ptr, size_t size)
{
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>(ptr, ptr + size));
}

void MR_C_std_vector_long_AssignFromRange(MR_C_std_vector_long *_this, const long *ptr, size_t size)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::vector<long>(ptr, ptr + size);
}

size_t MR_C_std_vector_long_Size(const MR_C_std_vector_long *_this)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_vector_long_IsEmpty(const MR_C_std_vector_long *_this)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_vector_long_Resize(MR_C_std_vector_long *_this, size_t new_size)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_vector_long_ResizeWithDefaultValue(MR_C_std_vector_long *_this, size_t new_size, long value)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size,
        value
    );
}

void MR_C_std_vector_long_Clear(MR_C_std_vector_long *_this)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_vector_long_Capacity(const MR_C_std_vector_long *_this)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).capacity();
}

void MR_C_std_vector_long_Reserve(MR_C_std_vector_long *_this, size_t new_capacity)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).reserve(
        new_capacity
    );
}

void MR_C_std_vector_long_ShrinkToFit(MR_C_std_vector_long *_this)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).shrink_to_fit();
}

const long *MR_C_std_vector_long_At(const MR_C_std_vector_long *_this, size_t i)
{
    return &((_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

long *MR_C_std_vector_long_MutableAt(MR_C_std_vector_long *_this, size_t i)
{
    return &((_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const long *MR_C_std_vector_long_Front(const MR_C_std_vector_long *_this)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr;
}

long *MR_C_std_vector_long_MutableFront(MR_C_std_vector_long *_this)
{
    return (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr;
}

const long *MR_C_std_vector_long_Back(const MR_C_std_vector_long *_this)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr;
}

long *MR_C_std_vector_long_MutableBack(MR_C_std_vector_long *_this)
{
    return (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr;
}

const long *MR_C_std_vector_long_Data(const MR_C_std_vector_long *_this)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

long *MR_C_std_vector_long_MutableData(MR_C_std_vector_long *_this)
{
    return (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

void MR_C_std_vector_long_PushBack(MR_C_std_vector_long *_this, long new_elem)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        new_elem
    );
}

void MR_C_std_vector_long_PopBack(MR_C_std_vector_long *_this)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_vector_long_Insert(MR_C_std_vector_long *_this, size_t position, long new_elem)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_long_Erase(MR_C_std_vector_long *_this, size_t position)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_long_InsertAtMutableIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *position, long new_elem)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<long>::iterator(*(std::vector<long>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_vector_long_EraseAtMutableIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *position)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<long>::iterator(*(std::vector<long>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_vector_long_InsertAtIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *position, long new_elem)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_vector_long_EraseAtIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *position)
{
    (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_Begin(const MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator((_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_vector_long_IsBegin(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::vector<long>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_MutableBegin(MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator((_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_vector_long_IsMutableBegin(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter)
{
    return (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::vector<long>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_End(const MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator((_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_vector_long_IsEnd(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter)
{
    return (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::vector<long>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_MutableEnd(MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator((_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_vector_long_IsMutableEnd(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter)
{
    return (_this ? *(std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::vector<long>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_vector_long_ToIndex(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter)
{
    return (iter ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_vector_long_MutableToIndex(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter)
{
    return (iter ? std::vector<long>::iterator(*(std::vector<long>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(std::vector<long>::const_iterator());
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_long_const_iterator *)(new std::vector<long>::const_iterator[num_elems]{});
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_ConstructFromAnother(const MR_C_std_vector_long_const_iterator *other)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(std::vector<long>::const_iterator(
        (other ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_long_const_iterator_AssignFromAnother(MR_C_std_vector_long_const_iterator *_this, const MR_C_std_vector_long_const_iterator *other)
{
    (_this ? *(std::vector<long>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_vector_long_const_iterator_Destroy(const MR_C_std_vector_long_const_iterator *_this)
{
    delete ((const std::vector<long>::const_iterator *)_this);
}

void MR_C_std_vector_long_const_iterator_DestroyArray(const MR_C_std_vector_long_const_iterator *_this)
{
    delete[] ((const std::vector<long>::const_iterator *)_this);
}

const MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_OffsetPtr(const MR_C_std_vector_long_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_long_const_iterator *)(((const std::vector<long>::const_iterator *)ptr) + i);
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_OffsetMutablePtr(MR_C_std_vector_long_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_long_const_iterator *)(((std::vector<long>::const_iterator *)ptr) + i);
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_FromMutable(const MR_C_std_vector_long_iterator *iter)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(std::vector<long>::iterator(
        (iter ? std::vector<long>::iterator(*(std::vector<long>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator(std::vector<long>::iterator());
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_long_iterator *)(new std::vector<long>::iterator[num_elems]{});
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_ConstructFromAnother(const MR_C_std_vector_long_iterator *other)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator(std::vector<long>::iterator(
        (other ? std::vector<long>::iterator(*(std::vector<long>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_long_iterator_AssignFromAnother(MR_C_std_vector_long_iterator *_this, const MR_C_std_vector_long_iterator *other)
{
    (_this ? *(std::vector<long>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<long>::iterator(*(std::vector<long>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_vector_long_iterator_Destroy(const MR_C_std_vector_long_iterator *_this)
{
    delete ((const std::vector<long>::iterator *)_this);
}

void MR_C_std_vector_long_iterator_DestroyArray(const MR_C_std_vector_long_iterator *_this)
{
    delete[] ((const std::vector<long>::iterator *)_this);
}

const MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_OffsetPtr(const MR_C_std_vector_long_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_long_iterator *)(((const std::vector<long>::iterator *)ptr) + i);
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_OffsetMutablePtr(MR_C_std_vector_long_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_long_iterator *)(((std::vector<long>::iterator *)ptr) + i);
}

const long *MR_C_std_vector_long_const_iterator_Deref(const MR_C_std_vector_long_const_iterator *_this)
{
    return &(*(_this ? *(const std::vector<long>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_long_const_iterator_Incr(MR_C_std_vector_long_const_iterator *_this)
{
    ++(_this ? *(std::vector<long>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_long_const_iterator_Decr(MR_C_std_vector_long_const_iterator *_this)
{
    --(_this ? *(std::vector<long>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_long_const_iterator_OffsetBy(MR_C_std_vector_long_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<long>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_long_const_iterator_Distance(const MR_C_std_vector_long_const_iterator *a, const MR_C_std_vector_long_const_iterator *b)
{
    return (b ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

long *MR_C_std_vector_long_iterator_Deref(const MR_C_std_vector_long_iterator *_this)
{
    return &(*(_this ? *(const std::vector<long>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_long_iterator_Incr(MR_C_std_vector_long_iterator *_this)
{
    ++(_this ? *(std::vector<long>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_long_iterator_Decr(MR_C_std_vector_long_iterator *_this)
{
    --(_this ? *(std::vector<long>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_long_iterator_OffsetBy(MR_C_std_vector_long_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<long>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_long_iterator_Distance(const MR_C_std_vector_long_iterator *a, const MR_C_std_vector_long_iterator *b)
{
    return (b ? std::vector<long>::iterator(*(std::vector<long>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<long>::iterator(*(std::vector<long>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

