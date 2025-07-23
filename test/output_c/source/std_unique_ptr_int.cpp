#define MR_C_BUILD_LIBRARY
#include "std_unique_ptr_int.h"

#include <common.h>

#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_DefaultConstruct(void)
{
    return (MR_C_std_unique_ptr_int *)new std::unique_ptr<int>(std::unique_ptr<int>());
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unique_ptr_int *)(new std::unique_ptr<int>[num_elems]{});
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_ConstructFromAnother(const MR_C_std_unique_ptr_int *other)
{
    return (MR_C_std_unique_ptr_int *)new std::unique_ptr<int>(std::unique_ptr<int>(
        (other ? std::unique_ptr<int>(std::move(*(std::unique_ptr<int> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_ConstructFrom(int *other)
{
    return (MR_C_std_unique_ptr_int *)new std::unique_ptr<int>(std::unique_ptr<int>(
        std::unique_ptr<int>(other)
    ));
}

void MR_C_std_unique_ptr_int_AssignFromAnother(MR_C_std_unique_ptr_int *_this, const MR_C_std_unique_ptr_int *other)
{
    (_this ? *(std::unique_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::unique_ptr<int>(std::move(*(std::unique_ptr<int> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_unique_ptr_int_AssignFrom(MR_C_std_unique_ptr_int *_this, int *other)
{
    (_this ? *(std::unique_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        std::unique_ptr<int>(other)
    );
}

void MR_C_std_unique_ptr_int_Destroy(const MR_C_std_unique_ptr_int *_this)
{
    delete ((const std::unique_ptr<int> *)_this);
}

void MR_C_std_unique_ptr_int_DestroyArray(const MR_C_std_unique_ptr_int *_this)
{
    delete[] ((const std::unique_ptr<int> *)_this);
}

const MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_OffsetPtr(const MR_C_std_unique_ptr_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unique_ptr_int *)(((const std::unique_ptr<int> *)ptr) + i);
}

MR_C_std_unique_ptr_int *MR_C_std_unique_ptr_int_OffsetMutablePtr(MR_C_std_unique_ptr_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_unique_ptr_int *)(((std::unique_ptr<int> *)ptr) + i);
}

int *MR_C_std_unique_ptr_int_Get(const MR_C_std_unique_ptr_int *_this)
{
    return (_this ? *(const std::unique_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get();
}

int *MR_C_std_unique_ptr_int_Release(MR_C_std_unique_ptr_int *_this)
{
    return (_this ? *(std::unique_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).release();
}

