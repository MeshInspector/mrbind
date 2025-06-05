#include "std_vector_MR_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>());
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    ));
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    );
}

void MR_C_std_vector_MR_A_Destroy(MR_C_std_vector_MR_A *_this)
{
    delete &(_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

size_t MR_C_std_vector_MR_A_Size(const MR_C_std_vector_MR_A *_this)
{
    return (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_vector_MR_A_IsEmpty(const MR_C_std_vector_MR_A *_this)
{
    return (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_vector_MR_A_Resize(MR_C_std_vector_MR_A *_this, size_t new_size)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).resize(
        new_size
    );
}

void MR_C_std_vector_MR_A_Clear(MR_C_std_vector_MR_A *_this)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_vector_MR_A_Capacity(const MR_C_std_vector_MR_A *_this)
{
    return (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).capacity();
}

void MR_C_std_vector_MR_A_Reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_A_ShrinkToFit(MR_C_std_vector_MR_A *_this)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).shrink_to_fit();
}

const MR_A *MR_C_std_vector_MR_A_At(const MR_C_std_vector_MR_A *_this, size_t i)
{
    return (const MR_A *)&((_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

MR_A *MR_C_std_vector_MR_A_MutableAt(MR_C_std_vector_MR_A *_this, size_t i)
{
    return (MR_A *)&((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const MR_A *MR_C_std_vector_MR_A_Front(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)((_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr);
}

MR_A *MR_C_std_vector_MR_A_MutableFront(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).front() : nullptr);
}

const MR_A *MR_C_std_vector_MR_A_Back(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)((_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr);
}

MR_A *MR_C_std_vector_MR_A_MutableBack(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty() ? &(_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).back() : nullptr);
}

void MR_C_std_vector_MR_A_PushBack(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_PopBack(MR_C_std_vector_MR_A *_this)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).pop_back();
}

void MR_C_std_vector_MR_A_Insert(MR_C_std_vector_MR_A *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A)));
}

void MR_C_std_vector_MR_A_Erase(MR_C_std_vector_MR_A *_this, size_t position)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_MR_A_InsertAtMutableIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_EraseAtMutableIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *position)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

void MR_C_std_vector_MR_A_InsertAtIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (position ? std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null.")),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_EraseAtIter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *position)
{
    (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).erase(
        (position ? std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)position) : throw std::runtime_error("Parameter `position` can not be null."))
    );
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_Begin(const MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator((_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_vector_MR_A_IsBegin(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::vector<MR::A>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_MutableBegin(MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_vector_MR_A_IsMutableBegin(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::vector<MR::A>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_End(const MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator((_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_vector_MR_A_IsEnd(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::vector<MR::A>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_MutableEnd(MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator((_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_vector_MR_A_IsMutableEnd(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return (_this ? *(std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::vector<MR::A>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

ptrdiff_t MR_C_std_vector_MR_A_ToIndex(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return (iter ? std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin();
}

ptrdiff_t MR_C_std_vector_MR_A_MutableToIndex(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return (iter ? std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null.")) - (_this ? *(const std::vector<MR::A>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin();
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::const_iterator());
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A_const_iterator *other)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::const_iterator(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>::const_iterator), std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>::const_iterator), std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_END(other, std::vector<MR::A>::const_iterator))
    ));
}

void MR_C_std_vector_MR_A_const_iterator_AssignFromAnother(MR_C_std_vector_MR_A_const_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A_const_iterator *other)
{
    (_this ? *(std::vector<MR::A>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>::const_iterator), std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>::const_iterator), std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>::const_iterator) MRBINDC_CLASSARG_END(other, std::vector<MR::A>::const_iterator))
    );
}

void MR_C_std_vector_MR_A_const_iterator_Destroy(MR_C_std_vector_MR_A_const_iterator *_this)
{
    delete &(_this ? *(std::vector<MR::A>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_FromMutable(const MR_C_std_vector_MR_A_iterator *iter)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::iterator(
        (iter ? std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(std::vector<MR::A>::iterator());
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A_iterator *other)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(std::vector<MR::A>::iterator(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>::iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>::iterator), std::vector<MR::A>::iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>::iterator), std::vector<MR::A>::iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>::iterator) MRBINDC_CLASSARG_END(other, std::vector<MR::A>::iterator))
    ));
}

void MR_C_std_vector_MR_A_iterator_AssignFromAnother(MR_C_std_vector_MR_A_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A_iterator *other)
{
    (_this ? *(std::vector<MR::A>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>::iterator) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>::iterator), std::vector<MR::A>::iterator) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>::iterator), std::vector<MR::A>::iterator) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>::iterator) MRBINDC_CLASSARG_END(other, std::vector<MR::A>::iterator))
    );
}

void MR_C_std_vector_MR_A_iterator_Destroy(MR_C_std_vector_MR_A_iterator *_this)
{
    delete &(_this ? *(std::vector<MR::A>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const MR_A *MR_C_std_vector_MR_A_const_iterator_Deref(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    return (const MR_A *)&(*(_this ? *(const std::vector<MR::A>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_MR_A_const_iterator_Incr(MR_C_std_vector_MR_A_const_iterator *_this)
{
    ++(_this ? *(std::vector<MR::A>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_A_const_iterator_Decr(MR_C_std_vector_MR_A_const_iterator *_this)
{
    --(_this ? *(std::vector<MR::A>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_A_const_iterator_OffsetBy(MR_C_std_vector_MR_A_const_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<MR::A>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_MR_A_const_iterator_Distance(const MR_C_std_vector_MR_A_const_iterator *a, const MR_C_std_vector_MR_A_const_iterator *b)
{
    return (b ? std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

MR_A *MR_C_std_vector_MR_A_iterator_Deref(const MR_C_std_vector_MR_A_iterator *_this)
{
    return (MR_A *)&(*(_this ? *(const std::vector<MR::A>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_vector_MR_A_iterator_Incr(MR_C_std_vector_MR_A_iterator *_this)
{
    ++(_this ? *(std::vector<MR::A>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_A_iterator_Decr(MR_C_std_vector_MR_A_iterator *_this)
{
    --(_this ? *(std::vector<MR::A>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_vector_MR_A_iterator_OffsetBy(MR_C_std_vector_MR_A_iterator *_this, ptrdiff_t delta)
{
    (_this ? *(std::vector<MR::A>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) += delta;
}

ptrdiff_t MR_C_std_vector_MR_A_iterator_Distance(const MR_C_std_vector_MR_A_iterator *a, const MR_C_std_vector_MR_A_iterator *b)
{
    return (b ? std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)b) : throw std::runtime_error("Parameter `b` can not be null.")) - (a ? std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)a) : throw std::runtime_error("Parameter `a` can not be null."));
}

