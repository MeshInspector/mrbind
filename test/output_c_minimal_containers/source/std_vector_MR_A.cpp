#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_A *)(new std::vector<MR::A>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::A>);
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::A>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_Destroy(const MR_C_std_vector_MR_A *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::A> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_DestroyArray(const MR_C_std_vector_MR_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::A> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_OffsetPtr(const MR_C_std_vector_MR_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_A *)(((const std::vector<MR::A> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_OffsetMutablePtr(MR_C_std_vector_MR_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_A *)(((std::vector<MR::A> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_A_size(const MR_C_std_vector_MR_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_A_empty(const MR_C_std_vector_MR_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_resize(MR_C_std_vector_MR_A *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_clear(MR_C_std_vector_MR_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const MR_A *MR_C_std_vector_MR_A_at(const MR_C_std_vector_MR_A *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::A> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_A *MR_C_std_vector_MR_A_at_mut(MR_C_std_vector_MR_A *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_push_back(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::A);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_A_pop_back(MR_C_std_vector_MR_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::A> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

