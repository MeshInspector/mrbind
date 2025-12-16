#define MR_C_BUILD_LIBRARY
#include "std_vector_unsigned_long.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_unsigned_long *MR_C_std_vector_unsigned_long_DefaultConstruct(void)
{
    return (MR_C_std_vector_unsigned_long *)new std::vector<unsigned long>(std::vector<unsigned long>());
}

MR_C_std_vector_unsigned_long *MR_C_std_vector_unsigned_long_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_unsigned_long *)(new std::vector<unsigned long>[num_elems]{});
}

MR_C_std_vector_unsigned_long *MR_C_std_vector_unsigned_long_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_unsigned_long *other)
{
    return (MR_C_std_vector_unsigned_long *)new std::vector<unsigned long>(std::vector<unsigned long>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<unsigned long>) MRBINDC_CLASSARG_COPY(other, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<unsigned long>) MRBINDC_CLASSARG_END(other, std::vector<unsigned long>))
    ));
}

void MR_C_std_vector_unsigned_long_AssignFromAnother(MR_C_std_vector_unsigned_long *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_unsigned_long *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<unsigned long>) MRBINDC_CLASSARG_COPY(other, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<unsigned long>) MRBINDC_CLASSARG_END(other, std::vector<unsigned long>))
    );
}

void MR_C_std_vector_unsigned_long_Destroy(const MR_C_std_vector_unsigned_long *_this)
{
    delete ((const std::vector<unsigned long> *)_this);
}

void MR_C_std_vector_unsigned_long_DestroyArray(const MR_C_std_vector_unsigned_long *_this)
{
    delete[] ((const std::vector<unsigned long> *)_this);
}

const MR_C_std_vector_unsigned_long *MR_C_std_vector_unsigned_long_OffsetPtr(const MR_C_std_vector_unsigned_long *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_unsigned_long *)(((const std::vector<unsigned long> *)ptr) + i);
}

MR_C_std_vector_unsigned_long *MR_C_std_vector_unsigned_long_OffsetMutablePtr(MR_C_std_vector_unsigned_long *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_unsigned_long *)(((std::vector<unsigned long> *)ptr) + i);
}

MR_C_std_vector_unsigned_long *MR_C_std_vector_unsigned_long_ConstructFromRange(const unsigned long *ptr, size_t size)
{
    return (MR_C_std_vector_unsigned_long *)new std::vector<unsigned long>(std::vector<unsigned long>(ptr, ptr + size));
}

void MR_C_std_vector_unsigned_long_AssignFromRange(MR_C_std_vector_unsigned_long *_this, const unsigned long *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)) = std::vector<unsigned long>(ptr, ptr + size);
}

size_t MR_C_std_vector_unsigned_long_Size(const MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).size();
}

bool MR_C_std_vector_unsigned_long_IsEmpty(const MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).empty();
}

void MR_C_std_vector_unsigned_long_Resize(MR_C_std_vector_unsigned_long *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_unsigned_long_ResizeWithDefaultValue(MR_C_std_vector_unsigned_long *_this, size_t new_size, unsigned long value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_vector_unsigned_long_Clear(MR_C_std_vector_unsigned_long *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).clear();
}

size_t MR_C_std_vector_unsigned_long_Capacity(const MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).capacity();
}

void MR_C_std_vector_unsigned_long_Reserve(MR_C_std_vector_unsigned_long *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_unsigned_long_ShrinkToFit(MR_C_std_vector_unsigned_long *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).shrink_to_fit();
}

const unsigned long *MR_C_std_vector_unsigned_long_At(const MR_C_std_vector_unsigned_long *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).at(
        i
    ));
}

unsigned long *MR_C_std_vector_unsigned_long_MutableAt(MR_C_std_vector_unsigned_long *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).at(
        i
    ));
}

const unsigned long *MR_C_std_vector_unsigned_long_Front(const MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).front();
}

unsigned long *MR_C_std_vector_unsigned_long_MutableFront(MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).front();
}

const unsigned long *MR_C_std_vector_unsigned_long_Back(const MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).back();
}

unsigned long *MR_C_std_vector_unsigned_long_MutableBack(MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).back();
}

const unsigned long *MR_C_std_vector_unsigned_long_Data(const MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).data();
}

unsigned long *MR_C_std_vector_unsigned_long_MutableData(MR_C_std_vector_unsigned_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).data();
}

void MR_C_std_vector_unsigned_long_PushBack(MR_C_std_vector_unsigned_long *_this, unsigned long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_unsigned_long_PopBack(MR_C_std_vector_unsigned_long *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).pop_back();
}

void MR_C_std_vector_unsigned_long_Insert(MR_C_std_vector_unsigned_long *_this, size_t position, unsigned long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_unsigned_long_Erase(MR_C_std_vector_unsigned_long *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_unsigned_long_InsertAtMutableIter(MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_iterator *position, unsigned long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_unsigned_long_EraseAtMutableIter(MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)position))
    );
}

void MR_C_std_vector_unsigned_long_InsertAtIter(MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_const_iterator *position, unsigned long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_unsigned_long_EraseAtIter(MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)position))
    );
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_Begin(const MR_C_std_vector_unsigned_long *_this)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)new std::vector<unsigned long>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).cbegin());
}

bool MR_C_std_vector_unsigned_long_IsBegin(const MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<unsigned long>::const_iterator *)(iter));
}

MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_MutableBegin(MR_C_std_vector_unsigned_long *_this)
{
    return (MR_C_std_vector_unsigned_long_iterator *)new std::vector<unsigned long>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).begin());
}

bool MR_C_std_vector_unsigned_long_IsMutableBegin(MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<unsigned long>::iterator *)(iter));
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_End(const MR_C_std_vector_unsigned_long *_this)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)new std::vector<unsigned long>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).cend());
}

bool MR_C_std_vector_unsigned_long_IsEnd(const MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<unsigned long>::const_iterator *)(iter));
}

MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_MutableEnd(MR_C_std_vector_unsigned_long *_this)
{
    return (MR_C_std_vector_unsigned_long_iterator *)new std::vector<unsigned long>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).end());
}

bool MR_C_std_vector_unsigned_long_IsMutableEnd(MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<unsigned long>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_unsigned_long_ToIndex(const MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_unsigned_long_MutableToIndex(const MR_C_std_vector_unsigned_long *_this, const MR_C_std_vector_unsigned_long_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long> *)(_this)).begin();
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)new std::vector<unsigned long>::const_iterator(std::vector<unsigned long>::const_iterator());
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)(new std::vector<unsigned long>::const_iterator[num_elems]{});
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_const_iterator_ConstructFromAnother(const MR_C_std_vector_unsigned_long_const_iterator *other)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)new std::vector<unsigned long>::const_iterator(std::vector<unsigned long>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)other))
    ));
}

void MR_C_std_vector_unsigned_long_const_iterator_AssignFromAnother(MR_C_std_vector_unsigned_long_const_iterator *_this, const MR_C_std_vector_unsigned_long_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)other))
    );
}

void MR_C_std_vector_unsigned_long_const_iterator_Destroy(const MR_C_std_vector_unsigned_long_const_iterator *_this)
{
    delete ((const std::vector<unsigned long>::const_iterator *)_this);
}

void MR_C_std_vector_unsigned_long_const_iterator_DestroyArray(const MR_C_std_vector_unsigned_long_const_iterator *_this)
{
    delete[] ((const std::vector<unsigned long>::const_iterator *)_this);
}

const MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_const_iterator_OffsetPtr(const MR_C_std_vector_unsigned_long_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_unsigned_long_const_iterator *)(((const std::vector<unsigned long>::const_iterator *)ptr) + i);
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_const_iterator_OffsetMutablePtr(MR_C_std_vector_unsigned_long_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)(((std::vector<unsigned long>::const_iterator *)ptr) + i);
}

MR_C_std_vector_unsigned_long_const_iterator *MR_C_std_vector_unsigned_long_const_iterator_FromMutable(const MR_C_std_vector_unsigned_long_iterator *iter)
{
    return (MR_C_std_vector_unsigned_long_const_iterator *)new std::vector<unsigned long>::const_iterator(std::vector<unsigned long>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)iter))
    ));
}

MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_unsigned_long_iterator *)new std::vector<unsigned long>::iterator(std::vector<unsigned long>::iterator());
}

MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_unsigned_long_iterator *)(new std::vector<unsigned long>::iterator[num_elems]{});
}

MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_iterator_ConstructFromAnother(const MR_C_std_vector_unsigned_long_iterator *other)
{
    return (MR_C_std_vector_unsigned_long_iterator *)new std::vector<unsigned long>::iterator(std::vector<unsigned long>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)other))
    ));
}

void MR_C_std_vector_unsigned_long_iterator_AssignFromAnother(MR_C_std_vector_unsigned_long_iterator *_this, const MR_C_std_vector_unsigned_long_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)other))
    );
}

void MR_C_std_vector_unsigned_long_iterator_Destroy(const MR_C_std_vector_unsigned_long_iterator *_this)
{
    delete ((const std::vector<unsigned long>::iterator *)_this);
}

void MR_C_std_vector_unsigned_long_iterator_DestroyArray(const MR_C_std_vector_unsigned_long_iterator *_this)
{
    delete[] ((const std::vector<unsigned long>::iterator *)_this);
}

const MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_iterator_OffsetPtr(const MR_C_std_vector_unsigned_long_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_unsigned_long_iterator *)(((const std::vector<unsigned long>::iterator *)ptr) + i);
}

MR_C_std_vector_unsigned_long_iterator *MR_C_std_vector_unsigned_long_iterator_OffsetMutablePtr(MR_C_std_vector_unsigned_long_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_unsigned_long_iterator *)(((std::vector<unsigned long>::iterator *)ptr) + i);
}

const unsigned long *MR_C_std_vector_unsigned_long_const_iterator_Deref(const MR_C_std_vector_unsigned_long_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long>::const_iterator *)(_this)));
}

void MR_C_std_vector_unsigned_long_const_iterator_Incr(MR_C_std_vector_unsigned_long_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::const_iterator *)(_this));
}

void MR_C_std_vector_unsigned_long_const_iterator_Decr(MR_C_std_vector_unsigned_long_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::const_iterator *)(_this));
}

void MR_C_std_vector_unsigned_long_const_iterator_OffsetBy(MR_C_std_vector_unsigned_long_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_unsigned_long_const_iterator_Distance(const MR_C_std_vector_unsigned_long_const_iterator *a, const MR_C_std_vector_unsigned_long_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<unsigned long>::const_iterator(*(std::vector<unsigned long>::const_iterator *)a));
}

unsigned long *MR_C_std_vector_unsigned_long_iterator_Deref(const MR_C_std_vector_unsigned_long_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<unsigned long>::iterator *)(_this)));
}

void MR_C_std_vector_unsigned_long_iterator_Incr(MR_C_std_vector_unsigned_long_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::iterator *)(_this));
}

void MR_C_std_vector_unsigned_long_iterator_Decr(MR_C_std_vector_unsigned_long_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::iterator *)(_this));
}

void MR_C_std_vector_unsigned_long_iterator_OffsetBy(MR_C_std_vector_unsigned_long_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<unsigned long>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_unsigned_long_iterator_Distance(const MR_C_std_vector_unsigned_long_iterator *a, const MR_C_std_vector_unsigned_long_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<unsigned long>::iterator(*(std::vector<unsigned long>::iterator *)a));
}

