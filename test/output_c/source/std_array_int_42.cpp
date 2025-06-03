#include "std_array_int_42.h"

#include <__mrbind_c_details.h>

#include <array>
#include <stdexcept>


MR_C_std_array_int_42 *MR_C_std_array_int_42_DefaultConstruct(void)
{
    return (MR_C_std_array_int_42 *)new std::array<int, 42>(std::array<int, 42>());
}

MR_C_std_array_int_42 *MR_C_std_array_int_42_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_array_int_42 *other)
{
    return (MR_C_std_array_int_42 *)new std::array<int, 42>(std::array<int, 42>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::array<int, 42>) MRBINDC_CLASSARG_COPY(other, std::array<int, 42>) MRBINDC_CLASSARG_MOVE(other, std::array<int, 42>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::array<int, 42>) MRBINDC_CLASSARG_END(other, std::array<int, 42>))
    ));
}

void MR_C_std_array_int_42_AssignFromAnother(MR_C_std_array_int_42 *_this, MR_C_PassBy other_pass_by, MR_C_std_array_int_42 *other)
{
    (_this ? *(std::array<int, 42>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::array<int, 42>) MRBINDC_CLASSARG_COPY(other, std::array<int, 42>) MRBINDC_CLASSARG_MOVE(other, std::array<int, 42>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::array<int, 42>) MRBINDC_CLASSARG_END(other, std::array<int, 42>))
    );
}

void MR_C_std_array_int_42_Destroy(MR_C_std_array_int_42 *_this)
{
    delete &(_this ? *(std::array<int, 42>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int *MR_C_std_array_int_42_At(const MR_C_std_array_int_42 *_this, size_t i)
{
    return &((_this ? *(const std::array<int, 42>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

int *MR_C_std_array_int_42_MutableAt(MR_C_std_array_int_42 *_this, size_t i)
{
    return &((_this ? *(std::array<int, 42>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).at(
        i
    ));
}

const int *MR_C_std_array_int_42_Data(const MR_C_std_array_int_42 *_this)
{
    return (_this ? *(const std::array<int, 42>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

int *MR_C_std_array_int_42_MutableData(MR_C_std_array_int_42 *_this)
{
    return (_this ? *(std::array<int, 42>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

