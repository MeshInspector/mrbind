#define MR_C_BUILD_LIBRARY
#include "std_vector_std_expected_int_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <expected>
#include <stdexcept>
#include <string>
#include <vector>


MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_DefaultConstruct(void)
{
    return (MR_C_std_vector_std_expected_int_std_string *)new std::vector<std::expected<int, std::string>>(std::vector<std::expected<int, std::string>>());
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_std_expected_int_std_string *)(new std::vector<std::expected<int, std::string>>[num_elems]{});
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_std_expected_int_std_string *other)
{
    return (MR_C_std_vector_std_expected_int_std_string *)new std::vector<std::expected<int, std::string>>(std::vector<std::expected<int, std::string>>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_END(other, std::vector<std::expected<int, std::string>>))
    ));
}

void MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_std_expected_int_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_END(other, std::vector<std::expected<int, std::string>>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_Destroy(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    delete ((const std::vector<std::expected<int, std::string>> *)_this);
}

void MR_C_std_vector_std_expected_int_std_string_DestroyArray(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    delete[] ((const std::vector<std::expected<int, std::string>> *)_this);
}

const MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_OffsetPtr(const MR_C_std_vector_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_std_expected_int_std_string *)(((const std::vector<std::expected<int, std::string>> *)ptr) + i);
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_OffsetMutablePtr(MR_C_std_vector_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_std_expected_int_std_string *)(((std::vector<std::expected<int, std::string>> *)ptr) + i);
}

size_t MR_C_std_vector_std_expected_int_std_string_Size(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).size();
}

bool MR_C_std_vector_std_expected_int_std_string_IsEmpty(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty();
}

void MR_C_std_vector_std_expected_int_std_string_Resize(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_std_expected_int_std_string_ResizeWithDefaultValue(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size, const MR_C_std_expected_int_std_string *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const std::expected<int, std::string> *)(value))
    );
}

void MR_C_std_vector_std_expected_int_std_string_Clear(MR_C_std_vector_std_expected_int_std_string *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).clear();
}

size_t MR_C_std_vector_std_expected_int_std_string_Capacity(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).capacity();
}

void MR_C_std_vector_std_expected_int_std_string_Reserve(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_std_expected_int_std_string_ShrinkToFit(MR_C_std_vector_std_expected_int_std_string *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).shrink_to_fit();
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_At(const MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    return (const MR_C_std_expected_int_std_string *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).at(
        i
    ));
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_MutableAt(MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    return (MR_C_std_expected_int_std_string *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).at(
        i
    ));
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_Front(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).front());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_MutableFront(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).front());
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_Back(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).back());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_MutableBack(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).back());
}

void MR_C_std_vector_std_expected_int_std_string_PushBack(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_PopBack(MR_C_std_vector_std_expected_int_std_string *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).pop_back();
}

void MR_C_std_vector_std_expected_int_std_string_Insert(MR_C_std_vector_std_expected_int_std_string *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>)));
}

void MR_C_std_vector_std_expected_int_std_string_Erase(MR_C_std_vector_std_expected_int_std_string *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_std_expected_int_std_string_InsertAtMutableIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_EraseAtMutableIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)position))
    );
}

void MR_C_std_vector_std_expected_int_std_string_InsertAtIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_EraseAtIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)position))
    );
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_Begin(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).cbegin());
}

bool MR_C_std_vector_std_expected_int_std_string_IsBegin(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::expected<int, std::string>>::const_iterator *)(iter));
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_MutableBegin(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)new std::vector<std::expected<int, std::string>>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).begin());
}

bool MR_C_std_vector_std_expected_int_std_string_IsMutableBegin(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::expected<int, std::string>>::iterator *)(iter));
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_End(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).cend());
}

bool MR_C_std_vector_std_expected_int_std_string_IsEnd(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::expected<int, std::string>>::const_iterator *)(iter));
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_MutableEnd(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)new std::vector<std::expected<int, std::string>>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).end());
}

bool MR_C_std_vector_std_expected_int_std_string_IsMutableEnd(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::expected<int, std::string>>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_ToIndex(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_MutableToIndex(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>> *)(_this)).begin();
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator(std::vector<std::expected<int, std::string>>::const_iterator());
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)(new std::vector<std::expected<int, std::string>>::const_iterator[num_elems]{});
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_const_iterator_ConstructFromAnother(const MR_C_std_vector_std_expected_int_std_string_const_iterator *other)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator(std::vector<std::expected<int, std::string>>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)other))
    ));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)other))
    );
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_Destroy(const MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    delete ((const std::vector<std::expected<int, std::string>>::const_iterator *)_this);
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_DestroyArray(const MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    delete[] ((const std::vector<std::expected<int, std::string>>::const_iterator *)_this);
}

const MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_const_iterator_OffsetPtr(const MR_C_std_vector_std_expected_int_std_string_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_std_expected_int_std_string_const_iterator *)(((const std::vector<std::expected<int, std::string>>::const_iterator *)ptr) + i);
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_const_iterator_OffsetMutablePtr(MR_C_std_vector_std_expected_int_std_string_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)(((std::vector<std::expected<int, std::string>>::const_iterator *)ptr) + i);
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_const_iterator_FromMutable(const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator(std::vector<std::expected<int, std::string>>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)iter))
    ));
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)new std::vector<std::expected<int, std::string>>::iterator(std::vector<std::expected<int, std::string>>::iterator());
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)(new std::vector<std::expected<int, std::string>>::iterator[num_elems]{});
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_iterator_ConstructFromAnother(const MR_C_std_vector_std_expected_int_std_string_iterator *other)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)new std::vector<std::expected<int, std::string>>::iterator(std::vector<std::expected<int, std::string>>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)other))
    ));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string_iterator *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)other))
    );
}

void MR_C_std_vector_std_expected_int_std_string_iterator_Destroy(const MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    delete ((const std::vector<std::expected<int, std::string>>::iterator *)_this);
}

void MR_C_std_vector_std_expected_int_std_string_iterator_DestroyArray(const MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    delete[] ((const std::vector<std::expected<int, std::string>>::iterator *)_this);
}

const MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_iterator_OffsetPtr(const MR_C_std_vector_std_expected_int_std_string_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_std_expected_int_std_string_iterator *)(((const std::vector<std::expected<int, std::string>>::iterator *)ptr) + i);
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_iterator_OffsetMutablePtr(MR_C_std_vector_std_expected_int_std_string_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)(((std::vector<std::expected<int, std::string>>::iterator *)ptr) + i);
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_const_iterator_Deref(const MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    return (const MR_C_std_expected_int_std_string *)&(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>>::const_iterator *)(_this)));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_Incr(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_Decr(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_OffsetBy(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_const_iterator_Distance(const MR_C_std_vector_std_expected_int_std_string_const_iterator *a, const MR_C_std_vector_std_expected_int_std_string_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)a));
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_iterator_Deref(const MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    return (MR_C_std_expected_int_std_string *)&(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::expected<int, std::string>>::iterator *)(_this)));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_Incr(MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::iterator *)(_this));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_Decr(MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::iterator *)(_this));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_OffsetBy(MR_C_std_vector_std_expected_int_std_string_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::expected<int, std::string>>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_iterator_Distance(const MR_C_std_vector_std_expected_int_std_string_iterator *a, const MR_C_std_vector_std_expected_int_std_string_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)a));
}

