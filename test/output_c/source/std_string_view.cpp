#include "std_string_view.h"

#include <stdexcept>


MR_C_std_string_view *MR_C_std_string_view_DefaultConstruct(void)
{
    return (MR_C_std_string_view *)new std::string_view(std::string_view());
}

MR_C_std_string_view *MR_C_std_string_view_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_string_view *)(new std::string_view[num_elems]{});
}

MR_C_std_string_view *MR_C_std_string_view_ConstructFromAnother(const MR_C_std_string_view *other)
{
    return (MR_C_std_string_view *)new std::string_view(std::string_view(
        (other ? std::string_view(*(std::string_view *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_string_view *MR_C_std_string_view_ConstructFrom(const char *other, const char *other_end)
{
    return (MR_C_std_string_view *)new std::string_view(std::string_view(
        (other ? (other_end ? std::string_view(other, other_end) : std::string_view(other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_string_view_AssignFromAnother(MR_C_std_string_view *_this, const MR_C_std_string_view *other)
{
    (_this ? *(std::string_view *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::string_view(*(std::string_view *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_string_view_AssignFrom(MR_C_std_string_view *_this, const char *other, const char *other_end)
{
    (_this ? *(std::string_view *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? (other_end ? std::string_view(other, other_end) : std::string_view(other)) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_string_view_Destroy(MR_C_std_string_view *_this)
{
    delete ((std::string_view *)_this);
}

void MR_C_std_string_view_DestroyArray(MR_C_std_string_view *_this)
{
    delete[] ((std::string_view *)_this);
}

const MR_C_std_string_view *MR_C_std_string_view_OffsetPtr(const MR_C_std_string_view *ptr, ptrdiff_t i)
{
    return (const MR_C_std_string_view *)(((const std::string_view *)ptr) + i);
}

MR_C_std_string_view *MR_C_std_string_view_OffsetMutablePtr(MR_C_std_string_view *ptr, ptrdiff_t i)
{
    return (MR_C_std_string_view *)(((std::string_view *)ptr) + i);
}

size_t MR_C_std_string_view_Size(const MR_C_std_string_view *_this)
{
    return (_this ? *(const std::string_view *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

const char *MR_C_std_string_view_Data(const MR_C_std_string_view *_this)
{
    return (_this ? *(const std::string_view *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

const char *MR_C_std_string_view_DataEnd(const MR_C_std_string_view *_this)
{
    return (_this ? *(const std::string_view *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data() + (_this ? *(const std::string_view *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

