#define MR_C_BUILD_LIBRARY
#include "std_function_void_from_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>


MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_DefaultConstruct(void)
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(std::function<void(std::string)>());
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_void_from_std_string *)(new std::function<void(std::string)>[num_elems]{});
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void_from_std_string *other)
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(std::function<void(std::string)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(std::string)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(std::string)>) MRBINDC_CLASSARG_END(other, std::function<void(std::string)>))
    ));
}

void MR_C_std_function_void_from_std_string_AssignFromAnother(MR_C_std_function_void_from_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void_from_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(std::string)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(std::string)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(std::string)>) MRBINDC_CLASSARG_END(other, std::function<void(std::string)>))
    );
}

void MR_C_std_function_void_from_std_string_Destroy(const MR_C_std_function_void_from_std_string *_this)
{
    delete ((const std::function<void(std::string)> *)_this);
}

void MR_C_std_function_void_from_std_string_DestroyArray(const MR_C_std_function_void_from_std_string *_this)
{
    delete[] ((const std::function<void(std::string)> *)_this);
}

const MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_OffsetPtr(const MR_C_std_function_void_from_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_void_from_std_string *)(((const std::function<void(std::string)> *)ptr) + i);
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_OffsetMutablePtr(MR_C_std_function_void_from_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_void_from_std_string *)(((std::function<void(std::string)> *)ptr) + i);
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructStateless(void (*func)(MR_C_std_string *_1))
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(func ? std::function<void(std::string)>([_f = func](std::string _1) -> void
    {
        _f(
            (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1))
        );
    }) : nullptr);
}

void MR_C_std_function_void_from_std_string_Assign(MR_C_std_function_void_from_std_string *_this, void (*func)(MR_C_std_string *_1))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(std::string)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](std::string _1) -> void
    {
        _f(
            (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1))
        );
    };
}

namespace
{
    struct _functor_MR_C_std_function_void_from_std_string
    {
        using FuncPtr = void (*)(MR_C_std_string *_1, void *_userdata);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_void_from_std_string(FuncPtr _func, void *_userdata, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_void_from_std_string(const _functor_MR_C_std_function_void_from_std_string &other) : _func(other._func), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_void_from_std_string(_functor_MR_C_std_function_void_from_std_string &&other) noexcept : _func(other._func), _userdata(other._userdata), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_void_from_std_string &operator=(const _functor_MR_C_std_function_void_from_std_string &other)
        {
            if (_userdata_cb && _userdata_cb != other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.
            {
                _userdata_cb(&_userdata, nullptr);
                _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.
            }
            _func = other._func;
            _userdata_cb = other._userdata_cb;
            if (other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.
                _userdata_cb(&_userdata, other._userdata);
            else // Otherwise shallow-copy.
                _userdata = other._userdata;
            return *this;
        }

        _functor_MR_C_std_function_void_from_std_string &operator=(_functor_MR_C_std_function_void_from_std_string &&other) noexcept
        {
            _func = other._func;
            _userdata = other._userdata;
            _userdata_cb = other._userdata_cb;
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
            return *this;
        }

        ~_functor_MR_C_std_function_void_from_std_string()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(std::string _1) -> void
        {
            _func(
                (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1)),
                _userdata
            );
        }
    };
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructWithDataPtr(void (*func)(MR_C_std_string *_1, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(func ? std::function<void(std::string)>(_functor_MR_C_std_function_void_from_std_string{func, userdata, userdata_callback}) : nullptr);
}

void MR_C_std_function_void_from_std_string_AssignWithDataPtr(MR_C_std_function_void_from_std_string *_this, void (*func)(MR_C_std_string *_1, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(std::string)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_void_from_std_string{func, userdata, userdata_callback};
}

