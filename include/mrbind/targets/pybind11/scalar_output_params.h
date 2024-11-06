#pragma once

#include <type_traits>

// This wraps non-const-reference-to-scalar parameters in classes named e.g. `int_output` for `int &`.
// Otherwise those references don't work properly, the changes to them aren't visible to the caller.

namespace MRBind::pb11
{
    template <typename T>
    concept ValidTargetForScalarOutputParam = std::is_arithmetic_v<T> && !std::is_const_v<T>;

    template <ValidTargetForScalarOutputParam T>
    struct ScalarOutputParam
    {
        T value{};

        ScalarOutputParam() {}
        ScalarOutputParam(T value) : value(std::move(value)) {}
    };


    template <ValidTargetForScalarOutputParam T>
    struct ParamTraits<T &>
    {
        using adjusted_param_type = ScalarOutputParam<T> &;

        static T &UnadjustParam(adjusted_param_type object)
        {
            return object.value;
        }
    };

    template <ValidTargetForScalarOutputParam T>
    struct ParamTraits<T *>
    {
        using adjusted_param_type = ScalarOutputParam<T> *; // This must be a pointer and not a reference to be able to accept null.

        static T *UnadjustParam(adjusted_param_type object)
        {
            return object ? &object->value : nullptr;
        }
    };


    template <typename T>
    struct CustomTypeBinding<ScalarOutputParam<T>> : DefaultCustomTypeBinding<ScalarOutputParam<T>>, RegisterTypesWithCustomBindingIfApplicable<T>
    {
        [[nodiscard]] static std::string cpp_type_name()
        {
            return TypeidTypeName<T>() + "::output";
        }

        static void bind_members(typename DefaultCustomTypeBinding<ScalarOutputParam<T>>::pybind_type &c)
        {
            // Default constructor.
            c.def(pybind11::init<>());

            // Construct from the value.
            c.def(pybind11::init<T>());

            // This causes a runtime error: `ImportError: implicitly_convertible: Unable to find type ...`.
            // Apparently this can only convert to non-builtin types.
            // pybind11::implicitly_convertible<ScalarOutputParam<T>, T>();

            // And the reverse implicit conversion isn't desired, because we don't want to be able to call `foo(int &)` as `foo(42)`.

            // Bind the member.
            c.def_readwrite("value", &ScalarOutputParam<T>::value);

            c.doc() = "A helper class containing a single scalar. This is used for functions with scalar output parameters.";

            c.def(
                "__repr__",
                [](const ScalarOutputParam<T> &v)
                {
                    static const std::string prefix = ToPythonName(CustomTypeBinding::cpp_type_name()) + "(";
                    return prefix + std::to_string(v.value) + ')';
                }
            );
        }
    };
}
