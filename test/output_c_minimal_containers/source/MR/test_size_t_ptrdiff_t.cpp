#define MR_C_BUILD_LIBRARY
#include "MR/test_size_t_ptrdiff_t.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_size_t_ptrdiff_t.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


unsigned long MR_TestSizeT_foo_unsigned_long(unsigned long _1)
{
    MRBINDC_TRY(
    return ::MR::TestSizeT::foo(
        _1
    );
    ) // MRBINDC_TRY
}

unsigned long **MR_TestSizeT_foo_unsigned_long_ptr(unsigned long **_1)
{
    MRBINDC_TRY(
    return std::addressof(::MR::TestSizeT::foo(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *_1)
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_unsigned_long *MR_TestSizeT_foo_std_vector_unsigned_long(MR_C_PassBy _1_pass_by, MR_C_std_vector_unsigned_long *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::vector<unsigned long>);
    return (MR_C_std_vector_unsigned_long *)new std::vector<unsigned long>(::MR::TestSizeT::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<unsigned long>) MRBINDC_CLASSARG_COPY(_1, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<unsigned long>) MRBINDC_CLASSARG_END(_1, std::vector<unsigned long>))
    ));
    ) // MRBINDC_TRY
}

long MR_TestSizeT_foo_long(long _1)
{
    MRBINDC_TRY(
    return ::MR::TestSizeT::foo(
        _1
    );
    ) // MRBINDC_TRY
}

long **MR_TestSizeT_foo_long_ptr(long **_1)
{
    MRBINDC_TRY(
    return std::addressof(::MR::TestSizeT::foo(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *_1)
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_long *MR_TestSizeT_foo_std_vector_long(MR_C_PassBy _1_pass_by, MR_C_std_vector_long *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::vector<long>);
    return (MR_C_std_vector_long *)new std::vector<long>(::MR::TestSizeT::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<long>) MRBINDC_CLASSARG_COPY(_1, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(_1, std::vector<long>))
    ));
    ) // MRBINDC_TRY
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_TestSizeT_A_unsigned_long *)new MR::TestSizeT::A<unsigned long>(MR::TestSizeT::A<unsigned long>());
    ) // MRBINDC_TRY
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_TestSizeT_A_unsigned_long *)(new MR::TestSizeT::A<unsigned long>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_OffsetPtr(const MR_TestSizeT_A_unsigned_long *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_TestSizeT_A_unsigned_long *)(((const MR::TestSizeT::A<unsigned long> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_OffsetMutablePtr(MR_TestSizeT_A_unsigned_long *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_TestSizeT_A_unsigned_long *)(((MR::TestSizeT::A<unsigned long> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_ConstructFromAnother(const MR_TestSizeT_A_unsigned_long *_other)
{
    MRBINDC_TRY(
    return (MR_TestSizeT_A_unsigned_long *)new MR::TestSizeT::A<unsigned long>(MR::TestSizeT::A<unsigned long>(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TestSizeT::A<unsigned long>(*(MR::TestSizeT::A<unsigned long> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_TestSizeT_A_unsigned_long_Destroy(const MR_TestSizeT_A_unsigned_long *_this)
{
    MRBINDC_TRY(
    delete ((const MR::TestSizeT::A<unsigned long> *)_this);
    ) // MRBINDC_TRY
}

void MR_TestSizeT_A_unsigned_long_DestroyArray(const MR_TestSizeT_A_unsigned_long *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::TestSizeT::A<unsigned long> *)_this);
    ) // MRBINDC_TRY
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_AssignFromAnother(MR_TestSizeT_A_unsigned_long *_this, const MR_TestSizeT_A_unsigned_long *_other)
{
    MRBINDC_TRY(
    return (MR_TestSizeT_A_unsigned_long *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TestSizeT::A<unsigned long> *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TestSizeT::A<unsigned long>(*(MR::TestSizeT::A<unsigned long> *)_other))
    ));
    ) // MRBINDC_TRY
}

unsigned long MR_TestSizeT_A_unsigned_long_foo(MR_TestSizeT_A_unsigned_long *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TestSizeT::A<unsigned long> *)(_this)).foo();
    ) // MRBINDC_TRY
}

