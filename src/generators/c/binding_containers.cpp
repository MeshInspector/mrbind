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

            { // size
                Generator::EmitFuncParams emit;
                emit.c_comment = "/// The number of elements.";
                emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Size");
                emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                emit.cpp_called_func = "size";
                generator.EmitFunction(file, emit);
            }

            { // empty
                Generator::EmitFuncParams emit;
                emit.c_comment = "/// Returns true if the size is zero.";
                emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_IsEmpty");
                emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                emit.cpp_called_func = "empty";
                generator.EmitFunction(file, emit);
            }

            if (params.has_resize)
            {
                { // resize
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Resizes the container. The new elements if any are zeroed.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Resize");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_size",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });
                    emit.cpp_called_func = "resize";
                    generator.EmitFunction(file, emit);
                }
            }

            { // clear
                Generator::EmitFuncParams emit;
                emit.c_comment = "/// Removes all elements from the container.";
                emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Clear");
                emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                emit.cpp_called_func = "clear";
                generator.EmitFunction(file, emit);
            }

            if (params.has_capacity)
            {
                { // capacity
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The memory capacity, measued in the number of elements.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Capacity");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "capacity";
                    generator.EmitFunction(file, emit);
                }

                { // reserve
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Reserves memory for a certain number of elements. Never shrinks the memory.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Reserve");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_capacity",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });
                    emit.cpp_called_func = "reserve";
                    generator.EmitFunction(file, emit);
                }

                { // shrink_to_fit
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Shrinks the capacity to match the size.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_ShrinkToFit");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "shrink_to_fit";
                    generator.EmitFunction(file, emit);
                }
            }

            if (params.has_index_access)
            {
                // Here we only bind the throwing versions, i.e. `.at()`.
                // For no particualr reason. This feels nicer.

                { // [] const
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The element at a specific index, read-only.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_At");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.params.push_back({
                        .name = "i",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });
                    emit.cpp_called_func = "at";
                    generator.EmitFunction(file, emit);
                }

                { // [] mutable
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The element at a specific index, mutable.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_MutableAt");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddModifier(cppdecl::Reference{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "i",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });
                    emit.cpp_called_func = "at";
                    generator.EmitFunction(file, emit);
                }
            }

            if (params.has_front_back)
            {
                { // front const
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The first element or null if empty, read-only.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Front");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "@this@.empty() ? &@this@.front() : nullptr";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                { // front mutable
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The first element or null if empty, mutable.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_MutableFront");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "@this@.empty() ? &@this@.front() : nullptr";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                { // back const
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The last element or null if empty, read-only.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Back");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "@this@.empty() ? &@this@.back() : nullptr";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                { // back mutable
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The last element or null if empty, mutable.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_MutableBack");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "@this@.empty() ? &@this@.back() : nullptr";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }
            }

            if (params.has_data_ptr && elem_traits.same_size_in_c_and_cpp)
            {
                { // data const
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, read-only.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_Data");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }

                { // data mutable
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, mutable.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_MutableData");
                    emit.cpp_return_type = cppdecl::Type(params.cpp_elem_type).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }
            }

            if (params.has_push_back)
            {
                { // push_back
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Inserts a new element at the end.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_PushBack");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_elem",
                        .cpp_type = params.cpp_elem_type
                    });
                    emit.cpp_called_func = "push_back";
                    generator.EmitFunction(file, emit);
                }

                { // pop_back
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Removes one element from the end.";
                    emit.c_name = generator.MakePublicHelperName(class_binder.basic_c_name + "_PopBack");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "pop_back";
                    generator.EmitFunction(file, emit);
                }
            }
        }

        return file;
    }
}
