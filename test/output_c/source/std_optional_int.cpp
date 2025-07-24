#define MR_C_BUILD_LIBRARY
#include "std_optional_int.h"

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstruct(void)
{
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>());
}

MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_int *)(new std::optional<int>[num_elems]{});
}

MR_C_std_optional_int *MR_C_std_optional_int_ConstructFromAnother(const MR_C_std_optional_int *other)
{
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>(
        (other ? std::optional<int>(*(std::optional<int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_optional_int *MR_C_std_optional_int_ConstructFrom(const int *other)
{
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>(
        (other ? std::optional<int>(*other) : std::nullopt)
    ));
}

void MR_C_std_optional_int_AssignFromAnother(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other)
{
    (_this ? *(std::optional<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<int>(*(std::optional<int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_optional_int_AssignFrom(MR_C_std_optional_int *_this, const int *other)
{
    (_this ? *(std::optional<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<int>(*other) : std::nullopt)
    );
}

void MR_C_std_optional_int_Destroy(const MR_C_std_optional_int *_this)
{
    delete ((const std::optional<int> *)_this);
}

void MR_C_std_optional_int_DestroyArray(const MR_C_std_optional_int *_this)
{
    delete[] ((const std::optional<int> *)_this);
}

const MR_C_std_optional_int *MR_C_std_optional_int_OffsetPtr(const MR_C_std_optional_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_int *)(((const std::optional<int> *)ptr) + i);
}

MR_C_std_optional_int *MR_C_std_optional_int_OffsetMutablePtr(MR_C_std_optional_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_int *)(((std::optional<int> *)ptr) + i);
}

const int *MR_C_std_optional_int_Value(const MR_C_std_optional_int *_this)
{
    auto &_self = (_this ? *(const std::optional<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return _self ? &*_self : nullptr;
}

int *MR_C_std_optional_int_MutableValue(MR_C_std_optional_int *_this)
{
    auto &_self = (_this ? *(std::optional<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return _self ? &*_self : nullptr;
}

