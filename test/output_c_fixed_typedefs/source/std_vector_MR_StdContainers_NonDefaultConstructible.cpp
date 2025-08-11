#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_vector_MR_StdContainers_NonDefaultConstructible.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>());
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(new std::vector<MR::StdContainers::NonDefaultConstructible>[num_elems]{});
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((const std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Size(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsEmpty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ResizeWithDefaultValue(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_size, const MR_StdContainers_NonDefaultConstructible *value)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size,
        (value ? *(const MR::StdContainers::NonDefaultConstructible *)(value) : throw std::runtime_error("Parameter `value` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Capacity(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).capacity();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ShrinkToFit(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).shrink_to_fit();
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_At(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    return (const MR_StdContainers_NonDefaultConstructible *)&((_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableAt(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    return (MR_StdContainers_NonDefaultConstructible *)&((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Front(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)((_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableFront(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front());
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Back(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)((_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableBack(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? nullptr : &(_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back());
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_PushBack(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        (new_elem ? MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem) : throw std::runtime_error("Parameter `new_elem` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_PopBack(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Insert(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), (new_elem ? MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem) : throw std::runtime_error("Parameter `new_elem` can not be null.")));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Erase(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_InsertAtMutableIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (new_elem ? MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem) : throw std::runtime_error("Parameter `new_elem` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_EraseAtMutableIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_InsertAtIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (new_elem ? MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem) : throw std::runtime_error("Parameter `new_elem` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_EraseAtIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator((_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsBegin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    return (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableBegin(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsMutableBegin(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_End(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator((_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsEnd(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    return (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableEnd(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator((_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsMutableEnd(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ToIndex(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    return (iter ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableToIndex(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return (iter ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator());
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator[num_elems]{});
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(
        (other ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)_this);
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)_this);
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(((std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_FromMutable(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(
        (iter ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator());
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator[num_elems]{});
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(
        (other ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)_this);
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)_this);
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(((std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)ptr) + i);
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)&(*(_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    ++(_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    --(_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetBy(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Distance(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b)
{
    return (b ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)&(*(_this ? *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    ++(_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    --(_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetBy(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Distance(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b)
{
    return (b ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

