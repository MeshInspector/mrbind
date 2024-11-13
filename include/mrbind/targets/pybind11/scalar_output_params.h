#pragma once

#include <type_traits>
#include <vector>

// This wraps non-const-reference-to-scalar parameters in classes named e.g. `int_output` for `int &`.
// Otherwise those references don't work properly, the changes to them aren't visible to the caller.

namespace MRBind::pb11
{
    template <typename T>
    concept ValidTargetForScalarOutputParam = std::is_arithmetic_v<T> && !std::is_const_v<T>;

    template <ValidTargetForScalarOutputParam T>
    struct ScalarOutputParam
    {
        std::vector<T> values{};

        ScalarOutputParam() : ScalarOutputParam(1) {}
        ScalarOutputParam(std::size_t size, T value = 0) : values(size, value) {}
    };


    template <ValidTargetForScalarOutputParam T>
    struct ParamTraits<T &>
    {
        using adjusted_param_type = ScalarOutputParam<T> &;

        static T &UnadjustParam(adjusted_param_type object)
        {
            if (object.values.size() != 1)
                throw std::runtime_error("Expected the output parameter size to be exactly 1.");
            return object.values.front();
        }
    };

    template <ValidTargetForScalarOutputParam T>
    struct ParamTraits<T *>
    {
        using adjusted_param_type = ScalarOutputParam<T> *; // This must be a pointer and not a reference to be able to accept null.

        static T *UnadjustParam(adjusted_param_type object)
        {
            return object ? object->values.data() : nullptr;
        }
    };
    // Const ref to pointer. This can happen in some generated functions such as the constructors created by `TryAddAggregateCtor(...)`.
    template <ValidTargetForScalarOutputParam T>
    struct ParamTraits<T *const &>
    {
        using adjusted_param_type = ScalarOutputParam<T> *; // This must be a pointer and not a reference to be able to accept null.
        using unadjust_param_extra_param = T *; // We need some juggling to get a reference.

        static T *const & UnadjustParam(adjusted_param_type object, unadjust_param_extra_param &&extra)
        {
            return extra = object ? object->values.data() : nullptr;
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

            // Construct from the size.
            c.def(pybind11::init<std::size_t>());
            // Construct from the size and value.
            c.def(pybind11::init<std::size_t, T>());

            // This causes a runtime error: `ImportError: implicitly_convertible: Unable to find type ...`.
            // Apparently this can only convert to non-builtin types.
            // pybind11::implicitly_convertible<ScalarOutputParam<T>, T>();

            // And the reverse implicit conversion isn't desired, because we don't want to be able to call `foo(int &)` as `foo(42)`.

            // Bind the member.
            c.def_readwrite("values", &ScalarOutputParam<T>::values);

            c.doc() =
                "A helper class containing a list of scalars. This is used for functions with scalar output parameters.\n"
                "NOTE: If a function outputs an array, you must manually resize this to the correct size or risk undefined behavior.";

            c.def(
                "value",
                [](const ScalarOutputParam<T> &v)
                {
                    if (v.values.size() != 1)
                        throw std::runtime_error("Expected exactly one value.");
                    return v.values.front();
                },
                "If the list contains exactly one value, returns it. Otherwise throws."
            );

            c.def(
                "__repr__",
                [](const ScalarOutputParam<T> &v)
                {
                    static const std::string prefix = ToPythonName(CustomTypeBinding::cpp_type_name()) + "[";
                    std::string ret = prefix;
                    for (std::size_t i = 0; i < v.values.size(); i++)
                    {
                        if (i != 0)
                            ret += ", ";
                        ret += std::to_string(v.values[i]);
                    }
                    ret += ']';
                    return ret;
                }
            );
        }
    };
}
