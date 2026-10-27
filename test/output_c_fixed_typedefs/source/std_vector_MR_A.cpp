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
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::A>);
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    ));
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::A>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).operator=(
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

size_t MR_C_std_vector_MR_A_size(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).size();
}

bool MR_C_std_vector_MR_A_empty(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).empty();
}

void MR_C_std_vector_MR_A_resize(MR_C_std_vector_MR_A *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_MR_A_resize_with_default_value(MR_C_std_vector_MR_A *_this, size_t new_size, const MR_A *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::A *)(value))
    );
}

void MR_C_std_vector_MR_A_clear(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_A_capacity(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).capacity();
}

void MR_C_std_vector_MR_A_reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_A_shrink_to_fit(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).shrink_to_fit();
}

const MR_A *MR_C_std_vector_MR_A_at(const MR_C_std_vector_MR_A *_this, size_t i)
{
    return (const MR_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).at(
        i
    ));
}

MR_A *MR_C_std_vector_MR_A_at_mut(MR_C_std_vector_MR_A *_this, size_t i)
{
    return (MR_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).at(
        i
    ));
}

const MR_A *MR_C_std_vector_MR_A_front(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).front());
}

MR_A *MR_C_std_vector_MR_A_front_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).front());
}

const MR_A *MR_C_std_vector_MR_A_back(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).back());
}

MR_A *MR_C_std_vector_MR_A_back_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).back());
}

void MR_C_std_vector_MR_A_push_back(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::A);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_pop_back(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_A_insert(MR_C_std_vector_MR_A *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::A);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A)));
}

void MR_C_std_vector_MR_A_erase(MR_C_std_vector_MR_A *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).begin() + ptrdiff_t(position));
}

const MR_A *MR_C_std_vector_MR_A_begin(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).data());
}

MR_A *MR_C_std_vector_MR_A_begin_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).data());
}

const MR_A *MR_C_std_vector_MR_A_end(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).size());
}

MR_A *MR_C_std_vector_MR_A_end_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).size());
}

