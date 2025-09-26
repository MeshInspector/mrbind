#define MR_C_BUILD_LIBRARY
#include "std_pair_const_int_ref_const_float_ref.h"

#include <cstddef>
#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_ConstructFromAnother(const MR_C_std_pair_const_int_ref_const_float_ref *other)
{
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(std::pair<const int &, const float &>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<const int &, const float &>(*(std::pair<const int &, const float &> *)other))
    ));
}

void MR_C_std_pair_const_int_ref_const_float_ref_Destroy(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    delete ((const std::pair<const int &, const float &> *)_this);
}

void MR_C_std_pair_const_int_ref_const_float_ref_DestroyArray(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    delete[] ((const std::pair<const int &, const float &> *)_this);
}

const MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_OffsetPtr(const MR_C_std_pair_const_int_ref_const_float_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_const_int_ref_const_float_ref *)(((const std::pair<const int &, const float &> *)ptr) + i);
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_OffsetMutablePtr(MR_C_std_pair_const_int_ref_const_float_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_const_int_ref_const_float_ref *)(((std::pair<const int &, const float &> *)ptr) + i);
}

MR_C_std_pair_const_int_ref_const_float_ref *MR_C_std_pair_const_int_ref_const_float_ref_Construct(const int *first, const float *second)
{
    return (MR_C_std_pair_const_int_ref_const_float_ref *)new std::pair<const int &, const float &>(std::pair<const int &, const float &>(
        ((first ? void() : throw std::runtime_error("Parameter `first` can not be null.")), *first),
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), *second)
    ));
}

const int *MR_C_std_pair_const_int_ref_const_float_ref_First(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int &, const float &> *)(_this)).first);
}

const float *MR_C_std_pair_const_int_ref_const_float_ref_Second(const MR_C_std_pair_const_int_ref_const_float_ref *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const int &, const float &> *)(_this)).second);
}

