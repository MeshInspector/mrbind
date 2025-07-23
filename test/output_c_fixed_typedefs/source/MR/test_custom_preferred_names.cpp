#define MR_C_BUILD_LIBRARY
#include "MR/test_custom_preferred_names.h"

#include <input/MR/test_custom_preferred_names.h>

#include <stdexcept>


MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_DefaultConstruct(void)
{
    return (MR_CustomPrefNames_Ai *)new MR::CustomPrefNames::Ai(MR::CustomPrefNames::Ai());
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_DefaultConstructArray(size_t num_elems)
{
    return (MR_CustomPrefNames_Ai *)(new MR::CustomPrefNames::Ai[num_elems]{});
}

const MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_OffsetPtr(const MR_CustomPrefNames_Ai *ptr, ptrdiff_t i)
{
    return (const MR_CustomPrefNames_Ai *)(((const MR::CustomPrefNames::Ai *)ptr) + i);
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_OffsetMutablePtr(MR_CustomPrefNames_Ai *ptr, ptrdiff_t i)
{
    return (MR_CustomPrefNames_Ai *)(((MR::CustomPrefNames::Ai *)ptr) + i);
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_ConstructFromAnother(const MR_CustomPrefNames_Ai *_other)
{
    return (MR_CustomPrefNames_Ai *)new MR::CustomPrefNames::Ai(MR::CustomPrefNames::Ai(
        (_other ? MR::CustomPrefNames::Ai(*(MR::CustomPrefNames::Ai *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_CustomPrefNames_Ai_Destroy(const MR_CustomPrefNames_Ai *_this)
{
    delete ((const MR::CustomPrefNames::Ai *)_this);
}

void MR_CustomPrefNames_Ai_DestroyArray(const MR_CustomPrefNames_Ai *_this)
{
    delete[] ((const MR::CustomPrefNames::Ai *)_this);
}

MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_AssignFromAnother(MR_CustomPrefNames_Ai *_this, const MR_CustomPrefNames_Ai *_other)
{
    return (MR_CustomPrefNames_Ai *)&((_this ? *(MR::CustomPrefNames::Ai *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::CustomPrefNames::Ai(*(MR::CustomPrefNames::Ai *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_DefaultConstruct(void)
{
    return (MR_CustomPrefNames_Af *)new MR::CustomPrefNames::Af(MR::CustomPrefNames::Af());
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_DefaultConstructArray(size_t num_elems)
{
    return (MR_CustomPrefNames_Af *)(new MR::CustomPrefNames::Af[num_elems]{});
}

const MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_OffsetPtr(const MR_CustomPrefNames_Af *ptr, ptrdiff_t i)
{
    return (const MR_CustomPrefNames_Af *)(((const MR::CustomPrefNames::Af *)ptr) + i);
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_OffsetMutablePtr(MR_CustomPrefNames_Af *ptr, ptrdiff_t i)
{
    return (MR_CustomPrefNames_Af *)(((MR::CustomPrefNames::Af *)ptr) + i);
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_ConstructFromAnother(const MR_CustomPrefNames_Af *_other)
{
    return (MR_CustomPrefNames_Af *)new MR::CustomPrefNames::Af(MR::CustomPrefNames::Af(
        (_other ? MR::CustomPrefNames::Af(*(MR::CustomPrefNames::Af *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_CustomPrefNames_Af_Destroy(const MR_CustomPrefNames_Af *_this)
{
    delete ((const MR::CustomPrefNames::Af *)_this);
}

void MR_CustomPrefNames_Af_DestroyArray(const MR_CustomPrefNames_Af *_this)
{
    delete[] ((const MR::CustomPrefNames::Af *)_this);
}

MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_AssignFromAnother(MR_CustomPrefNames_Af *_this, const MR_CustomPrefNames_Af *_other)
{
    return (MR_CustomPrefNames_Af *)&((_this ? *(MR::CustomPrefNames::Af *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::CustomPrefNames::Af(*(MR::CustomPrefNames::Af *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_CustomPrefNames_blah(void)
{
    ::MR::CustomPrefNames::blah();
}

