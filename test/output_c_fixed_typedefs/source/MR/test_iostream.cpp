#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_iostream.h"

#include <input/MR/test_iostream.h>

#include <cstddef>
#include <iostream>
#include <stdexcept>


MR_IOStream_A *MR_IOStream_A_DefaultConstruct(void)
{
    return (MR_IOStream_A *)new MR::IOStream::A(MR::IOStream::A());
}

MR_IOStream_A *MR_IOStream_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_IOStream_A *)(new MR::IOStream::A[num_elems]{});
}

const MR_IOStream_A *MR_IOStream_A_OffsetPtr(const MR_IOStream_A *ptr, ptrdiff_t i)
{
    return (const MR_IOStream_A *)(((const MR::IOStream::A *)ptr) + i);
}

MR_IOStream_A *MR_IOStream_A_OffsetMutablePtr(MR_IOStream_A *ptr, ptrdiff_t i)
{
    return (MR_IOStream_A *)(((MR::IOStream::A *)ptr) + i);
}

MR_IOStream_A *MR_IOStream_A_ConstructFromAnother(const MR_IOStream_A *_other)
{
    return (MR_IOStream_A *)new MR::IOStream::A(MR::IOStream::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::IOStream::A(*(MR::IOStream::A *)_other))
    ));
}

void MR_IOStream_A_Destroy(const MR_IOStream_A *_this)
{
    delete ((const MR::IOStream::A *)_this);
}

void MR_IOStream_A_DestroyArray(const MR_IOStream_A *_this)
{
    delete[] ((const MR::IOStream::A *)_this);
}

MR_IOStream_A *MR_IOStream_A_AssignFromAnother(MR_IOStream_A *_this, const MR_IOStream_A *_other)
{
    return (MR_IOStream_A *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::IOStream::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::IOStream::A(*(MR::IOStream::A *)_other))
    ));
}

void MR_C_print_MR_IOStream_A(MR_C_std_ostream *_1, const MR_IOStream_A *_2)
{
    operator<<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::ostream *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::IOStream::A *)(_2))
    );
}

void MR_C_rshift_std_istream_MR_IOStream_A(MR_C_std_istream *_1, MR_IOStream_A *_2)
{
    operator>>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::istream *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::IOStream::A *)(_2))
    );
}

