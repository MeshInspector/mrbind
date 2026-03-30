#define MR_C_BUILD_LIBRARY
#include "std_pair_int_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <string>
#include <utility>


MR_C_std_pair_int_std_string *MR_C_std_pair_int_std_string_DefaultConstruct(void)
{
    return (MR_C_std_pair_int_std_string *)new std::pair<int, std::string>(std::pair<int, std::string>());
}

MR_C_std_pair_int_std_string *MR_C_std_pair_int_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_int_std_string *)(new std::pair<int, std::string>[num_elems]{});
}

MR_C_std_pair_int_std_string *MR_C_std_pair_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_int_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::pair<int, std::string>);
    return (MR_C_std_pair_int_std_string *)new std::pair<int, std::string>(std::pair<int, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::pair<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::pair<int, std::string>), std::pair<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::pair<int, std::string>), std::pair<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::pair<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::pair<int, std::string>) MRBINDC_CLASSARG_END(other, std::pair<int, std::string>))
    ));
}

void MR_C_std_pair_int_std_string_AssignFromAnother(MR_C_std_pair_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_pair_int_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::pair<int, std::string>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<int, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::pair<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::pair<int, std::string>), std::pair<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::pair<int, std::string>), std::pair<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::pair<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::pair<int, std::string>) MRBINDC_CLASSARG_END(other, std::pair<int, std::string>))
    );
}

void MR_C_std_pair_int_std_string_Destroy(const MR_C_std_pair_int_std_string *_this)
{
    delete ((const std::pair<int, std::string> *)_this);
}

void MR_C_std_pair_int_std_string_DestroyArray(const MR_C_std_pair_int_std_string *_this)
{
    delete[] ((const std::pair<int, std::string> *)_this);
}

const MR_C_std_pair_int_std_string *MR_C_std_pair_int_std_string_OffsetPtr(const MR_C_std_pair_int_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_int_std_string *)(((const std::pair<int, std::string> *)ptr) + i);
}

MR_C_std_pair_int_std_string *MR_C_std_pair_int_std_string_OffsetMutablePtr(MR_C_std_pair_int_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_int_std_string *)(((std::pair<int, std::string> *)ptr) + i);
}

MR_C_std_pair_int_std_string *MR_C_std_pair_int_std_string_Construct(int first, const char *second, const char *second_end)
{
    return (MR_C_std_pair_int_std_string *)new std::pair<int, std::string>(std::pair<int, std::string>(
        first,
        ((second ? void() : MRBINDC_THROW("Parameter `second` can not be null.", void)), (second_end ? std::string(second, second_end) : std::string(second)))
    ));
}

const int *MR_C_std_pair_int_std_string_first(const MR_C_std_pair_int_std_string *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<int, std::string> *)(_this)).first);
}

int *MR_C_std_pair_int_std_string_first_mut(MR_C_std_pair_int_std_string *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<int, std::string> *)(_this)).first);
}

const MR_C_std_string *MR_C_std_pair_int_std_string_second(const MR_C_std_pair_int_std_string *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<int, std::string> *)(_this)).second);
}

MR_C_std_string *MR_C_std_pair_int_std_string_second_mut(MR_C_std_pair_int_std_string *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<int, std::string> *)(_this)).second);
}

