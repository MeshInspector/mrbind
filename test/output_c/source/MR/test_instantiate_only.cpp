#define MR_C_BUILD_LIBRARY
#include "MR/test_instantiate_only.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_instantiate_only.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_InstantiateOnly_A *MR_InstantiateOnly_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_InstantiateOnly_A *)new MR::InstantiateOnly::A(MR::InstantiateOnly::A());
    ) // MRBINDC_TRY
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_InstantiateOnly_A *)(new MR::InstantiateOnly::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_InstantiateOnly_A *MR_InstantiateOnly_A_OffsetPtr(const MR_InstantiateOnly_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_InstantiateOnly_A *)(((const MR::InstantiateOnly::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_OffsetMutablePtr(MR_InstantiateOnly_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_InstantiateOnly_A *)(((MR::InstantiateOnly::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_ConstructFromAnother(const MR_InstantiateOnly_A *_other)
{
    MRBINDC_TRY(
    return (MR_InstantiateOnly_A *)new MR::InstantiateOnly::A(MR::InstantiateOnly::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::InstantiateOnly::A(*(MR::InstantiateOnly::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_InstantiateOnly_A_Destroy(const MR_InstantiateOnly_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::InstantiateOnly::A *)_this);
    ) // MRBINDC_TRY
}

void MR_InstantiateOnly_A_DestroyArray(const MR_InstantiateOnly_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::InstantiateOnly::A *)_this);
    ) // MRBINDC_TRY
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_AssignFromAnother(MR_InstantiateOnly_A *_this, const MR_InstantiateOnly_A *_other)
{
    MRBINDC_TRY(
    return (MR_InstantiateOnly_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::InstantiateOnly::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::InstantiateOnly::A(*(MR::InstantiateOnly::A *)_other))
    ));
    ) // MRBINDC_TRY
}

