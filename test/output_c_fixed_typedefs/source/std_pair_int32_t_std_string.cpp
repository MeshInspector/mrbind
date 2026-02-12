#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_pair_int32_t_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <string>
#include <utility>


MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_DefaultConstruct(void)
{
    return (MR_C_std_pair_int32_t_std_string *)new std::pair<int32_t, std::string>(std::pair<int32_t, std::string>());
}

MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_int32_t_std_string *)(new std::pair<int32_t, std::string>[num_elems]{});
}

MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_int32_t_std_string *other)
{
    return (MR_C_std_pair_int32_t_std_string *)new std::pair<int32_t, std::string>(std::pair<int32_t, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::pair<int32_t, std::string>) MRBINDC_CLASSARG_COPY(other, (std::pair<int32_t, std::string>), std::pair<int32_t, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::pair<int32_t, std::string>), std::pair<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::pair<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::pair<int32_t, std::string>) MRBINDC_CLASSARG_END(other, std::pair<int32_t, std::string>))
    ));
}

void MR_C_std_pair_int32_t_std_string_AssignFromAnother(MR_C_std_pair_int32_t_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_pair_int32_t_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<int32_t, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::pair<int32_t, std::string>) MRBINDC_CLASSARG_COPY(other, (std::pair<int32_t, std::string>), std::pair<int32_t, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::pair<int32_t, std::string>), std::pair<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::pair<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::pair<int32_t, std::string>) MRBINDC_CLASSARG_END(other, std::pair<int32_t, std::string>))
    );
}

void MR_C_std_pair_int32_t_std_string_Destroy(const MR_C_std_pair_int32_t_std_string *_this)
{
    delete ((const std::pair<int32_t, std::string> *)_this);
}

void MR_C_std_pair_int32_t_std_string_DestroyArray(const MR_C_std_pair_int32_t_std_string *_this)
{
    delete[] ((const std::pair<int32_t, std::string> *)_this);
}

const MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_OffsetPtr(const MR_C_std_pair_int32_t_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_int32_t_std_string *)(((const std::pair<int32_t, std::string> *)ptr) + i);
}

MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_OffsetMutablePtr(MR_C_std_pair_int32_t_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_int32_t_std_string *)(((std::pair<int32_t, std::string> *)ptr) + i);
}

MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_Construct(int32_t first, const char *second, const char *second_end)
{
    return (MR_C_std_pair_int32_t_std_string *)new std::pair<int32_t, std::string>(std::pair<int32_t, std::string>(
        first,
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), (second_end ? std::string(second, second_end) : std::string(second)))
    ));
}

const int32_t *MR_C_std_pair_int32_t_std_string_first(const MR_C_std_pair_int32_t_std_string *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int32_t, std::string> *)(_this)).first);
}

int32_t *MR_C_std_pair_int32_t_std_string_first_mut(MR_C_std_pair_int32_t_std_string *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<int32_t, std::string> *)(_this)).first);
}

const MR_C_std_string *MR_C_std_pair_int32_t_std_string_second(const MR_C_std_pair_int32_t_std_string *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<int32_t, std::string> *)(_this)).second);
}

MR_C_std_string *MR_C_std_pair_int32_t_std_string_second_mut(MR_C_std_pair_int32_t_std_string *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<int32_t, std::string> *)(_this)).second);
}

