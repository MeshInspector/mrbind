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

const int *MR_CopyInheritedMembers_G_Get_StaticField(void)
{
    return &(MR::CopyInheritedMembers::G::StaticField);
}

void MR_CopyInheritedMembers_G_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::G::StaticField = value;
}

int *MR_CopyInheritedMembers_G_GetMutable_StaticField(void)
{
    return &(MR::CopyInheritedMembers::G::StaticField);
}

const int *MR_CopyInheritedMembers_G_Get_Field(const MR_CopyInheritedMembers_G *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::G *)(_this)).Field);
}

void MR_CopyInheritedMembers_G_Set_Field(MR_CopyInheritedMembers_G *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_G_GetMutable_Field(MR_CopyInheritedMembers_G *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).Field);
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

int MR_CopyInheritedMembers_G_ConvertTo_int(MR_CopyInheritedMembers_G *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)));
}

MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_AssignFromAnother(MR_CopyInheritedMembers_G *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other)
{
    return (MR_CopyInheritedMembers_G *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_COPY(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CopyInheritedMembers::G), MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CopyInheritedMembers::G) MRBINDC_CLASSARG_END(_other, MR::CopyInheritedMembers::G))
    ));
}

void MR_CopyInheritedMembers_G_Method(MR_CopyInheritedMembers_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::G *)(_this)).Method();
}

void MR_CopyInheritedMembers_G_StaticFunc(void)
{
    MR::CopyInheritedMembers::G::StaticFunc();
}

const int *MR_CopyInheritedMembers_J_Get_StaticField(void)
{
    return &(MR::CopyInheritedMembers::J::StaticField);
}

void MR_CopyInheritedMembers_J_Set_StaticField(int value)
{
    MR::CopyInheritedMembers::J::StaticField = value;
}

int *MR_CopyInheritedMembers_J_GetMutable_StaticField(void)
{
    return &(MR::CopyInheritedMembers::J::StaticField);
}

const int *MR_CopyInheritedMembers_J_Get_Field(const MR_CopyInheritedMembers_J *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CopyInheritedMembers::J *)(_this)).Field);
}

void MR_CopyInheritedMembers_J_Set_Field(MR_CopyInheritedMembers_J *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).Field = value;
}

int *MR_CopyInheritedMembers_J_GetMutable_Field(MR_CopyInheritedMembers_J *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).Field);
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

int MR_CopyInheritedMembers_J_ConvertTo_int(MR_CopyInheritedMembers_J *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)));
}

MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_AssignFromAnother(MR_CopyInheritedMembers_J *_this, const MR_CopyInheritedMembers_J *_other)
{
    return (MR_CopyInheritedMembers_J *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CopyInheritedMembers::J(*(MR::CopyInheritedMembers::J *)_other))
    ));
}

void MR_CopyInheritedMembers_J_Method(MR_CopyInheritedMembers_J *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CopyInheritedMembers::J *)(_this)).Method();
}

void MR_CopyInheritedMembers_J_StaticFunc(void)
{
    MR::CopyInheritedMembers::J::StaticFunc();
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

