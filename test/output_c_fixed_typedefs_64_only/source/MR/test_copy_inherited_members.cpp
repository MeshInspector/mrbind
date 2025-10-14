#define MR_C_BUILD_LIBRARY
#include "MR/test_copy_inherited_members.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_copy_inherited_members.h>

#include <cstddef>
#include <stdexcept>


const int *MR_CopyInheritedMembers_A_Get_StaticField(void)
{
    return &(MR::CopyInheritedMembers::A::StaticField);
}

void MR_CopyInheritedMembers_A_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::A::StaticField = value;
}

int *MR_CopyInheritedMembers_A_GetMutable_StaticField(void)
{
    return &(MR::CopyInheritedMembers::A::StaticField);
}

const int *MR_CopyInheritedMembers_A_Get_Field(const MR_CopyInheritedMembers_A *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::A *)(_this)).Field);
}

void MR_CopyInheritedMembers_A_Set_Field(MR_CopyInheritedMembers_A *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_A_GetMutable_Field(MR_CopyInheritedMembers_A *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).Field);
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_A *)new MR::CopyInheritedMembers::A(MR::CopyInheritedMembers::A());
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_A *)(new MR::CopyInheritedMembers::A[num_elems]{});
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_ConstructFrom(int Field)
{
    return (MR_CopyInheritedMembers_A *)new MR::CopyInheritedMembers::A(MR::CopyInheritedMembers::A{
        Field
    });
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_OffsetPtr(const MR_CopyInheritedMembers_A *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_A *)(((const MR::CopyInheritedMembers::A *)ptr) + i);
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_OffsetMutablePtr(MR_CopyInheritedMembers_A *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_A *)(((MR::CopyInheritedMembers::A *)ptr) + i);
}

const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_C(const MR_CopyInheritedMembers_A *object)
{
    return (const MR_CopyInheritedMembers_C *)(static_cast<const MR::CopyInheritedMembers::C *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_C(MR_CopyInheritedMembers_A *object)
{
    return (MR_CopyInheritedMembers_C *)(static_cast<MR::CopyInheritedMembers::C *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_A *object)
{
    return (const MR_CopyInheritedMembers_E *)(static_cast<const MR::CopyInheritedMembers::E *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_A *object)
{
    return (MR_CopyInheritedMembers_E *)(static_cast<MR::CopyInheritedMembers::E *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_A *object)
{
    return (const MR_CopyInheritedMembers_F *)(static_cast<const MR::CopyInheritedMembers::F *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_A *object)
{
    return (MR_CopyInheritedMembers_F *)(static_cast<MR::CopyInheritedMembers::F *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_A *object)
{
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_A *object)
{
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_ConstructFromAnother(const MR_CopyInheritedMembers_A *_other)
{
    return (MR_CopyInheritedMembers_A *)new MR::CopyInheritedMembers::A(MR::CopyInheritedMembers::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::A(*(MR::CopyInheritedMembers::A *)_other))
    ));
}

void MR_CopyInheritedMembers_A_Destroy(const MR_CopyInheritedMembers_A *_this)
{
    delete ((const MR::CopyInheritedMembers::A *)_this);
}

void MR_CopyInheritedMembers_A_DestroyArray(const MR_CopyInheritedMembers_A *_this)
{
    delete[] ((const MR::CopyInheritedMembers::A *)_this);
}

int MR_CopyInheritedMembers_A_ConvertTo_int(MR_CopyInheritedMembers_A *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_AssignFromAnother(MR_CopyInheritedMembers_A *_this, const MR_CopyInheritedMembers_A *_other)
{
    return (MR_CopyInheritedMembers_A *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::A(*(MR::CopyInheritedMembers::A *)_other))
    ));
}

void MR_CopyInheritedMembers_A_Method(MR_CopyInheritedMembers_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).Method();
}

void MR_CopyInheritedMembers_A_StaticFunc(void)
{
    MR::CopyInheritedMembers::A::StaticFunc();
}

const int *MR_CopyInheritedMembers_B_Get_StaticField(void)
{
    return &(MR::CopyInheritedMembers::B::StaticField);
}

void MR_CopyInheritedMembers_B_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::B::StaticField = value;
}

int *MR_CopyInheritedMembers_B_GetMutable_StaticField(void)
{
    return &(MR::CopyInheritedMembers::B::StaticField);
}

const int *MR_CopyInheritedMembers_B_Get_Field(const MR_CopyInheritedMembers_B *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::B *)(_this)).Field);
}

void MR_CopyInheritedMembers_B_Set_Field(MR_CopyInheritedMembers_B *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_B_GetMutable_Field(MR_CopyInheritedMembers_B *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).Field);
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_B *)new MR::CopyInheritedMembers::B(MR::CopyInheritedMembers::B());
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_B *)(new MR::CopyInheritedMembers::B[num_elems]{});
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_ConstructFrom(int Field)
{
    return (MR_CopyInheritedMembers_B *)new MR::CopyInheritedMembers::B(MR::CopyInheritedMembers::B{
        Field
    });
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_OffsetPtr(const MR_CopyInheritedMembers_B *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_B *)(((const MR::CopyInheritedMembers::B *)ptr) + i);
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_OffsetMutablePtr(MR_CopyInheritedMembers_B *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_B *)(((MR::CopyInheritedMembers::B *)ptr) + i);
}

const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_C(const MR_CopyInheritedMembers_B *object)
{
    return (const MR_CopyInheritedMembers_C *)(static_cast<const MR::CopyInheritedMembers::C *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_C(MR_CopyInheritedMembers_B *object)
{
    return (MR_CopyInheritedMembers_C *)(static_cast<MR::CopyInheritedMembers::C *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_B *object)
{
    return (const MR_CopyInheritedMembers_D *)(static_cast<const MR::CopyInheritedMembers::D *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_B *object)
{
    return (MR_CopyInheritedMembers_D *)(static_cast<MR::CopyInheritedMembers::D *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_B *object)
{
    return (const MR_CopyInheritedMembers_E *)(static_cast<const MR::CopyInheritedMembers::E *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_B *object)
{
    return (MR_CopyInheritedMembers_E *)(static_cast<MR::CopyInheritedMembers::E *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_B *object)
{
    return (const MR_CopyInheritedMembers_F *)(static_cast<const MR::CopyInheritedMembers::F *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_B *object)
{
    return (MR_CopyInheritedMembers_F *)(static_cast<MR::CopyInheritedMembers::F *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_ConstructFromAnother(const MR_CopyInheritedMembers_B *_other)
{
    return (MR_CopyInheritedMembers_B *)new MR::CopyInheritedMembers::B(MR::CopyInheritedMembers::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::B(*(MR::CopyInheritedMembers::B *)_other))
    ));
}

void MR_CopyInheritedMembers_B_Destroy(const MR_CopyInheritedMembers_B *_this)
{
    delete ((const MR::CopyInheritedMembers::B *)_this);
}

void MR_CopyInheritedMembers_B_DestroyArray(const MR_CopyInheritedMembers_B *_this)
{
    delete[] ((const MR::CopyInheritedMembers::B *)_this);
}

int MR_CopyInheritedMembers_B_ConvertTo_int(MR_CopyInheritedMembers_B *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)));
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_AssignFromAnother(MR_CopyInheritedMembers_B *_this, const MR_CopyInheritedMembers_B *_other)
{
    return (MR_CopyInheritedMembers_B *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::B(*(MR::CopyInheritedMembers::B *)_other))
    ));
}

void MR_CopyInheritedMembers_B_Method(MR_CopyInheritedMembers_B *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).Method();
}

void MR_CopyInheritedMembers_B_StaticFunc(void)
{
    MR::CopyInheritedMembers::B::StaticFunc();
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_C *)new MR::CopyInheritedMembers::C(MR::CopyInheritedMembers::C());
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_C *)(new MR::CopyInheritedMembers::C[num_elems]{});
}

const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_OffsetPtr(const MR_CopyInheritedMembers_C *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_C *)(((const MR::CopyInheritedMembers::C *)ptr) + i);
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_OffsetMutablePtr(MR_CopyInheritedMembers_C *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_C *)(((MR::CopyInheritedMembers::C *)ptr) + i);
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_C *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::C *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_C *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::C *)object)
    ));
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_C *object)
{
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::C *)object)
    ));
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_C *object)
{
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::C *)object)
    ));
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_ConstructFromAnother(const MR_CopyInheritedMembers_C *_other)
{
    return (MR_CopyInheritedMembers_C *)new MR::CopyInheritedMembers::C(MR::CopyInheritedMembers::C(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::C(*(MR::CopyInheritedMembers::C *)_other))
    ));
}

void MR_CopyInheritedMembers_C_Destroy(const MR_CopyInheritedMembers_C *_this)
{
    delete ((const MR::CopyInheritedMembers::C *)_this);
}

void MR_CopyInheritedMembers_C_DestroyArray(const MR_CopyInheritedMembers_C *_this)
{
    delete[] ((const MR::CopyInheritedMembers::C *)_this);
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_AssignFromAnother(MR_CopyInheritedMembers_C *_this, const MR_CopyInheritedMembers_C *_other)
{
    return (MR_CopyInheritedMembers_C *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::C *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::C(*(MR::CopyInheritedMembers::C *)_other))
    ));
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_D *)new MR::CopyInheritedMembers::D(MR::CopyInheritedMembers::D());
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_D *)(new MR::CopyInheritedMembers::D[num_elems]{});
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_OffsetPtr(const MR_CopyInheritedMembers_D *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_D *)(((const MR::CopyInheritedMembers::D *)ptr) + i);
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_OffsetMutablePtr(MR_CopyInheritedMembers_D *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_D *)(((MR::CopyInheritedMembers::D *)ptr) + i);
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_D *object)
{
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::D *)object)
    ));
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_D *object)
{
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::D *)object)
    ));
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_D_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_D *object)
{
    return (const MR_CopyInheritedMembers_E *)(static_cast<const MR::CopyInheritedMembers::E *>(
        ((const MR::CopyInheritedMembers::D *)object)
    ));
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_D_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_D *object)
{
    return (MR_CopyInheritedMembers_E *)(static_cast<MR::CopyInheritedMembers::E *>(
        ((MR::CopyInheritedMembers::D *)object)
    ));
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_D_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_D *object)
{
    return (const MR_CopyInheritedMembers_F *)(static_cast<const MR::CopyInheritedMembers::F *>(
        ((const MR::CopyInheritedMembers::D *)object)
    ));
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_D_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_D *object)
{
    return (MR_CopyInheritedMembers_F *)(static_cast<MR::CopyInheritedMembers::F *>(
        ((MR::CopyInheritedMembers::D *)object)
    ));
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_ConstructFromAnother(const MR_CopyInheritedMembers_D *_other)
{
    return (MR_CopyInheritedMembers_D *)new MR::CopyInheritedMembers::D(MR::CopyInheritedMembers::D(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::D(*(MR::CopyInheritedMembers::D *)_other))
    ));
}

void MR_CopyInheritedMembers_D_Destroy(const MR_CopyInheritedMembers_D *_this)
{
    delete ((const MR::CopyInheritedMembers::D *)_this);
}

void MR_CopyInheritedMembers_D_DestroyArray(const MR_CopyInheritedMembers_D *_this)
{
    delete[] ((const MR::CopyInheritedMembers::D *)_this);
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_AssignFromAnother(MR_CopyInheritedMembers_D *_this, const MR_CopyInheritedMembers_D *_other)
{
    return (MR_CopyInheritedMembers_D *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::D *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::D(*(MR::CopyInheritedMembers::D *)_other))
    ));
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_E *)new MR::CopyInheritedMembers::E(MR::CopyInheritedMembers::E());
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_E *)(new MR::CopyInheritedMembers::E[num_elems]{});
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_OffsetPtr(const MR_CopyInheritedMembers_E *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_E *)(((const MR::CopyInheritedMembers::E *)ptr) + i);
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_OffsetMutablePtr(MR_CopyInheritedMembers_E *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_E *)(((MR::CopyInheritedMembers::E *)ptr) + i);
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_E *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::E *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_E *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::E *)object)
    ));
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_E *object)
{
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::E *)object)
    ));
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_E *object)
{
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::E *)object)
    ));
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_E *object)
{
    return (const MR_CopyInheritedMembers_D *)(static_cast<const MR::CopyInheritedMembers::D *>(
        ((const MR::CopyInheritedMembers::E *)object)
    ));
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_E *object)
{
    return (MR_CopyInheritedMembers_D *)(static_cast<MR::CopyInheritedMembers::D *>(
        ((MR::CopyInheritedMembers::E *)object)
    ));
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_ConstructFromAnother(const MR_CopyInheritedMembers_E *_other)
{
    return (MR_CopyInheritedMembers_E *)new MR::CopyInheritedMembers::E(MR::CopyInheritedMembers::E(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::E(*(MR::CopyInheritedMembers::E *)_other))
    ));
}

void MR_CopyInheritedMembers_E_Destroy(const MR_CopyInheritedMembers_E *_this)
{
    delete ((const MR::CopyInheritedMembers::E *)_this);
}

void MR_CopyInheritedMembers_E_DestroyArray(const MR_CopyInheritedMembers_E *_this)
{
    delete[] ((const MR::CopyInheritedMembers::E *)_this);
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_AssignFromAnother(MR_CopyInheritedMembers_E *_this, const MR_CopyInheritedMembers_E *_other)
{
    return (MR_CopyInheritedMembers_E *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::E *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::E(*(MR::CopyInheritedMembers::E *)_other))
    ));
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_F *)new MR::CopyInheritedMembers::F(MR::CopyInheritedMembers::F());
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_F *)(new MR::CopyInheritedMembers::F[num_elems]{});
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_OffsetPtr(const MR_CopyInheritedMembers_F *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_F *)(((const MR::CopyInheritedMembers::F *)ptr) + i);
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_OffsetMutablePtr(MR_CopyInheritedMembers_F *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_F *)(((MR::CopyInheritedMembers::F *)ptr) + i);
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_F *object)
{
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::F *)object)
    ));
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_F *object)
{
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::F *)object)
    ));
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_F *object)
{
    return (const MR_CopyInheritedMembers_D *)(static_cast<const MR::CopyInheritedMembers::D *>(
        ((const MR::CopyInheritedMembers::F *)object)
    ));
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_F *object)
{
    return (MR_CopyInheritedMembers_D *)(static_cast<MR::CopyInheritedMembers::D *>(
        ((MR::CopyInheritedMembers::F *)object)
    ));
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_F *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::F *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_F *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::F *)object)
    ));
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_ConstructFromAnother(const MR_CopyInheritedMembers_F *_other)
{
    return (MR_CopyInheritedMembers_F *)new MR::CopyInheritedMembers::F(MR::CopyInheritedMembers::F(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::F(*(MR::CopyInheritedMembers::F *)_other))
    ));
}

void MR_CopyInheritedMembers_F_Destroy(const MR_CopyInheritedMembers_F *_this)
{
    delete ((const MR::CopyInheritedMembers::F *)_this);
}

void MR_CopyInheritedMembers_F_DestroyArray(const MR_CopyInheritedMembers_F *_this)
{
    delete[] ((const MR::CopyInheritedMembers::F *)_this);
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_AssignFromAnother(MR_CopyInheritedMembers_F *_this, const MR_CopyInheritedMembers_F *_other)
{
    return (MR_CopyInheritedMembers_F *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::F *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::F(*(MR::CopyInheritedMembers::F *)_other))
    ));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_G *)new MR::CopyInheritedMembers::G(MR::CopyInheritedMembers::G());
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_G *)(new MR::CopyInheritedMembers::G[num_elems]{});
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_OffsetPtr(const MR_CopyInheritedMembers_G *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_G *)(((const MR::CopyInheritedMembers::G *)ptr) + i);
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_OffsetMutablePtr(MR_CopyInheritedMembers_G *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_G *)(((MR::CopyInheritedMembers::G *)ptr) + i);
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_G *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_G *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
}

const MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_H(const MR_CopyInheritedMembers_G *object)
{
    return (const MR_CopyInheritedMembers_H *)(static_cast<const MR::CopyInheritedMembers::H *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_H(MR_CopyInheritedMembers_G *object)
{
    return (MR_CopyInheritedMembers_H *)(static_cast<MR::CopyInheritedMembers::H *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
}

const MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_I(const MR_CopyInheritedMembers_G *object)
{
    return (const MR_CopyInheritedMembers_I *)(static_cast<const MR::CopyInheritedMembers::I *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_I(MR_CopyInheritedMembers_G *object)
{
    return (MR_CopyInheritedMembers_I *)(static_cast<MR::CopyInheritedMembers::I *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
}

const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_K(const MR_CopyInheritedMembers_G *object)
{
    return (const MR_CopyInheritedMembers_K *)(static_cast<const MR::CopyInheritedMembers::K *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_K(MR_CopyInheritedMembers_G *object)
{
    return (MR_CopyInheritedMembers_K *)(static_cast<MR::CopyInheritedMembers::K *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
}

const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_L(const MR_CopyInheritedMembers_G *object)
{
    return (const MR_CopyInheritedMembers_L *)(static_cast<const MR::CopyInheritedMembers::L *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_L(MR_CopyInheritedMembers_G *object)
{
    return (MR_CopyInheritedMembers_L *)(static_cast<MR::CopyInheritedMembers::L *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other)
{
    return (MR_CopyInheritedMembers_G *)new MR::CopyInheritedMembers::G(MR::CopyInheritedMembers::G(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::G))
    ));
}

void MR_CopyInheritedMembers_G_Destroy(const MR_CopyInheritedMembers_G *_this)
{
    delete ((const MR::CopyInheritedMembers::G *)_this);
}

void MR_CopyInheritedMembers_G_DestroyArray(const MR_CopyInheritedMembers_G *_this)
{
    delete[] ((const MR::CopyInheritedMembers::G *)_this);
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_AssignFromAnother(MR_CopyInheritedMembers_G *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other)
{
    return (MR_CopyInheritedMembers_G *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::G))
    ));
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_H *)new MR::CopyInheritedMembers::H(MR::CopyInheritedMembers::H());
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_H *)(new MR::CopyInheritedMembers::H[num_elems]{});
}

const MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_OffsetPtr(const MR_CopyInheritedMembers_H *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_H *)(((const MR::CopyInheritedMembers::H *)ptr) + i);
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_OffsetMutablePtr(MR_CopyInheritedMembers_H *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_H *)(((MR::CopyInheritedMembers::H *)ptr) + i);
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_H *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::H *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_H *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::H *)object)
    ));
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_H *object)
{
    return (const MR_CopyInheritedMembers_G *)(static_cast<const MR::CopyInheritedMembers::G *>(
        ((const MR::CopyInheritedMembers::H *)object)
    ));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_H *object)
{
    return (MR_CopyInheritedMembers_G *)(static_cast<MR::CopyInheritedMembers::G *>(
        ((MR::CopyInheritedMembers::H *)object)
    ));
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_H *_other)
{
    return (MR_CopyInheritedMembers_H *)new MR::CopyInheritedMembers::H(MR::CopyInheritedMembers::H(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::H))
    ));
}

void MR_CopyInheritedMembers_H_Destroy(const MR_CopyInheritedMembers_H *_this)
{
    delete ((const MR::CopyInheritedMembers::H *)_this);
}

void MR_CopyInheritedMembers_H_DestroyArray(const MR_CopyInheritedMembers_H *_this)
{
    delete[] ((const MR::CopyInheritedMembers::H *)_this);
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_AssignFromAnother(MR_CopyInheritedMembers_H *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_H *_other)
{
    return (MR_CopyInheritedMembers_H *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::H *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::H))
    ));
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_I *)new MR::CopyInheritedMembers::I(MR::CopyInheritedMembers::I());
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_I *)(new MR::CopyInheritedMembers::I[num_elems]{});
}

const MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_OffsetPtr(const MR_CopyInheritedMembers_I *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_I *)(((const MR::CopyInheritedMembers::I *)ptr) + i);
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_OffsetMutablePtr(MR_CopyInheritedMembers_I *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_I *)(((MR::CopyInheritedMembers::I *)ptr) + i);
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_I *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::I *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_I *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::I *)object)
    ));
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_I *object)
{
    return (const MR_CopyInheritedMembers_G *)(static_cast<const MR::CopyInheritedMembers::G *>(
        ((const MR::CopyInheritedMembers::I *)object)
    ));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_I *object)
{
    return (MR_CopyInheritedMembers_G *)(static_cast<MR::CopyInheritedMembers::G *>(
        ((MR::CopyInheritedMembers::I *)object)
    ));
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_I *_other)
{
    return (MR_CopyInheritedMembers_I *)new MR::CopyInheritedMembers::I(MR::CopyInheritedMembers::I(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::I))
    ));
}

void MR_CopyInheritedMembers_I_Destroy(const MR_CopyInheritedMembers_I *_this)
{
    delete ((const MR::CopyInheritedMembers::I *)_this);
}

void MR_CopyInheritedMembers_I_DestroyArray(const MR_CopyInheritedMembers_I *_this)
{
    delete[] ((const MR::CopyInheritedMembers::I *)_this);
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_AssignFromAnother(MR_CopyInheritedMembers_I *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_I *_other)
{
    return (MR_CopyInheritedMembers_I *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::I *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::I))
    ));
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_J *)new MR::CopyInheritedMembers::J(MR::CopyInheritedMembers::J());
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_J *)(new MR::CopyInheritedMembers::J[num_elems]{});
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_OffsetPtr(const MR_CopyInheritedMembers_J *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_J *)(((const MR::CopyInheritedMembers::J *)ptr) + i);
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_OffsetMutablePtr(MR_CopyInheritedMembers_J *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_J *)(((MR::CopyInheritedMembers::J *)ptr) + i);
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_J *object)
{
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::J *)object)
    ));
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_J *object)
{
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::J *)object)
    ));
}

const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_J_StaticDowncastTo_MR_CopyInheritedMembers_K(const MR_CopyInheritedMembers_J *object)
{
    return (const MR_CopyInheritedMembers_K *)(static_cast<const MR::CopyInheritedMembers::K *>(
        ((const MR::CopyInheritedMembers::J *)object)
    ));
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_J_MutableStaticDowncastTo_MR_CopyInheritedMembers_K(MR_CopyInheritedMembers_J *object)
{
    return (MR_CopyInheritedMembers_K *)(static_cast<MR::CopyInheritedMembers::K *>(
        ((MR::CopyInheritedMembers::J *)object)
    ));
}

const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_J_StaticDowncastTo_MR_CopyInheritedMembers_L(const MR_CopyInheritedMembers_J *object)
{
    return (const MR_CopyInheritedMembers_L *)(static_cast<const MR::CopyInheritedMembers::L *>(
        ((const MR::CopyInheritedMembers::J *)object)
    ));
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_J_MutableStaticDowncastTo_MR_CopyInheritedMembers_L(MR_CopyInheritedMembers_J *object)
{
    return (MR_CopyInheritedMembers_L *)(static_cast<MR::CopyInheritedMembers::L *>(
        ((MR::CopyInheritedMembers::J *)object)
    ));
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_ConstructFromAnother(const MR_CopyInheritedMembers_J *_other)
{
    return (MR_CopyInheritedMembers_J *)new MR::CopyInheritedMembers::J(MR::CopyInheritedMembers::J(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::J(*(MR::CopyInheritedMembers::J *)_other))
    ));
}

void MR_CopyInheritedMembers_J_Destroy(const MR_CopyInheritedMembers_J *_this)
{
    delete ((const MR::CopyInheritedMembers::J *)_this);
}

void MR_CopyInheritedMembers_J_DestroyArray(const MR_CopyInheritedMembers_J *_this)
{
    delete[] ((const MR::CopyInheritedMembers::J *)_this);
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_AssignFromAnother(MR_CopyInheritedMembers_J *_this, const MR_CopyInheritedMembers_J *_other)
{
    return (MR_CopyInheritedMembers_J *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::J(*(MR::CopyInheritedMembers::J *)_other))
    ));
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_K *)new MR::CopyInheritedMembers::K(MR::CopyInheritedMembers::K());
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_K *)(new MR::CopyInheritedMembers::K[num_elems]{});
}

const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_OffsetPtr(const MR_CopyInheritedMembers_K *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_K *)(((const MR::CopyInheritedMembers::K *)ptr) + i);
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_OffsetMutablePtr(MR_CopyInheritedMembers_K *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_K *)(((MR::CopyInheritedMembers::K *)ptr) + i);
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_K *object)
{
    return (const MR_CopyInheritedMembers_G *)(static_cast<const MR::CopyInheritedMembers::G *>(
        ((const MR::CopyInheritedMembers::K *)object)
    ));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_K_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_K *object)
{
    return (MR_CopyInheritedMembers_G *)(static_cast<MR::CopyInheritedMembers::G *>(
        ((MR::CopyInheritedMembers::K *)object)
    ));
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_K *object)
{
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::K *)object)
    ));
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_K_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_K *object)
{
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::K *)object)
    ));
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_K *_other)
{
    return (MR_CopyInheritedMembers_K *)new MR::CopyInheritedMembers::K(MR::CopyInheritedMembers::K(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::K))
    ));
}

void MR_CopyInheritedMembers_K_Destroy(const MR_CopyInheritedMembers_K *_this)
{
    delete ((const MR::CopyInheritedMembers::K *)_this);
}

void MR_CopyInheritedMembers_K_DestroyArray(const MR_CopyInheritedMembers_K *_this)
{
    delete[] ((const MR::CopyInheritedMembers::K *)_this);
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_AssignFromAnother(MR_CopyInheritedMembers_K *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_K *_other)
{
    return (MR_CopyInheritedMembers_K *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::K *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::K))
    ));
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_DefaultConstruct(void)
{
    return (MR_CopyInheritedMembers_L *)new MR::CopyInheritedMembers::L(MR::CopyInheritedMembers::L());
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_DefaultConstructArray(size_t num_elems)
{
    return (MR_CopyInheritedMembers_L *)(new MR::CopyInheritedMembers::L[num_elems]{});
}

const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_OffsetPtr(const MR_CopyInheritedMembers_L *ptr, ptrdiff_t i)
{
    return (const MR_CopyInheritedMembers_L *)(((const MR::CopyInheritedMembers::L *)ptr) + i);
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_OffsetMutablePtr(MR_CopyInheritedMembers_L *ptr, ptrdiff_t i)
{
    return (MR_CopyInheritedMembers_L *)(((MR::CopyInheritedMembers::L *)ptr) + i);
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_L *object)
{
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::L *)object)
    ));
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_L_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_L *object)
{
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::L *)object)
    ));
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_L *object)
{
    return (const MR_CopyInheritedMembers_G *)(static_cast<const MR::CopyInheritedMembers::G *>(
        ((const MR::CopyInheritedMembers::L *)object)
    ));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_L_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_L *object)
{
    return (MR_CopyInheritedMembers_G *)(static_cast<MR::CopyInheritedMembers::G *>(
        ((MR::CopyInheritedMembers::L *)object)
    ));
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_L *_other)
{
    return (MR_CopyInheritedMembers_L *)new MR::CopyInheritedMembers::L(MR::CopyInheritedMembers::L(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::L))
    ));
}

void MR_CopyInheritedMembers_L_Destroy(const MR_CopyInheritedMembers_L *_this)
{
    delete ((const MR::CopyInheritedMembers::L *)_this);
}

void MR_CopyInheritedMembers_L_DestroyArray(const MR_CopyInheritedMembers_L *_this)
{
    delete[] ((const MR::CopyInheritedMembers::L *)_this);
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_AssignFromAnother(MR_CopyInheritedMembers_L *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_L *_other)
{
    return (MR_CopyInheritedMembers_L *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::L *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::L))
    ));
}

