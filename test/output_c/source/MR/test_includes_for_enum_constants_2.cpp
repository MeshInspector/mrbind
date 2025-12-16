#define MR_C_BUILD_LIBRARY
#include "MR/test_includes_for_enum_constants_2.h"

#include <input/MR/test_includes_for_enum_constants_2.h>
#include <input/MR/test_includes_for_enum_constants_3.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct(void)
{
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>());
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstructArray(size_t num_elems)
{
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)(new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>[num_elems]{});
}

const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetPtr(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *ptr, ptrdiff_t i)
{
    return (const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)(((const MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)ptr) + i);
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetMutablePtr(MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *ptr, ptrdiff_t i)
{
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)(((MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)ptr) + i);
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_other)
{
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(*(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_other))
    ));
}

void MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this)
{
    delete ((const MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_this);
}

void MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DestroyArray(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this)
{
    delete[] ((const MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_this);
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this, const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_other)
{
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(*(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_other))
    ));
}

