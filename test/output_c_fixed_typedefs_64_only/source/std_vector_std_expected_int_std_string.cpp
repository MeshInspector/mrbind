#define MR_C_BUILD_LIBRARY
#include "std_vector_std_expected_int_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <expected>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>


MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_DefaultConstruct(void)
{
    return (MR_C_std_vector_std_expected_int_std_string *)new std::vector<std::expected<int, std::string>>(std::vector<std::expected<int, std::string>>());
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_std_expected_int_std_string *)(new std::vector<std::expected<int, std::string>>[num_elems]{});
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_std_expected_int_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<std::expected<int, std::string>>);
    return (MR_C_std_vector_std_expected_int_std_string *)new std::vector<std::expected<int, std::string>>(std::vector<std::expected<int, std::string>>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_END(other, std::vector<std::expected<int, std::string>>))
    ));
}

void MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_std_expected_int_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<std::expected<int, std::string>>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_END(other, std::vector<std::expected<int, std::string>>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_Destroy(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    delete ((const std::vector<std::expected<int, std::string>> *)_this);
}

void MR_C_std_vector_std_expected_int_std_string_DestroyArray(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    delete[] ((const std::vector<std::expected<int, std::string>> *)_this);
}

const MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_OffsetPtr(const MR_C_std_vector_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_std_expected_int_std_string *)(((const std::vector<std::expected<int, std::string>> *)ptr) + i);
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_OffsetMutablePtr(MR_C_std_vector_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_std_expected_int_std_string *)(((std::vector<std::expected<int, std::string>> *)ptr) + i);
}

size_t MR_C_std_vector_std_expected_int_std_string_size(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).size();
}

bool MR_C_std_vector_std_expected_int_std_string_empty(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty();
}

void MR_C_std_vector_std_expected_int_std_string_resize(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_std_expected_int_std_string_resize_with_default_value(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size, const MR_C_std_expected_int_std_string *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const std::expected<int, std::string> *)(value))
    );
}

void MR_C_std_vector_std_expected_int_std_string_clear(MR_C_std_vector_std_expected_int_std_string *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).clear();
}

size_t MR_C_std_vector_std_expected_int_std_string_capacity(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).capacity();
}

void MR_C_std_vector_std_expected_int_std_string_reserve(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_std_expected_int_std_string_shrink_to_fit(MR_C_std_vector_std_expected_int_std_string *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).shrink_to_fit();
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_at(const MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    return (const MR_C_std_expected_int_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).at(
        i
    ));
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_at_mut(MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    return (MR_C_std_expected_int_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).at(
        i
    ));
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_front(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).front());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_front_mut(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).front());
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_back(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).back());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_back_mut(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).back());
}

void MR_C_std_vector_std_expected_int_std_string_push_back(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, std::expected<int, std::string>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
}

void MR_C_std_vector_std_expected_int_std_string_pop_back(MR_C_std_vector_std_expected_int_std_string *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).pop_back();
}

void MR_C_std_vector_std_expected_int_std_string_insert(MR_C_std_vector_std_expected_int_std_string *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, std::expected<int, std::string>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>)));
}

void MR_C_std_vector_std_expected_int_std_string_erase(MR_C_std_vector_std_expected_int_std_string *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).begin() + ptrdiff_t(position));
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_begin(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).data());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_begin_mut(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).data());
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_end(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (const MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).size());
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_end_mut(MR_C_std_vector_std_expected_int_std_string *_this)
{
    return (MR_C_std_expected_int_std_string *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).size());
}

