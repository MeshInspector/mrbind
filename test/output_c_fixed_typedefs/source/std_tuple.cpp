#define MR_C_BUILD_LIBRARY
#include "std_tuple.h"

#include <cstddef>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple *MR_C_std_tuple_DefaultConstruct(void)
{
    return (MR_C_std_tuple *)new std::tuple<>(std::tuple<>());
}

MR_C_std_tuple *MR_C_std_tuple_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple *)(new std::tuple<>[num_elems]{});
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

void MR_C_std_tuple_Destroy(const MR_C_std_tuple *_this)
{
    delete ((const std::tuple<> *)_this);
}

void MR_C_std_tuple_DestroyArray(const MR_C_std_tuple *_this)
{
    delete[] ((const std::tuple<> *)_this);
}

const MR_C_std_tuple *MR_C_std_tuple_OffsetPtr(const MR_C_std_tuple *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple *)(((const std::tuple<> *)ptr) + i);
}

MR_C_std_tuple *MR_C_std_tuple_OffsetMutablePtr(MR_C_std_tuple *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple *)(((std::tuple<> *)ptr) + i);
}

