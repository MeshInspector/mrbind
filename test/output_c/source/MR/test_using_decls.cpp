#define MR_C_BUILD_LIBRARY
#include "MR/test_using_decls.h"

#include <input/MR/test_using_decls.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


const int *MR_UsingDecls_A_Get_StaticVar(void)
{
    return std::addressof(MR::UsingDecls::A::StaticVar);
}

void MR_UsingDecls_A_Set_StaticVar(int value)
{
    MR::UsingDecls::A::StaticVar = value;
}

int *MR_UsingDecls_A_GetMutable_StaticVar(void)
{
    return std::addressof(MR::UsingDecls::A::StaticVar);
}

const int *MR_UsingDecls_A_Get_Field(const MR_UsingDecls_A *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::UsingDecls::A *)(_this)).Field);
}

void MR_UsingDecls_A_Set_Field(MR_UsingDecls_A *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::A *)(_this)).Field = value;
}

int *MR_UsingDecls_A_GetMutable_Field(MR_UsingDecls_A *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::A *)(_this)).Field);
}

MR_UsingDecls_A *MR_UsingDecls_A_ConstructFromAnother(const MR_UsingDecls_A *_other)
{
    return (MR_UsingDecls_A *)new MR::UsingDecls::A(MR::UsingDecls::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::UsingDecls::A(*(MR::UsingDecls::A *)_other))
    ));
}

const MR_UsingDecls_A *MR_UsingDecls_A_OffsetPtr(const MR_UsingDecls_A *ptr, ptrdiff_t i)
{
    return (const MR_UsingDecls_A *)(((const MR::UsingDecls::A *)ptr) + i);
}

MR_UsingDecls_A *MR_UsingDecls_A_OffsetMutablePtr(MR_UsingDecls_A *ptr, ptrdiff_t i)
{
    return (MR_UsingDecls_A *)(((MR::UsingDecls::A *)ptr) + i);
}

const MR_UsingDecls_B *MR_UsingDecls_A_StaticDowncastTo_MR_UsingDecls_B(const MR_UsingDecls_A *object)
{
    return (const MR_UsingDecls_B *)(static_cast<const MR::UsingDecls::B *>(
        ((const MR::UsingDecls::A *)object)
    ));
}

MR_UsingDecls_B *MR_UsingDecls_A_MutableStaticDowncastTo_MR_UsingDecls_B(MR_UsingDecls_A *object)
{
    return (MR_UsingDecls_B *)(static_cast<MR::UsingDecls::B *>(
        ((MR::UsingDecls::A *)object)
    ));
}

MR_UsingDecls_A *MR_UsingDecls_A_Construct(int _1)
{
    return (MR_UsingDecls_A *)new MR::UsingDecls::A(MR::UsingDecls::A(
        _1
    ));
}

void MR_UsingDecls_A_Destroy(const MR_UsingDecls_A *_this)
{
    delete ((const MR::UsingDecls::A *)_this);
}

void MR_UsingDecls_A_DestroyArray(const MR_UsingDecls_A *_this)
{
    delete[] ((const MR::UsingDecls::A *)_this);
}

int MR_UsingDecls_A_ConvertTo_int(MR_UsingDecls_A *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::A *)(_this)));
}

MR_UsingDecls_A *MR_UsingDecls_A_AssignFromAnother(MR_UsingDecls_A *_this, const MR_UsingDecls_A *_other)
{
    return (MR_UsingDecls_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::UsingDecls::A(*(MR::UsingDecls::A *)_other))
    ));
}

void MR_UsingDecls_A_assign(MR_UsingDecls_A *_this, int _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::A *)(_this)).operator=(
        _1
    );
}

void MR_UsingDecls_A_Method(MR_UsingDecls_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::A *)(_this)).Method();
}

void MR_UsingDecls_A_StaticFunc(void)
{
    MR::UsingDecls::A::StaticFunc();
}

const int *MR_UsingDecls_B_Get_Field(const MR_UsingDecls_B *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::UsingDecls::B *)(_this)).Field);
}

void MR_UsingDecls_B_Set_Field(MR_UsingDecls_B *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::B *)(_this)).Field = value;
}

int *MR_UsingDecls_B_GetMutable_Field(MR_UsingDecls_B *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::B *)(_this)).Field);
}

const int *MR_UsingDecls_B_Get_StaticVar(void)
{
    return std::addressof(MR::UsingDecls::B::StaticVar);
}

void MR_UsingDecls_B_Set_StaticVar(int value)
{
    MR::UsingDecls::B::StaticVar = value;
}

int *MR_UsingDecls_B_GetMutable_StaticVar(void)
{
    return std::addressof(MR::UsingDecls::B::StaticVar);
}

MR_UsingDecls_B *MR_UsingDecls_B_ConstructFromAnother(const MR_UsingDecls_B *_other)
{
    return (MR_UsingDecls_B *)new MR::UsingDecls::B(MR::UsingDecls::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::UsingDecls::B(*(MR::UsingDecls::B *)_other))
    ));
}

const MR_UsingDecls_B *MR_UsingDecls_B_OffsetPtr(const MR_UsingDecls_B *ptr, ptrdiff_t i)
{
    return (const MR_UsingDecls_B *)(((const MR::UsingDecls::B *)ptr) + i);
}

MR_UsingDecls_B *MR_UsingDecls_B_OffsetMutablePtr(MR_UsingDecls_B *ptr, ptrdiff_t i)
{
    return (MR_UsingDecls_B *)(((MR::UsingDecls::B *)ptr) + i);
}

const MR_UsingDecls_A *MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(const MR_UsingDecls_B *object)
{
    return (const MR_UsingDecls_A *)(static_cast<const MR::UsingDecls::A *>(
        ((const MR::UsingDecls::B *)object)
    ));
}

MR_UsingDecls_A *MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A(MR_UsingDecls_B *object)
{
    return (MR_UsingDecls_A *)(static_cast<MR::UsingDecls::A *>(
        ((MR::UsingDecls::B *)object)
    ));
}

void MR_UsingDecls_B_Destroy(const MR_UsingDecls_B *_this)
{
    delete ((const MR::UsingDecls::B *)_this);
}

void MR_UsingDecls_B_DestroyArray(const MR_UsingDecls_B *_this)
{
    delete[] ((const MR::UsingDecls::B *)_this);
}

int MR_UsingDecls_B_ConvertTo_int(MR_UsingDecls_B *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::B *)(_this)));
}

MR_UsingDecls_B *MR_UsingDecls_B_AssignFromAnother(MR_UsingDecls_B *_this, const MR_UsingDecls_B *_other)
{
    return (MR_UsingDecls_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::UsingDecls::B(*(MR::UsingDecls::B *)_other))
    ));
}

void MR_UsingDecls_B_assign(MR_UsingDecls_B *_this, int _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::B *)(_this)).operator=(
        _1
    );
}

void MR_UsingDecls_B_Method(MR_UsingDecls_B *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::UsingDecls::B *)(_this)).Method();
}

void MR_UsingDecls_B_StaticFunc(void)
{
    MR::UsingDecls::B::StaticFunc();
}

