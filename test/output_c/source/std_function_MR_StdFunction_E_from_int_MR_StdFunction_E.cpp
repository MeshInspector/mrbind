#include "std_function_MR_StdFunction_E_from_int_MR_StdFunction_E.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <functional>
#include <stdexcept>


MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstruct(void)
{
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(std::function<MR::StdFunction::E(int, MR::StdFunction::E)>());
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)(new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>[num_elems]{});
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *other)
{
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    ));
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignFromAnother(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *other)
{
    (_this ? *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    );
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_Destroy(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    delete ((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)_this);
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DestroyArray(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    delete[] ((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)_this);
}

const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_OffsetPtr(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)(((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)ptr) + i);
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)(((std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)ptr) + i);
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_Assign(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int _1, MR_StdFunction_E *_2))
{
    auto &_self = (_this ? *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](int _1, MR::StdFunction::E _2) -> MR::StdFunction::E
    {
        decltype(auto) _return = _f(
            _1,
            (MR_StdFunction_E *)&mrbindc_details::unmove(_2)
        );
        return ((MR::StdFunction::E)_return);
    };
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignWithDataPtr(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int _1, MR_StdFunction_E *_2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = (_this ? *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    struct _functor
    {
        decltype(func) _func = nullptr;
        void *_userdata = nullptr;
        decltype(userdata_callback) _userdata_cb = nullptr;
    
        _functor(decltype(func) _func, void *_userdata, decltype(userdata_callback) _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}
    
        _functor(const _functor &_other) : _func(_other._func), _userdata_cb(_other._userdata_cb)
        {
            if (!_other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = _other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, _other._userdata);
        }
    
        _functor(_functor &&_other) noexcept : _func(_other._func), _userdata(_other._userdata), _userdata_cb(_other._userdata_cb)
        {
            _other._func = nullptr;
            _other._userdata = nullptr;
            _other._userdata_cb = nullptr;
        }
    
        _functor &operator=(const _functor &_other)
        {
            if (_userdata_cb && _userdata_cb != _other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.
            {
                _userdata_cb(&_userdata, nullptr);
                _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.
            }
            _func = _other._func;
            _userdata_cb = _other._userdata_cb;
            if (_other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.
                _userdata_cb(&_userdata, _other._userdata);
            else // Otherwise shallow-copy.
                _userdata = _other._userdata;
            return *this;
        }
    
        _functor &operator=(_functor &&_other) noexcept
        {
            _func = _other._func;
            _userdata = _other._userdata;
            _userdata_cb = _other._userdata_cb;
            _other._func = nullptr;
            _other._userdata = nullptr;
            _other._userdata_cb = nullptr;
            return *this;
        }
    
        ~_functor()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }
    
        auto operator()(int _1, MR::StdFunction::E _2) -> MR::StdFunction::E
        {
            decltype(auto) _return = _func(
                _1,
                (MR_StdFunction_E *)&mrbindc_details::unmove(_2),
                _userdata
            );
            return ((MR::StdFunction::E)_return);
        }
    };
    
    _self = _functor{func, userdata, userdata_callback};
}

