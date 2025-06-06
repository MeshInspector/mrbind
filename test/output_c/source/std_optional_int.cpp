#include "std_optional_int.h"

#include <optional>
#include <stdexcept>


MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstruct(void)
{
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>());
}

MR_C_std_optional_int *MR_C_std_optional_int_ConstructFromAnother(const MR_C_std_optional_int *other)
{
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>(
        (other ? std::optional<int>(*(std::optional<int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_optional_int *MR_C_std_optional_int_ConstructFrom(const MR_C_std_optional_int *other)
{
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>(
        (other ? std::optional<int>(*(std::optional<int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_optional_int_AssignFromAnother(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other)
{
    (_this ? *(std::optional<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<int>(*(std::optional<int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_optional_int_AssignFrom(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other)
{
    (_this ? *(std::optional<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<int>(*(std::optional<int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_optional_int_Destroy(MR_C_std_optional_int *_this)
{
    delete &(_this ? *(std::optional<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

