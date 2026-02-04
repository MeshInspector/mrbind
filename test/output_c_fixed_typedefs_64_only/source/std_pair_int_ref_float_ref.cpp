#define MR_C_BUILD_LIBRARY
#include "std_pair_int_ref_float_ref.h"

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


void MR_C_std_pair_int_ref_float_ref_Destroy(const MR_C_std_pair_int_ref_float_ref *_this)
{
    delete ((const std::pair<int &, float &> *)_this);
}

void MR_C_std_pair_int_ref_float_ref_DestroyArray(const MR_C_std_pair_int_ref_float_ref *_this)
{
    delete[] ((const std::pair<int &, float &> *)_this);
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
        ((first ? void() : throw std::runtime_error("Parameter `first` can not be null.")), *first),
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), *second)
    ));
}

int *MR_C_std_pair_int_ref_float_ref_first(const MR_C_std_pair_int_ref_float_ref *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int &, float &> *)(_this)).first);
}

float *MR_C_std_pair_int_ref_float_ref_second(const MR_C_std_pair_int_ref_float_ref *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int &, float &> *)(_this)).second);
}

