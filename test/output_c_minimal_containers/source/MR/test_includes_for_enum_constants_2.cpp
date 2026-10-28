#define MR_C_BUILD_LIBRARY
#include "MR/test_includes_for_enum_constants_2.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_includes_for_enum_constants_2.h>
#include <input/MR/test_includes_for_enum_constants_3.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>());
    ) // MRBINDC_TRY
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)(new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetPtr(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)(((const MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetMutablePtr(MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)(((MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_other)
{
    MRBINDC_TRY(
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(*(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this)
{
    MRBINDC_TRY(
    delete ((const MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_this);
    ) // MRBINDC_TRY
}

void MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DestroyArray(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_this);
    ) // MRBINDC_TRY
}

MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this, const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_other)
{
    MRBINDC_TRY(
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(*(MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1> *)_other))
    ));
    ) // MRBINDC_TRY
}

