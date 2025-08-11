#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_bases.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_bases.h>

#include <cstddef>
#include <stdexcept>


MR_Bases_A *MR_Bases_A_DefaultConstruct(void)
{
    return (MR_Bases_A *)new MR::Bases::A(MR::Bases::A());
}

MR_Bases_A *MR_Bases_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_A *)(new MR::Bases::A[num_elems]{});
}

const MR_Bases_A *MR_Bases_A_OffsetPtr(const MR_Bases_A *ptr, ptrdiff_t i)
{
    return (const MR_Bases_A *)(((const MR::Bases::A *)ptr) + i);
}

MR_Bases_A *MR_Bases_A_OffsetMutablePtr(MR_Bases_A *ptr, ptrdiff_t i)
{
    return (MR_Bases_A *)(((MR::Bases::A *)ptr) + i);
}

const MR_Bases_B *MR_Bases_A_StaticDowncastTo_MR_Bases_B(const MR_Bases_A *object)
{
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::A *)object)
    ));
}

MR_Bases_B *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_B(MR_Bases_A *object)
{
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::A *)object)
    ));
}

const MR_Bases_B2 *MR_Bases_A_StaticDowncastTo_MR_Bases_B2(const MR_Bases_A *object)
{
    return (const MR_Bases_B2 *)(static_cast<const MR::Bases::B2 *>(
        ((const MR::Bases::A *)object)
    ));
}

MR_Bases_B2 *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_B2(MR_Bases_A *object)
{
    return (MR_Bases_B2 *)(static_cast<MR::Bases::B2 *>(
        ((MR::Bases::A *)object)
    ));
}

const MR_Bases_C *MR_Bases_A_StaticDowncastTo_MR_Bases_C(const MR_Bases_A *object)
{
    return (const MR_Bases_C *)(static_cast<const MR::Bases::C *>(
        ((const MR::Bases::A *)object)
    ));
}

MR_Bases_C *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_C(MR_Bases_A *object)
{
    return (MR_Bases_C *)(static_cast<MR::Bases::C *>(
        ((MR::Bases::A *)object)
    ));
}

const MR_Bases_H *MR_Bases_A_StaticDowncastTo_MR_Bases_H(const MR_Bases_A *object)
{
    return (const MR_Bases_H *)(static_cast<const MR::Bases::H *>(
        ((const MR::Bases::A *)object)
    ));
}

MR_Bases_H *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_H(MR_Bases_A *object)
{
    return (MR_Bases_H *)(static_cast<MR::Bases::H *>(
        ((MR::Bases::A *)object)
    ));
}

MR_Bases_A *MR_Bases_A_ConstructFromAnother(const MR_Bases_A *_other)
{
    return (MR_Bases_A *)new MR::Bases::A(MR::Bases::A(
        (_other ? MR::Bases::A(*(MR::Bases::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_A_Destroy(const MR_Bases_A *_this)
{
    delete ((const MR::Bases::A *)_this);
}

void MR_Bases_A_DestroyArray(const MR_Bases_A *_this)
{
    delete[] ((const MR::Bases::A *)_this);
}

MR_Bases_A *MR_Bases_A_AssignFromAnother(MR_Bases_A *_this, const MR_Bases_A *_other)
{
    return (MR_Bases_A *)&((_this ? *(MR::Bases::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::A(*(MR::Bases::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_B *MR_Bases_B_DefaultConstruct(void)
{
    return (MR_Bases_B *)new MR::Bases::B(MR::Bases::B());
}

MR_Bases_B *MR_Bases_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_B *)(new MR::Bases::B[num_elems]{});
}

const MR_Bases_B *MR_Bases_B_OffsetPtr(const MR_Bases_B *ptr, ptrdiff_t i)
{
    return (const MR_Bases_B *)(((const MR::Bases::B *)ptr) + i);
}

MR_Bases_B *MR_Bases_B_OffsetMutablePtr(MR_Bases_B *ptr, ptrdiff_t i)
{
    return (MR_Bases_B *)(((MR::Bases::B *)ptr) + i);
}

const MR_Bases_A *MR_Bases_B_UpcastTo_MR_Bases_A(const MR_Bases_B *object)
{
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::B *)object)
    ));
}

MR_Bases_A *MR_Bases_B_MutableUpcastTo_MR_Bases_A(MR_Bases_B *object)
{
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::B *)object)
    ));
}

const MR_Bases_B2 *MR_Bases_B_StaticDowncastTo_MR_Bases_B2(const MR_Bases_B *object)
{
    return (const MR_Bases_B2 *)(static_cast<const MR::Bases::B2 *>(
        ((const MR::Bases::B *)object)
    ));
}

MR_Bases_B2 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_B2(MR_Bases_B *object)
{
    return (MR_Bases_B2 *)(static_cast<MR::Bases::B2 *>(
        ((MR::Bases::B *)object)
    ));
}

const MR_Bases_D *MR_Bases_B_StaticDowncastTo_MR_Bases_D(const MR_Bases_B *object)
{
    return (const MR_Bases_D *)(static_cast<const MR::Bases::D *>(
        ((const MR::Bases::B *)object)
    ));
}

MR_Bases_D *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_D(MR_Bases_B *object)
{
    return (MR_Bases_D *)(static_cast<MR::Bases::D *>(
        ((MR::Bases::B *)object)
    ));
}

const MR_Bases_D2 *MR_Bases_B_StaticDowncastTo_MR_Bases_D2(const MR_Bases_B *object)
{
    return (const MR_Bases_D2 *)(static_cast<const MR::Bases::D2 *>(
        ((const MR::Bases::B *)object)
    ));
}

MR_Bases_D2 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_D2(MR_Bases_B *object)
{
    return (MR_Bases_D2 *)(static_cast<MR::Bases::D2 *>(
        ((MR::Bases::B *)object)
    ));
}

const MR_Bases_D3 *MR_Bases_B_StaticDowncastTo_MR_Bases_D3(const MR_Bases_B *object)
{
    return (const MR_Bases_D3 *)(static_cast<const MR::Bases::D3 *>(
        ((const MR::Bases::B *)object)
    ));
}

MR_Bases_D3 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_D3(MR_Bases_B *object)
{
    return (MR_Bases_D3 *)(static_cast<MR::Bases::D3 *>(
        ((MR::Bases::B *)object)
    ));
}

MR_Bases_B *MR_Bases_B_ConstructFromAnother(const MR_Bases_B *_other)
{
    return (MR_Bases_B *)new MR::Bases::B(MR::Bases::B(
        (_other ? MR::Bases::B(*(MR::Bases::B *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_B_Destroy(const MR_Bases_B *_this)
{
    delete ((const MR::Bases::B *)_this);
}

void MR_Bases_B_DestroyArray(const MR_Bases_B *_this)
{
    delete[] ((const MR::Bases::B *)_this);
}

MR_Bases_B *MR_Bases_B_AssignFromAnother(MR_Bases_B *_this, const MR_Bases_B *_other)
{
    return (MR_Bases_B *)&((_this ? *(MR::Bases::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::B(*(MR::Bases::B *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_B2 *MR_Bases_B2_DefaultConstruct(void)
{
    return (MR_Bases_B2 *)new MR::Bases::B2(MR::Bases::B2());
}

MR_Bases_B2 *MR_Bases_B2_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_B2 *)(new MR::Bases::B2[num_elems]{});
}

const MR_Bases_B2 *MR_Bases_B2_OffsetPtr(const MR_Bases_B2 *ptr, ptrdiff_t i)
{
    return (const MR_Bases_B2 *)(((const MR::Bases::B2 *)ptr) + i);
}

MR_Bases_B2 *MR_Bases_B2_OffsetMutablePtr(MR_Bases_B2 *ptr, ptrdiff_t i)
{
    return (MR_Bases_B2 *)(((MR::Bases::B2 *)ptr) + i);
}

const MR_Bases_A *MR_Bases_B2_UpcastTo_MR_Bases_A(const MR_Bases_B2 *object)
{
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::B2 *)object)
    ));
}

MR_Bases_A *MR_Bases_B2_MutableUpcastTo_MR_Bases_A(MR_Bases_B2 *object)
{
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::B2 *)object)
    ));
}

const MR_Bases_B *MR_Bases_B2_UpcastTo_MR_Bases_B(const MR_Bases_B2 *object)
{
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::B2 *)object)
    ));
}

MR_Bases_B *MR_Bases_B2_MutableUpcastTo_MR_Bases_B(MR_Bases_B2 *object)
{
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::B2 *)object)
    ));
}

MR_Bases_B2 *MR_Bases_B2_ConstructFromAnother(const MR_Bases_B2 *_other)
{
    return (MR_Bases_B2 *)new MR::Bases::B2(MR::Bases::B2(
        (_other ? MR::Bases::B2(*(MR::Bases::B2 *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_B2_Destroy(const MR_Bases_B2 *_this)
{
    delete ((const MR::Bases::B2 *)_this);
}

void MR_Bases_B2_DestroyArray(const MR_Bases_B2 *_this)
{
    delete[] ((const MR::Bases::B2 *)_this);
}

MR_Bases_B2 *MR_Bases_B2_AssignFromAnother(MR_Bases_B2 *_this, const MR_Bases_B2 *_other)
{
    return (MR_Bases_B2 *)&((_this ? *(MR::Bases::B2 *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::B2(*(MR::Bases::B2 *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_C *MR_Bases_C_DefaultConstruct(void)
{
    return (MR_Bases_C *)new MR::Bases::C(MR::Bases::C());
}

MR_Bases_C *MR_Bases_C_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_C *)(new MR::Bases::C[num_elems]{});
}

const MR_Bases_C *MR_Bases_C_OffsetPtr(const MR_Bases_C *ptr, ptrdiff_t i)
{
    return (const MR_Bases_C *)(((const MR::Bases::C *)ptr) + i);
}

MR_Bases_C *MR_Bases_C_OffsetMutablePtr(MR_Bases_C *ptr, ptrdiff_t i)
{
    return (MR_Bases_C *)(((MR::Bases::C *)ptr) + i);
}

const MR_Bases_A *MR_Bases_C_UpcastTo_MR_Bases_A(const MR_Bases_C *object)
{
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::C *)object)
    ));
}

MR_Bases_A *MR_Bases_C_MutableUpcastTo_MR_Bases_A(MR_Bases_C *object)
{
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::C *)object)
    ));
}

const MR_Bases_D *MR_Bases_C_StaticDowncastTo_MR_Bases_D(const MR_Bases_C *object)
{
    return (const MR_Bases_D *)(static_cast<const MR::Bases::D *>(
        ((const MR::Bases::C *)object)
    ));
}

MR_Bases_D *MR_Bases_C_MutableStaticDowncastTo_MR_Bases_D(MR_Bases_C *object)
{
    return (MR_Bases_D *)(static_cast<MR::Bases::D *>(
        ((MR::Bases::C *)object)
    ));
}

MR_Bases_C *MR_Bases_C_ConstructFromAnother(const MR_Bases_C *_other)
{
    return (MR_Bases_C *)new MR::Bases::C(MR::Bases::C(
        (_other ? MR::Bases::C(*(MR::Bases::C *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_C_Destroy(const MR_Bases_C *_this)
{
    delete ((const MR::Bases::C *)_this);
}

void MR_Bases_C_DestroyArray(const MR_Bases_C *_this)
{
    delete[] ((const MR::Bases::C *)_this);
}

MR_Bases_C *MR_Bases_C_AssignFromAnother(MR_Bases_C *_this, const MR_Bases_C *_other)
{
    return (MR_Bases_C *)&((_this ? *(MR::Bases::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::C(*(MR::Bases::C *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_D *MR_Bases_D_DefaultConstruct(void)
{
    return (MR_Bases_D *)new MR::Bases::D(MR::Bases::D());
}

MR_Bases_D *MR_Bases_D_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_D *)(new MR::Bases::D[num_elems]{});
}

const MR_Bases_D *MR_Bases_D_OffsetPtr(const MR_Bases_D *ptr, ptrdiff_t i)
{
    return (const MR_Bases_D *)(((const MR::Bases::D *)ptr) + i);
}

MR_Bases_D *MR_Bases_D_OffsetMutablePtr(MR_Bases_D *ptr, ptrdiff_t i)
{
    return (MR_Bases_D *)(((MR::Bases::D *)ptr) + i);
}

const MR_Bases_B *MR_Bases_D_UpcastTo_MR_Bases_B(const MR_Bases_D *object)
{
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::D *)object)
    ));
}

MR_Bases_B *MR_Bases_D_MutableUpcastTo_MR_Bases_B(MR_Bases_D *object)
{
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::D *)object)
    ));
}

const MR_Bases_C *MR_Bases_D_UpcastTo_MR_Bases_C(const MR_Bases_D *object)
{
    return (const MR_Bases_C *)(static_cast<const MR::Bases::C *>(
        ((const MR::Bases::D *)object)
    ));
}

MR_Bases_C *MR_Bases_D_MutableUpcastTo_MR_Bases_C(MR_Bases_D *object)
{
    return (MR_Bases_C *)(static_cast<MR::Bases::C *>(
        ((MR::Bases::D *)object)
    ));
}

MR_Bases_D *MR_Bases_D_ConstructFromAnother(const MR_Bases_D *_other)
{
    return (MR_Bases_D *)new MR::Bases::D(MR::Bases::D(
        (_other ? MR::Bases::D(*(MR::Bases::D *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_D_Destroy(const MR_Bases_D *_this)
{
    delete ((const MR::Bases::D *)_this);
}

void MR_Bases_D_DestroyArray(const MR_Bases_D *_this)
{
    delete[] ((const MR::Bases::D *)_this);
}

MR_Bases_D *MR_Bases_D_AssignFromAnother(MR_Bases_D *_this, const MR_Bases_D *_other)
{
    return (MR_Bases_D *)&((_this ? *(MR::Bases::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::D(*(MR::Bases::D *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_D2 *MR_Bases_D2_DefaultConstruct(void)
{
    return (MR_Bases_D2 *)new MR::Bases::D2(MR::Bases::D2());
}

MR_Bases_D2 *MR_Bases_D2_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_D2 *)(new MR::Bases::D2[num_elems]{});
}

const MR_Bases_D2 *MR_Bases_D2_OffsetPtr(const MR_Bases_D2 *ptr, ptrdiff_t i)
{
    return (const MR_Bases_D2 *)(((const MR::Bases::D2 *)ptr) + i);
}

MR_Bases_D2 *MR_Bases_D2_OffsetMutablePtr(MR_Bases_D2 *ptr, ptrdiff_t i)
{
    return (MR_Bases_D2 *)(((MR::Bases::D2 *)ptr) + i);
}

const MR_Bases_B *MR_Bases_D2_UpcastTo_MR_Bases_B(const MR_Bases_D2 *object)
{
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::D2 *)object)
    ));
}

MR_Bases_B *MR_Bases_D2_MutableUpcastTo_MR_Bases_B(MR_Bases_D2 *object)
{
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::D2 *)object)
    ));
}

MR_Bases_D2 *MR_Bases_D2_ConstructFromAnother(const MR_Bases_D2 *_other)
{
    return (MR_Bases_D2 *)new MR::Bases::D2(MR::Bases::D2(
        (_other ? MR::Bases::D2(*(MR::Bases::D2 *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_D2_Destroy(const MR_Bases_D2 *_this)
{
    delete ((const MR::Bases::D2 *)_this);
}

void MR_Bases_D2_DestroyArray(const MR_Bases_D2 *_this)
{
    delete[] ((const MR::Bases::D2 *)_this);
}

MR_Bases_D2 *MR_Bases_D2_AssignFromAnother(MR_Bases_D2 *_this, const MR_Bases_D2 *_other)
{
    return (MR_Bases_D2 *)&((_this ? *(MR::Bases::D2 *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::D2(*(MR::Bases::D2 *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_D3 *MR_Bases_D3_DefaultConstruct(void)
{
    return (MR_Bases_D3 *)new MR::Bases::D3(MR::Bases::D3());
}

MR_Bases_D3 *MR_Bases_D3_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_D3 *)(new MR::Bases::D3[num_elems]{});
}

const MR_Bases_D3 *MR_Bases_D3_OffsetPtr(const MR_Bases_D3 *ptr, ptrdiff_t i)
{
    return (const MR_Bases_D3 *)(((const MR::Bases::D3 *)ptr) + i);
}

MR_Bases_D3 *MR_Bases_D3_OffsetMutablePtr(MR_Bases_D3 *ptr, ptrdiff_t i)
{
    return (MR_Bases_D3 *)(((MR::Bases::D3 *)ptr) + i);
}

const MR_Bases_B *MR_Bases_D3_UpcastTo_MR_Bases_B(const MR_Bases_D3 *object)
{
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::D3 *)object)
    ));
}

MR_Bases_B *MR_Bases_D3_MutableUpcastTo_MR_Bases_B(MR_Bases_D3 *object)
{
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::D3 *)object)
    ));
}

MR_Bases_D3 *MR_Bases_D3_ConstructFromAnother(const MR_Bases_D3 *_other)
{
    return (MR_Bases_D3 *)new MR::Bases::D3(MR::Bases::D3(
        (_other ? MR::Bases::D3(*(MR::Bases::D3 *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_D3_Destroy(const MR_Bases_D3 *_this)
{
    delete ((const MR::Bases::D3 *)_this);
}

void MR_Bases_D3_DestroyArray(const MR_Bases_D3 *_this)
{
    delete[] ((const MR::Bases::D3 *)_this);
}

MR_Bases_D3 *MR_Bases_D3_AssignFromAnother(MR_Bases_D3 *_this, const MR_Bases_D3 *_other)
{
    return (MR_Bases_D3 *)&((_this ? *(MR::Bases::D3 *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::D3(*(MR::Bases::D3 *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_E *MR_Bases_E_DefaultConstruct(void)
{
    return (MR_Bases_E *)new MR::Bases::E(MR::Bases::E());
}

MR_Bases_E *MR_Bases_E_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_E *)(new MR::Bases::E[num_elems]{});
}

const MR_Bases_E *MR_Bases_E_OffsetPtr(const MR_Bases_E *ptr, ptrdiff_t i)
{
    return (const MR_Bases_E *)(((const MR::Bases::E *)ptr) + i);
}

MR_Bases_E *MR_Bases_E_OffsetMutablePtr(MR_Bases_E *ptr, ptrdiff_t i)
{
    return (MR_Bases_E *)(((MR::Bases::E *)ptr) + i);
}

const MR_Bases_F *MR_Bases_E_StaticDowncastTo_MR_Bases_F(const MR_Bases_E *object)
{
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::E *)object)
    ));
}

MR_Bases_F *MR_Bases_E_MutableStaticDowncastTo_MR_Bases_F(MR_Bases_E *object)
{
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::E *)object)
    ));
}

MR_Bases_E *MR_Bases_E_ConstructFromAnother(const MR_Bases_E *_other)
{
    return (MR_Bases_E *)new MR::Bases::E(MR::Bases::E(
        (_other ? MR::Bases::E(*(MR::Bases::E *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_E_Destroy(const MR_Bases_E *_this)
{
    delete ((const MR::Bases::E *)_this);
}

void MR_Bases_E_DestroyArray(const MR_Bases_E *_this)
{
    delete[] ((const MR::Bases::E *)_this);
}

MR_Bases_E *MR_Bases_E_AssignFromAnother(MR_Bases_E *_this, const MR_Bases_E *_other)
{
    return (MR_Bases_E *)&((_this ? *(MR::Bases::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::E(*(MR::Bases::E *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_F *MR_Bases_F_DefaultConstruct(void)
{
    return (MR_Bases_F *)new MR::Bases::F(MR::Bases::F());
}

MR_Bases_F *MR_Bases_F_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_F *)(new MR::Bases::F[num_elems]{});
}

const MR_Bases_F *MR_Bases_F_OffsetPtr(const MR_Bases_F *ptr, ptrdiff_t i)
{
    return (const MR_Bases_F *)(((const MR::Bases::F *)ptr) + i);
}

MR_Bases_F *MR_Bases_F_OffsetMutablePtr(MR_Bases_F *ptr, ptrdiff_t i)
{
    return (MR_Bases_F *)(((MR::Bases::F *)ptr) + i);
}

const MR_Bases_E *MR_Bases_F_UpcastTo_MR_Bases_E(const MR_Bases_F *object)
{
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::F *)object)
    ));
}

MR_Bases_E *MR_Bases_F_MutableUpcastTo_MR_Bases_E(MR_Bases_F *object)
{
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::F *)object)
    ));
}

MR_Bases_F *MR_Bases_F_ConstructFromAnother(const MR_Bases_F *_other)
{
    return (MR_Bases_F *)new MR::Bases::F(MR::Bases::F(
        (_other ? MR::Bases::F(*(MR::Bases::F *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Bases_F_Destroy(const MR_Bases_F *_this)
{
    delete ((const MR::Bases::F *)_this);
}

void MR_Bases_F_DestroyArray(const MR_Bases_F *_this)
{
    delete[] ((const MR::Bases::F *)_this);
}

MR_Bases_F *MR_Bases_F_AssignFromAnother(MR_Bases_F *_this, const MR_Bases_F *_other)
{
    return (MR_Bases_F *)&((_this ? *(MR::Bases::F *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Bases::F(*(MR::Bases::F *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Bases_G *MR_Bases_G_DefaultConstruct(void)
{
    return (MR_Bases_G *)new MR::Bases::G(MR::Bases::G());
}

MR_Bases_G *MR_Bases_G_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_G *)(new MR::Bases::G[num_elems]{});
}

const MR_Bases_G *MR_Bases_G_OffsetPtr(const MR_Bases_G *ptr, ptrdiff_t i)
{
    return (const MR_Bases_G *)(((const MR::Bases::G *)ptr) + i);
}

MR_Bases_G *MR_Bases_G_OffsetMutablePtr(MR_Bases_G *ptr, ptrdiff_t i)
{
    return (MR_Bases_G *)(((MR::Bases::G *)ptr) + i);
}

const MR_Bases_E *MR_Bases_G_UpcastTo_MR_Bases_E(const MR_Bases_G *object)
{
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::G *)object)
    ));
}

MR_Bases_E *MR_Bases_G_MutableUpcastTo_MR_Bases_E(MR_Bases_G *object)
{
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::G *)object)
    ));
}

const MR_Bases_F *MR_Bases_G_UpcastTo_MR_Bases_F(const MR_Bases_G *object)
{
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::G *)object)
    ));
}

MR_Bases_F *MR_Bases_G_MutableUpcastTo_MR_Bases_F(MR_Bases_G *object)
{
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::G *)object)
    ));
}

MR_Bases_G *MR_Bases_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_G *_other)
{
    return (MR_Bases_G *)new MR::Bases::G(MR::Bases::G(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::G) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::G) MRBINDC_CLASSARG_END(_other, MR::Bases::G))
    ));
}

void MR_Bases_G_Destroy(const MR_Bases_G *_this)
{
    delete ((const MR::Bases::G *)_this);
}

void MR_Bases_G_DestroyArray(const MR_Bases_G *_this)
{
    delete[] ((const MR::Bases::G *)_this);
}

MR_Bases_G *MR_Bases_G_AssignFromAnother(MR_Bases_G *_this, MR_C_PassBy _other_pass_by, MR_Bases_G *_other)
{
    return (MR_Bases_G *)&((_this ? *(MR::Bases::G *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::G) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::G) MRBINDC_CLASSARG_END(_other, MR::Bases::G))
    ));
}

MR_Bases_H *MR_Bases_H_DefaultConstruct(void)
{
    return (MR_Bases_H *)new MR::Bases::H(MR::Bases::H());
}

MR_Bases_H *MR_Bases_H_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_H *)(new MR::Bases::H[num_elems]{});
}

const MR_Bases_H *MR_Bases_H_OffsetPtr(const MR_Bases_H *ptr, ptrdiff_t i)
{
    return (const MR_Bases_H *)(((const MR::Bases::H *)ptr) + i);
}

MR_Bases_H *MR_Bases_H_OffsetMutablePtr(MR_Bases_H *ptr, ptrdiff_t i)
{
    return (MR_Bases_H *)(((MR::Bases::H *)ptr) + i);
}

const MR_Bases_A *MR_Bases_H_UpcastTo_MR_Bases_A(const MR_Bases_H *object)
{
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::H *)object)
    ));
}

MR_Bases_A *MR_Bases_H_MutableUpcastTo_MR_Bases_A(MR_Bases_H *object)
{
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::H *)object)
    ));
}

const MR_Bases_E *MR_Bases_H_UpcastTo_MR_Bases_E(const MR_Bases_H *object)
{
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::H *)object)
    ));
}

MR_Bases_E *MR_Bases_H_MutableUpcastTo_MR_Bases_E(MR_Bases_H *object)
{
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::H *)object)
    ));
}

const MR_Bases_F *MR_Bases_H_UpcastTo_MR_Bases_F(const MR_Bases_H *object)
{
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::H *)object)
    ));
}

MR_Bases_F *MR_Bases_H_MutableUpcastTo_MR_Bases_F(MR_Bases_H *object)
{
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::H *)object)
    ));
}

MR_Bases_H *MR_Bases_H_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_H *_other)
{
    return (MR_Bases_H *)new MR::Bases::H(MR::Bases::H(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::H) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::H) MRBINDC_CLASSARG_END(_other, MR::Bases::H))
    ));
}

void MR_Bases_H_Destroy(const MR_Bases_H *_this)
{
    delete ((const MR::Bases::H *)_this);
}

void MR_Bases_H_DestroyArray(const MR_Bases_H *_this)
{
    delete[] ((const MR::Bases::H *)_this);
}

MR_Bases_H *MR_Bases_H_AssignFromAnother(MR_Bases_H *_this, MR_C_PassBy _other_pass_by, MR_Bases_H *_other)
{
    return (MR_Bases_H *)&((_this ? *(MR::Bases::H *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::H) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::H) MRBINDC_CLASSARG_END(_other, MR::Bases::H))
    ));
}

MR_Bases_I *MR_Bases_I_DefaultConstruct(void)
{
    return (MR_Bases_I *)new MR::Bases::I(MR::Bases::I());
}

MR_Bases_I *MR_Bases_I_DefaultConstructArray(size_t num_elems)
{
    return (MR_Bases_I *)(new MR::Bases::I[num_elems]{});
}

const MR_Bases_I *MR_Bases_I_OffsetPtr(const MR_Bases_I *ptr, ptrdiff_t i)
{
    return (const MR_Bases_I *)(((const MR::Bases::I *)ptr) + i);
}

MR_Bases_I *MR_Bases_I_OffsetMutablePtr(MR_Bases_I *ptr, ptrdiff_t i)
{
    return (MR_Bases_I *)(((MR::Bases::I *)ptr) + i);
}

const MR_Bases_A *MR_Bases_I_UpcastTo_MR_Bases_A(const MR_Bases_I *object)
{
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::I *)object)
    ));
}

MR_Bases_A *MR_Bases_I_MutableUpcastTo_MR_Bases_A(MR_Bases_I *object)
{
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::I *)object)
    ));
}

const MR_Bases_E *MR_Bases_I_UpcastTo_MR_Bases_E(const MR_Bases_I *object)
{
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::I *)object)
    ));
}

MR_Bases_E *MR_Bases_I_MutableUpcastTo_MR_Bases_E(MR_Bases_I *object)
{
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::I *)object)
    ));
}

const MR_Bases_F *MR_Bases_I_UpcastTo_MR_Bases_F(const MR_Bases_I *object)
{
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::I *)object)
    ));
}

MR_Bases_F *MR_Bases_I_MutableUpcastTo_MR_Bases_F(MR_Bases_I *object)
{
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::I *)object)
    ));
}

MR_Bases_I *MR_Bases_I_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_I *_other)
{
    return (MR_Bases_I *)new MR::Bases::I(MR::Bases::I(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::I) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::I) MRBINDC_CLASSARG_END(_other, MR::Bases::I))
    ));
}

void MR_Bases_I_Destroy(const MR_Bases_I *_this)
{
    delete ((const MR::Bases::I *)_this);
}

void MR_Bases_I_DestroyArray(const MR_Bases_I *_this)
{
    delete[] ((const MR::Bases::I *)_this);
}

MR_Bases_I *MR_Bases_I_AssignFromAnother(MR_Bases_I *_this, MR_C_PassBy _other_pass_by, MR_Bases_I *_other)
{
    return (MR_Bases_I *)&((_this ? *(MR::Bases::I *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::I) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::I) MRBINDC_CLASSARG_END(_other, MR::Bases::I))
    ));
}

