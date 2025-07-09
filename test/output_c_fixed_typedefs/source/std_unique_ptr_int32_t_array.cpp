#include "std_unique_ptr_int32_t_array.h"

#include <common.h>

#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_int32_t_array *MR_C_std_unique_ptr_int32_t_array_DefaultConstruct(void)
{
    return (MR_C_std_unique_ptr_int32_t_array *)new std::unique_ptr<int32_t[]>(std::unique_ptr<int32_t[]>());
}

MR_C_std_unique_ptr_int32_t_array *MR_C_std_unique_ptr_int32_t_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unique_ptr_int32_t_array *)(new std::unique_ptr<int32_t[]>[num_elems]{});
}

MR_C_std_unique_ptr_int32_t_array *MR_C_std_unique_ptr_int32_t_array_ConstructFromAnother(const MR_C_std_unique_ptr_int32_t_array *other)
{
    return (MR_C_std_unique_ptr_int32_t_array *)new std::unique_ptr<int32_t[]>(std::unique_ptr<int32_t[]>(
        (other ? std::unique_ptr<int32_t[]>(std::move(*(std::unique_ptr<int32_t[]> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_unique_ptr_int32_t_array *MR_C_std_unique_ptr_int32_t_array_ConstructFrom(int32_t *other)
{
    return (MR_C_std_unique_ptr_int32_t_array *)new std::unique_ptr<int32_t[]>(std::unique_ptr<int32_t[]>(
        std::unique_ptr<int32_t[]>((int32_t *)other)
    ));
}

void MR_C_std_unique_ptr_int32_t_array_AssignFromAnother(MR_C_std_unique_ptr_int32_t_array *_this, const MR_C_std_unique_ptr_int32_t_array *other)
{
    (_this ? *(std::unique_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::unique_ptr<int32_t[]>(std::move(*(std::unique_ptr<int32_t[]> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_unique_ptr_int32_t_array_AssignFrom(MR_C_std_unique_ptr_int32_t_array *_this, int32_t *other)
{
    (_this ? *(std::unique_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        std::unique_ptr<int32_t[]>((int32_t *)other)
    );
}

void MR_C_std_unique_ptr_int32_t_array_Destroy(const MR_C_std_unique_ptr_int32_t_array *_this)
{
    delete ((const std::unique_ptr<int32_t[]> *)_this);
}

void MR_C_std_unique_ptr_int32_t_array_DestroyArray(const MR_C_std_unique_ptr_int32_t_array *_this)
{
    delete[] ((const std::unique_ptr<int32_t[]> *)_this);
}

const MR_C_std_unique_ptr_int32_t_array *MR_C_std_unique_ptr_int32_t_array_OffsetPtr(const MR_C_std_unique_ptr_int32_t_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unique_ptr_int32_t_array *)(((const std::unique_ptr<int32_t[]> *)ptr) + i);
}

MR_C_std_unique_ptr_int32_t_array *MR_C_std_unique_ptr_int32_t_array_OffsetMutablePtr(MR_C_std_unique_ptr_int32_t_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_unique_ptr_int32_t_array *)(((std::unique_ptr<int32_t[]> *)ptr) + i);
}

int32_t *MR_C_std_unique_ptr_int32_t_array_Get(const MR_C_std_unique_ptr_int32_t_array *_this)
{
    return (int32_t *)((_this ? *(const std::unique_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get());
}

int32_t *MR_C_std_unique_ptr_int32_t_array_At(const MR_C_std_unique_ptr_int32_t_array *_this, size_t i)
{
    return (int32_t *)&((_this ? *(const std::unique_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))[i]);
}

int32_t *MR_C_std_unique_ptr_int32_t_array_Release(MR_C_std_unique_ptr_int32_t_array *_this)
{
    return (int32_t *)((_this ? *(std::unique_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).release());
}

