#define MR_C_BUILD_LIBRARY
#include "MR/test_copy_inherited_members.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_copy_inherited_members.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


const int *MR_CopyInheritedMembers_A_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::A::StaticField);
}

void MR_CopyInheritedMembers_A_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::A::StaticField = value;
}

int *MR_CopyInheritedMembers_A_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::A::StaticField);
}

const int *MR_CopyInheritedMembers_A_Get_Field(const MR_CopyInheritedMembers_A *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::A *)(_this)).Field);
}

void MR_CopyInheritedMembers_A_Set_Field(MR_CopyInheritedMembers_A *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_A_GetMutable_Field(MR_CopyInheritedMembers_A *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).Field);
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)new MR::CopyInheritedMembers::A(MR::CopyInheritedMembers::A());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(new MR::CopyInheritedMembers::A[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_ConstructFrom(int Field)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)new MR::CopyInheritedMembers::A(MR::CopyInheritedMembers::A{
        Field
    });
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_OffsetPtr(const MR_CopyInheritedMembers_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(((const MR::CopyInheritedMembers::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_OffsetMutablePtr(MR_CopyInheritedMembers_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(((MR::CopyInheritedMembers::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_ConstructFromAnother(const MR_CopyInheritedMembers_A *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)new MR::CopyInheritedMembers::A(MR::CopyInheritedMembers::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::A(*(MR::CopyInheritedMembers::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_A_Destroy(const MR_CopyInheritedMembers_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::A *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_A_DestroyArray(const MR_CopyInheritedMembers_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::A *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_A_ConvertTo_int(MR_CopyInheritedMembers_A *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_AssignFromAnother(MR_CopyInheritedMembers_A *_this, const MR_CopyInheritedMembers_A *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::A(*(MR::CopyInheritedMembers::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_A_Method(MR_CopyInheritedMembers_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::A *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_A_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::A::StaticFunc();
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_B_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::B::StaticField);
}

void MR_CopyInheritedMembers_B_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::B::StaticField = value;
}

int *MR_CopyInheritedMembers_B_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::B::StaticField);
}

const int *MR_CopyInheritedMembers_B_Get_Field(const MR_CopyInheritedMembers_B *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::B *)(_this)).Field);
}

void MR_CopyInheritedMembers_B_Set_Field(MR_CopyInheritedMembers_B *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_B_GetMutable_Field(MR_CopyInheritedMembers_B *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).Field);
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)new MR::CopyInheritedMembers::B(MR::CopyInheritedMembers::B());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)(new MR::CopyInheritedMembers::B[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_ConstructFrom(int Field)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)new MR::CopyInheritedMembers::B(MR::CopyInheritedMembers::B{
        Field
    });
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_OffsetPtr(const MR_CopyInheritedMembers_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_B *)(((const MR::CopyInheritedMembers::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_OffsetMutablePtr(MR_CopyInheritedMembers_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)(((MR::CopyInheritedMembers::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_ConstructFromAnother(const MR_CopyInheritedMembers_B *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)new MR::CopyInheritedMembers::B(MR::CopyInheritedMembers::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::B(*(MR::CopyInheritedMembers::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_B_Destroy(const MR_CopyInheritedMembers_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::B *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_B_DestroyArray(const MR_CopyInheritedMembers_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::B *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_B_ConvertTo_int(MR_CopyInheritedMembers_B *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_AssignFromAnother(MR_CopyInheritedMembers_B *_this, const MR_CopyInheritedMembers_B *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::B(*(MR::CopyInheritedMembers::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_B_Method(MR_CopyInheritedMembers_B *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::B *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_B_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::B::StaticFunc();
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)new MR::CopyInheritedMembers::C(MR::CopyInheritedMembers::C());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)(new MR::CopyInheritedMembers::C[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_OffsetPtr(const MR_CopyInheritedMembers_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_C *)(((const MR::CopyInheritedMembers::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_OffsetMutablePtr(MR_CopyInheritedMembers_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)(((MR::CopyInheritedMembers::C *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_C *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::C *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_C *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::C *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_C(const MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_C *)(static_cast<const MR::CopyInheritedMembers::C *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_C(MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)(static_cast<MR::CopyInheritedMembers::C *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_C *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::C *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_C *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::C *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_C(const MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_C *)(static_cast<const MR::CopyInheritedMembers::C *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_C(MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)(static_cast<MR::CopyInheritedMembers::C *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_ConstructFromAnother(const MR_CopyInheritedMembers_C *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)new MR::CopyInheritedMembers::C(MR::CopyInheritedMembers::C(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::C(*(MR::CopyInheritedMembers::C *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_C_Destroy(const MR_CopyInheritedMembers_C *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::C *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_C_DestroyArray(const MR_CopyInheritedMembers_C *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::C *)_this);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_AssignFromAnother(MR_CopyInheritedMembers_C *_this, const MR_CopyInheritedMembers_C *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_C *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::C *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::C(*(MR::CopyInheritedMembers::C *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_D_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::D::StaticField);
}

void MR_CopyInheritedMembers_D_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::D::StaticField = value;
}

int *MR_CopyInheritedMembers_D_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::D::StaticField);
}

const int *MR_CopyInheritedMembers_D_Get_Field(const MR_CopyInheritedMembers_D *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::D *)(_this)).Field);
}

void MR_CopyInheritedMembers_D_Set_Field(MR_CopyInheritedMembers_D *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::D *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_D_GetMutable_Field(MR_CopyInheritedMembers_D *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::D *)(_this)).Field);
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)new MR::CopyInheritedMembers::D(MR::CopyInheritedMembers::D());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)(new MR::CopyInheritedMembers::D[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_OffsetPtr(const MR_CopyInheritedMembers_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_D *)(((const MR::CopyInheritedMembers::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_OffsetMutablePtr(MR_CopyInheritedMembers_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)(((MR::CopyInheritedMembers::D *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_D *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::D *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_D *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::D *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_D *)(static_cast<const MR::CopyInheritedMembers::D *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)(static_cast<MR::CopyInheritedMembers::D *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_ConstructFromAnother(const MR_CopyInheritedMembers_D *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)new MR::CopyInheritedMembers::D(MR::CopyInheritedMembers::D(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::D(*(MR::CopyInheritedMembers::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_D_Destroy(const MR_CopyInheritedMembers_D *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::D *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_D_DestroyArray(const MR_CopyInheritedMembers_D *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::D *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_D_ConvertTo_int(MR_CopyInheritedMembers_D *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::D *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_AssignFromAnother(MR_CopyInheritedMembers_D *_this, const MR_CopyInheritedMembers_D *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::D *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::D(*(MR::CopyInheritedMembers::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_D_Method(MR_CopyInheritedMembers_D *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::D *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_D_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::D::StaticFunc();
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)new MR::CopyInheritedMembers::E(MR::CopyInheritedMembers::E());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)(new MR::CopyInheritedMembers::E[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_OffsetPtr(const MR_CopyInheritedMembers_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_E *)(((const MR::CopyInheritedMembers::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_OffsetMutablePtr(MR_CopyInheritedMembers_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)(((MR::CopyInheritedMembers::E *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_E *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_E *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::E *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_E *)(static_cast<const MR::CopyInheritedMembers::E *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)(static_cast<MR::CopyInheritedMembers::E *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_E *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_E *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::E *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_E *)(static_cast<const MR::CopyInheritedMembers::E *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)(static_cast<MR::CopyInheritedMembers::E *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_E *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_D *)(static_cast<const MR::CopyInheritedMembers::D *>(
        ((const MR::CopyInheritedMembers::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_E *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)(static_cast<MR::CopyInheritedMembers::D *>(
        ((MR::CopyInheritedMembers::E *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_D_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_D *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_E *)(static_cast<const MR::CopyInheritedMembers::E *>(
        ((const MR::CopyInheritedMembers::D *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_D_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_D *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)(static_cast<MR::CopyInheritedMembers::E *>(
        ((MR::CopyInheritedMembers::D *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_ConstructFromAnother(const MR_CopyInheritedMembers_E *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)new MR::CopyInheritedMembers::E(MR::CopyInheritedMembers::E(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::E(*(MR::CopyInheritedMembers::E *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_E_Destroy(const MR_CopyInheritedMembers_E *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::E *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_E_DestroyArray(const MR_CopyInheritedMembers_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::E *)_this);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_AssignFromAnother(MR_CopyInheritedMembers_E *_this, const MR_CopyInheritedMembers_E *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_E *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::E *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::E(*(MR::CopyInheritedMembers::E *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)new MR::CopyInheritedMembers::F(MR::CopyInheritedMembers::F());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)(new MR::CopyInheritedMembers::F[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_OffsetPtr(const MR_CopyInheritedMembers_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_F *)(((const MR::CopyInheritedMembers::F *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_OffsetMutablePtr(MR_CopyInheritedMembers_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)(((MR::CopyInheritedMembers::F *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_F *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_B *)(static_cast<const MR::CopyInheritedMembers::B *>(
        ((const MR::CopyInheritedMembers::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_F *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_B *)(static_cast<MR::CopyInheritedMembers::B *>(
        ((MR::CopyInheritedMembers::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_F *)(static_cast<const MR::CopyInheritedMembers::F *>(
        ((const MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_B *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)(static_cast<MR::CopyInheritedMembers::F *>(
        ((MR::CopyInheritedMembers::B *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_F *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_D *)(static_cast<const MR::CopyInheritedMembers::D *>(
        ((const MR::CopyInheritedMembers::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_F *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_D *)(static_cast<MR::CopyInheritedMembers::D *>(
        ((MR::CopyInheritedMembers::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_D_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_D *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_F *)(static_cast<const MR::CopyInheritedMembers::F *>(
        ((const MR::CopyInheritedMembers::D *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_D_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_D *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)(static_cast<MR::CopyInheritedMembers::F *>(
        ((MR::CopyInheritedMembers::D *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_F *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_F *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_F *)(static_cast<const MR::CopyInheritedMembers::F *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)(static_cast<MR::CopyInheritedMembers::F *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_ConstructFromAnother(const MR_CopyInheritedMembers_F *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)new MR::CopyInheritedMembers::F(MR::CopyInheritedMembers::F(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::F(*(MR::CopyInheritedMembers::F *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_F_Destroy(const MR_CopyInheritedMembers_F *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::F *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_F_DestroyArray(const MR_CopyInheritedMembers_F *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::F *)_this);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_AssignFromAnother(MR_CopyInheritedMembers_F *_this, const MR_CopyInheritedMembers_F *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_F *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::F *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::F(*(MR::CopyInheritedMembers::F *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_G_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::G::StaticField);
}

void MR_CopyInheritedMembers_G_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::G::StaticField = value;
}

int *MR_CopyInheritedMembers_G_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::G::StaticField);
}

const int *MR_CopyInheritedMembers_G_Get_Field(const MR_CopyInheritedMembers_G *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::G *)(_this)).Field);
}

void MR_CopyInheritedMembers_G_Set_Field(MR_CopyInheritedMembers_G *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_G_GetMutable_Field(MR_CopyInheritedMembers_G *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).Field);
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_G *)new MR::CopyInheritedMembers::G(MR::CopyInheritedMembers::G());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_G *)(new MR::CopyInheritedMembers::G[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_OffsetPtr(const MR_CopyInheritedMembers_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_G *)(((const MR::CopyInheritedMembers::G *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_OffsetMutablePtr(MR_CopyInheritedMembers_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_G *)(((MR::CopyInheritedMembers::G *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_G *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_G *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::G);
    return (MR_CopyInheritedMembers_G *)new MR::CopyInheritedMembers::G(MR::CopyInheritedMembers::G(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::G))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_G_Destroy(const MR_CopyInheritedMembers_G *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::G *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_G_DestroyArray(const MR_CopyInheritedMembers_G *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::G *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_G_ConvertTo_int(MR_CopyInheritedMembers_G *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_AssignFromAnother(MR_CopyInheritedMembers_G *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::G);
    return (MR_CopyInheritedMembers_G *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::G))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_G_Method(MR_CopyInheritedMembers_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_G_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::G::StaticFunc();
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_H_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::H::StaticField);
}

void MR_CopyInheritedMembers_H_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::H::StaticField = value;
}

int *MR_CopyInheritedMembers_H_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::H::StaticField);
}

const int *MR_CopyInheritedMembers_H_Get_Field(const MR_CopyInheritedMembers_H *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::H *)(_this)).Field);
}

void MR_CopyInheritedMembers_H_Set_Field(MR_CopyInheritedMembers_H *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::H *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_H_GetMutable_Field(MR_CopyInheritedMembers_H *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::H *)(_this)).Field);
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_H *)new MR::CopyInheritedMembers::H(MR::CopyInheritedMembers::H());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_H *)(new MR::CopyInheritedMembers::H[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_OffsetPtr(const MR_CopyInheritedMembers_H *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_H *)(((const MR::CopyInheritedMembers::H *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_OffsetMutablePtr(MR_CopyInheritedMembers_H *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_H *)(((MR::CopyInheritedMembers::H *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_H *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::H *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_H *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::H *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_H *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_G *)(static_cast<const MR::CopyInheritedMembers::G *>(
        ((const MR::CopyInheritedMembers::H *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_H *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_G *)(static_cast<MR::CopyInheritedMembers::G *>(
        ((MR::CopyInheritedMembers::H *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_H(const MR_CopyInheritedMembers_G *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_H *)(static_cast<const MR::CopyInheritedMembers::H *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_H(MR_CopyInheritedMembers_G *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_H *)(static_cast<MR::CopyInheritedMembers::H *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_H *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::H);
    return (MR_CopyInheritedMembers_H *)new MR::CopyInheritedMembers::H(MR::CopyInheritedMembers::H(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::H))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_H_Destroy(const MR_CopyInheritedMembers_H *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::H *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_H_DestroyArray(const MR_CopyInheritedMembers_H *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::H *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_H_ConvertTo_int(MR_CopyInheritedMembers_H *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::H *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_AssignFromAnother(MR_CopyInheritedMembers_H *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_H *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::H);
    return (MR_CopyInheritedMembers_H *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::H *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::H), MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::H) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::H))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_H_Method(MR_CopyInheritedMembers_H *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::H *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_H_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::H::StaticFunc();
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_I_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::I::StaticField);
}

void MR_CopyInheritedMembers_I_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::I::StaticField = value;
}

int *MR_CopyInheritedMembers_I_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::I::StaticField);
}

const int *MR_CopyInheritedMembers_I_Get_Field(const MR_CopyInheritedMembers_I *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::I *)(_this)).Field);
}

void MR_CopyInheritedMembers_I_Set_Field(MR_CopyInheritedMembers_I *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::I *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_I_GetMutable_Field(MR_CopyInheritedMembers_I *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::I *)(_this)).Field);
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_I *)new MR::CopyInheritedMembers::I(MR::CopyInheritedMembers::I());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_I *)(new MR::CopyInheritedMembers::I[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_OffsetPtr(const MR_CopyInheritedMembers_I *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_I *)(((const MR::CopyInheritedMembers::I *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_OffsetMutablePtr(MR_CopyInheritedMembers_I *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_I *)(((MR::CopyInheritedMembers::I *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_I *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::I *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_I *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::I *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_I *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_G *)(static_cast<const MR::CopyInheritedMembers::G *>(
        ((const MR::CopyInheritedMembers::I *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_I *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_G *)(static_cast<MR::CopyInheritedMembers::G *>(
        ((MR::CopyInheritedMembers::I *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_I(const MR_CopyInheritedMembers_G *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_I *)(static_cast<const MR::CopyInheritedMembers::I *>(
        ((const MR::CopyInheritedMembers::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_I(MR_CopyInheritedMembers_G *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_I *)(static_cast<MR::CopyInheritedMembers::I *>(
        ((MR::CopyInheritedMembers::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_I *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::I);
    return (MR_CopyInheritedMembers_I *)new MR::CopyInheritedMembers::I(MR::CopyInheritedMembers::I(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::I))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_I_Destroy(const MR_CopyInheritedMembers_I *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::I *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_I_DestroyArray(const MR_CopyInheritedMembers_I *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::I *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_I_ConvertTo_int(MR_CopyInheritedMembers_I *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::I *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_AssignFromAnother(MR_CopyInheritedMembers_I *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_I *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::I);
    return (MR_CopyInheritedMembers_I *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::I *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::I), MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::I) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::I))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_I_Method(MR_CopyInheritedMembers_I *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::I *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_I_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::I::StaticFunc();
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_J_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::J::StaticField);
}

void MR_CopyInheritedMembers_J_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::J::StaticField = value;
}

int *MR_CopyInheritedMembers_J_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::J::StaticField);
}

const int *MR_CopyInheritedMembers_J_Get_Field(const MR_CopyInheritedMembers_J *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::J *)(_this)).Field);
}

void MR_CopyInheritedMembers_J_Set_Field(MR_CopyInheritedMembers_J *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_J_GetMutable_Field(MR_CopyInheritedMembers_J *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).Field);
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)new MR::CopyInheritedMembers::J(MR::CopyInheritedMembers::J());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)(new MR::CopyInheritedMembers::J[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_OffsetPtr(const MR_CopyInheritedMembers_J *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_J *)(((const MR::CopyInheritedMembers::J *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_OffsetMutablePtr(MR_CopyInheritedMembers_J *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)(((MR::CopyInheritedMembers::J *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_J *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::J *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_J *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::J *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_A *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_ConstructFromAnother(const MR_CopyInheritedMembers_J *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)new MR::CopyInheritedMembers::J(MR::CopyInheritedMembers::J(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::J(*(MR::CopyInheritedMembers::J *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_J_Destroy(const MR_CopyInheritedMembers_J *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::J *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_J_DestroyArray(const MR_CopyInheritedMembers_J *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::J *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_J_ConvertTo_int(MR_CopyInheritedMembers_J *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_AssignFromAnother(MR_CopyInheritedMembers_J *_this, const MR_CopyInheritedMembers_J *_other)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::J(*(MR::CopyInheritedMembers::J *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_J_Method(MR_CopyInheritedMembers_J *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_J_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::J::StaticFunc();
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_K *)new MR::CopyInheritedMembers::K(MR::CopyInheritedMembers::K());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_K *)(new MR::CopyInheritedMembers::K[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_OffsetPtr(const MR_CopyInheritedMembers_K *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_K *)(((const MR::CopyInheritedMembers::K *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_OffsetMutablePtr(MR_CopyInheritedMembers_K *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_K *)(((MR::CopyInheritedMembers::K *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_K *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::K);
    return (MR_CopyInheritedMembers_K *)new MR::CopyInheritedMembers::K(MR::CopyInheritedMembers::K(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::K))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_K_Destroy(const MR_CopyInheritedMembers_K *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::K *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_K_DestroyArray(const MR_CopyInheritedMembers_K *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::K *)_this);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_AssignFromAnother(MR_CopyInheritedMembers_K *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_K *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::K);
    return (MR_CopyInheritedMembers_K *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::K *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::K), MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::K) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::K))
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_L *)new MR::CopyInheritedMembers::L(MR::CopyInheritedMembers::L());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_L *)(new MR::CopyInheritedMembers::L[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_OffsetPtr(const MR_CopyInheritedMembers_L *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_L *)(((const MR::CopyInheritedMembers::L *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_OffsetMutablePtr(MR_CopyInheritedMembers_L *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_L *)(((MR::CopyInheritedMembers::L *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_L *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::L);
    return (MR_CopyInheritedMembers_L *)new MR::CopyInheritedMembers::L(MR::CopyInheritedMembers::L(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::L))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_L_Destroy(const MR_CopyInheritedMembers_L *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::L *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_L_DestroyArray(const MR_CopyInheritedMembers_L *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::L *)_this);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_AssignFromAnother(MR_CopyInheritedMembers_L *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_L *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::L);
    return (MR_CopyInheritedMembers_L *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::L *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::L), MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::L) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::L))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_M_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::M::StaticField);
}

void MR_CopyInheritedMembers_M_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::M::StaticField = value;
}

int *MR_CopyInheritedMembers_M_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::M::StaticField);
}

const int *MR_CopyInheritedMembers_M_Get_Field(const MR_CopyInheritedMembers_M *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::M *)(_this)).Field);
}

void MR_CopyInheritedMembers_M_Set_Field(MR_CopyInheritedMembers_M *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::M *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_M_GetMutable_Field(MR_CopyInheritedMembers_M *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::M *)(_this)).Field);
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_M_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_M *)new MR::CopyInheritedMembers::M(MR::CopyInheritedMembers::M());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_M_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_M *)(new MR::CopyInheritedMembers::M[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_M_OffsetPtr(const MR_CopyInheritedMembers_M *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_M *)(((const MR::CopyInheritedMembers::M *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_M_OffsetMutablePtr(MR_CopyInheritedMembers_M *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_M *)(((MR::CopyInheritedMembers::M *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_M_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_M *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::M);
    return (MR_CopyInheritedMembers_M *)new MR::CopyInheritedMembers::M(MR::CopyInheritedMembers::M(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::M), MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::M), MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::M))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_M_Destroy(const MR_CopyInheritedMembers_M *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::M *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_M_DestroyArray(const MR_CopyInheritedMembers_M *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::M *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_M_ConvertTo_int(MR_CopyInheritedMembers_M *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::M *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_M_AssignFromAnother(MR_CopyInheritedMembers_M *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_M *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::M);
    return (MR_CopyInheritedMembers_M *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::M *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::M), MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::M), MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::M) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::M))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_M_Method(MR_CopyInheritedMembers_M *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::M *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_M_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::M::StaticFunc();
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_N_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::N::StaticField);
}

void MR_CopyInheritedMembers_N_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::N::StaticField = value;
}

int *MR_CopyInheritedMembers_N_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::N::StaticField);
}

const int *MR_CopyInheritedMembers_N_Get_Field(const MR_CopyInheritedMembers_N *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::N *)(_this)).Field);
}

void MR_CopyInheritedMembers_N_Set_Field(MR_CopyInheritedMembers_N *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::N *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_N_GetMutable_Field(MR_CopyInheritedMembers_N *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::N *)(_this)).Field);
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_N_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_N *)new MR::CopyInheritedMembers::N(MR::CopyInheritedMembers::N());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_N_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_N *)(new MR::CopyInheritedMembers::N[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_N_OffsetPtr(const MR_CopyInheritedMembers_N *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_N *)(((const MR::CopyInheritedMembers::N *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_N_OffsetMutablePtr(MR_CopyInheritedMembers_N *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_N *)(((MR::CopyInheritedMembers::N *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M(const MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_M *)(static_cast<const MR::CopyInheritedMembers::M *>(
        ((const MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_M(MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_M *)(static_cast<MR::CopyInheritedMembers::M *>(
        ((MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_M_StaticDowncastTo_MR_CopyInheritedMembers_N(const MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_N *)(static_cast<const MR::CopyInheritedMembers::N *>(
        ((const MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_M_MutableStaticDowncastTo_MR_CopyInheritedMembers_N(MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_N *)(static_cast<MR::CopyInheritedMembers::N *>(
        ((MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_N_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_N *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::N);
    return (MR_CopyInheritedMembers_N *)new MR::CopyInheritedMembers::N(MR::CopyInheritedMembers::N(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::N), MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::N), MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::N))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_N_Destroy(const MR_CopyInheritedMembers_N *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::N *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_N_DestroyArray(const MR_CopyInheritedMembers_N *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::N *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_N_ConvertTo_int(MR_CopyInheritedMembers_N *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::N *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_N_AssignFromAnother(MR_CopyInheritedMembers_N *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_N *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::N);
    return (MR_CopyInheritedMembers_N *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::N *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::N), MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::N), MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::N) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::N))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_N_Method(MR_CopyInheritedMembers_N *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::N *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_N_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::N::StaticFunc();
    ) // MRBINDC_TRY
}

const int *MR_CopyInheritedMembers_O_Get_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::O::StaticField);
}

void MR_CopyInheritedMembers_O_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::O::StaticField = value;
}

int *MR_CopyInheritedMembers_O_GetMutable_StaticField(void)
{
    return std::addressof(MR::CopyInheritedMembers::O::StaticField);
}

const int *MR_CopyInheritedMembers_O_Get_Field(const MR_CopyInheritedMembers_O *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::O *)(_this)).Field);
}

void MR_CopyInheritedMembers_O_Set_Field(MR_CopyInheritedMembers_O *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::O *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_O_GetMutable_Field(MR_CopyInheritedMembers_O *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::O *)(_this)).Field);
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_O_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_O *)new MR::CopyInheritedMembers::O(MR::CopyInheritedMembers::O());
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_O_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_O *)(new MR::CopyInheritedMembers::O[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_O_OffsetPtr(const MR_CopyInheritedMembers_O *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_O *)(((const MR::CopyInheritedMembers::O *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_O_OffsetMutablePtr(MR_CopyInheritedMembers_O *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_O *)(((MR::CopyInheritedMembers::O *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_A *)(static_cast<const MR::CopyInheritedMembers::A *>(
        ((const MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_A *)(static_cast<MR::CopyInheritedMembers::A *>(
        ((MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_J *)(static_cast<const MR::CopyInheritedMembers::J *>(
        ((const MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_J *)(static_cast<MR::CopyInheritedMembers::J *>(
        ((MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M(const MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_M *)(static_cast<const MR::CopyInheritedMembers::M *>(
        ((const MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_M *MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_M(MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_M *)(static_cast<MR::CopyInheritedMembers::M *>(
        ((MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_M_StaticDowncastTo_MR_CopyInheritedMembers_O(const MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_O *)(static_cast<const MR::CopyInheritedMembers::O *>(
        ((const MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_M_MutableStaticDowncastTo_MR_CopyInheritedMembers_O(MR_CopyInheritedMembers_M *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_O *)(static_cast<MR::CopyInheritedMembers::O *>(
        ((MR::CopyInheritedMembers::M *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N(const MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_N *)(static_cast<const MR::CopyInheritedMembers::N *>(
        ((const MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_N *MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_N(MR_CopyInheritedMembers_O *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_N *)(static_cast<MR::CopyInheritedMembers::N *>(
        ((MR::CopyInheritedMembers::O *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_N_StaticDowncastTo_MR_CopyInheritedMembers_O(const MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (const MR_CopyInheritedMembers_O *)(static_cast<const MR::CopyInheritedMembers::O *>(
        ((const MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_N_MutableStaticDowncastTo_MR_CopyInheritedMembers_O(MR_CopyInheritedMembers_N *object)
{
    MRBINDC_TRY(
    return (MR_CopyInheritedMembers_O *)(static_cast<MR::CopyInheritedMembers::O *>(
        ((MR::CopyInheritedMembers::N *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_O_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_O *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::O);
    return (MR_CopyInheritedMembers_O *)new MR::CopyInheritedMembers::O(MR::CopyInheritedMembers::O(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::O), MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::O), MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::O))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_O_Destroy(const MR_CopyInheritedMembers_O *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CopyInheritedMembers::O *)_this);
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_O_DestroyArray(const MR_CopyInheritedMembers_O *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CopyInheritedMembers::O *)_this);
    ) // MRBINDC_TRY
}

int MR_CopyInheritedMembers_O_ConvertTo_int(MR_CopyInheritedMembers_O *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::O *)(_this)));
    ) // MRBINDC_TRY
}

MR_CopyInheritedMembers_O *MR_CopyInheritedMembers_O_AssignFromAnother(MR_CopyInheritedMembers_O *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_O *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CopyInheritedMembers::O);
    return (MR_CopyInheritedMembers_O *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::O *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::O), MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::O), MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::O) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::O))
    ));
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_O_Method(MR_CopyInheritedMembers_O *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::O *)(_this)).Method();
    ) // MRBINDC_TRY
}

void MR_CopyInheritedMembers_O_StaticFunc(void)
{
    MRBINDC_TRY(
    MR::CopyInheritedMembers::O::StaticFunc();
    ) // MRBINDC_TRY
}

