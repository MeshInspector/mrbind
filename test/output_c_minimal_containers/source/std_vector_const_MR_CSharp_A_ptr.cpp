#define MR_C_BUILD_LIBRARY
#include "std_vector_const_MR_CSharp_A_ptr.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)new std::vector<const MR::CSharp::A *>(std::vector<const MR::CSharp::A *>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)(new std::vector<const MR::CSharp::A *>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_const_MR_CSharp_A_ptr *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<const MR::CSharp::A *>);
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)new std::vector<const MR::CSharp::A *>(std::vector<const MR::CSharp::A *>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_COPY(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_MOVE(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_END(other, std::vector<const MR::CSharp::A *>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_const_MR_CSharp_A_ptr *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<const MR::CSharp::A *>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_COPY(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_MOVE(other, (std::vector<const MR::CSharp::A *>), std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<const MR::CSharp::A *>) MRBINDC_CLASSARG_END(other, std::vector<const MR::CSharp::A *>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_Destroy(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<const MR::CSharp::A *> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_DestroyArray(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<const MR::CSharp::A *> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_OffsetPtr(const MR_C_std_vector_const_MR_CSharp_A_ptr *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_const_MR_CSharp_A_ptr *)(((const std::vector<const MR::CSharp::A *> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_C_std_vector_const_MR_CSharp_A_ptr_OffsetMutablePtr(MR_C_std_vector_const_MR_CSharp_A_ptr *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)(((std::vector<const MR::CSharp::A *> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_const_MR_CSharp_A_ptr_size(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_const_MR_CSharp_A_ptr_empty(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_resize(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_clear(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_reserve(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const MR_CSharp_A *const *MR_C_std_vector_const_MR_CSharp_A_ptr_at(const MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A *const *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<const MR::CSharp::A *> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_A **MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A **)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_push_back(MR_C_std_vector_const_MR_CSharp_A_ptr *_this, const MR_CSharp_A *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).push_back(
        ((const MR::CSharp::A *)new_elem)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back(MR_C_std_vector_const_MR_CSharp_A_ptr *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<const MR::CSharp::A *> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

