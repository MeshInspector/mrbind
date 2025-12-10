#define MR_C_BUILD_LIBRARY
#include "std_function_int_from_int_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <stdexcept>


MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_DefaultConstruct(void)
{
    return (MR_C_std_function_int_from_int_int *)new std::function<int(int, int)>(std::function<int(int, int)>());
}

MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_int_from_int_int *)(new std::function<int(int, int)>[num_elems]{});
}

MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int_from_int_int *other)
{
    return (MR_C_std_function_int_from_int_int *)new std::function<int(int, int)>(std::function<int(int, int)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int(int, int)>) MRBINDC_CLASSARG_COPY(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int(int, int)>) MRBINDC_CLASSARG_END(other, std::function<int(int, int)>))
    ));
}

void MR_C_std_function_int_from_int_int_AssignFromAnother(MR_C_std_function_int_from_int_int *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int_from_int_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(int, int)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int(int, int)>) MRBINDC_CLASSARG_COPY(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int(int, int)>) MRBINDC_CLASSARG_END(other, std::function<int(int, int)>))
    );
}

void MR_C_std_function_int_from_int_int_Destroy(const MR_C_std_function_int_from_int_int *_this)
{
    delete ((const std::function<int(int, int)> *)_this);
}

void MR_C_std_function_int_from_int_int_DestroyArray(const MR_C_std_function_int_from_int_int *_this)
{
    delete[] ((const std::function<int(int, int)> *)_this);
}

const MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_OffsetPtr(const MR_C_std_function_int_from_int_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_int_from_int_int *)(((const std::function<int(int, int)> *)ptr) + i);
}

MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_OffsetMutablePtr(MR_C_std_function_int_from_int_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_int_from_int_int *)(((std::function<int(int, int)> *)ptr) + i);
}

MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_ConstructStateless(int (*func)(int _1, int _2))
{
    return (MR_C_std_function_int_from_int_int *)new std::function<int(int, int)>(func ? std::function<int(int, int)>([_f = func](int _1, int _2) -> int
    {
        decltype(auto) _return = _f(
            _1,
            _2
        );
        return _return;
    }) : nullptr);
}

void MR_C_std_function_int_from_int_int_Assign(MR_C_std_function_int_from_int_int *_this, int (*func)(int _1, int _2))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(int, int)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](int _1, int _2) -> int
    {
        decltype(auto) _return = _f(
            _1,
            _2
        );
        return _return;
    };
}

namespace
{
    struct _functor
    {
        using FuncPtr = int (*)(int _1, int _2, void *_userdata);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor(FuncPtr _func, void *_userdata, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}

        _functor(const _functor &other) : _func(other._func), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor(_functor &&other) noexcept : _func(other._func), _userdata(other._userdata), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor &operator=(const _functor &other)
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

        _functor &operator=(_functor &&other) noexcept
        {
            _func = other._func;
            _userdata = other._userdata;
            _userdata_cb = other._userdata_cb;
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
            return *this;
        }

        ~_functor()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(int _1, int _2) -> int
        {
            decltype(auto) _return = _func(
                _1,
                _2,
                _userdata
            );
            return _return;
        }
    };
}

MR_C_std_function_int_from_int_int *MR_C_std_function_int_from_int_int_ConstructWithDataPtr(int (*func)(int _1, int _2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_int_from_int_int *)new std::function<int(int, int)>(func ? std::function<int(int, int)>(_functor{func, userdata, userdata_callback}) : nullptr);
}

void MR_C_std_function_int_from_int_int_AssignWithDataPtr(MR_C_std_function_int_from_int_int *_this, int (*func)(int _1, int _2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(int, int)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor{func, userdata, userdata_callback};
}

