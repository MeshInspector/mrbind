#include "binding_containers.h"

namespace mrbind::CBindings
{
    ContainerBinder::ContainerBinder(Generator &generator, Params new_params)
        : params(std::move(new_params))
    {
        const auto &bindable_elem_type = generator.FindBindableType(params.cpp_elem_type);

        class_binder = HeapAllocatedClassBinder::ForCustomType(generator, params.cpp_container_type);

        // `bindable_elem_type.traits` is required to never be null, so if `.value()` throws here, this is an internal error.
        elem_traits = bindable_elem_type.traits.value();

        class_binder.traits.emplace();
        class_binder.traits->is_default_constructible = true;
        class_binder.traits->is_copy_constructible = elem_traits.is_copy_constructible;
        class_binder.traits->is_move_constructible = true;
        class_binder.traits->is_copy_assignable = elem_traits.is_copy_assignable;
        class_binder.traits->is_move_assignable = true;
        class_binder.traits->is_destructible = true;
        // All `containter_traits.is_trivial_...` are false.
        class_binder.traits->is_any_constructible = true;


        basic_output_file_name = cppdecl::ToString(params.cpp_container_type, cppdecl::ToStringFlags::identifier);
    }

    Generator::BindableType ContainerBinder::MakeBinding(Generator &generator)
    {
        Generator::BindableType ret;

        ret.traits = class_binder.traits;

        // Gotta copy the entire `*this` here because the lambda can outlive this instance (unless we force the user to be very careful about its lifetime, but that sounds too annoying).
        ret.bindable_with_same_address.declared_in_file = [*this, &generator]() -> auto & {return GetImplementationFile(generator);};
        ret.bindable_with_same_address.forward_declaration = class_binder.MakeForwardDeclaration();
        ret.bindable_with_same_address.custom_c_type_name = class_binder.c_type_name;

        ret.is_heap_allocated_class = true;

        ret.param_usage_with_default_arg = class_binder.MakeParamUsageSupportingDefaultArg(generator);
        ret.return_usage = class_binder.MakeReturnUsage();

        return ret;
    }

    Generator::OutputFile &ContainerBinder::GetImplementationFile(Generator &generator) const
    {
        bool is_new = false;

        assert(!basic_output_file_name.empty());
        Generator::OutputFile &file = generator.GetPublicHelperFile(basic_output_file_name, &is_new);

        if (is_new)
        {
            file.source.stdlib_headers.insert(params.stdlib_container_header);

            TryIncludeHeadersForCppTypeInSourceFile(generator, file, cppdecl::Type::FromQualifiedName(params.cpp_container_type));

            file.header.contents += "/// Generated from C++ container `" + cppdecl::ToCode(params.cpp_container_type, cppdecl::ToCodeFlags::canonical_c_style) + "`.\n";
            class_binder.EmitForwardDeclaration(file);
            class_binder.EmitPassByEnum(generator, file);

            // The 6 special member functions:

            if (class_binder.traits.value().is_default_constructible)
                generator.EmitFunction(file, class_binder.PrepareFuncDefaultCtor());
            if (class_binder.traits.value().is_move_constructible)
                generator.EmitFunction(file, class_binder.PrepareFuncCopyMoveCtor());
            if (class_binder.traits.value().is_move_assignable)
                generator.EmitFunction(file, class_binder.PrepareFuncCopyMoveAssignment());
            if (class_binder.traits.value().is_destructible)
                generator.EmitFunction(file, class_binder.PrepareFuncDestroy());

            // All the custom functions:

            {
                Generator::EmitFuncParams emit;
                emit.c_comment = "/// The number of elements.";
                emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Size");
                emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                emit.cpp_called_func = "@this@.size()";
                emit.cpp_called_func_parens = {};
                generator.EmitFunction(file, emit);
            }
        }

        return file;
    }
}
