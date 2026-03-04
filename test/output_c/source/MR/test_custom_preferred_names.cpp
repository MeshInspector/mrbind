#define MR_C_BUILD_LIBRARY
#include "MR/test_custom_preferred_names.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_custom_preferred_names.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Ai *)new MR::CustomPrefNames::Ai(MR::CustomPrefNames::Ai());
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Ai *)(new MR::CustomPrefNames::Ai[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_OffsetPtr(const MR_CustomPrefNames_Ai *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CustomPrefNames_Ai *)(((const MR::CustomPrefNames::Ai *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_OffsetMutablePtr(MR_CustomPrefNames_Ai *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Ai *)(((MR::CustomPrefNames::Ai *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_ConstructFromAnother(const MR_CustomPrefNames_Ai *_other)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Ai *)new MR::CustomPrefNames::Ai(MR::CustomPrefNames::Ai(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CustomPrefNames::Ai(*(MR::CustomPrefNames::Ai *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CustomPrefNames_Ai_Destroy(const MR_CustomPrefNames_Ai *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CustomPrefNames::Ai *)_this);
    ) // MRBINDC_TRY
}

void MR_CustomPrefNames_Ai_DestroyArray(const MR_CustomPrefNames_Ai *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CustomPrefNames::Ai *)_this);
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_AssignFromAnother(MR_CustomPrefNames_Ai *_this, const MR_CustomPrefNames_Ai *_other)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Ai *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CustomPrefNames::Ai *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CustomPrefNames::Ai(*(MR::CustomPrefNames::Ai *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Af *)new MR::CustomPrefNames::Af(MR::CustomPrefNames::Af());
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Af *)(new MR::CustomPrefNames::Af[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_OffsetPtr(const MR_CustomPrefNames_Af *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CustomPrefNames_Af *)(((const MR::CustomPrefNames::Af *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_OffsetMutablePtr(MR_CustomPrefNames_Af *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Af *)(((MR::CustomPrefNames::Af *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_ConstructFromAnother(const MR_CustomPrefNames_Af *_other)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Af *)new MR::CustomPrefNames::Af(MR::CustomPrefNames::Af(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CustomPrefNames::Af(*(MR::CustomPrefNames::Af *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CustomPrefNames_Af_Destroy(const MR_CustomPrefNames_Af *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CustomPrefNames::Af *)_this);
    ) // MRBINDC_TRY
}

void MR_CustomPrefNames_Af_DestroyArray(const MR_CustomPrefNames_Af *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CustomPrefNames::Af *)_this);
    ) // MRBINDC_TRY
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_AssignFromAnother(MR_CustomPrefNames_Af *_this, const MR_CustomPrefNames_Af *_other)
{
    MRBINDC_TRY(
    return (MR_CustomPrefNames_Af *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CustomPrefNames::Af *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CustomPrefNames::Af(*(MR::CustomPrefNames::Af *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CustomPrefNames_blah(void)
{
    MRBINDC_TRY(
    ::MR::CustomPrefNames::blah();
    ) // MRBINDC_TRY
}

