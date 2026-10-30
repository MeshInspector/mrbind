#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_instantiate_only.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_instantiate_only.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_InstantiateOnly_A *MR_InstantiateOnly_A_DefaultConstruct(void)
{
    return (MR_InstantiateOnly_A *)new MR::InstantiateOnly::A(MR::InstantiateOnly::A());
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_InstantiateOnly_A *)(new MR::InstantiateOnly::A[num_elems]{});
}

const MR_InstantiateOnly_A *MR_InstantiateOnly_A_OffsetPtr(const MR_InstantiateOnly_A *ptr, ptrdiff_t i)
{
    return (const MR_InstantiateOnly_A *)(((const MR::InstantiateOnly::A *)ptr) + i);
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_OffsetMutablePtr(MR_InstantiateOnly_A *ptr, ptrdiff_t i)
{
    return (MR_InstantiateOnly_A *)(((MR::InstantiateOnly::A *)ptr) + i);
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_ConstructFromAnother(const MR_InstantiateOnly_A *_other)
{
    return (MR_InstantiateOnly_A *)new MR::InstantiateOnly::A(MR::InstantiateOnly::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::InstantiateOnly::A(*(MR::InstantiateOnly::A *)_other))
    ));
}

void MR_InstantiateOnly_A_Destroy(const MR_InstantiateOnly_A *_this)
{
    delete ((const MR::InstantiateOnly::A *)_this);
}

void MR_InstantiateOnly_A_DestroyArray(const MR_InstantiateOnly_A *_this)
{
    delete[] ((const MR::InstantiateOnly::A *)_this);
}

MR_InstantiateOnly_A *MR_InstantiateOnly_A_AssignFromAnother(MR_InstantiateOnly_A *_this, const MR_InstantiateOnly_A *_other)
{
    return (MR_InstantiateOnly_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::InstantiateOnly::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::InstantiateOnly::A(*(MR::InstantiateOnly::A *)_other))
    ));
}

