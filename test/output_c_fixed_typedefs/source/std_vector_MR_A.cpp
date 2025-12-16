#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_vector_MR_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>());
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_A *)(new std::vector<MR::A>[num_elems]{});
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    ));
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    );
}

void MR_C_std_vector_MR_A_Destroy(const MR_C_std_vector_MR_A *_this)
{
    delete ((const std::vector<MR::A> *)_this);
}

void MR_C_std_vector_MR_A_DestroyArray(const MR_C_std_vector_MR_A *_this)
{
    delete[] ((const std::vector<MR::A> *)_this);
}

const MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_OffsetPtr(const MR_C_std_vector_MR_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_A *)(((const std::vector<MR::A> *)ptr) + i);
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_OffsetMutablePtr(MR_C_std_vector_MR_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_A *)(((std::vector<MR::A> *)ptr) + i);
}

size_t MR_C_std_vector_MR_A_Size(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).size();
}

bool MR_C_std_vector_MR_A_IsEmpty(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).empty();
}

void MR_C_std_vector_MR_A_Resize(MR_C_std_vector_MR_A *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_MR_A_ResizeWithDefaultValue(MR_C_std_vector_MR_A *_this, size_t new_size, const MR_A *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const MR::A *)(value))
    );
}

void MR_C_std_vector_MR_A_Clear(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_A_Capacity(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).capacity();
}

void MR_C_std_vector_MR_A_Reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_A_ShrinkToFit(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).shrink_to_fit();
}

const MR_A *MR_C_std_vector_MR_A_At(const MR_C_std_vector_MR_A *_this, size_t i)
{
    return (const MR_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).at(
        i
    ));
}

MR_A *MR_C_std_vector_MR_A_MutableAt(MR_C_std_vector_MR_A *_this, size_t i)
{
    return (MR_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).at(
        i
    ));
}

const MR_A *MR_C_std_vector_MR_A_Front(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).front());
}

MR_A *MR_C_std_vector_MR_A_MutableFront(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).front());
}

const MR_A *MR_C_std_vector_MR_A_Back(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).back());
}

MR_A *MR_C_std_vector_MR_A_MutableBack(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).back());
}

void MR_C_std_vector_MR_A_PushBack(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_PopBack(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_A_Insert(MR_C_std_vector_MR_A *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A)));
}

void MR_C_std_vector_MR_A_Erase(MR_C_std_vector_MR_A *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_MR_A_InsertAtMutableIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_EraseAtMutableIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)position))
    );
}

void MR_C_std_vector_MR_A_InsertAtIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_EraseAtIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)position))
    );
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_Begin(const MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cbegin());
}

bool MR_C_std_vector_MR_A_IsBegin(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::const_iterator *)(iter));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_MutableBegin(MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin());
}

bool MR_C_std_vector_MR_A_IsMutableBegin(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::iterator *)(iter));
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_End(const MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cend());
}

bool MR_C_std_vector_MR_A_IsEnd(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::const_iterator *)(iter));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_MutableEnd(MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).end());
}

bool MR_C_std_vector_MR_A_IsMutableEnd(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_MR_A_ToIndex(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_MR_A_MutableToIndex(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).begin();
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::const_iterator());
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_A_const_iterator *)(new std::vector<MR::A>::const_iterator[num_elems]{});
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_A_const_iterator *other)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)other))
    ));
}

void MR_C_std_vector_MR_A_const_iterator_AssignFromAnother(MR_C_std_vector_MR_A_const_iterator *_this, const MR_C_std_vector_MR_A_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)other))
    );
}

void MR_C_std_vector_MR_A_const_iterator_Destroy(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    delete ((const std::vector<MR::A>::const_iterator *)_this);
}

void MR_C_std_vector_MR_A_const_iterator_DestroyArray(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    delete[] ((const std::vector<MR::A>::const_iterator *)_this);
}

const MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_OffsetPtr(const MR_C_std_vector_MR_A_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_A_const_iterator *)(((const std::vector<MR::A>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_A_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_A_const_iterator *)(((std::vector<MR::A>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_FromMutable(const MR_C_std_vector_MR_A_iterator *iter)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)iter))
    ));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(std::vector<MR::A>::iterator());
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_A_iterator *)(new std::vector<MR::A>::iterator[num_elems]{});
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_ConstructFromAnother(const MR_C_std_vector_MR_A_iterator *other)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(std::vector<MR::A>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)other))
    ));
}

void MR_C_std_vector_MR_A_iterator_AssignFromAnother(MR_C_std_vector_MR_A_iterator *_this, const MR_C_std_vector_MR_A_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)other))
    );
}

void MR_C_std_vector_MR_A_iterator_Destroy(const MR_C_std_vector_MR_A_iterator *_this)
{
    delete ((const std::vector<MR::A>::iterator *)_this);
}

void MR_C_std_vector_MR_A_iterator_DestroyArray(const MR_C_std_vector_MR_A_iterator *_this)
{
    delete[] ((const std::vector<MR::A>::iterator *)_this);
}

const MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_OffsetPtr(const MR_C_std_vector_MR_A_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_A_iterator *)(((const std::vector<MR::A>::iterator *)ptr) + i);
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_OffsetMutablePtr(MR_C_std_vector_MR_A_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_A_iterator *)(((std::vector<MR::A>::iterator *)ptr) + i);
}

const MR_A *MR_C_std_vector_MR_A_const_iterator_Deref(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    return (const MR_A *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A>::const_iterator *)(_this)));
}

void MR_C_std_vector_MR_A_const_iterator_Incr(MR_C_std_vector_MR_A_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_A_const_iterator_Decr(MR_C_std_vector_MR_A_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_A_const_iterator_OffsetBy(MR_C_std_vector_MR_A_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_MR_A_const_iterator_Distance(const MR_C_std_vector_MR_A_const_iterator *a, const MR_C_std_vector_MR_A_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)a));
}

MR_A *MR_C_std_vector_MR_A_iterator_Deref(const MR_C_std_vector_MR_A_iterator *_this)
{
    return (MR_A *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A>::iterator *)(_this)));
}

void MR_C_std_vector_MR_A_iterator_Incr(MR_C_std_vector_MR_A_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this));
}

void MR_C_std_vector_MR_A_iterator_Decr(MR_C_std_vector_MR_A_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this));
}

void MR_C_std_vector_MR_A_iterator_OffsetBy(MR_C_std_vector_MR_A_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_MR_A_iterator_Distance(const MR_C_std_vector_MR_A_iterator *a, const MR_C_std_vector_MR_A_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)a));
}

