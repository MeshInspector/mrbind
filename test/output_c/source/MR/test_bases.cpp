#define MR_C_BUILD_LIBRARY
#include "MR/test_bases.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_bases.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_Bases_A *MR_Bases_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)new MR::Bases::A(MR::Bases::A());
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(new MR::Bases::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_A *MR_Bases_A_OffsetPtr(const MR_Bases_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_A *)(((const MR::Bases::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_A_OffsetMutablePtr(MR_Bases_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(((MR::Bases::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_A_ConstructFromAnother(const MR_Bases_A *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)new MR::Bases::A(MR::Bases::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::A(*(MR::Bases::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_A_Destroy(const MR_Bases_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::A *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_A_DestroyArray(const MR_Bases_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::A *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_A_AssignFromAnother(MR_Bases_A *_this, const MR_Bases_A *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::A(*(MR::Bases::A *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)new MR::Bases::B(MR::Bases::B());
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)(new MR::Bases::B[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_B *MR_Bases_B_OffsetPtr(const MR_Bases_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_B *)(((const MR::Bases::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_B_OffsetMutablePtr(MR_Bases_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)(((MR::Bases::B *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_A *MR_Bases_B_UpcastTo_MR_Bases_A(const MR_Bases_B *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_B_MutableUpcastTo_MR_Bases_A(MR_Bases_B *object)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::B *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_B *MR_Bases_A_StaticDowncastTo_MR_Bases_B(const MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_B(MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_B_ConstructFromAnother(const MR_Bases_B *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)new MR::Bases::B(MR::Bases::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::B(*(MR::Bases::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_B_Destroy(const MR_Bases_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::B *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_B_DestroyArray(const MR_Bases_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::B *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_B_AssignFromAnother(MR_Bases_B *_this, const MR_Bases_B *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::B(*(MR::Bases::B *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_B2_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)new MR::Bases::B2(MR::Bases::B2());
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_B2_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)(new MR::Bases::B2[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_B2 *MR_Bases_B2_OffsetPtr(const MR_Bases_B2 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_B2 *)(((const MR::Bases::B2 *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_B2_OffsetMutablePtr(MR_Bases_B2 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)(((MR::Bases::B2 *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_A *MR_Bases_B2_UpcastTo_MR_Bases_A(const MR_Bases_B2 *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::B2 *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_B2_MutableUpcastTo_MR_Bases_A(MR_Bases_B2 *object)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::B2 *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_B2 *MR_Bases_A_StaticDowncastTo_MR_Bases_B2(const MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_B2 *)(static_cast<const MR::Bases::B2 *>(
        ((const MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_B2(MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)(static_cast<MR::Bases::B2 *>(
        ((MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_B *MR_Bases_B2_UpcastTo_MR_Bases_B(const MR_Bases_B2 *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_B *)(static_cast<const MR::Bases::B *>(
        ((const MR::Bases::B2 *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B *MR_Bases_B2_MutableUpcastTo_MR_Bases_B(MR_Bases_B2 *object)
{
    MRBINDC_TRY(
    return (MR_Bases_B *)(static_cast<MR::Bases::B *>(
        ((MR::Bases::B2 *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_B2 *MR_Bases_B_StaticDowncastTo_MR_Bases_B2(const MR_Bases_B *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_B2 *)(static_cast<const MR::Bases::B2 *>(
        ((const MR::Bases::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_B2(MR_Bases_B *object)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)(static_cast<MR::Bases::B2 *>(
        ((MR::Bases::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_B2_ConstructFromAnother(const MR_Bases_B2 *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)new MR::Bases::B2(MR::Bases::B2(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::B2(*(MR::Bases::B2 *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_B2_Destroy(const MR_Bases_B2 *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::B2 *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_B2_DestroyArray(const MR_Bases_B2 *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::B2 *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_B2 *MR_Bases_B2_AssignFromAnother(MR_Bases_B2 *_this, const MR_Bases_B2 *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_B2 *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::B2 *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::B2(*(MR::Bases::B2 *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_C *MR_Bases_C_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_C *)new MR::Bases::C(MR::Bases::C());
    ) // MRBINDC_TRY
}

MR_Bases_C *MR_Bases_C_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_C *)(new MR::Bases::C[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_C *MR_Bases_C_OffsetPtr(const MR_Bases_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_C *)(((const MR::Bases::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_C *MR_Bases_C_OffsetMutablePtr(MR_Bases_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_C *)(((MR::Bases::C *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_A *MR_Bases_C_UpcastTo_MR_Bases_A(const MR_Bases_C *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::C *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_C_MutableUpcastTo_MR_Bases_A(MR_Bases_C *object)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::C *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_C *MR_Bases_A_StaticDowncastTo_MR_Bases_C(const MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_C *)(static_cast<const MR::Bases::C *>(
        ((const MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_C *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_C(MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (MR_Bases_C *)(static_cast<MR::Bases::C *>(
        ((MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_C *MR_Bases_C_ConstructFromAnother(const MR_Bases_C *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_C *)new MR::Bases::C(MR::Bases::C(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::C(*(MR::Bases::C *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_C_Destroy(const MR_Bases_C *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::C *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_C_DestroyArray(const MR_Bases_C *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::C *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_C *MR_Bases_C_AssignFromAnother(MR_Bases_C *_this, const MR_Bases_C *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_C *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::C *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::C(*(MR::Bases::C *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_D *MR_Bases_D_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_D *)new MR::Bases::D(MR::Bases::D());
    ) // MRBINDC_TRY
}

MR_Bases_D *MR_Bases_D_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_D *)(new MR::Bases::D[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_D *MR_Bases_D_OffsetPtr(const MR_Bases_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_D *)(((const MR::Bases::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_D *MR_Bases_D_OffsetMutablePtr(MR_Bases_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_D *)(((MR::Bases::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_D *MR_Bases_D_ConstructFromAnother(const MR_Bases_D *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_D *)new MR::Bases::D(MR::Bases::D(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::D(*(MR::Bases::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_D_Destroy(const MR_Bases_D *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::D *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_D_DestroyArray(const MR_Bases_D *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::D *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_D *MR_Bases_D_AssignFromAnother(MR_Bases_D *_this, const MR_Bases_D *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_D *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::D *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::D(*(MR::Bases::D *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_D2 *MR_Bases_D2_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_D2 *)new MR::Bases::D2(MR::Bases::D2());
    ) // MRBINDC_TRY
}

MR_Bases_D2 *MR_Bases_D2_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_D2 *)(new MR::Bases::D2[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_D2 *MR_Bases_D2_OffsetPtr(const MR_Bases_D2 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_D2 *)(((const MR::Bases::D2 *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_D2 *MR_Bases_D2_OffsetMutablePtr(MR_Bases_D2 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_D2 *)(((MR::Bases::D2 *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_D2 *MR_Bases_D2_ConstructFromAnother(const MR_Bases_D2 *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_D2 *)new MR::Bases::D2(MR::Bases::D2(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::D2(*(MR::Bases::D2 *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_D2_Destroy(const MR_Bases_D2 *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::D2 *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_D2_DestroyArray(const MR_Bases_D2 *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::D2 *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_D2 *MR_Bases_D2_AssignFromAnother(MR_Bases_D2 *_this, const MR_Bases_D2 *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_D2 *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::D2 *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::D2(*(MR::Bases::D2 *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_D3 *MR_Bases_D3_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_D3 *)new MR::Bases::D3(MR::Bases::D3());
    ) // MRBINDC_TRY
}

MR_Bases_D3 *MR_Bases_D3_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_D3 *)(new MR::Bases::D3[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_D3 *MR_Bases_D3_OffsetPtr(const MR_Bases_D3 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_D3 *)(((const MR::Bases::D3 *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_D3 *MR_Bases_D3_OffsetMutablePtr(MR_Bases_D3 *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_D3 *)(((MR::Bases::D3 *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_D3 *MR_Bases_D3_ConstructFromAnother(const MR_Bases_D3 *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_D3 *)new MR::Bases::D3(MR::Bases::D3(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::D3(*(MR::Bases::D3 *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_D3_Destroy(const MR_Bases_D3 *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::D3 *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_D3_DestroyArray(const MR_Bases_D3 *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::D3 *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_D3 *MR_Bases_D3_AssignFromAnother(MR_Bases_D3 *_this, const MR_Bases_D3 *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_D3 *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::D3 *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::D3(*(MR::Bases::D3 *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_E_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)new MR::Bases::E(MR::Bases::E());
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_E_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)(new MR::Bases::E[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_E *MR_Bases_E_OffsetPtr(const MR_Bases_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_E *)(((const MR::Bases::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_E_OffsetMutablePtr(MR_Bases_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)(((MR::Bases::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_E_ConstructFromAnother(const MR_Bases_E *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)new MR::Bases::E(MR::Bases::E(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::E(*(MR::Bases::E *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_E_Destroy(const MR_Bases_E *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::E *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_E_DestroyArray(const MR_Bases_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::E *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_E_AssignFromAnother(MR_Bases_E *_this, const MR_Bases_E *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::E *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::E(*(MR::Bases::E *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_F_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)new MR::Bases::F(MR::Bases::F());
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_F_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)(new MR::Bases::F[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_F *MR_Bases_F_OffsetPtr(const MR_Bases_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_F *)(((const MR::Bases::F *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_F_OffsetMutablePtr(MR_Bases_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)(((MR::Bases::F *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_E *MR_Bases_F_UpcastTo_MR_Bases_E(const MR_Bases_F *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_F_MutableUpcastTo_MR_Bases_E(MR_Bases_F *object)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_F *MR_Bases_E_StaticDowncastTo_MR_Bases_F(const MR_Bases_E *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_E_MutableStaticDowncastTo_MR_Bases_F(MR_Bases_E *object)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_F_ConstructFromAnother(const MR_Bases_F *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)new MR::Bases::F(MR::Bases::F(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::F(*(MR::Bases::F *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_F_Destroy(const MR_Bases_F *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::F *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_F_DestroyArray(const MR_Bases_F *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::F *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_F_AssignFromAnother(MR_Bases_F *_this, const MR_Bases_F *_other)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::F *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::Bases::F(*(MR::Bases::F *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_G *MR_Bases_G_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_G *)new MR::Bases::G(MR::Bases::G());
    ) // MRBINDC_TRY
}

MR_Bases_G *MR_Bases_G_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_G *)(new MR::Bases::G[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_G *MR_Bases_G_OffsetPtr(const MR_Bases_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_G *)(((const MR::Bases::G *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_G *MR_Bases_G_OffsetMutablePtr(MR_Bases_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_G *)(((MR::Bases::G *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_E *MR_Bases_G_UpcastTo_MR_Bases_E(const MR_Bases_G *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_G_MutableUpcastTo_MR_Bases_E(MR_Bases_G *object)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::G *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_F *MR_Bases_G_UpcastTo_MR_Bases_F(const MR_Bases_G *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_G_MutableUpcastTo_MR_Bases_F(MR_Bases_G *object)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_G *MR_Bases_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_G *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Bases::G);
    return (MR_Bases_G *)new MR::Bases::G(MR::Bases::G(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::G) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::G) MRBINDC_CLASSARG_END(_other, MR::Bases::G))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_G_Destroy(const MR_Bases_G *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::G *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_G_DestroyArray(const MR_Bases_G *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::G *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_G *MR_Bases_G_AssignFromAnother(MR_Bases_G *_this, MR_C_PassBy _other_pass_by, MR_Bases_G *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Bases::G);
    return (MR_Bases_G *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::G) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::G), MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::G) MRBINDC_CLASSARG_END(_other, MR::Bases::G))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_H *MR_Bases_H_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_H *)new MR::Bases::H(MR::Bases::H());
    ) // MRBINDC_TRY
}

MR_Bases_H *MR_Bases_H_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_H *)(new MR::Bases::H[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_H *MR_Bases_H_OffsetPtr(const MR_Bases_H *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_H *)(((const MR::Bases::H *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_H *MR_Bases_H_OffsetMutablePtr(MR_Bases_H *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_H *)(((MR::Bases::H *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_E *MR_Bases_H_UpcastTo_MR_Bases_E(const MR_Bases_H *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::H *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_H_MutableUpcastTo_MR_Bases_E(MR_Bases_H *object)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::H *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_F *MR_Bases_H_UpcastTo_MR_Bases_F(const MR_Bases_H *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::H *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_H_MutableUpcastTo_MR_Bases_F(MR_Bases_H *object)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::H *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_A *MR_Bases_H_UpcastTo_MR_Bases_A(const MR_Bases_H *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::H *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_H_MutableUpcastTo_MR_Bases_A(MR_Bases_H *object)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::H *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_H *MR_Bases_A_StaticDowncastTo_MR_Bases_H(const MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_H *)(static_cast<const MR::Bases::H *>(
        ((const MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_H *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_H(MR_Bases_A *object)
{
    MRBINDC_TRY(
    return (MR_Bases_H *)(static_cast<MR::Bases::H *>(
        ((MR::Bases::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_H *MR_Bases_H_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_H *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Bases::H);
    return (MR_Bases_H *)new MR::Bases::H(MR::Bases::H(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::H) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::H) MRBINDC_CLASSARG_END(_other, MR::Bases::H))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_H_Destroy(const MR_Bases_H *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::H *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_H_DestroyArray(const MR_Bases_H *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::H *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_H *MR_Bases_H_AssignFromAnother(MR_Bases_H *_this, MR_C_PassBy _other_pass_by, MR_Bases_H *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Bases::H);
    return (MR_Bases_H *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::H *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::H) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::H), MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::H) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::H) MRBINDC_CLASSARG_END(_other, MR::Bases::H))
    ));
    ) // MRBINDC_TRY
}

MR_Bases_I *MR_Bases_I_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Bases_I *)new MR::Bases::I(MR::Bases::I());
    ) // MRBINDC_TRY
}

MR_Bases_I *MR_Bases_I_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Bases_I *)(new MR::Bases::I[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Bases_I *MR_Bases_I_OffsetPtr(const MR_Bases_I *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Bases_I *)(((const MR::Bases::I *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Bases_I *MR_Bases_I_OffsetMutablePtr(MR_Bases_I *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Bases_I *)(((MR::Bases::I *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_Bases_E *MR_Bases_I_UpcastTo_MR_Bases_E(const MR_Bases_I *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_E *)(static_cast<const MR::Bases::E *>(
        ((const MR::Bases::I *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_E *MR_Bases_I_MutableUpcastTo_MR_Bases_E(MR_Bases_I *object)
{
    MRBINDC_TRY(
    return (MR_Bases_E *)(static_cast<MR::Bases::E *>(
        ((MR::Bases::I *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_F *MR_Bases_I_UpcastTo_MR_Bases_F(const MR_Bases_I *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_F *)(static_cast<const MR::Bases::F *>(
        ((const MR::Bases::I *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_F *MR_Bases_I_MutableUpcastTo_MR_Bases_F(MR_Bases_I *object)
{
    MRBINDC_TRY(
    return (MR_Bases_F *)(static_cast<MR::Bases::F *>(
        ((MR::Bases::I *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_Bases_A *MR_Bases_I_UpcastTo_MR_Bases_A(const MR_Bases_I *object)
{
    MRBINDC_TRY(
    return (const MR_Bases_A *)(static_cast<const MR::Bases::A *>(
        ((const MR::Bases::I *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_A *MR_Bases_I_MutableUpcastTo_MR_Bases_A(MR_Bases_I *object)
{
    MRBINDC_TRY(
    return (MR_Bases_A *)(static_cast<MR::Bases::A *>(
        ((MR::Bases::I *)object)
    ));
    ) // MRBINDC_TRY
}

MR_Bases_I *MR_Bases_I_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_I *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Bases::I);
    return (MR_Bases_I *)new MR::Bases::I(MR::Bases::I(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::I) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::I) MRBINDC_CLASSARG_END(_other, MR::Bases::I))
    ));
    ) // MRBINDC_TRY
}

void MR_Bases_I_Destroy(const MR_Bases_I *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Bases::I *)_this);
    ) // MRBINDC_TRY
}

void MR_Bases_I_DestroyArray(const MR_Bases_I *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Bases::I *)_this);
    ) // MRBINDC_TRY
}

MR_Bases_I *MR_Bases_I_AssignFromAnother(MR_Bases_I *_this, MR_C_PassBy _other_pass_by, MR_Bases_I *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Bases::I);
    return (MR_Bases_I *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::Bases::I *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Bases::I) MRBINDC_CLASSARG_COPY(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_MOVE(_other, (MR::Bases::I), MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Bases::I) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Bases::I) MRBINDC_CLASSARG_END(_other, MR::Bases::I))
    ));
    ) // MRBINDC_TRY
}

