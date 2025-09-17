#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_abstract_classes.h"

#include <input/MR/test_abstract_classes.h>

#include <cstddef>
#include <stdexcept>


void MR_AbstractClasses_A_foo(MR_AbstractClasses_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::AbstractClasses::A *)(_this)).foo();
}

const MR_AbstractClasses_A *MR_AbstractClasses_A_OffsetPtr(const MR_AbstractClasses_A *ptr, ptrdiff_t i)
{
    return (const MR_AbstractClasses_A *)(((const MR::AbstractClasses::A *)ptr) + i);
}

MR_AbstractClasses_A *MR_AbstractClasses_A_OffsetMutablePtr(MR_AbstractClasses_A *ptr, ptrdiff_t i)
{
    return (MR_AbstractClasses_A *)(((MR::AbstractClasses::A *)ptr) + i);
}

void MR_AbstractClasses_B_Destroy(const MR_AbstractClasses_B *_this)
{
    delete ((const MR::AbstractClasses::B *)_this);
}

void MR_AbstractClasses_B_DestroyArray(const MR_AbstractClasses_B *_this)
{
    delete[] ((const MR::AbstractClasses::B *)_this);
}

void MR_AbstractClasses_B_foo(MR_AbstractClasses_B *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::AbstractClasses::B *)(_this)).foo();
}

const MR_AbstractClasses_B *MR_AbstractClasses_B_OffsetPtr(const MR_AbstractClasses_B *ptr, ptrdiff_t i)
{
    return (const MR_AbstractClasses_B *)(((const MR::AbstractClasses::B *)ptr) + i);
}

MR_AbstractClasses_B *MR_AbstractClasses_B_OffsetMutablePtr(MR_AbstractClasses_B *ptr, ptrdiff_t i)
{
    return (MR_AbstractClasses_B *)(((MR::AbstractClasses::B *)ptr) + i);
}

const MR_AbstractClasses_C *MR_AbstractClasses_B_StaticDowncastTo_MR_AbstractClasses_C(const MR_AbstractClasses_B *object)
{
    return (const MR_AbstractClasses_C *)(static_cast<const MR::AbstractClasses::C *>(
        ((const MR::AbstractClasses::B *)object)
    ));
}

MR_AbstractClasses_C *MR_AbstractClasses_B_MutableStaticDowncastTo_MR_AbstractClasses_C(MR_AbstractClasses_B *object)
{
    return (MR_AbstractClasses_C *)(static_cast<MR::AbstractClasses::C *>(
        ((MR::AbstractClasses::B *)object)
    ));
}

const MR_AbstractClasses_C *MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C(const MR_AbstractClasses_B *object)
{
    return (const MR_AbstractClasses_C *)(dynamic_cast<const MR::AbstractClasses::C *>(
        ((const MR::AbstractClasses::B *)object)
    ));
}

MR_AbstractClasses_C *MR_AbstractClasses_B_MutableDynamicDowncastTo_MR_AbstractClasses_C(MR_AbstractClasses_B *object)
{
    return (MR_AbstractClasses_C *)(dynamic_cast<MR::AbstractClasses::C *>(
        ((MR::AbstractClasses::B *)object)
    ));
}

const MR_AbstractClasses_C *MR_AbstractClasses_B_DynamicDowncastToOrFail_MR_AbstractClasses_C(const MR_AbstractClasses_B *object)
{
    return (const MR_AbstractClasses_C *)&(dynamic_cast<const MR::AbstractClasses::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::AbstractClasses::B *)(object))
    ));
}

MR_AbstractClasses_C *MR_AbstractClasses_B_MutableDynamicDowncastToOrFail_MR_AbstractClasses_C(MR_AbstractClasses_B *object)
{
    return (MR_AbstractClasses_C *)&(dynamic_cast<MR::AbstractClasses::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::AbstractClasses::B *)(object))
    ));
}

void MR_AbstractClasses_C_Destroy(const MR_AbstractClasses_C *_this)
{
    delete ((const MR::AbstractClasses::C *)_this);
}

void MR_AbstractClasses_C_DestroyArray(const MR_AbstractClasses_C *_this)
{
    delete[] ((const MR::AbstractClasses::C *)_this);
}

const MR_AbstractClasses_C *MR_AbstractClasses_C_OffsetPtr(const MR_AbstractClasses_C *ptr, ptrdiff_t i)
{
    return (const MR_AbstractClasses_C *)(((const MR::AbstractClasses::C *)ptr) + i);
}

MR_AbstractClasses_C *MR_AbstractClasses_C_OffsetMutablePtr(MR_AbstractClasses_C *ptr, ptrdiff_t i)
{
    return (MR_AbstractClasses_C *)(((MR::AbstractClasses::C *)ptr) + i);
}

const MR_AbstractClasses_B *MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(const MR_AbstractClasses_C *object)
{
    return (const MR_AbstractClasses_B *)(static_cast<const MR::AbstractClasses::B *>(
        ((const MR::AbstractClasses::C *)object)
    ));
}

MR_AbstractClasses_B *MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B(MR_AbstractClasses_C *object)
{
    return (MR_AbstractClasses_B *)(static_cast<MR::AbstractClasses::B *>(
        ((MR::AbstractClasses::C *)object)
    ));
}

