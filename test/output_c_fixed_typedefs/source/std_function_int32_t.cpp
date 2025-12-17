#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_int32_t.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <functional>
#include <stdexcept>


MR_C_std_function_int32_t *MR_C_std_function_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_function_int32_t *)new std::function<int32_t(void)>(std::function<int32_t(void)>());
}

MR_C_std_function_int32_t *MR_C_std_function_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_int32_t *)(new std::function<int32_t(void)>[num_elems]{});
}

MR_C_std_function_int32_t *MR_C_std_function_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int32_t *other)
{
    return (MR_C_std_function_int32_t *)new std::function<int32_t(void)>(std::function<int32_t(void)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int32_t(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<int32_t(void)>), std::function<int32_t(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int32_t(void)>), std::function<int32_t(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int32_t(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int32_t(void)>) MRBINDC_CLASSARG_END(other, std::function<int32_t(void)>))
    ));
}

void MR_C_std_function_int32_t_AssignFromAnother(MR_C_std_function_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int32_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int32_t(void)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int32_t(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<int32_t(void)>), std::function<int32_t(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int32_t(void)>), std::function<int32_t(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int32_t(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int32_t(void)>) MRBINDC_CLASSARG_END(other, std::function<int32_t(void)>))
    );
}

void MR_C_std_function_int32_t_Destroy(const MR_C_std_function_int32_t *_this)
{
    delete ((const std::function<int32_t(void)> *)_this);
}

void MR_C_std_function_int32_t_DestroyArray(const MR_C_std_function_int32_t *_this)
{
    delete[] ((const std::function<int32_t(void)> *)_this);
}

const MR_C_std_function_int32_t *MR_C_std_function_int32_t_OffsetPtr(const MR_C_std_function_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_int32_t *)(((const std::function<int32_t(void)> *)ptr) + i);
}

MR_C_std_function_int32_t *MR_C_std_function_int32_t_OffsetMutablePtr(MR_C_std_function_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_int32_t *)(((std::function<int32_t(void)> *)ptr) + i);
}

MR_C_std_function_int32_t *MR_C_std_function_int32_t_ConstructStateless(int32_t (*func)(void))
{
    return (MR_C_std_function_int32_t *)new std::function<int32_t(void)>(func ? std::function<int32_t(void)>([_f = func](void) -> int32_t
    {
        decltype(auto) _return = _f();
        return _return;
    }) : nullptr);
}

void MR_C_std_function_int32_t_Assign(MR_C_std_function_int32_t *_this, int32_t (*func)(void))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int32_t(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](void) -> int32_t
    {
        decltype(auto) _return = _f();
        return _return;
    };
}

namespace
{
    struct _functor_MR_C_std_function_int32_t
    {
        using FuncPtr = int32_t (*)(void *_userdata);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_int32_t(FuncPtr _func, void *_userdata, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_int32_t(const _functor_MR_C_std_function_int32_t &other) : _func(other._func), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_int32_t(_functor_MR_C_std_function_int32_t &&other) noexcept : _func(other._func), _userdata(other._userdata), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_int32_t &operator=(const _functor_MR_C_std_function_int32_t &other)
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

        _functor_MR_C_std_function_int32_t &operator=(_functor_MR_C_std_function_int32_t &&other) noexcept
        {
            _func = other._func;
            _userdata = other._userdata;
            _userdata_cb = other._userdata_cb;
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
            return *this;
        }

        ~_functor_MR_C_std_function_int32_t()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(void) -> int32_t
        {
            decltype(auto) _return = _func(
                _userdata
            );
            return _return;
        }
    };
}

MR_C_std_function_int32_t *MR_C_std_function_int32_t_ConstructWithDataPtr(int32_t (*func)(void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_int32_t *)new std::function<int32_t(void)>(func ? std::function<int32_t(void)>(_functor_MR_C_std_function_int32_t{func, userdata, userdata_callback}) : nullptr);
}

void MR_C_std_function_int32_t_AssignWithDataPtr(MR_C_std_function_int32_t *_this, int32_t (*func)(void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int32_t(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_int32_t{func, userdata, userdata_callback};
}

