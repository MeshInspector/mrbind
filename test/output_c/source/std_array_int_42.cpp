#include "std_array_int_42.h"

#include <array>
#include <stdexcept>


MR_C_std_array_int_42 *MR_C_std_array_int_42_DefaultConstruct(void)
{
    return (MR_C_std_array_int_42 *)new std::array<int, 42>(std::array<int, 42>());
}

MR_C_std_array_int_42 *MR_C_std_array_int_42_ConstructFromAnother(const MR_C_std_array_int_42 *other)
{
    return (MR_C_std_array_int_42 *)new std::array<int, 42>(std::array<int, 42>(
        (other ? std::array<int, 42>(*(std::array<int, 42> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_array_int_42_AssignFromAnother(MR_C_std_array_int_42 *_this, const MR_C_std_array_int_42 *other)
{
    (_this ? *(std::array<int, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::array<int, 42>(*(std::array<int, 42> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_array_int_42_Destroy(MR_C_std_array_int_42 *_this)
{
    delete &(_this ? *(std::array<int, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int *MR_C_std_array_int_42_At(const MR_C_std_array_int_42 *_this, size_t i)
{
    return &((_this ? *(const std::array<int, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

int *MR_C_std_array_int_42_MutableAt(MR_C_std_array_int_42 *_this, size_t i)
{
    return &((_this ? *(std::array<int, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const int *MR_C_std_array_int_42_Data(const MR_C_std_array_int_42 *_this)
{
    return (_this ? *(const std::array<int, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

int *MR_C_std_array_int_42_MutableData(MR_C_std_array_int_42 *_this)
{
    return (_this ? *(std::array<int, 42> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

