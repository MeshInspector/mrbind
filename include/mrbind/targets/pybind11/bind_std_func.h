#pragma once

#include <functional>

// This is a separate file (from `bind_std.h`), because we're doing something sketchy.
// The default pybind11 behavior for `std::function`s is to wrap them in a scope guard that locks the Python's global interpreter lock.
// This is desirable for lambdas that come from Python, but IS NOT desirable for C++ lambdas that are just passed across Python.
//
// To fix this, we wrap `std::function` into our own class, that's convertible FROM Python's lambdas, but can also hold C++ lambdas as is,
// without pybind11 touching them.

namespace MRBind::detail::pb11
{
    template <typename F>
    struct FuncWrapper;

    template <typename R, typename ...P>
    struct FuncWrapper<R(P...)>
    {
        // If the return type would need reverse adjustment, this function can't possibly be created from python.
        // One such example are functions returning `std::unique_ptr`. (We can adjust `std::shared_ptr` to `std::unique_ptr` but not back,
        //   and if here `R == std::unique_ptr<__>`, trying to `.def()` a constructor causes a compilation error deep in pybind11.
        // We probably need a similar check for the parameter types, but it wasn't needed so far.
        static constexpr bool can_be_created_from_python = std::is_same_v<typename AdjustReturnType<R>::type, R>;

        std::function<R(P...)> underlying_func;
        bool holds_cpp_func = false; // If true, this is a C++ function. If false, this is a python function.

        FuncWrapper() {}
        FuncWrapper(std::nullptr_t) {}
        FuncWrapper(std::function<R(P...)> underlying_func, bool holds_cpp_func = false)
            : underlying_func(std::move(underlying_func)), holds_cpp_func(holds_cpp_func)
        {}

        [[nodiscard]] explicit operator bool() const {return bool(underlying_func);}

        //   Intentionally no `P &&...` in the parameters.
        //   Unsure if it'd always work correctly. It definitely doesn't work correctly when wrapping `std::function` in normal C++
        //   (if original function accepts by value, the wrapper would only accept rvalues).
        //   Our code would probably wrap it so that it implicitly copies and then moves the parameters into the rvalue references,
        //   but then what's the point of using `&&` in the first place, if we can just do `P ...params` with what seems to be the same effect?
        [[nodiscard]] decltype(auto) Call(P ...params) const
        {
            return underlying_func(std::forward<P>(params)...);
        }
    };

    // ---

    template <typename T> struct IsStdFunc : std::false_type {};
    template <typename T> struct IsStdFunc<std::function<T>> : std::true_type {using underlying_type = T;};

    // Adjust return values.
    // We don't handle returning lvalue references to functions correctly at the moment. What do we do about those?
    template <typename T> requires IsStdFunc<std::remove_cvref_t<T>>::value
    struct ReturnTypeAdjustment<T>
    {
        static auto Adjust(T &&value)
        {
            return FuncWrapper<typename IsStdFunc<std::remove_cvref_t<T>>::underlying_type>(std::forward<T>(value), true);
        }
    };

    // Adjust parameters.
    template <typename T> requires IsStdFunc<std::remove_cvref_t<T>>::value
    struct ParamTraitsLow<T>
    {
        // Replaces the parameter type in the wrapping lambda.
        using adjusted_param_type = FuncWrapper<typename IsStdFunc<std::remove_cvref_t<T>>::underlying_type>;

        // Unadjust the parameter type back to the original.
        static T UnadjustParam(adjusted_param_type &&wrapper)
        {
            return std::forward<adjusted_param_type>(wrapper).underlying_func;
        }
    };

    // ---

    // Bindings for our `FuncWrapper`.

    template <typename R, typename ...P>
    struct CustomTypeBinding<FuncWrapper<R(P...)>>
        : DefaultCustomTypeBinding<FuncWrapper<R(P...)>>,
        RegisterTypeWithCustomBindingIfApplicable<R, P...>
    {
        [[nodiscard]] static std::string pybind_type_name()
        {
            std::string ret = "func_" + ToPythonName(TypeidTypeName<R>());
            if constexpr (sizeof...(P) > 0)
            {
                ret += "_from";
                (void)(void((ret += '_', ret += ToPythonName(TypeidTypeName<P>()))), ...);
            }
            return ret;
        }

        template <bool InDerivedClass>
        static void bind_members(pybind11::module_ &, auto &c)
        {
            using TT = typename std::remove_reference_t<decltype(c.type)>::type;

            // Default constructor.
            c.type.def(pybind11::init<>());

            // Construct from None.
            c.type.def(pybind11::init<std::nullptr_t>());
            pybind11::implicitly_convertible<std::nullptr_t, FuncWrapper<R(P...)>>();

            // Copy constructor.
            if constexpr (pybind11::detail::is_copy_constructible<FuncWrapper<R(P...)>>::value)
            {
                c.type.def(pybind11::init<const FuncWrapper<R(P...)> &>());
                if constexpr (InDerivedClass)
                    pybind11::implicitly_convertible<FuncWrapper<R(P...)>, TT>();
            }

            // Conversion from a Python lambda.
            if constexpr (FuncWrapper<R(P...)>::can_be_created_from_python)
            {
                c.type.def(pybind11::init([](std::function<R(P...)> f){return FuncWrapper<R(P...)>(std::move(f));}));
                pybind11::implicitly_convertible<std::function<R(P...)>, FuncWrapper<R(P...)>>();
            }

            if constexpr (!InDerivedClass)
            {
                pybind11::function x;


                // Convert to bool.
                c.type.def("__bool__", &FuncWrapper<R(P...)>::operator bool);

                c.type.def("can_be_created_from_python", [](const FuncWrapper<R(P...)> &f){return f.can_be_created_from_python;}, "If false, this function type can't hold a Python function, and can only be created from C++.");
                c.type.def("holds_cpp_function", [](const FuncWrapper<R(P...)> &f){return f.holds_cpp_func;}, "Does this object currentlyhold a C++ function? As opposed to a Python one.");

                TryAddFunc<
                    // Static?
                    false,
                    // Function.
                    &FuncWrapper<R(P...)>::Call,
                    // Return type name.
                    //   `""` means "please don't add a typedef wrapper here".
                    "",
                    // Parameters:
                    //   `""` means "please don't add a typedef wrapper here".
                    ParamInfo<const FuncWrapper<R(P...)> &, "">, // `this`
                    ParamInfo<P, "">...
                >(
                    c.type,
                    "__call__",
                    "__call__"
                );
            }
        }
    };
}
