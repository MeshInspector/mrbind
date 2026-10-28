#define MR_C_BUILD_LIBRARY
#include "MR/test_adjusting_names.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_adjusting_names.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


void MR_AdjustingNames_foo(void)
{
    MRBINDC_TRY(
    ::MR::AdjustingNames::foo<unsigned long>();
    ) // MRBINDC_TRY
}

void MR_AdjustingNames_bar(void)
{
    MRBINDC_TRY(
    ::MR::AdjustingNames::bar();
    ) // MRBINDC_TRY
}

const unsigned long *MR_AdjustingNames_A_Get_var_unsigned_long(void)
{
    return std::addressof(MR::AdjustingNames::A::var<unsigned long>);
}

void MR_AdjustingNames_A_Set_var_unsigned_long(unsigned long value)
{
    MR::AdjustingNames::A::var<unsigned long> = value;
}

unsigned long *MR_AdjustingNames_A_GetMutable_var_unsigned_long(void)
{
    return std::addressof(MR::AdjustingNames::A::var<unsigned long>);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_AdjustingNames_A *)new MR::AdjustingNames::A(MR::AdjustingNames::A());
    ) // MRBINDC_TRY
}

MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_AdjustingNames_A *)(new MR::AdjustingNames::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetPtr(const MR_AdjustingNames_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_AdjustingNames_A *)(((const MR::AdjustingNames::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetMutablePtr(MR_AdjustingNames_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_AdjustingNames_A *)(((MR::AdjustingNames::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_AdjustingNames_A *MR_AdjustingNames_A_ConstructFromAnother(const MR_AdjustingNames_A *_other)
{
    MRBINDC_TRY(
    return (MR_AdjustingNames_A *)new MR::AdjustingNames::A(MR::AdjustingNames::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::AdjustingNames::A(*(MR::AdjustingNames::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_AdjustingNames_A_Destroy(const MR_AdjustingNames_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::AdjustingNames::A *)_this);
    ) // MRBINDC_TRY
}

void MR_AdjustingNames_A_DestroyArray(const MR_AdjustingNames_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::AdjustingNames::A *)_this);
    ) // MRBINDC_TRY
}

unsigned long MR_AdjustingNames_A_ConvertTo_unsigned_long(MR_AdjustingNames_A *_this)
{
    MRBINDC_TRY(
    return (unsigned long)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::AdjustingNames::A *)(_this)));
    ) // MRBINDC_TRY
}

MR_AdjustingNames_A *MR_AdjustingNames_A_AssignFromAnother(MR_AdjustingNames_A *_this, const MR_AdjustingNames_A *_other)
{
    MRBINDC_TRY(
    return (MR_AdjustingNames_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::AdjustingNames::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::AdjustingNames::A(*(MR::AdjustingNames::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_AdjustingNames_A_foo(MR_AdjustingNames_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::AdjustingNames::A *)(_this)).foo<unsigned long>();
    ) // MRBINDC_TRY
}

void MR_AdjustingNames_A_bar(MR_AdjustingNames_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::AdjustingNames::A *)(_this)).bar();
    ) // MRBINDC_TRY
}

