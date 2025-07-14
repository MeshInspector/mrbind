#include "std_array_int32_t_42.h"

#include <array>
#include <stdexcept>


MR_C_std_array_int32_t_42 *MR_C_std_array_int32_t_42_DefaultConstruct(void)
{
    return (MR_C_std_array_int32_t_42 *)new std::array<int32_t, 42>(std::array<int32_t, 42>());
}

MR_C_std_array_int32_t_42 *MR_C_std_array_int32_t_42_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_array_int32_t_42 *)(new std::array<int32_t, 42>[num_elems]{});
}

MR_C_std_array_int32_t_42 *MR_C_std_array_int32_t_42_ConstructFromAnother(const MR_C_std_array_int32_t_42 *other)
{
    return (MR_C_std_array_int32_t_42 *)new std::array<int32_t, 42>(std::array<int32_t, 42>(
        (other ? std::array<int32_t, 42>(*(std::array<int32_t, 42> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_array_int32_t_42_AssignFromAnother(MR_C_std_array_int32_t_42 *_this, const MR_C_std_array_int32_t_42 *other)
{
    (_this ? *(std::array<int32_t, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::array<int32_t, 42>(*(std::array<int32_t, 42> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_array_int32_t_42_Destroy(const MR_C_std_array_int32_t_42 *_this)
{
    delete ((const std::array<int32_t, 42> *)_this);
}

void MR_C_std_array_int32_t_42_DestroyArray(const MR_C_std_array_int32_t_42 *_this)
{
    delete[] ((const std::array<int32_t, 42> *)_this);
}

const MR_C_std_array_int32_t_42 *MR_C_std_array_int32_t_42_OffsetPtr(const MR_C_std_array_int32_t_42 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_array_int32_t_42 *)(((const std::array<int32_t, 42> *)ptr) + i);
}

MR_C_std_array_int32_t_42 *MR_C_std_array_int32_t_42_OffsetMutablePtr(MR_C_std_array_int32_t_42 *ptr, ptrdiff_t i)
{
    return (MR_C_std_array_int32_t_42 *)(((std::array<int32_t, 42> *)ptr) + i);
}

const int32_t *MR_C_std_array_int32_t_42_At(const MR_C_std_array_int32_t_42 *_this, size_t i)
{
    return &((_this ? *(const std::array<int32_t, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

int32_t *MR_C_std_array_int32_t_42_MutableAt(MR_C_std_array_int32_t_42 *_this, size_t i)
{
    return &((_this ? *(std::array<int32_t, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const int32_t *MR_C_std_array_int32_t_42_Data(const MR_C_std_array_int32_t_42 *_this)
{
    return (const int32_t *)((_this ? *(const std::array<int32_t, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data());
}

int32_t *MR_C_std_array_int32_t_42_MutableData(MR_C_std_array_int32_t_42 *_this)
{
    return (int32_t *)((_this ? *(std::array<int32_t, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data());
}

