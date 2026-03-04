#define MR_C_BUILD_LIBRARY
#include "std_array_MR_StdContainers_NonAssignable_42.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <array>
#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)new std::array<MR::StdContainers::NonAssignable, 42>(std::array<MR::StdContainers::NonAssignable, 42>());
    ) // MRBINDC_TRY
}

MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)(new std::array<MR::StdContainers::NonAssignable, 42>[num_elems]{});
    ) // MRBINDC_TRY
}

void MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    delete ((const std::array<MR::StdContainers::NonAssignable, 42> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_array_MR_StdContainers_NonAssignable_42_DestroyArray(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::array<MR::StdContainers::NonAssignable, 42> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_OffsetPtr(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_array_MR_StdContainers_NonAssignable_42 *)(((const std::array<MR::StdContainers::NonAssignable, 42> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_OffsetMutablePtr(MR_C_std_array_MR_StdContainers_NonAssignable_42 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)(((std::array<MR::StdContainers::NonAssignable, 42> *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_at(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut(MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_data(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).data());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut(MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).data());
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_begin(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)(&*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_begin_mut(MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)(&*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).begin());
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_end(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)(&*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).cend());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_end_mut(MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)(&*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::NonAssignable, 42> *)(_this)).end());
    ) // MRBINDC_TRY
}

