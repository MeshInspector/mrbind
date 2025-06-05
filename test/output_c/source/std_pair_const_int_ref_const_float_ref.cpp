#include "std_pair_const_int_ref_const_float_ref.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_const_int_ref_const_float_ref *other)
{
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(std::pair<const int &, const float &>(
        (MRBINDC_CLASSARG_COPY(other, std::pair<const int &, const float &>) MRBINDC_CLASSARG_MOVE(other, std::pair<const int &, const float &>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::pair<const int &, const float &>) MRBINDC_CLASSARG_END(other, std::pair<const int &, const float &>))
    ));
}

void MR_C_std_pair_const_int_ref_const_float_ref_Destroy(MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    delete &(_this ? *(std::pair<const int &, const float &>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_Construct(const int *first, const float *second)
{
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(std::pair<const int &, const float &>(
        (first ? *first : throw std::runtime_error("Parameter `first` can not be null.")),
        (second ? *second : throw std::runtime_error("Parameter `second` can not be null."))
    ));
}

const int *MR_C_std_pair_const_int_ref_const_float_ref_First(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    return &((_this ? *(const std::pair<const int &, const float &>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

const float *MR_C_std_pair_const_int_ref_const_float_ref_Second(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    return &((_this ? *(const std::pair<const int &, const float &>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

