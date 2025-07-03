#include "MR/test_std_function.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <stdexcept>


void MR_StdFunction_foo_std_function_int_func(MR_C_PassBy _1_pass_by, MR_C_std_function_int *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<int(void)>) MRBINDC_CLASSARG_COPY(_1, (std::function<int(void)>), std::function<int(void)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<int(void)>), std::function<int(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<int(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<int(void)>) MRBINDC_CLASSARG_END(_1, std::function<int(void)>))
    );
}

void MR_StdFunction_foo_std_function_void_func_from_int_int(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_int_int *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<void(int, int)>) MRBINDC_CLASSARG_COPY(_1, (std::function<void(int, int)>), std::function<void(int, int)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<void(int, int)>), std::function<void(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<void(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<void(int, int)>) MRBINDC_CLASSARG_END(_1, std::function<void(int, int)>))
    );
}

void MR_StdFunction_foo_std_function_int_func_from_int_int(MR_C_PassBy _1_pass_by, MR_C_std_function_int_from_int_int *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<int(int, int)>) MRBINDC_CLASSARG_COPY(_1, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<int(int, int)>) MRBINDC_CLASSARG_END(_1, std::function<int(int, int)>))
    );
}

void MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(_1, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(_1, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    );
}

void MR_StdFunction_foo_std_function_std_string_func_from_int_float(MR_C_PassBy _1_pass_by, MR_C_std_function_std_string_from_int_float *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<std::string(int, float)>) MRBINDC_CLASSARG_COPY(_1, (std::function<std::string(int, float)>), std::function<std::string(int, float)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<std::string(int, float)>), std::function<std::string(int, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<std::string(int, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<std::string(int, float)>) MRBINDC_CLASSARG_END(_1, std::function<std::string(int, float)>))
    );
}

void MR_StdFunction_foo_std_function_void_func_from_std_string(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_std_string *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<void(std::string)>) MRBINDC_CLASSARG_COPY(_1, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<void(std::string)>) MRBINDC_CLASSARG_END(_1, std::function<void(std::string)>))
    );
}

const MR_C_std_string *MR_StdFunction_A_GetConst_a(const MR_StdFunction_A *_this)
{
    return (const MR_C_std_string *)&((_this ? *(const MR::StdFunction::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

MR_C_std_string *MR_StdFunction_A_GetMutable_a(MR_StdFunction_A *_this)
{
    return (MR_C_std_string *)&((_this ? *(MR::StdFunction::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

MR_StdFunction_A *MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdFunction_A *_other)
{
    return (MR_StdFunction_A *)new MR::StdFunction::A(MR::StdFunction::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_other, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_other, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_other, MR::StdFunction::A))
    ));
}

const MR_StdFunction_A *MR_StdFunction_A_OffsetPtr(const MR_StdFunction_A *ptr, ptrdiff_t i)
{
    return (const MR_StdFunction_A *)(((const MR::StdFunction::A *)ptr) + i);
}

MR_StdFunction_A *MR_StdFunction_A_OffsetMutablePtr(MR_StdFunction_A *ptr, ptrdiff_t i)
{
    return (MR_StdFunction_A *)(((MR::StdFunction::A *)ptr) + i);
}

MR_StdFunction_A *MR_StdFunction_A_DefaultConstruct(void)
{
    return (MR_StdFunction_A *)new MR::StdFunction::A(MR::StdFunction::A());
}

MR_StdFunction_A *MR_StdFunction_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdFunction_A *)(new MR::StdFunction::A[num_elems]{});
}

MR_StdFunction_A *MR_StdFunction_A_AssignFromAnother(MR_StdFunction_A *_this, MR_C_PassBy _other_pass_by, MR_StdFunction_A *_other)
{
    return (MR_StdFunction_A *)&((_this ? *(MR::StdFunction::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_other, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_other, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_other, MR::StdFunction::A))
    ));
}

void MR_StdFunction_A_Destroy(const MR_StdFunction_A *_this)
{
    delete ((const MR::StdFunction::A *)_this);
}

void MR_StdFunction_A_DestroyArray(const MR_StdFunction_A *_this)
{
    delete[] ((const MR::StdFunction::A *)_this);
}

void MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_COPY(_1, (std::function<void(MR::StdFunction::A)>), std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<void(MR::StdFunction::A)>), std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_END(_1, std::function<void(MR::StdFunction::A)>))
    );
}

void MR_StdFunction_foo_std_function_MR_StdFunction_A_func(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_A *_1)
{
    ::MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_COPY(_1, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_END(_1, std::function<MR::StdFunction::A(void)>))
    );
}

