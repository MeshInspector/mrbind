#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_unique_ptr_MR_StdUniquePtr_A.h"

#include <input/MR/test_std_unique_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct(void)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)new std::unique_ptr<MR::StdUniquePtr::A>(std::unique_ptr<MR::StdUniquePtr::A>());
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)(new std::unique_ptr<MR::StdUniquePtr::A>[num_elems]{});
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *other)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)new std::unique_ptr<MR::StdUniquePtr::A>(std::unique_ptr<MR::StdUniquePtr::A>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<MR::StdUniquePtr::A>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A> *)other)))
    ));
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(MR_StdUniquePtr_A *other)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)new std::unique_ptr<MR::StdUniquePtr::A>(std::unique_ptr<MR::StdUniquePtr::A>(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)other)
    ));
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this, const MR_C_std_unique_ptr_MR_StdUniquePtr_A *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unique_ptr<MR::StdUniquePtr::A>(std::move(*(std::unique_ptr<MR::StdUniquePtr::A> *)other)))
    );
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this, MR_StdUniquePtr_A *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).operator=(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)other)
    );
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    delete ((const std::unique_ptr<MR::StdUniquePtr::A> *)_this);
}

void MR_C_std_unique_ptr_MR_StdUniquePtr_A_DestroyArray(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    delete[] ((const std::unique_ptr<MR::StdUniquePtr::A> *)_this);
}

const MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetPtr(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unique_ptr_MR_StdUniquePtr_A *)(((const std::unique_ptr<MR::StdUniquePtr::A> *)ptr) + i);
}

MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetMutablePtr(MR_C_std_unique_ptr_MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_unique_ptr_MR_StdUniquePtr_A *)(((std::unique_ptr<MR::StdUniquePtr::A> *)ptr) + i);
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_Get(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    return (MR_StdUniquePtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).get());
}

MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_Release(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this)
{
    return (MR_StdUniquePtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_this)).release());
}

