#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_unique_ptr_int32_t.h"

#include <common.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_unique_ptr_int32_t *)new std::unique_ptr<int32_t>(std::unique_ptr<int32_t>());
}

MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unique_ptr_int32_t *)(new std::unique_ptr<int32_t>[num_elems]{});
}

MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_ConstructFromAnother(const MR_C_std_unique_ptr_int32_t *other)
{
    return (MR_C_std_unique_ptr_int32_t *)new std::unique_ptr<int32_t>(std::unique_ptr<int32_t>(
        (other ? std::unique_ptr<int32_t>(std::move(*(std::unique_ptr<int32_t> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_ConstructFrom(int32_t *other)
{
    return (MR_C_std_unique_ptr_int32_t *)new std::unique_ptr<int32_t>(std::unique_ptr<int32_t>(
        std::unique_ptr<int32_t>(other)
    ));
}

void MR_C_std_unique_ptr_int32_t_AssignFromAnother(MR_C_std_unique_ptr_int32_t *_this, const MR_C_std_unique_ptr_int32_t *other)
{
    (_this ? *(std::unique_ptr<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::unique_ptr<int32_t>(std::move(*(std::unique_ptr<int32_t> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_unique_ptr_int32_t_AssignFrom(MR_C_std_unique_ptr_int32_t *_this, int32_t *other)
{
    (_this ? *(std::unique_ptr<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        std::unique_ptr<int32_t>(other)
    );
}

void MR_C_std_unique_ptr_int32_t_Destroy(const MR_C_std_unique_ptr_int32_t *_this)
{
    delete ((const std::unique_ptr<int32_t> *)_this);
}

void MR_C_std_unique_ptr_int32_t_DestroyArray(const MR_C_std_unique_ptr_int32_t *_this)
{
    delete[] ((const std::unique_ptr<int32_t> *)_this);
}

const MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_OffsetPtr(const MR_C_std_unique_ptr_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unique_ptr_int32_t *)(((const std::unique_ptr<int32_t> *)ptr) + i);
}

MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_OffsetMutablePtr(MR_C_std_unique_ptr_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_unique_ptr_int32_t *)(((std::unique_ptr<int32_t> *)ptr) + i);
}

int32_t *MR_C_std_unique_ptr_int32_t_Get(const MR_C_std_unique_ptr_int32_t *_this)
{
    return (_this ? *(const std::unique_ptr<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get();
}

int32_t *MR_C_std_unique_ptr_int32_t_Release(MR_C_std_unique_ptr_int32_t *_this)
{
    return (_this ? *(std::unique_ptr<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).release();
}

