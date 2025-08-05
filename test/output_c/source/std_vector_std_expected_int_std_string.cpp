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
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
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
    return (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_vector_std_expected_int_std_string_IsEmpty(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_vector_std_expected_int_std_string_Resize(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_vector_std_expected_int_std_string_ResizeWithDefaultValue(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size, const MR_C_std_expected_int_std_string *value)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size,
        (value ? *(const std::expected<int, std::string> *)(value) : throw std::runtime_error("Parameter `value` can not be null."))
    );
}

void MR_C_std_vector_std_expected_int_std_string_Clear(MR_C_std_vector_std_expected_int_std_string *_this)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_vector_std_expected_int_std_string_Capacity(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).capacity();
}

void MR_C_std_vector_std_expected_int_std_string_Reserve(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_capacity)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).reserve(
        new_capacity
    );
}

void MR_C_std_vector_std_expected_int_std_string_ShrinkToFit(MR_C_std_vector_std_expected_int_std_string *_this)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).shrink_to_fit();
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_At(const MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    return (const MR_C_std_expected_int_std_string *)&((_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_MutableAt(MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    return (MR_C_std_expected_int_std_string *)&((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_Front(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)((_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_MutableFront(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_Back(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)((_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_MutableBack(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

void MR_C_std_vector_std_expected_int_std_string_PushBack(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_PopBack(MR_C_std_vector_std_expected_int_std_string *_this)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_vector_std_expected_int_std_string_Insert(MR_C_std_vector_std_expected_int_std_string *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>)));
}

void MR_C_std_vector_std_expected_int_std_string_Erase(MR_C_std_vector_std_expected_int_std_string *_this, size_t position)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_std_expected_int_std_string_InsertAtMutableIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_EraseAtMutableIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *position)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_vector_std_expected_int_std_string_InsertAtIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_EraseAtIter(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *position)
{
    (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_Begin(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator((_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_vector_std_expected_int_std_string_IsBegin(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *iter)
{
    return (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::vector<std::expected<int, std::string>>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_MutableBegin(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)new std::vector<std::expected<int, std::string>>::iterator((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_vector_std_expected_int_std_string_IsMutableBegin(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::vector<std::expected<int, std::string>>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_std_expected_int_std_string_const_iterator *MR_C_std_vector_std_expected_int_std_string_End(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_const_iterator *)new std::vector<std::expected<int, std::string>>::const_iterator((_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_vector_std_expected_int_std_string_IsEnd(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *iter)
{
    return (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::vector<std::expected<int, std::string>>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_std_expected_int_std_string_iterator *MR_C_std_vector_std_expected_int_std_string_MutableEnd(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_vector_std_expected_int_std_string_iterator *)new std::vector<std::expected<int, std::string>>::iterator((_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_vector_std_expected_int_std_string_IsMutableEnd(MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return (_this ? *(std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::vector<std::expected<int, std::string>>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_ToIndex(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *iter)
{
    return (iter ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_MutableToIndex(const MR_C_std_vector_std_expected_int_std_string *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *iter)
{
    return (iter ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<std::expected<int, std::string>> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
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
        (other ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this, const MR_C_std_vector_std_expected_int_std_string_const_iterator *other)
{
    (_this ? *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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
        (iter ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
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
        (other ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string_iterator *_this, const MR_C_std_vector_std_expected_int_std_string_iterator *other)
{
    (_this ? *(std::vector<std::expected<int, std::string>>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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
    return (const MR_C_std_expected_int_std_string *)&(*(_this ? *(const std::vector<std::expected<int, std::string>>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_Incr(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    ++(_this ? *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_Decr(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this)
{
    --(_this ? *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_std_expected_int_std_string_const_iterator_OffsetBy(MR_C_std_vector_std_expected_int_std_string_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<std::expected<int, std::string>>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_const_iterator_Distance(const MR_C_std_vector_std_expected_int_std_string_const_iterator *a, const MR_C_std_vector_std_expected_int_std_string_const_iterator *b)
{
    return (b ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<std::expected<int, std::string>>::const_iterator(*(std::vector<std::expected<int, std::string>>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_iterator_Deref(const MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    return (MR_C_std_expected_int_std_string *)&(*(_this ? *(const std::vector<std::expected<int, std::string>>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_Incr(MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    ++(_this ? *(std::vector<std::expected<int, std::string>>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_Decr(MR_C_std_vector_std_expected_int_std_string_iterator *_this)
{
    --(_this ? *(std::vector<std::expected<int, std::string>>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_std_expected_int_std_string_iterator_OffsetBy(MR_C_std_vector_std_expected_int_std_string_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<std::expected<int, std::string>>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_std_expected_int_std_string_iterator_Distance(const MR_C_std_vector_std_expected_int_std_string_iterator *a, const MR_C_std_vector_std_expected_int_std_string_iterator *b)
{
    return (b ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<std::expected<int, std::string>>::iterator(*(std::vector<std::expected<int, std::string>>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

