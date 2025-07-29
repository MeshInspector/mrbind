#define MR_C_BUILD_LIBRARY
#include "MR/test_adjusting_names.h"

#include <input/MR/test_adjusting_names.h>

#include <cstddef>
#include <stdexcept>


void MR_AdjustingNames_foo(void)
{
    ::MR::AdjustingNames::foo<unsigned long>();
}

void MR_AdjustingNames_bar(void)
{
    ::MR::AdjustingNames::bar();
}

const unsigned long *MR_AdjustingNames_A_Get_var_unsigned_long(void)
{
    return &(MR::AdjustingNames::A::var<unsigned long>);
}

void MR_AdjustingNames_A_Set_var_unsigned_long(unsigned long value)
{
    MR::AdjustingNames::A::var<unsigned long> = value;
}

unsigned long *MR_AdjustingNames_A_GetMutable_var_unsigned_long(void)
{
    return &(MR::AdjustingNames::A::var<unsigned long>);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstruct(void)
{
    return (MR_AdjustingNames_A *)new MR::AdjustingNames::A(MR::AdjustingNames::A());
}

MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_AdjustingNames_A *)(new MR::AdjustingNames::A[num_elems]{});
}

const MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetPtr(const MR_AdjustingNames_A *ptr, ptrdiff_t i)
{
    return (const MR_AdjustingNames_A *)(((const MR::AdjustingNames::A *)ptr) + i);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetMutablePtr(MR_AdjustingNames_A *ptr, ptrdiff_t i)
{
    return (MR_AdjustingNames_A *)(((MR::AdjustingNames::A *)ptr) + i);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_ConstructFromAnother(const MR_AdjustingNames_A *_other)
{
    return (MR_AdjustingNames_A *)new MR::AdjustingNames::A(MR::AdjustingNames::A(
        (_other ? MR::AdjustingNames::A(*(MR::AdjustingNames::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_AdjustingNames_A_Destroy(const MR_AdjustingNames_A *_this)
{
    delete ((const MR::AdjustingNames::A *)_this);
}

void MR_AdjustingNames_A_DestroyArray(const MR_AdjustingNames_A *_this)
{
    delete[] ((const MR::AdjustingNames::A *)_this);
}

unsigned long MR_AdjustingNames_A_ConvertTo_unsigned_long(MR_AdjustingNames_A *_this)
{
    return (unsigned long)((_this ? *(MR::AdjustingNames::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

MR_AdjustingNames_A *MR_AdjustingNames_A_AssignFromAnother(MR_AdjustingNames_A *_this, const MR_AdjustingNames_A *_other)
{
    return (MR_AdjustingNames_A *)&((_this ? *(MR::AdjustingNames::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::AdjustingNames::A(*(MR::AdjustingNames::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_AdjustingNames_A_foo(MR_AdjustingNames_A *_this)
{
    (_this ? *(MR::AdjustingNames::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo<unsigned long>();
}

void MR_AdjustingNames_A_bar(MR_AdjustingNames_A *_this)
{
    (_this ? *(MR::AdjustingNames::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).bar();
}

