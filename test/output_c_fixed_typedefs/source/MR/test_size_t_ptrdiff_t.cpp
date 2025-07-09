#include "MR/test_size_t_ptrdiff_t.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_size_t_ptrdiff_t.h>

#include <stdexcept>


uint64_t MR_TestSizeT_foo_uint64_t(uint64_t _1)
{
    return ::MR::TestSizeT::foo(
        _1
    );
}

uint64_t **MR_TestSizeT_foo_uint64_t_ptr_ref(uint64_t **_1)
{
    return (uint64_t **)&(::MR::TestSizeT::foo(
        (_1 ? *(uint64_t **)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    ));
}

MR_C_std_vector_uint64_t *MR_TestSizeT_foo_std_vector_uint64_t(MR_C_PassBy _1_pass_by, MR_C_std_vector_uint64_t *_1)
{
    return (MR_C_std_vector_uint64_t *)new std::vector<uint64_t>(::MR::TestSizeT::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<uint64_t>) MRBINDC_CLASSARG_COPY(_1, (std::vector<uint64_t>), std::vector<uint64_t>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<uint64_t>), std::vector<uint64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<uint64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<uint64_t>) MRBINDC_CLASSARG_END(_1, std::vector<uint64_t>))
    ));
}

int64_t MR_TestSizeT_foo_int64_t(int64_t _1)
{
    return ::MR::TestSizeT::foo(
        _1
    );
}

int64_t **MR_TestSizeT_foo_int64_t_ptr_ref(int64_t **_1)
{
    return (int64_t **)&(::MR::TestSizeT::foo(
        (_1 ? *(int64_t **)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    ));
}

MR_C_std_vector_int64_t *MR_TestSizeT_foo_std_vector_int64_t(MR_C_PassBy _1_pass_by, MR_C_std_vector_int64_t *_1)
{
    return (MR_C_std_vector_int64_t *)new std::vector<int64_t>(::MR::TestSizeT::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int64_t>) MRBINDC_CLASSARG_COPY(_1, (std::vector<int64_t>), std::vector<int64_t>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<int64_t>), std::vector<int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<int64_t>) MRBINDC_CLASSARG_END(_1, std::vector<int64_t>))
    ));
}

MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_DefaultConstruct(void)
{
    return (MR_TestSizeT_A_uint64_t *)new MR::TestSizeT::A<uint64_t>(MR::TestSizeT::A<uint64_t>());
}

MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_TestSizeT_A_uint64_t *)(new MR::TestSizeT::A<uint64_t>[num_elems]{});
}

const MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_OffsetPtr(const MR_TestSizeT_A_uint64_t *ptr, ptrdiff_t i)
{
    return (const MR_TestSizeT_A_uint64_t *)(((const MR::TestSizeT::A<uint64_t> *)ptr) + i);
}

MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_OffsetMutablePtr(MR_TestSizeT_A_uint64_t *ptr, ptrdiff_t i)
{
    return (MR_TestSizeT_A_uint64_t *)(((MR::TestSizeT::A<uint64_t> *)ptr) + i);
}

MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_ConstructFromAnother(const MR_TestSizeT_A_uint64_t *_other)
{
    return (MR_TestSizeT_A_uint64_t *)new MR::TestSizeT::A<uint64_t>(MR::TestSizeT::A<uint64_t>(
        (_other ? MR::TestSizeT::A<uint64_t>(*(MR::TestSizeT::A<uint64_t> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_AssignFromAnother(MR_TestSizeT_A_uint64_t *_this, const MR_TestSizeT_A_uint64_t *_other)
{
    return (MR_TestSizeT_A_uint64_t *)&((_this ? *(MR::TestSizeT::A<uint64_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TestSizeT::A<uint64_t>(*(MR::TestSizeT::A<uint64_t> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TestSizeT_A_uint64_t_Destroy(const MR_TestSizeT_A_uint64_t *_this)
{
    delete ((const MR::TestSizeT::A<uint64_t> *)_this);
}

void MR_TestSizeT_A_uint64_t_DestroyArray(const MR_TestSizeT_A_uint64_t *_this)
{
    delete[] ((const MR::TestSizeT::A<uint64_t> *)_this);
}

uint64_t MR_TestSizeT_A_uint64_t_foo(MR_TestSizeT_A_uint64_t *_this)
{
    return (_this ? *(MR::TestSizeT::A<uint64_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo();
}

