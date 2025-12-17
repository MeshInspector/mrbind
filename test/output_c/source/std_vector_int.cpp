#define MR_C_BUILD_LIBRARY
#include "std_vector_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>());
}

MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int *)(new std::vector<int>[num_elems]{});
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    ));
}

void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    );
}

void MR_C_std_vector_int_Destroy(const MR_C_std_vector_int *_this)
{
    delete ((const std::vector<int> *)_this);
}

void MR_C_std_vector_int_DestroyArray(const MR_C_std_vector_int *_this)
{
    delete[] ((const std::vector<int> *)_this);
}

const MR_C_std_vector_int *MR_C_std_vector_int_OffsetPtr(const MR_C_std_vector_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int *)(((const std::vector<int> *)ptr) + i);
}

MR_C_std_vector_int *MR_C_std_vector_int_OffsetMutablePtr(MR_C_std_vector_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int *)(((std::vector<int> *)ptr) + i);
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromRange(const int *ptr, size_t size)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(ptr, ptr + size));
}

void MR_C_std_vector_int_AssignFromRange(MR_C_std_vector_int *_this, const int *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)) = std::vector<int>(ptr, ptr + size);
}

size_t MR_C_std_vector_int_Size(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).size();
}

bool MR_C_std_vector_int_IsEmpty(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).empty();
}

void MR_C_std_vector_int_Resize(MR_C_std_vector_int *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_int_ResizeWithDefaultValue(MR_C_std_vector_int *_this, size_t new_size, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_vector_int_Clear(MR_C_std_vector_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).clear();
}

size_t MR_C_std_vector_int_Capacity(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).capacity();
}

void MR_C_std_vector_int_Reserve(MR_C_std_vector_int *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_int_ShrinkToFit(MR_C_std_vector_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).shrink_to_fit();
}

const int *MR_C_std_vector_int_At(const MR_C_std_vector_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).at(
        i
    ));
}

int *MR_C_std_vector_int_MutableAt(MR_C_std_vector_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).at(
        i
    ));
}

const int *MR_C_std_vector_int_Front(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).front();
}

int *MR_C_std_vector_int_MutableFront(MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).front();
}

const int *MR_C_std_vector_int_Back(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).back();
}

int *MR_C_std_vector_int_MutableBack(MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).back();
}

const int *MR_C_std_vector_int_Data(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).data();
}

int *MR_C_std_vector_int_MutableData(MR_C_std_vector_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).data();
}

void MR_C_std_vector_int_PushBack(MR_C_std_vector_int *_this, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_int_PopBack(MR_C_std_vector_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).pop_back();
}

void MR_C_std_vector_int_Insert(MR_C_std_vector_int *_this, size_t position, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_int_Erase(MR_C_std_vector_int *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_int_InsertAtMutableIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *position, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_int_EraseAtMutableIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)position))
    );
}

void MR_C_std_vector_int_InsertAtIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *position, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_int_EraseAtIter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)position))
    );
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_Begin(const MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).cbegin());
}

bool MR_C_std_vector_int_IsBegin(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<int>::const_iterator *)(iter));
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_MutableBegin(MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).begin());
}

bool MR_C_std_vector_int_IsMutableBegin(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<int>::iterator *)(iter));
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_End(const MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).cend());
}

bool MR_C_std_vector_int_IsEnd(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<int>::const_iterator *)(iter));
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_MutableEnd(MR_C_std_vector_int *_this)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).end());
}

bool MR_C_std_vector_int_IsMutableEnd(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<int>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_int_ToIndex(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_int_MutableToIndex(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int> *)(_this)).begin();
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::const_iterator());
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int_const_iterator *)(new std::vector<int>::const_iterator[num_elems]{});
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_ConstructFromAnother(const MR_C_std_vector_int_const_iterator *other)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)other))
    ));
}

void MR_C_std_vector_int_const_iterator_AssignFromAnother(MR_C_std_vector_int_const_iterator *_this, const MR_C_std_vector_int_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)other))
    );
}

void MR_C_std_vector_int_const_iterator_Destroy(const MR_C_std_vector_int_const_iterator *_this)
{
    delete ((const std::vector<int>::const_iterator *)_this);
}

void MR_C_std_vector_int_const_iterator_DestroyArray(const MR_C_std_vector_int_const_iterator *_this)
{
    delete[] ((const std::vector<int>::const_iterator *)_this);
}

const MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_OffsetPtr(const MR_C_std_vector_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int_const_iterator *)(((const std::vector<int>::const_iterator *)ptr) + i);
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_OffsetMutablePtr(MR_C_std_vector_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int_const_iterator *)(((std::vector<int>::const_iterator *)ptr) + i);
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_FromMutable(const MR_C_std_vector_int_iterator *iter)
{
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)iter))
    ));
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(std::vector<int>::iterator());
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int_iterator *)(new std::vector<int>::iterator[num_elems]{});
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_ConstructFromAnother(const MR_C_std_vector_int_iterator *other)
{
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(std::vector<int>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)other))
    ));
}

void MR_C_std_vector_int_iterator_AssignFromAnother(MR_C_std_vector_int_iterator *_this, const MR_C_std_vector_int_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)other))
    );
}

void MR_C_std_vector_int_iterator_Destroy(const MR_C_std_vector_int_iterator *_this)
{
    delete ((const std::vector<int>::iterator *)_this);
}

void MR_C_std_vector_int_iterator_DestroyArray(const MR_C_std_vector_int_iterator *_this)
{
    delete[] ((const std::vector<int>::iterator *)_this);
}

const MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_OffsetPtr(const MR_C_std_vector_int_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int_iterator *)(((const std::vector<int>::iterator *)ptr) + i);
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_OffsetMutablePtr(MR_C_std_vector_int_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int_iterator *)(((std::vector<int>::iterator *)ptr) + i);
}

const int *MR_C_std_vector_int_const_iterator_Deref(const MR_C_std_vector_int_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int>::const_iterator *)(_this)));
}

void MR_C_std_vector_int_const_iterator_Incr(MR_C_std_vector_int_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::const_iterator *)(_this));
}

void MR_C_std_vector_int_const_iterator_Decr(MR_C_std_vector_int_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::const_iterator *)(_this));
}

void MR_C_std_vector_int_const_iterator_OffsetBy(MR_C_std_vector_int_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_int_const_iterator_Distance(const MR_C_std_vector_int_const_iterator *a, const MR_C_std_vector_int_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)a));
}

int *MR_C_std_vector_int_iterator_Deref(const MR_C_std_vector_int_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<int>::iterator *)(_this)));
}

void MR_C_std_vector_int_iterator_Incr(MR_C_std_vector_int_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::iterator *)(_this));
}

void MR_C_std_vector_int_iterator_Decr(MR_C_std_vector_int_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::iterator *)(_this));
}

void MR_C_std_vector_int_iterator_OffsetBy(MR_C_std_vector_int_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<int>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_int_iterator_Distance(const MR_C_std_vector_int_iterator *a, const MR_C_std_vector_int_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<int>::iterator(*(std::vector<int>::iterator *)a));
}

