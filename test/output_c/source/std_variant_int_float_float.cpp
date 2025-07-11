#include "std_variant_int_float_float.h"

#include <stdexcept>
#include <variant>


MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_DefaultConstruct(void)
{
    return (MR_C_std_variant_int_float_float *)new std::variant<int, float, float>(std::variant<int, float, float>());
}

MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_variant_int_float_float *)(new std::variant<int, float, float>[num_elems]{});
}

MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructFromAnother(const MR_C_std_variant_int_float_float *other)
{
    return (MR_C_std_variant_int_float_float *)new std::variant<int, float, float>(std::variant<int, float, float>(
        (other ? std::variant<int, float, float>(*(std::variant<int, float, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_variant_int_float_float_AssignFromAnother(MR_C_std_variant_int_float_float *_this, const MR_C_std_variant_int_float_float *other)
{
    (_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::variant<int, float, float>(*(std::variant<int, float, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_variant_int_float_float_Destroy(MR_C_std_variant_int_float_float *_this)
{
    delete ((std::variant<int, float, float> *)_this);
}

void MR_C_std_variant_int_float_float_DestroyArray(MR_C_std_variant_int_float_float *_this)
{
    delete[] ((std::variant<int, float, float> *)_this);
}

const MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_OffsetPtr(const MR_C_std_variant_int_float_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_variant_int_float_float *)(((const std::variant<int, float, float> *)ptr) + i);
}

MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_OffsetMutablePtr(MR_C_std_variant_int_float_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_variant_int_float_float *)(((std::variant<int, float, float> *)ptr) + i);
}

size_t MR_C_std_variant_int_float_float_Index(const MR_C_std_variant_int_float_float *_this)
{
    return (_this ? *(const std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).index();
}

MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_int(int value)
{
    return (MR_C_std_variant_int_float_float *)new std::variant<int, float, float>(std::variant<int, float, float>(std::in_place_index<0>, value));
}

MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_float_1(float value)
{
    return (MR_C_std_variant_int_float_float *)new std::variant<int, float, float>(std::variant<int, float, float>(std::in_place_index<1>, value));
}

MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_float_2(float value)
{
    return (MR_C_std_variant_int_float_float *)new std::variant<int, float, float>(std::variant<int, float, float>(std::in_place_index<2>, value));
}

void MR_C_std_variant_int_float_float_AssignAs_int(MR_C_std_variant_int_float_float *_this, int value)
{
    auto &self = (_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (self.index() == 0)
        std::get<0>(self) = value;
    else
        self.emplace<0>(value);
}

void MR_C_std_variant_int_float_float_AssignAs_float_1(MR_C_std_variant_int_float_float *_this, float value)
{
    auto &self = (_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (self.index() == 1)
        std::get<1>(self) = value;
    else
        self.emplace<1>(value);
}

void MR_C_std_variant_int_float_float_AssignAs_float_2(MR_C_std_variant_int_float_float *_this, float value)
{
    auto &self = (_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (self.index() == 2)
        std::get<2>(self) = value;
    else
        self.emplace<2>(value);
}

const int *MR_C_std_variant_int_float_float_Get_int(const MR_C_std_variant_int_float_float *_this)
{
    return std::get_if<0>(&(_this ? *(const std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

int *MR_C_std_variant_int_float_float_GetMutable_int(MR_C_std_variant_int_float_float *_this)
{
    return std::get_if<0>(&(_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const float *MR_C_std_variant_int_float_float_Get_float_1(const MR_C_std_variant_int_float_float *_this)
{
    return std::get_if<1>(&(_this ? *(const std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

float *MR_C_std_variant_int_float_float_GetMutable_float_1(MR_C_std_variant_int_float_float *_this)
{
    return std::get_if<1>(&(_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const float *MR_C_std_variant_int_float_float_Get_float_2(const MR_C_std_variant_int_float_float *_this)
{
    return std::get_if<2>(&(_this ? *(const std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

float *MR_C_std_variant_int_float_float_GetMutable_float_2(MR_C_std_variant_int_float_float *_this)
{
    return std::get_if<2>(&(_this ? *(std::variant<int, float, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

