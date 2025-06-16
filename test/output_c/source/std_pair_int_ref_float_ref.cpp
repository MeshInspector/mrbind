#include "std_pair_int_ref_float_ref.h"

#include <stdexcept>
#include <utility>


void MR_C_std_pair_int_ref_float_ref_Destroy(MR_C_std_pair_int_ref_float_ref *_this)
{
    delete &(_this ? *(std::pair<int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_pair_int_ref_float_ref *MR_C_std_pair_int_ref_float_ref_Construct(int *first, float *second)
{
    return (MR_C_std_pair_int_ref_float_ref *)new std::pair<int &, float &>(std::pair<int &, float &>(
        (first ? *first : throw std::runtime_error("Parameter `first` can not be null.")),
        (second ? *second : throw std::runtime_error("Parameter `second` can not be null."))
    ));
}

int *MR_C_std_pair_int_ref_float_ref_First(const MR_C_std_pair_int_ref_float_ref *_this)
{
    return &((_this ? *(const std::pair<int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

float *MR_C_std_pair_int_ref_float_ref_Second(const MR_C_std_pair_int_ref_float_ref *_this)
{
    return &((_this ? *(const std::pair<int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

