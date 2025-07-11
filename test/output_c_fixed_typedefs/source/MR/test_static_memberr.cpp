#include "MR/test_static_memberr.h"

#include <input/MR/test_static_memberr.h>

#include <stdexcept>


const int32_t *MR_StaticFuncs_A_GetConst_x(void)
{
    return (const int32_t *)&(MR::StaticFuncs::A::x);
}

void MR_StaticFuncs_A_Set_x(int32_t value)
{
    MR::StaticFuncs::A::x = value;
}

int32_t *MR_StaticFuncs_A_GetMutable_x(void)
{
    return (int32_t *)&(MR::StaticFuncs::A::x);
}

MR_StaticFuncs_A *MR_StaticFuncs_A_DefaultConstruct(void)
{
    return (MR_StaticFuncs_A *)new MR::StaticFuncs::A(MR::StaticFuncs::A());
}

MR_StaticFuncs_A *MR_StaticFuncs_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_StaticFuncs_A *)(new MR::StaticFuncs::A[num_elems]{});
}

const MR_StaticFuncs_A *MR_StaticFuncs_A_OffsetPtr(const MR_StaticFuncs_A *ptr, ptrdiff_t i)
{
    return (const MR_StaticFuncs_A *)(((const MR::StaticFuncs::A *)ptr) + i);
}

MR_StaticFuncs_A *MR_StaticFuncs_A_OffsetMutablePtr(MR_StaticFuncs_A *ptr, ptrdiff_t i)
{
    return (MR_StaticFuncs_A *)(((MR::StaticFuncs::A *)ptr) + i);
}

MR_StaticFuncs_A *MR_StaticFuncs_A_ConstructFromAnother(const MR_StaticFuncs_A *_other)
{
    return (MR_StaticFuncs_A *)new MR::StaticFuncs::A(MR::StaticFuncs::A(
        (_other ? MR::StaticFuncs::A(*(MR::StaticFuncs::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StaticFuncs_A_Destroy(const MR_StaticFuncs_A *_this)
{
    delete ((const MR::StaticFuncs::A *)_this);
}

void MR_StaticFuncs_A_DestroyArray(const MR_StaticFuncs_A *_this)
{
    delete[] ((const MR::StaticFuncs::A *)_this);
}

MR_StaticFuncs_A *MR_StaticFuncs_A_AssignFromAnother(MR_StaticFuncs_A *_this, const MR_StaticFuncs_A *_other)
{
    return (MR_StaticFuncs_A *)&((_this ? *(MR::StaticFuncs::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StaticFuncs::A(*(MR::StaticFuncs::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StaticFuncs_A_blah(void)
{
    MR::StaticFuncs::A::blah();
}

