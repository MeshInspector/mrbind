#include "std_unique_ptr_MR_StdUniquePtr_A_array.h"

#include <input/MR/test_std_unique_ptr.h>

#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct(void)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)new std::unique_ptr<MR::StdUniquePtr::A[]>(std::unique_ptr<MR::StdUniquePtr::A[]>());
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)(new std::unique_ptr<MR::StdUniquePtr::A[]>[num_elems]{});
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *other)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)new std::unique_ptr<MR::StdUniquePtr::A[]>(std::unique_ptr<MR::StdUniquePtr::A[]>(
        (other ? std::unique_ptr<MR::StdUniquePtr::A[]>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A[]> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(MR_StdUniquePtr_A *other)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)new std::unique_ptr<MR::StdUniquePtr::A[]>(std::unique_ptr<MR::StdUniquePtr::A[]>(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)other)
    ));
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *other)
{
    (_this ? *(std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::unique_ptr<MR::StdUniquePtr::A[]>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A[]> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, MR_StdUniquePtr_A *other)
{
    (_this ? *(std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)other)
    );
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    delete ((std::unique_ptr<MR::StdUniquePtr::A[]> *)_this);
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DestroyArray(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    delete[] ((std::unique_ptr<MR::StdUniquePtr::A[]> *)_this);
}

const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetPtr(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)(((const std::unique_ptr<MR::StdUniquePtr::A[]> *)ptr) + i);
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetMutablePtr(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *)(((std::unique_ptr<MR::StdUniquePtr::A[]> *)ptr) + i);
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Get(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    return (MR_StdUniquePtr_A *)((_this ? *(const std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get());
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_At(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, size_t i)
{
    return (MR_StdUniquePtr_A *)&((_this ? *(const std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))[i]);
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Release(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this)
{
    return (MR_StdUniquePtr_A *)((_this ? *(std::unique_ptr<MR::StdUniquePtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).release());
}

