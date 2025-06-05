#include "std_pair_int_rvalue_ref_float_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <utility>


MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *other)
{
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(std::pair<int &&, float &&>(
        (other ? std::pair<int &&, float &&>(std::move(*(std::pair<int &&, float &&> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy(MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    delete &(_this ? *(std::pair<int &&, float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(int *first, float *second)
{
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(std::pair<int &&, float &&>(
        std::move(first ? *first : throw std::runtime_error("Parameter `first` can not be null.")),
        std::move(second ? *second : throw std::runtime_error("Parameter `second` can not be null."))
    ));
}

int *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_First(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove((_this ? *(const std::pair<int &&, float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

float *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Second(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove((_this ? *(const std::pair<int &&, float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

