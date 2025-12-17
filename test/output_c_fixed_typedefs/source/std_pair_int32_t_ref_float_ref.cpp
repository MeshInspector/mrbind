#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_pair_int32_t_ref_float_ref.h"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <utility>


void MR_C_std_pair_int32_t_ref_float_ref_Destroy(const MR_C_std_pair_int32_t_ref_float_ref *_this)
{
    delete ((const std::pair<int32_t &, float &> *)_this);
}

void MR_C_std_pair_int32_t_ref_float_ref_DestroyArray(const MR_C_std_pair_int32_t_ref_float_ref *_this)
{
    delete[] ((const std::pair<int32_t &, float &> *)_this);
}

const MR_C_std_pair_int32_t_ref_float_ref *MR_C_std_pair_int32_t_ref_float_ref_OffsetPtr(const MR_C_std_pair_int32_t_ref_float_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_int32_t_ref_float_ref *)(((const std::pair<int32_t &, float &> *)ptr) + i);
}

MR_C_std_pair_int32_t_ref_float_ref *MR_C_std_pair_int32_t_ref_float_ref_OffsetMutablePtr(MR_C_std_pair_int32_t_ref_float_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_int32_t_ref_float_ref *)(((std::pair<int32_t &, float &> *)ptr) + i);
}

MR_C_std_pair_int32_t_ref_float_ref *MR_C_std_pair_int32_t_ref_float_ref_Construct(int32_t *first, float *second)
{
    return (MR_C_std_pair_int32_t_ref_float_ref *)new std::pair<int32_t &, float &>(std::pair<int32_t &, float &>(
        ((first ? void() : throw std::runtime_error("Parameter `first` can not be null.")), *first),
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), *second)
    ));
}

int32_t *MR_C_std_pair_int32_t_ref_float_ref_First(const MR_C_std_pair_int32_t_ref_float_ref *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int32_t &, float &> *)(_this)).first);
}

float *MR_C_std_pair_int32_t_ref_float_ref_Second(const MR_C_std_pair_int32_t_ref_float_ref *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int32_t &, float &> *)(_this)).second);
}

