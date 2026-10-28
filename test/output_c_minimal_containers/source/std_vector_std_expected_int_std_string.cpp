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
    MRBINDC_TRY(
    return (MR_C_std_vector_std_expected_int_std_string *)new std::vector<std::expected<int, std::string>>(std::vector<std::expected<int, std::string>>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_expected_int_std_string *)(new std::vector<std::expected<int, std::string>>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_std_expected_int_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<std::expected<int, std::string>>);
    return (MR_C_std_vector_std_expected_int_std_string *)new std::vector<std::expected<int, std::string>>(std::vector<std::expected<int, std::string>>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_END(other, std::vector<std::expected<int, std::string>>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_std_expected_int_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<std::expected<int, std::string>>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::expected<int, std::string>>), std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::expected<int, std::string>>) MRBINDC_CLASSARG_END(other, std::vector<std::expected<int, std::string>>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_Destroy(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<std::expected<int, std::string>> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_DestroyArray(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<std::expected<int, std::string>> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_OffsetPtr(const MR_C_std_vector_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_std_expected_int_std_string *)(((const std::vector<std::expected<int, std::string>> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_OffsetMutablePtr(MR_C_std_vector_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_expected_int_std_string *)(((std::vector<std::expected<int, std::string>> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_std_expected_int_std_string_size(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_std_expected_int_std_string_empty(const MR_C_std_vector_std_expected_int_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_resize(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_clear(MR_C_std_vector_std_expected_int_std_string *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_reserve(MR_C_std_vector_std_expected_int_std_string *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_at(const MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_expected_int_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<std::expected<int, std::string>> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_std_string *MR_C_std_vector_std_expected_int_std_string_at_mut(MR_C_std_vector_std_expected_int_std_string *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_int_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_push_back(MR_C_std_vector_std_expected_int_std_string *_this, MR_C_PassBy new_elem_pass_by, MR_C_std_expected_int_std_string *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, std::expected<int, std::string>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(new_elem, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(new_elem, std::expected<int, std::string>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_expected_int_std_string_pop_back(MR_C_std_vector_std_expected_int_std_string *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<std::expected<int, std::string>> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

