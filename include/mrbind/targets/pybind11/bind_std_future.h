#pragma once

// std::future
#include <future>
template <typename T>
struct MRBind::pb11::CustomTypeBinding<std::shared_future<T>>
    : DefaultCustomTypeBinding<std::shared_future<T>>,
    RegisterTypesWithCustomBindingIfApplicable<T>
{
    [[nodiscard]] static std::string cpp_type_name()
    {
        return "future<" + TypeidTypeName<T>() + '>'; // Don't want it to be called `shared_future`.
    }

    static void bind_members(typename DefaultCustomTypeBinding<std::shared_future<T>>::pybind_type &c)
    {
        c.def(pybind11::init<>());

        c.def(+"__bool__", +[](const std::shared_future<T> &f){return f.valid();}, +"If this is false, the object is null and `.get()` will throw.");

        c.def(+"ready",
            +[](const std::shared_future<T> &f) -> bool
            {
                return f.valid() && f.wait_for(std::chrono::seconds(0)) != std::future_status::timeout;
            },
            +"If this returns true, the result is ready and `.get()` will return immediately without blocking."
        );

        TryAddFuncSimple<
            FuncKind::member_nonstatic,
            +[](const std::shared_future<T> &f) -> const auto &
            {
                if (!f.valid())
                    throw std::runtime_error("Called `.get()` on an empty future.");
                return f.get();
            },
            [](auto f){f(+"Retrurns the result. Throws if not `.valid()`. Blocks if not `.ready()` yet.");},
            const std::shared_future<T> &
        >(
            c,
            "get"
        );
    }
};

// Adjust `std::future` to `std::shared_future`.
// This is purely because it has a nicer API (`.get()` can be called multiple times).
template <typename T>
struct MRBind::pb11::ReturnTypeTraits<std::future<T>>
    : RegisterTypesWithCustomBindingIfApplicable<std::shared_future<T>>
{
    static std::shared_future<T> Adjust(std::future<T> &&value)
    {
        return std::move(value);
    }
};
