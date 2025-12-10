#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_void_from_MR_StdFunction_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <cstddef>
#include <functional>
#include <stdexcept>


MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct(void)
{
    return (MR_C_std_function_void_from_MR_StdFunction_A *)new std::function<void(MR::StdFunction::A)>(std::function<void(MR::StdFunction::A)>());
}

MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_void_from_MR_StdFunction_A *)(new std::function<void(MR::StdFunction::A)>[num_elems]{});
}

MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *other)
{
    return (MR_C_std_function_void_from_MR_StdFunction_A *)new std::function<void(MR::StdFunction::A)>(std::function<void(MR::StdFunction::A)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(MR::StdFunction::A)>), std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(MR::StdFunction::A)>), std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_END(other, std::function<void(MR::StdFunction::A)>))
    ));
}

void MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother(MR_C_std_function_void_from_MR_StdFunction_A *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(MR::StdFunction::A)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(MR::StdFunction::A)>), std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(MR::StdFunction::A)>), std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(MR::StdFunction::A)>) MRBINDC_CLASSARG_END(other, std::function<void(MR::StdFunction::A)>))
    );
}

void MR_C_std_function_void_from_MR_StdFunction_A_Destroy(const MR_C_std_function_void_from_MR_StdFunction_A *_this)
{
    delete ((const std::function<void(MR::StdFunction::A)> *)_this);
}

void MR_C_std_function_void_from_MR_StdFunction_A_DestroyArray(const MR_C_std_function_void_from_MR_StdFunction_A *_this)
{
    delete[] ((const std::function<void(MR::StdFunction::A)> *)_this);
}

const MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_OffsetPtr(const MR_C_std_function_void_from_MR_StdFunction_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_void_from_MR_StdFunction_A *)(((const std::function<void(MR::StdFunction::A)> *)ptr) + i);
}

MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_OffsetMutablePtr(MR_C_std_function_void_from_MR_StdFunction_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_void_from_MR_StdFunction_A *)(((std::function<void(MR::StdFunction::A)> *)ptr) + i);
}

MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_ConstructStateless(void (*func)(MR_StdFunction_A *_1))
{
    return (MR_C_std_function_void_from_MR_StdFunction_A *)new std::function<void(MR::StdFunction::A)>(func ? std::function<void(MR::StdFunction::A)>([_f = func](MR::StdFunction::A _1) -> void
    {
        _f(
            (MR_StdFunction_A *)&mrbindc_details::unmove(_1)
        );
    }) : nullptr);
}

void MR_C_std_function_void_from_MR_StdFunction_A_Assign(MR_C_std_function_void_from_MR_StdFunction_A *_this, void (*func)(MR_StdFunction_A *_1))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(MR::StdFunction::A)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](MR::StdFunction::A _1) -> void
    {
        _f(
            (MR_StdFunction_A *)&mrbindc_details::unmove(_1)
        );
    };
}

namespace
{
    struct _functor
    {
        using FuncPtr = void (*)(MR_StdFunction_A *_1, void *_userdata);
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

        auto operator()(MR::StdFunction::A _1) -> void
        {
            _func(
                (MR_StdFunction_A *)&mrbindc_details::unmove(_1),
                _userdata
            );
        }
    };
}

MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_ConstructWithDataPtr(void (*func)(MR_StdFunction_A *_1, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_void_from_MR_StdFunction_A *)new std::function<void(MR::StdFunction::A)>(func ? std::function<void(MR::StdFunction::A)>(_functor{func, userdata, userdata_callback}) : nullptr);
}

void MR_C_std_function_void_from_MR_StdFunction_A_AssignWithDataPtr(MR_C_std_function_void_from_MR_StdFunction_A *_this, void (*func)(MR_StdFunction_A *_1, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(MR::StdFunction::A)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor{func, userdata, userdata_callback};
}

