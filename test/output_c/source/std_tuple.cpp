#include "std_tuple.h"

#include <stdexcept>
#include <tuple>


MR_C_std_tuple *MR_C_std_tuple_DefaultConstruct(void)
{
    return (MR_C_std_tuple *)new std::tuple<>(std::tuple<>());
}

MR_C_std_tuple *MR_C_std_tuple_ConstructFromAnother(const MR_C_std_tuple *other)
{
    return (MR_C_std_tuple *)new std::tuple<>(std::tuple<>(
        (other ? std::tuple<>(*(std::tuple<> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_AssignFromAnother(MR_C_std_tuple *_this, const MR_C_std_tuple *other)
{
    (_this ? *(std::tuple<> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::tuple<>(*(std::tuple<> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_tuple_Destroy(MR_C_std_tuple *_this)
{
    delete &(_this ? *(std::tuple<> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

