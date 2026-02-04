#define MR_C_BUILD_LIBRARY
#include "std_array_MR_StdContainers_A_42.h"

#include <input/MR/test_std_containers.h>

#include <array>
#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct(void)
{
    return (MR_C_std_array_MR_StdContainers_A_42 *)new std::array<MR::StdContainers::A, 42>(std::array<MR::StdContainers::A, 42>());
}

MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_array_MR_StdContainers_A_42 *)(new std::array<MR::StdContainers::A, 42>[num_elems]{});
}

MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(const MR_C_std_array_MR_StdContainers_A_42 *other)
{
    return (MR_C_std_array_MR_StdContainers_A_42 *)new std::array<MR::StdContainers::A, 42>(std::array<MR::StdContainers::A, 42>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::array<MR::StdContainers::A, 42>(*(std::array<MR::StdContainers::A, 42> *)other))
    ));
}

void MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother(MR_C_std_array_MR_StdContainers_A_42 *_this, const MR_C_std_array_MR_StdContainers_A_42 *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::A, 42> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::array<MR::StdContainers::A, 42>(*(std::array<MR::StdContainers::A, 42> *)other))
    );
}

void MR_C_std_array_MR_StdContainers_A_42_Destroy(const MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    delete ((const std::array<MR::StdContainers::A, 42> *)_this);
}

void MR_C_std_array_MR_StdContainers_A_42_DestroyArray(const MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    delete[] ((const std::array<MR::StdContainers::A, 42> *)_this);
}

const MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_OffsetPtr(const MR_C_std_array_MR_StdContainers_A_42 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_array_MR_StdContainers_A_42 *)(((const std::array<MR::StdContainers::A, 42> *)ptr) + i);
}

MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_OffsetMutablePtr(MR_C_std_array_MR_StdContainers_A_42 *ptr, ptrdiff_t i)
{
    return (MR_C_std_array_MR_StdContainers_A_42 *)(((std::array<MR::StdContainers::A, 42> *)ptr) + i);
}

const MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_at(const MR_C_std_array_MR_StdContainers_A_42 *_this, size_t i)
{
    return (const MR_StdContainers_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::A, 42> *)(_this)).at(
        i
    ));
}

MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_at_mut(MR_C_std_array_MR_StdContainers_A_42 *_this, size_t i)
{
    return (MR_StdContainers_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::A, 42> *)(_this)).at(
        i
    ));
}

const MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_data(const MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    return (const MR_StdContainers_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::A, 42> *)(_this)).data());
}

MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_data_mut(MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    return (MR_StdContainers_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::A, 42> *)(_this)).data());
}

const MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_begin(const MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    return (const MR_StdContainers_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::A, 42> *)(_this)).cbegin());
}

MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_begin_mut(MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    return (MR_StdContainers_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::A, 42> *)(_this)).begin());
}

const MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_end(const MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    return (const MR_StdContainers_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::array<MR::StdContainers::A, 42> *)(_this)).cend());
}

MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_end_mut(MR_C_std_array_MR_StdContainers_A_42 *_this)
{
    return (MR_StdContainers_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::array<MR::StdContainers::A, 42> *)(_this)).end());
}

