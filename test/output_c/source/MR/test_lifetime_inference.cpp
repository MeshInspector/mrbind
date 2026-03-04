#define MR_C_BUILD_LIBRARY
#include "MR/test_lifetime_inference.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_lifetime_inference.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


const int *MR_LifetimeInference_A_Get_x(const MR_LifetimeInference_A *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::LifetimeInference::A *)(_this)).x);
}

void MR_LifetimeInference_A_Set_x(MR_LifetimeInference_A *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).x = value;
}

int *MR_LifetimeInference_A_GetMutable_x(MR_LifetimeInference_A *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).x);
}

MR_LifetimeInference_A *MR_LifetimeInference_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_A *)new MR::LifetimeInference::A(MR::LifetimeInference::A());
    ) // MRBINDC_TRY
}

MR_LifetimeInference_A *MR_LifetimeInference_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_A *)(new MR::LifetimeInference::A[num_elems]{});
    ) // MRBINDC_TRY
}

MR_LifetimeInference_A *MR_LifetimeInference_A_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_A *)new MR::LifetimeInference::A(MR::LifetimeInference::A{
        x
    });
    ) // MRBINDC_TRY
}

const MR_LifetimeInference_A *MR_LifetimeInference_A_OffsetPtr(const MR_LifetimeInference_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_LifetimeInference_A *)(((const MR::LifetimeInference::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_A *MR_LifetimeInference_A_OffsetMutablePtr(MR_LifetimeInference_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_A *)(((MR::LifetimeInference::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_A *MR_LifetimeInference_A_ConstructFromAnother(const MR_LifetimeInference_A *_other)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_A *)new MR::LifetimeInference::A(MR::LifetimeInference::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::A(*(MR::LifetimeInference::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_LifetimeInference_A_Destroy(const MR_LifetimeInference_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::LifetimeInference::A *)_this);
    ) // MRBINDC_TRY
}

void MR_LifetimeInference_A_DestroyArray(const MR_LifetimeInference_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::LifetimeInference::A *)_this);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_A *MR_LifetimeInference_A_AssignFromAnother(MR_LifetimeInference_A *_this, const MR_LifetimeInference_A *_other)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::A(*(MR::LifetimeInference::A *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_LifetimeInference_A_begin(MR_LifetimeInference_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).begin();
    ) // MRBINDC_TRY
}

int *MR_LifetimeInference_A_end(MR_LifetimeInference_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).end();
    ) // MRBINDC_TRY
}

int *MR_LifetimeInference_begin_MR_LifetimeInference_A(MR_LifetimeInference_A *a)
{
    MRBINDC_TRY(
    return ::MR::LifetimeInference::begin(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::LifetimeInference::A *)(a))
    );
    ) // MRBINDC_TRY
}

int *MR_LifetimeInference_end_MR_LifetimeInference_A(MR_LifetimeInference_A *a)
{
    MRBINDC_TRY(
    return ::MR::LifetimeInference::end(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::LifetimeInference::A *)(a))
    );
    ) // MRBINDC_TRY
}

const int *MR_LifetimeInference_B_Get_x(const MR_LifetimeInference_B *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::LifetimeInference::B *)(_this)).x);
}

void MR_LifetimeInference_B_Set_x(MR_LifetimeInference_B *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::B *)(_this)).x = value;
}

int *MR_LifetimeInference_B_GetMutable_x(MR_LifetimeInference_B *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::B *)(_this)).x);
}

MR_LifetimeInference_B *MR_LifetimeInference_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_B *)new MR::LifetimeInference::B(MR::LifetimeInference::B());
    ) // MRBINDC_TRY
}

MR_LifetimeInference_B *MR_LifetimeInference_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_B *)(new MR::LifetimeInference::B[num_elems]{});
    ) // MRBINDC_TRY
}

MR_LifetimeInference_B *MR_LifetimeInference_B_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_B *)new MR::LifetimeInference::B(MR::LifetimeInference::B{
        x
    });
    ) // MRBINDC_TRY
}

const MR_LifetimeInference_B *MR_LifetimeInference_B_OffsetPtr(const MR_LifetimeInference_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_LifetimeInference_B *)(((const MR::LifetimeInference::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_B *MR_LifetimeInference_B_OffsetMutablePtr(MR_LifetimeInference_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_B *)(((MR::LifetimeInference::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_B *MR_LifetimeInference_B_ConstructFromAnother(const MR_LifetimeInference_B *_other)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_B *)new MR::LifetimeInference::B(MR::LifetimeInference::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::B(*(MR::LifetimeInference::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_LifetimeInference_B_Destroy(const MR_LifetimeInference_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::LifetimeInference::B *)_this);
    ) // MRBINDC_TRY
}

void MR_LifetimeInference_B_DestroyArray(const MR_LifetimeInference_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::LifetimeInference::B *)_this);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_B *MR_LifetimeInference_B_AssignFromAnother(MR_LifetimeInference_B *_this, const MR_LifetimeInference_B *_other)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::B(*(MR::LifetimeInference::B *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_LifetimeInference_begin_MR_LifetimeInference_B(MR_LifetimeInference_B *b)
{
    MRBINDC_TRY(
    return begin(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(MR::LifetimeInference::B *)(b))
    );
    ) // MRBINDC_TRY
}

int *MR_LifetimeInference_end_MR_LifetimeInference_B(MR_LifetimeInference_B *b)
{
    MRBINDC_TRY(
    return end(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(MR::LifetimeInference::B *)(b))
    );
    ) // MRBINDC_TRY
}

MR_LifetimeInference_C *MR_LifetimeInference_C_ConstructFromAnother(const MR_LifetimeInference_C *_other)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_C *)new MR::LifetimeInference::C(MR::LifetimeInference::C(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::C(*(MR::LifetimeInference::C *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_LifetimeInference_C *MR_LifetimeInference_C_OffsetPtr(const MR_LifetimeInference_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_LifetimeInference_C *)(((const MR::LifetimeInference::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_C *MR_LifetimeInference_C_OffsetMutablePtr(MR_LifetimeInference_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_C *)(((MR::LifetimeInference::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_C *MR_LifetimeInference_C_Construct(MR_LifetimeInference_A *_1, int *_2, int _3)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_C *)new MR::LifetimeInference::C(MR::LifetimeInference::C(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::LifetimeInference::A *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2),
        _3
    ));
    ) // MRBINDC_TRY
}

void MR_LifetimeInference_C_Destroy(const MR_LifetimeInference_C *_this)
{
    MRBINDC_TRY(
    delete ((const MR::LifetimeInference::C *)_this);
    ) // MRBINDC_TRY
}

void MR_LifetimeInference_C_DestroyArray(const MR_LifetimeInference_C *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::LifetimeInference::C *)_this);
    ) // MRBINDC_TRY
}

MR_LifetimeInference_C *MR_LifetimeInference_C_AssignFromAnother(MR_LifetimeInference_C *_this, const MR_LifetimeInference_C *_other)
{
    MRBINDC_TRY(
    return (MR_LifetimeInference_C *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::C *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::C(*(MR::LifetimeInference::C *)_other))
    ));
    ) // MRBINDC_TRY
}

