#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_vector_const_MR_CSharp_A_ptr.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct(void)
{
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)new std::vector<const MR::CSharp::A *>(std::vector<const MR::CSharp::A *>());
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)(new std::vector<const MR::CSharp::A *>[num_elems]{});
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_const_MR_CSharp_A_ptr *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<const MR::CSharp::A *>);
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)new std::vector<const MR::CSharp::A *>(std::vector<const MR::CSharp::A *>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_COPY(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_MOVE(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_END(other, std::vector<const MR::CSharp::A *>))
    ));
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_const_MR_CSharp_A_ptr *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<const MR::CSharp::A *>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_COPY(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_MOVE(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_END(other, std::vector<const MR::CSharp::A *>))
    );
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_Destroy(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    delete ((const std::vector<const MR::CSharp::A *> *)_this);
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_DestroyArray(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    delete[] ((const std::vector<const MR::CSharp::A *> *)_this);
}

const MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_OffsetPtr(const MR_C_std_vector_const_MR_CSharp_A_ptr *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_const_MR_CSharp_A_ptr *)(((const std::vector<const MR::CSharp::A *> *)ptr) + i);
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_OffsetMutablePtr(MR_C_std_vector_const_MR_CSharp_A_ptr *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)(((std::vector<const MR::CSharp::A *> *)ptr) + i);
}

size_t MR_C_std_vector_const_MR_CSharp_A_ptr_size(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).size();
}

bool MR_C_std_vector_const_MR_CSharp_A_ptr_empty(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).empty();
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_resize(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_resize_with_default_value(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t new_size, const MR_CSharp_A *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).resize(
        new_size,
        ((const MR::CSharp::A *)value)
    );
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_clear(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).clear();
}

size_t MR_C_std_vector_const_MR_CSharp_A_ptr_capacity(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).capacity();
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_reserve(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_shrink_to_fit(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).shrink_to_fit();
}

const MR_CSharp_A *const *MR_C_std_vector_const_MR_CSharp_A_ptr_at(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t i)
{
    return (const MR_CSharp_A *const *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).at(
        i
    ));
}

const MR_CSharp_A **MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t i)
{
    return (const MR_CSharp_A **)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).at(
        i
    ));
}

const MR_CSharp_A *const *MR_C_std_vector_const_MR_CSharp_A_ptr_front(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A *const *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).front());
}

const MR_CSharp_A **MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A **)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).front());
}

const MR_CSharp_A *const *MR_C_std_vector_const_MR_CSharp_A_ptr_back(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A *const *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).back());
}

const MR_CSharp_A **MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A **)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).back());
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_push_back(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, const MR_CSharp_A *new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).push_back(
        ((const MR::CSharp::A *)new_elem)
    );
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).pop_back();
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_insert(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t position, const MR_CSharp_A *new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).begin() + ptrdiff_t(position), ((const MR::CSharp::A *)new_elem));
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_erase(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).begin() + ptrdiff_t(position));
}

const MR_CSharp_A *const *MR_C_std_vector_const_MR_CSharp_A_ptr_begin(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A *const *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).data());
}

const MR_CSharp_A **MR_C_std_vector_const_MR_CSharp_A_ptr_begin_mut(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A **)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).data());
}

const MR_CSharp_A *const *MR_C_std_vector_const_MR_CSharp_A_ptr_end(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A *const *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).size());
}

const MR_CSharp_A **MR_C_std_vector_const_MR_CSharp_A_ptr_end_mut(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    return (const MR_CSharp_A **)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).size());
}

