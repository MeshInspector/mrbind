#include "std_tuple_.h"

#include <stdexcept>
#include <tuple>


MR_C_std_tuple_ *MR_C_std_tuple__DefaultConstruct(void)
{
    return (MR_C_std_tuple_ *)new std::tuple<>(std::tuple<>());
}

MR_C_std_tuple_ *MR_C_std_tuple__ConstructFromAnother(const MR_C_std_tuple_ *other)
{
    return (MR_C_std_tuple_ *)new std::tuple<>(std::tuple<>(
        (other ? std::tuple<>(*(std::tuple<> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple__AssignFromAnother(MR_C_std_tuple_ *_this, const MR_C_std_tuple_ *other)
{
    (_this ? *(std::tuple<>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::tuple<>(*(std::tuple<> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_tuple__Destroy(MR_C_std_tuple_ *_this)
{
    delete &(_this ? *(std::tuple<>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

