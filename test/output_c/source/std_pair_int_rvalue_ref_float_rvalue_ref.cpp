#define MR_C_BUILD_LIBRARY
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

void MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    delete ((const std::pair<int &&, float &&> *)_this);
}

void MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_DestroyArray(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    delete[] ((const std::pair<int &&, float &&> *)_this);
}

const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_OffsetPtr(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)(((const std::pair<int &&, float &&> *)ptr) + i);
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_OffsetMutablePtr(MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)(((std::pair<int &&, float &&> *)ptr) + i);
}

MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(int *first, float *second)
{
    return (MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *)new std::pair<int &&, float &&>(std::pair<int &&, float &&>(
        (first ? std::move(*first) : throw std::runtime_error("Parameter `first` can not be null.")),
        (second ? std::move(*second) : throw std::runtime_error("Parameter `second` can not be null."))
    ));
}

int *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_First(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove((_this ? *(const std::pair<int &&, float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

float *MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Second(const MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove((_this ? *(const std::pair<int &&, float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

