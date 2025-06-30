#include "MR/test_iostream.h"

#include <input/MR/test_iostream.h>

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
        (_other ? MR::IOStream::A(*(MR::IOStream::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_IOStream_A *MR_IOStream_A_AssignFromAnother(MR_IOStream_A *_this, const MR_IOStream_A *_other)
{
    return (MR_IOStream_A *)&((_this ? *(MR::IOStream::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::IOStream::A(*(MR::IOStream::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_IOStream_A_Destroy(MR_IOStream_A *_this)
{
    delete ((MR::IOStream::A *)_this);
}

void MR_IOStream_A_DestroyArray(MR_IOStream_A *_this)
{
    delete[] ((MR::IOStream::A *)_this);
}

void MR_IOStream_operator_lshift(MR_C_std_ostream *_1, const MR_IOStream_A *_2)
{
    operator<<(
        (_1 ? *(std::ostream *)(_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? *(const MR::IOStream::A *)(_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

void MR_IOStream_operator_rshift(MR_C_std_istream *_1, MR_IOStream_A *_2)
{
    operator>>(
        (_1 ? *(std::istream *)(_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? *(MR::IOStream::A *)(_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

