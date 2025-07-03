#include "std_pair_const_int_rvalue_ref_const_float_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *other)
{
    return (MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)new std::pair<const int &&, const float &&>(std::pair<const int &&, const float &&>(
        (other ? std::pair<const int &&, const float &&>(std::move(*(std::pair<const int &&, const float &&> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete ((const std::pair<const int &&, const float &&> *)_this);
}

void MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_DestroyArray(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete[] ((const std::pair<const int &&, const float &&> *)_this);
}

const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_OffsetPtr(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)(((const std::pair<const int &&, const float &&> *)ptr) + i);
}

MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_OffsetMutablePtr(MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)(((std::pair<const int &&, const float &&> *)ptr) + i);
}

MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(const int *first, const float *second)
{
    return (MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *)new std::pair<const int &&, const float &&>(std::pair<const int &&, const float &&>(
        (first ? std::move(*first) : throw std::runtime_error("Parameter `first` can not be null.")),
        (second ? std::move(*second) : throw std::runtime_error("Parameter `second` can not be null."))
    ));
}

const int *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove((_this ? *(const std::pair<const int &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

const float *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove((_this ? *(const std::pair<const int &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

