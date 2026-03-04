#define MR_C_BUILD_LIBRARY
#include "MR/test_iostream.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_iostream.h>

#include <cstddef>
#include <iostream>
#include <memory>
#include <stdexcept>


MR_IOStream_A *MR_IOStream_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_IOStream_A *)new MR::IOStream::A(MR::IOStream::A());
    ) // MRBINDC_TRY
}

MR_IOStream_A *MR_IOStream_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_IOStream_A *)(new MR::IOStream::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_IOStream_A *MR_IOStream_A_OffsetPtr(const MR_IOStream_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_IOStream_A *)(((const MR::IOStream::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_IOStream_A *MR_IOStream_A_OffsetMutablePtr(MR_IOStream_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_IOStream_A *)(((MR::IOStream::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_IOStream_A *MR_IOStream_A_ConstructFromAnother(const MR_IOStream_A *_other)
{
    MRBINDC_TRY(
    return (MR_IOStream_A *)new MR::IOStream::A(MR::IOStream::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::IOStream::A(*(MR::IOStream::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_IOStream_A_Destroy(const MR_IOStream_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::IOStream::A *)_this);
    ) // MRBINDC_TRY
}

void MR_IOStream_A_DestroyArray(const MR_IOStream_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::IOStream::A *)_this);
    ) // MRBINDC_TRY
}

MR_IOStream_A *MR_IOStream_A_AssignFromAnother(MR_IOStream_A *_this, const MR_IOStream_A *_other)
{
    MRBINDC_TRY(
    return (MR_IOStream_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::IOStream::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::IOStream::A(*(MR::IOStream::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_print_MR_IOStream_A(MR_C_std_ostream *_1, const MR_IOStream_A *_2)
{
    MRBINDC_TRY(
    operator<<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::ostream *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::IOStream::A *)(_2))
    );
    ) // MRBINDC_TRY
}

void MR_C_input_MR_IOStream_A(MR_C_std_istream *_1, MR_IOStream_A *_2)
{
    MRBINDC_TRY(
    operator>>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::istream *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::IOStream::A *)(_2))
    );
    ) // MRBINDC_TRY
}

