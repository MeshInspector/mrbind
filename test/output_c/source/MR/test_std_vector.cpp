#include "MR/test_std_vector.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_vector.h>

#include <stdexcept>
#include <utility>


void MR_StdVector_Set(MR_C_std_vector_int_PassBy _0_pass_by, MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::Set(
        MRBINDC_CLASSARG_DEF_CTOR(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_COPY(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_MOVE(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_NO_DEF_ARG(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_END(_0, std::vector<int>) 
    );
}

void MR_StdVector_SetWithDefault(MR_C_std_vector_int_PassBy _0_pass_by, MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::SetWithDefault(
        MRBINDC_CLASSARG_DEF_CTOR(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_COPY(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_MOVE(_0, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_DEF_ARG(_0, std::vector<int>, MR_C_std_vector_int_PassBy, std::type_identity_t<std::vector<int>>{1, 2, 3}) MRBINDC_CLASSARG_END(_0, std::vector<int>) 
    );
}

MR_C_std_vector_int *MR_StdVector_Get(void)
{
    using namespace MR;
    using namespace StdVector;
    return (MR_C_std_vector_int *)new std::vector<int>(MR::StdVector::Get());
}

void MR_StdVector_WriteToRef(MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::WriteToRef(
        _0 ? *(std::vector<int>*)(_0) : throw std::runtime_error("Parameter `_0` can not be null.")
    );
}

void MR_StdVector_WriteToPtr(MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::WriteToPtr(
        (std::vector<int>*)_0
    );
}

void MR_StdVector_ConstRef(const MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::ConstRef(
        _0 ? *(const std::vector<int>*)(_0) : throw std::runtime_error("Parameter `_0` can not be null.")
    );
}

void MR_StdVector_RvalueRef(MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::RvalueRef(
        std::move(_0 ? *(std::vector<int>*)(_0) : throw std::runtime_error("Parameter `_0` can not be null."))
    );
}

void MR_StdVector_ConstRvalueRef(const MR_C_std_vector_int *_0)
{
    using namespace MR;
    using namespace StdVector;
    MR::StdVector::ConstRvalueRef(
        std::move(_0 ? *(const std::vector<int>*)(_0) : throw std::runtime_error("Parameter `_0` can not be null."))
    );
}

