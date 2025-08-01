#define MR_C_BUILD_LIBRARY
#include "std_array_MR_StdContainers_NonAssignable_42.h"

#include <input/MR/test_std_containers.h>

#include <array>
#include <cstddef>
#include <stdexcept>


MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct(void)
{
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)new std::array<MR::StdContainers::NonAssignable, 42>(std::array<MR::StdContainers::NonAssignable, 42>());
}

MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)(new std::array<MR::StdContainers::NonAssignable, 42>[num_elems]{});
}

void MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    delete ((const std::array<MR::StdContainers::NonAssignable, 42> *)_this);
}

void MR_C_std_array_MR_StdContainers_NonAssignable_42_DestroyArray(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    delete[] ((const std::array<MR::StdContainers::NonAssignable, 42> *)_this);
}

const MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_OffsetPtr(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_array_MR_StdContainers_NonAssignable_42 *)(((const std::array<MR::StdContainers::NonAssignable, 42> *)ptr) + i);
}

MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_C_std_array_MR_StdContainers_NonAssignable_42_OffsetMutablePtr(MR_C_std_array_MR_StdContainers_NonAssignable_42 *ptr, ptrdiff_t i)
{
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)(((std::array<MR::StdContainers::NonAssignable, 42> *)ptr) + i);
}

const MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_At(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this, size_t i)
{
    return (const MR_StdContainers_NonAssignable *)&((_this ? *(const std::array<MR::StdContainers::NonAssignable, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableAt(MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this, size_t i)
{
    return (MR_StdContainers_NonAssignable *)&((_this ? *(std::array<MR::StdContainers::NonAssignable, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_Data(const MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    return (const MR_StdContainers_NonAssignable *)((_this ? *(const std::array<MR::StdContainers::NonAssignable, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data());
}

MR_StdContainers_NonAssignable *MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableData(MR_C_std_array_MR_StdContainers_NonAssignable_42 *_this)
{
    return (MR_StdContainers_NonAssignable *)((_this ? *(std::array<MR::StdContainers::NonAssignable, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data());
}

