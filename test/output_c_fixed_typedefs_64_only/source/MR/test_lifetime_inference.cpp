#define MR_C_BUILD_LIBRARY
#include "MR/test_lifetime_inference.h"

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
    return (MR_LifetimeInference_A *)new MR::LifetimeInference::A(MR::LifetimeInference::A());
}

MR_LifetimeInference_A *MR_LifetimeInference_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_LifetimeInference_A *)(new MR::LifetimeInference::A[num_elems]{});
}

MR_LifetimeInference_A *MR_LifetimeInference_A_ConstructFrom(int x)
{
    return (MR_LifetimeInference_A *)new MR::LifetimeInference::A(MR::LifetimeInference::A{
        x
    });
}

const MR_LifetimeInference_A *MR_LifetimeInference_A_OffsetPtr(const MR_LifetimeInference_A *ptr, ptrdiff_t i)
{
    return (const MR_LifetimeInference_A *)(((const MR::LifetimeInference::A *)ptr) + i);
}

MR_LifetimeInference_A *MR_LifetimeInference_A_OffsetMutablePtr(MR_LifetimeInference_A *ptr, ptrdiff_t i)
{
    return (MR_LifetimeInference_A *)(((MR::LifetimeInference::A *)ptr) + i);
}

MR_LifetimeInference_A *MR_LifetimeInference_A_ConstructFromAnother(const MR_LifetimeInference_A *_other)
{
    return (MR_LifetimeInference_A *)new MR::LifetimeInference::A(MR::LifetimeInference::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::A(*(MR::LifetimeInference::A *)_other))
    ));
}

void MR_LifetimeInference_A_Destroy(const MR_LifetimeInference_A *_this)
{
    delete ((const MR::LifetimeInference::A *)_this);
}

void MR_LifetimeInference_A_DestroyArray(const MR_LifetimeInference_A *_this)
{
    delete[] ((const MR::LifetimeInference::A *)_this);
}

MR_LifetimeInference_A *MR_LifetimeInference_A_AssignFromAnother(MR_LifetimeInference_A *_this, const MR_LifetimeInference_A *_other)
{
    return (MR_LifetimeInference_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::A(*(MR::LifetimeInference::A *)_other))
    ));
}

int *MR_LifetimeInference_A_begin(MR_LifetimeInference_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).begin();
}

int *MR_LifetimeInference_A_end(MR_LifetimeInference_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::A *)(_this)).end();
}

int *MR_LifetimeInference_begin_MR_LifetimeInference_A(MR_LifetimeInference_A *a)
{
    return ::MR::LifetimeInference::begin(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::LifetimeInference::A *)(a))
    );
}

int *MR_LifetimeInference_end_MR_LifetimeInference_A(MR_LifetimeInference_A *a)
{
    return ::MR::LifetimeInference::end(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::LifetimeInference::A *)(a))
    );
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
    return (MR_LifetimeInference_B *)new MR::LifetimeInference::B(MR::LifetimeInference::B());
}

MR_LifetimeInference_B *MR_LifetimeInference_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_LifetimeInference_B *)(new MR::LifetimeInference::B[num_elems]{});
}

MR_LifetimeInference_B *MR_LifetimeInference_B_ConstructFrom(int x)
{
    return (MR_LifetimeInference_B *)new MR::LifetimeInference::B(MR::LifetimeInference::B{
        x
    });
}

const MR_LifetimeInference_B *MR_LifetimeInference_B_OffsetPtr(const MR_LifetimeInference_B *ptr, ptrdiff_t i)
{
    return (const MR_LifetimeInference_B *)(((const MR::LifetimeInference::B *)ptr) + i);
}

MR_LifetimeInference_B *MR_LifetimeInference_B_OffsetMutablePtr(MR_LifetimeInference_B *ptr, ptrdiff_t i)
{
    return (MR_LifetimeInference_B *)(((MR::LifetimeInference::B *)ptr) + i);
}

MR_LifetimeInference_B *MR_LifetimeInference_B_ConstructFromAnother(const MR_LifetimeInference_B *_other)
{
    return (MR_LifetimeInference_B *)new MR::LifetimeInference::B(MR::LifetimeInference::B(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::B(*(MR::LifetimeInference::B *)_other))
    ));
}

void MR_LifetimeInference_B_Destroy(const MR_LifetimeInference_B *_this)
{
    delete ((const MR::LifetimeInference::B *)_this);
}

void MR_LifetimeInference_B_DestroyArray(const MR_LifetimeInference_B *_this)
{
    delete[] ((const MR::LifetimeInference::B *)_this);
}

MR_LifetimeInference_B *MR_LifetimeInference_B_AssignFromAnother(MR_LifetimeInference_B *_this, const MR_LifetimeInference_B *_other)
{
    return (MR_LifetimeInference_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::B *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::B(*(MR::LifetimeInference::B *)_other))
    ));
}

int *MR_LifetimeInference_begin_MR_LifetimeInference_B(MR_LifetimeInference_B *b)
{
    return begin(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(MR::LifetimeInference::B *)(b))
    );
}

int *MR_LifetimeInference_end_MR_LifetimeInference_B(MR_LifetimeInference_B *b)
{
    return end(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(MR::LifetimeInference::B *)(b))
    );
}

MR_LifetimeInference_C *MR_LifetimeInference_C_ConstructFromAnother(const MR_LifetimeInference_C *_other)
{
    return (MR_LifetimeInference_C *)new MR::LifetimeInference::C(MR::LifetimeInference::C(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::C(*(MR::LifetimeInference::C *)_other))
    ));
}

const MR_LifetimeInference_C *MR_LifetimeInference_C_OffsetPtr(const MR_LifetimeInference_C *ptr, ptrdiff_t i)
{
    return (const MR_LifetimeInference_C *)(((const MR::LifetimeInference::C *)ptr) + i);
}

MR_LifetimeInference_C *MR_LifetimeInference_C_OffsetMutablePtr(MR_LifetimeInference_C *ptr, ptrdiff_t i)
{
    return (MR_LifetimeInference_C *)(((MR::LifetimeInference::C *)ptr) + i);
}

MR_LifetimeInference_C *MR_LifetimeInference_C_Construct(MR_LifetimeInference_A *_1, int *_2, int _3)
{
    return (MR_LifetimeInference_C *)new MR::LifetimeInference::C(MR::LifetimeInference::C(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::LifetimeInference::A *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2),
        _3
    ));
}

void MR_LifetimeInference_C_Destroy(const MR_LifetimeInference_C *_this)
{
    delete ((const MR::LifetimeInference::C *)_this);
}

void MR_LifetimeInference_C_DestroyArray(const MR_LifetimeInference_C *_this)
{
    delete[] ((const MR::LifetimeInference::C *)_this);
}

MR_LifetimeInference_C *MR_LifetimeInference_C_AssignFromAnother(MR_LifetimeInference_C *_this, const MR_LifetimeInference_C *_other)
{
    return (MR_LifetimeInference_C *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::LifetimeInference::C *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::LifetimeInference::C(*(MR::LifetimeInference::C *)_other))
    ));
}

