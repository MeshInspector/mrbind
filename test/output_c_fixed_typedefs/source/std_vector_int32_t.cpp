#include "std_vector_int32_t.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <vector>


MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_vector_int32_t *)new std::vector<int32_t>(std::vector<int32_t>());
}

MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int32_t *)(new std::vector<int32_t>[num_elems]{});
}

MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int32_t *other)
{
    return (MR_C_std_vector_int32_t *)new std::vector<int32_t>(std::vector<int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int32_t>) MRBINDC_CLASSARG_COPY(other, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int32_t>) MRBINDC_CLASSARG_END(other, std::vector<int32_t>))
    ));
}

void MR_C_std_vector_int32_t_AssignFromAnother(MR_C_std_vector_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int32_t *other)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int32_t>) MRBINDC_CLASSARG_COPY(other, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int32_t>) MRBINDC_CLASSARG_END(other, std::vector<int32_t>))
    );
}

void MR_C_std_vector_int32_t_Destroy(const MR_C_std_vector_int32_t *_this)
{
    delete ((const std::vector<int32_t> *)_this);
}

void MR_C_std_vector_int32_t_DestroyArray(const MR_C_std_vector_int32_t *_this)
{
    delete[] ((const std::vector<int32_t> *)_this);
}

const MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_OffsetPtr(const MR_C_std_vector_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int32_t *)(((const std::vector<int32_t> *)ptr) + i);
}

MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_OffsetMutablePtr(MR_C_std_vector_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int32_t *)(((std::vector<int32_t> *)ptr) + i);
}

size_t MR_C_std_vector_int32_t_Size(const MR_C_std_vector_int32_t *_this)
{
    return (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_vector_int32_t_IsEmpty(const MR_C_std_vector_int32_t *_this)
{
    return (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_vector_int32_t_Resize(MR_C_std_vector_int32_t *_this, size_t new_size)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_vector_int32_t_ResizeWithDefaultValue(MR_C_std_vector_int32_t *_this, size_t new_size, const int32_t *value)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size,
        (value ? *value : throw std::runtime_error("Parameter `value` can not be null."))
    );
}

void MR_C_std_vector_int32_t_Clear(MR_C_std_vector_int32_t *_this)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_vector_int32_t_Capacity(const MR_C_std_vector_int32_t *_this)
{
    return (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).capacity();
}

void MR_C_std_vector_int32_t_Reserve(MR_C_std_vector_int32_t *_this, size_t new_capacity)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).reserve(
        new_capacity
    );
}

void MR_C_std_vector_int32_t_ShrinkToFit(MR_C_std_vector_int32_t *_this)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).shrink_to_fit();
}

const int32_t *MR_C_std_vector_int32_t_At(const MR_C_std_vector_int32_t *_this, size_t i)
{
    return &((_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

int32_t *MR_C_std_vector_int32_t_MutableAt(MR_C_std_vector_int32_t *_this, size_t i)
{
    return &((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const int32_t *MR_C_std_vector_int32_t_Front(const MR_C_std_vector_int32_t *_this)
{
    return (const int32_t *)((_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr);
}

int32_t *MR_C_std_vector_int32_t_MutableFront(MR_C_std_vector_int32_t *_this)
{
    return (int32_t *)((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr);
}

const int32_t *MR_C_std_vector_int32_t_Back(const MR_C_std_vector_int32_t *_this)
{
    return (const int32_t *)((_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr);
}

int32_t *MR_C_std_vector_int32_t_MutableBack(MR_C_std_vector_int32_t *_this)
{
    return (int32_t *)((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr);
}

const int32_t *MR_C_std_vector_int32_t_Data(const MR_C_std_vector_int32_t *_this)
{
    return (const int32_t *)((_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data());
}

int32_t *MR_C_std_vector_int32_t_MutableData(MR_C_std_vector_int32_t *_this)
{
    return (int32_t *)((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data());
}

void MR_C_std_vector_int32_t_PushBack(MR_C_std_vector_int32_t *_this, int32_t new_elem)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        new_elem
    );
}

void MR_C_std_vector_int32_t_PopBack(MR_C_std_vector_int32_t *_this)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_vector_int32_t_Insert(MR_C_std_vector_int32_t *_this, size_t position, int32_t new_elem)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_int32_t_Erase(MR_C_std_vector_int32_t *_this, size_t position)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_int32_t_InsertAtMutableIter(MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_iterator *position, int32_t new_elem)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_vector_int32_t_EraseAtMutableIter(MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_iterator *position)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_vector_int32_t_InsertAtIter(MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_const_iterator *position, int32_t new_elem)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        new_elem
    );
}

void MR_C_std_vector_int32_t_EraseAtIter(MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_const_iterator *position)
{
    (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_Begin(const MR_C_std_vector_int32_t *_this)
{
    return (MR_C_std_vector_int32_t_const_iterator *)new std::vector<int32_t>::const_iterator((_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_vector_int32_t_IsBegin(const MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_const_iterator *iter)
{
    return (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::vector<int32_t>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_MutableBegin(MR_C_std_vector_int32_t *_this)
{
    return (MR_C_std_vector_int32_t_iterator *)new std::vector<int32_t>::iterator((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_vector_int32_t_IsMutableBegin(MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_iterator *iter)
{
    return (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::vector<int32_t>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_End(const MR_C_std_vector_int32_t *_this)
{
    return (MR_C_std_vector_int32_t_const_iterator *)new std::vector<int32_t>::const_iterator((_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_vector_int32_t_IsEnd(const MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_const_iterator *iter)
{
    return (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::vector<int32_t>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_MutableEnd(MR_C_std_vector_int32_t *_this)
{
    return (MR_C_std_vector_int32_t_iterator *)new std::vector<int32_t>::iterator((_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_vector_int32_t_IsMutableEnd(MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_iterator *iter)
{
    return (_this ? *(std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::vector<int32_t>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_vector_int32_t_ToIndex(const MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_const_iterator *iter)
{
    return (iter ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_vector_int32_t_MutableToIndex(const MR_C_std_vector_int32_t *_this, const MR_C_std_vector_int32_t_iterator *iter)
{
    return (iter ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int32_t_const_iterator *)new std::vector<int32_t>::const_iterator(std::vector<int32_t>::const_iterator());
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int32_t_const_iterator *)(new std::vector<int32_t>::const_iterator[num_elems]{});
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_const_iterator_ConstructFromAnother(const MR_C_std_vector_int32_t_const_iterator *other)
{
    return (MR_C_std_vector_int32_t_const_iterator *)new std::vector<int32_t>::const_iterator(std::vector<int32_t>::const_iterator(
        (other ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_int32_t_const_iterator_AssignFromAnother(MR_C_std_vector_int32_t_const_iterator *_this, const MR_C_std_vector_int32_t_const_iterator *other)
{
    (_this ? *(std::vector<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_vector_int32_t_const_iterator_Destroy(const MR_C_std_vector_int32_t_const_iterator *_this)
{
    delete ((const std::vector<int32_t>::const_iterator *)_this);
}

void MR_C_std_vector_int32_t_const_iterator_DestroyArray(const MR_C_std_vector_int32_t_const_iterator *_this)
{
    delete[] ((const std::vector<int32_t>::const_iterator *)_this);
}

const MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_const_iterator_OffsetPtr(const MR_C_std_vector_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int32_t_const_iterator *)(((const std::vector<int32_t>::const_iterator *)ptr) + i);
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_const_iterator_OffsetMutablePtr(MR_C_std_vector_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int32_t_const_iterator *)(((std::vector<int32_t>::const_iterator *)ptr) + i);
}

MR_C_std_vector_int32_t_const_iterator *MR_C_std_vector_int32_t_const_iterator_FromMutable(const MR_C_std_vector_int32_t_iterator *iter)
{
    return (MR_C_std_vector_int32_t_const_iterator *)new std::vector<int32_t>::const_iterator(std::vector<int32_t>::iterator(
        (iter ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int32_t_iterator *)new std::vector<int32_t>::iterator(std::vector<int32_t>::iterator());
}

MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int32_t_iterator *)(new std::vector<int32_t>::iterator[num_elems]{});
}

MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_iterator_ConstructFromAnother(const MR_C_std_vector_int32_t_iterator *other)
{
    return (MR_C_std_vector_int32_t_iterator *)new std::vector<int32_t>::iterator(std::vector<int32_t>::iterator(
        (other ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_int32_t_iterator_AssignFromAnother(MR_C_std_vector_int32_t_iterator *_this, const MR_C_std_vector_int32_t_iterator *other)
{
    (_this ? *(std::vector<int32_t>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_vector_int32_t_iterator_Destroy(const MR_C_std_vector_int32_t_iterator *_this)
{
    delete ((const std::vector<int32_t>::iterator *)_this);
}

void MR_C_std_vector_int32_t_iterator_DestroyArray(const MR_C_std_vector_int32_t_iterator *_this)
{
    delete[] ((const std::vector<int32_t>::iterator *)_this);
}

const MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_iterator_OffsetPtr(const MR_C_std_vector_int32_t_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int32_t_iterator *)(((const std::vector<int32_t>::iterator *)ptr) + i);
}

MR_C_std_vector_int32_t_iterator *MR_C_std_vector_int32_t_iterator_OffsetMutablePtr(MR_C_std_vector_int32_t_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int32_t_iterator *)(((std::vector<int32_t>::iterator *)ptr) + i);
}

const int32_t *MR_C_std_vector_int32_t_const_iterator_Deref(const MR_C_std_vector_int32_t_const_iterator *_this)
{
    return &(*(_this ? *(const std::vector<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_int32_t_const_iterator_Incr(MR_C_std_vector_int32_t_const_iterator *_this)
{
    ++(_this ? *(std::vector<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int32_t_const_iterator_Decr(MR_C_std_vector_int32_t_const_iterator *_this)
{
    --(_this ? *(std::vector<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int32_t_const_iterator_OffsetBy(MR_C_std_vector_int32_t_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_int32_t_const_iterator_Distance(const MR_C_std_vector_int32_t_const_iterator *a, const MR_C_std_vector_int32_t_const_iterator *b)
{
    return (b ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<int32_t>::const_iterator(*(std::vector<int32_t>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

int32_t *MR_C_std_vector_int32_t_iterator_Deref(const MR_C_std_vector_int32_t_iterator *_this)
{
    return &(*(_this ? *(const std::vector<int32_t>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_int32_t_iterator_Incr(MR_C_std_vector_int32_t_iterator *_this)
{
    ++(_this ? *(std::vector<int32_t>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int32_t_iterator_Decr(MR_C_std_vector_int32_t_iterator *_this)
{
    --(_this ? *(std::vector<int32_t>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_int32_t_iterator_OffsetBy(MR_C_std_vector_int32_t_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<int32_t>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_int32_t_iterator_Distance(const MR_C_std_vector_int32_t_iterator *a, const MR_C_std_vector_int32_t_iterator *b)
{
    return (b ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<int32_t>::iterator(*(std::vector<int32_t>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

