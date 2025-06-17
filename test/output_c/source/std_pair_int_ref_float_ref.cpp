#include "std_pair_int_ref_float_ref.h"

#include <stdexcept>
#include <utility>


void MR_C_std_pair_int_ref_float_ref_Destroy(MR_C_std_pair_int_ref_float_ref *_this)
{
    delete ((std::pair<int &, float &> *)_this);
}

void MR_C_std_pair_int_ref_float_ref_DestroyArray(MR_C_std_pair_int_ref_float_ref *_this)
{
    delete[] ((std::pair<int &, float &> *)_this);
}

const MR_C_std_pair_int_ref_float_ref *MR_C_std_pair_int_ref_float_ref_OffsetPtr(const MR_C_std_pair_int_ref_float_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_int_ref_float_ref *)(((const std::pair<int &, float &> *)ptr) + i);
}

MR_C_std_pair_int_ref_float_ref *MR_C_std_pair_int_ref_float_ref_OffsetMutablePtr(MR_C_std_pair_int_ref_float_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_int_ref_float_ref *)(((std::pair<int &, float &> *)ptr) + i);
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

