#define MR_C_BUILD_LIBRARY
#include "MR/test_nested_types.h"

#include <input/MR/test_nested_types.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


const MR_NestedTypes_A_B *MR_NestedTypes_A_Get_b(const MR_NestedTypes_A *_this)
{
    return (const MR_NestedTypes_A_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::NestedTypes::A *)(_this)).b);
}

void MR_NestedTypes_A_Set_b(MR_NestedTypes_A *_this, const MR_NestedTypes_A_B *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTypes::A *)(_this)).b = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)value));
}

MR_NestedTypes_A_B *MR_NestedTypes_A_GetMutable_b(MR_NestedTypes_A *_this)
{
    return (MR_NestedTypes_A_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTypes::A *)(_this)).b);
}

const MR_NestedTypes_A_E *MR_NestedTypes_A_Get_e(const MR_NestedTypes_A *_this)
{
    return (const MR_NestedTypes_A_E *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::NestedTypes::A *)(_this)).e);
}

void MR_NestedTypes_A_Set_e(MR_NestedTypes_A *_this, MR_NestedTypes_A_E value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTypes::A *)(_this)).e = ((MR::NestedTypes::A::E)value);
}

MR_NestedTypes_A_E *MR_NestedTypes_A_GetMutable_e(MR_NestedTypes_A *_this)
{
    return (MR_NestedTypes_A_E *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTypes::A *)(_this)).e);
}

MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstruct(void)
{
    return (MR_NestedTypes_A *)new MR::NestedTypes::A(MR::NestedTypes::A());
}

MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_NestedTypes_A *)(new MR::NestedTypes::A[num_elems]{});
}

MR_NestedTypes_A *MR_NestedTypes_A_ConstructFrom(const MR_NestedTypes_A_B *b, MR_NestedTypes_A_E e)
{
    return (MR_NestedTypes_A *)new MR::NestedTypes::A(MR::NestedTypes::A{
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)b)),
        ((MR::NestedTypes::A::E)e)
    });
}

const MR_NestedTypes_A *MR_NestedTypes_A_OffsetPtr(const MR_NestedTypes_A *ptr, ptrdiff_t i)
{
    return (const MR_NestedTypes_A *)(((const MR::NestedTypes::A *)ptr) + i);
}

MR_NestedTypes_A *MR_NestedTypes_A_OffsetMutablePtr(MR_NestedTypes_A *ptr, ptrdiff_t i)
{
    return (MR_NestedTypes_A *)(((MR::NestedTypes::A *)ptr) + i);
}

MR_NestedTypes_A *MR_NestedTypes_A_ConstructFromAnother(const MR_NestedTypes_A *_other)
{
    return (MR_NestedTypes_A *)new MR::NestedTypes::A(MR::NestedTypes::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTypes::A(*(MR::NestedTypes::A *)_other))
    ));
}

void MR_NestedTypes_A_Destroy(const MR_NestedTypes_A *_this)
{
    delete ((const MR::NestedTypes::A *)_this);
}

void MR_NestedTypes_A_DestroyArray(const MR_NestedTypes_A *_this)
{
    delete[] ((const MR::NestedTypes::A *)_this);
}

MR_NestedTypes_A *MR_NestedTypes_A_AssignFromAnother(MR_NestedTypes_A *_this, const MR_NestedTypes_A *_other)
{
    return (MR_NestedTypes_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTypes::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTypes::A(*(MR::NestedTypes::A *)_other))
    ));
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstruct(void)
{
    return (MR_NestedTypes_A_B *)new MR::NestedTypes::A::B(MR::NestedTypes::A::B());
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_NestedTypes_A_B *)(new MR::NestedTypes::A::B[num_elems]{});
}

const MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetPtr(const MR_NestedTypes_A_B *ptr, ptrdiff_t i)
{
    return (const MR_NestedTypes_A_B *)(((const MR::NestedTypes::A::B *)ptr) + i);
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetMutablePtr(MR_NestedTypes_A_B *ptr, ptrdiff_t i)
{
    return (MR_NestedTypes_A_B *)(((MR::NestedTypes::A::B *)ptr) + i);
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_ConstructFromAnother(const MR_NestedTypes_A_B *_other)
{
    return (MR_NestedTypes_A_B *)new MR::NestedTypes::A::B(MR::NestedTypes::A::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)_other))
    ));
}

void MR_NestedTypes_A_B_Destroy(const MR_NestedTypes_A_B *_this)
{
    delete ((const MR::NestedTypes::A::B *)_this);
}

void MR_NestedTypes_A_B_DestroyArray(const MR_NestedTypes_A_B *_this)
{
    delete[] ((const MR::NestedTypes::A::B *)_this);
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_AssignFromAnother(MR_NestedTypes_A_B *_this, const MR_NestedTypes_A_B *_other)
{
    return (MR_NestedTypes_A_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTypes::A::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)_other))
    ));
}

