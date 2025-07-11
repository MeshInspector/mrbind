#include "MR/test_arrays_of_incomplete_types_2.h"

#include <input/MR/test_arrays_of_incomplete_types_2.h>

#include <stdexcept>


MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_DefaultConstruct(void)
{
    return (MR_IncompleteArrayElemType_A *)new MR::IncompleteArrayElemType::A(MR::IncompleteArrayElemType::A());
}

MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_IncompleteArrayElemType_A *)(new MR::IncompleteArrayElemType::A[num_elems]{});
}

const MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_OffsetPtr(const MR_IncompleteArrayElemType_A *ptr, ptrdiff_t i)
{
    return (const MR_IncompleteArrayElemType_A *)(((const MR::IncompleteArrayElemType::A *)ptr) + i);
}

MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_OffsetMutablePtr(MR_IncompleteArrayElemType_A *ptr, ptrdiff_t i)
{
    return (MR_IncompleteArrayElemType_A *)(((MR::IncompleteArrayElemType::A *)ptr) + i);
}

MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_ConstructFromAnother(const MR_IncompleteArrayElemType_A *_other)
{
    return (MR_IncompleteArrayElemType_A *)new MR::IncompleteArrayElemType::A(MR::IncompleteArrayElemType::A(
        (_other ? MR::IncompleteArrayElemType::A(*(MR::IncompleteArrayElemType::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_IncompleteArrayElemType_A_Destroy(const MR_IncompleteArrayElemType_A *_this)
{
    delete ((const MR::IncompleteArrayElemType::A *)_this);
}

void MR_IncompleteArrayElemType_A_DestroyArray(const MR_IncompleteArrayElemType_A *_this)
{
    delete[] ((const MR::IncompleteArrayElemType::A *)_this);
}

MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_AssignFromAnother(MR_IncompleteArrayElemType_A *_this, const MR_IncompleteArrayElemType_A *_other)
{
    return (MR_IncompleteArrayElemType_A *)&((_this ? *(MR::IncompleteArrayElemType::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::IncompleteArrayElemType::A(*(MR::IncompleteArrayElemType::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_IncompleteArrayElemType_bar(MR_IncompleteArrayElemType_A (*_1)[4])
{
    ::MR::IncompleteArrayElemType::bar(
        ((MR::IncompleteArrayElemType::A (*)[4])_1)
    );
}

