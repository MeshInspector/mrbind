#include "MR/test_size_t_ptrdiff_t.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_size_t_ptrdiff_t.h>

#include <stdexcept>


unsigned long MR_TestSizeT_foo_unsigned_long(unsigned long _1)
{
    return ::MR::TestSizeT::foo(
        _1
    );
}

unsigned long **MR_TestSizeT_foo_unsigned_long_ptr_ref(unsigned long **_1)
{
    return &(::MR::TestSizeT::foo(
        (_1 ? *_1 : throw std::runtime_error("Parameter `_1` can not be null."))
    ));
}

MR_C_std_vector_unsigned_long *MR_TestSizeT_foo_std_vector_unsigned_long(MR_C_PassBy _1_pass_by, MR_C_std_vector_unsigned_long *_1)
{
    return (MR_C_std_vector_unsigned_long *)new std::vector<unsigned long>(::MR::TestSizeT::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<unsigned long>) MRBINDC_CLASSARG_COPY(_1, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<unsigned long>), std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<unsigned long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<unsigned long>) MRBINDC_CLASSARG_END(_1, std::vector<unsigned long>))
    ));
}

long MR_TestSizeT_foo_long(long _1)
{
    return ::MR::TestSizeT::foo(
        _1
    );
}

long **MR_TestSizeT_foo_long_ptr_ref(long **_1)
{
    return &(::MR::TestSizeT::foo(
        (_1 ? *_1 : throw std::runtime_error("Parameter `_1` can not be null."))
    ));
}

MR_C_std_vector_long *MR_TestSizeT_foo_std_vector_long(MR_C_PassBy _1_pass_by, MR_C_std_vector_long *_1)
{
    return (MR_C_std_vector_long *)new std::vector<long>(::MR::TestSizeT::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<long>) MRBINDC_CLASSARG_COPY(_1, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(_1, std::vector<long>))
    ));
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_DefaultConstruct(void)
{
    return (MR_TestSizeT_A_unsigned_long *)new MR::TestSizeT::A<unsigned long>(MR::TestSizeT::A<unsigned long>());
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_DefaultConstructArray(size_t num_elems)
{
    return (MR_TestSizeT_A_unsigned_long *)(new MR::TestSizeT::A<unsigned long>[num_elems]{});
}

const MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_OffsetPtr(const MR_TestSizeT_A_unsigned_long *ptr, ptrdiff_t i)
{
    return (const MR_TestSizeT_A_unsigned_long *)(((const MR::TestSizeT::A<unsigned long> *)ptr) + i);
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_OffsetMutablePtr(MR_TestSizeT_A_unsigned_long *ptr, ptrdiff_t i)
{
    return (MR_TestSizeT_A_unsigned_long *)(((MR::TestSizeT::A<unsigned long> *)ptr) + i);
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_ConstructFromAnother(const MR_TestSizeT_A_unsigned_long *_other)
{
    return (MR_TestSizeT_A_unsigned_long *)new MR::TestSizeT::A<unsigned long>(MR::TestSizeT::A<unsigned long>(
        (_other ? MR::TestSizeT::A<unsigned long>(*(MR::TestSizeT::A<unsigned long> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TestSizeT_A_unsigned_long_Destroy(const MR_TestSizeT_A_unsigned_long *_this)
{
    delete ((const MR::TestSizeT::A<unsigned long> *)_this);
}

void MR_TestSizeT_A_unsigned_long_DestroyArray(const MR_TestSizeT_A_unsigned_long *_this)
{
    delete[] ((const MR::TestSizeT::A<unsigned long> *)_this);
}

MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_AssignFromAnother(MR_TestSizeT_A_unsigned_long *_this, const MR_TestSizeT_A_unsigned_long *_other)
{
    return (MR_TestSizeT_A_unsigned_long *)&((_this ? *(MR::TestSizeT::A<unsigned long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TestSizeT::A<unsigned long>(*(MR::TestSizeT::A<unsigned long> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

unsigned long MR_TestSizeT_A_unsigned_long_foo(MR_TestSizeT_A_unsigned_long *_this)
{
    return (_this ? *(MR::TestSizeT::A<unsigned long> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo();
}

