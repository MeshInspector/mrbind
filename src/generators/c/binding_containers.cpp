#include "binding_containers.h"

#include <stdexcept>

namespace mrbind::CBindings
{
    ContainerBinder::ContainerBinder(
        Generator &generator,
        cppdecl::QualifiedName new_cpp_container_type,
        cppdecl::Type new_cpp_elem_type,
        cppdecl::Type new_cpp_mapped_elem_type,
        std::string stdlib_container_header,
        Params new_params
    )
        : cpp_container_type(std::move(new_cpp_container_type)),
        cpp_elem_type(std::move(new_cpp_elem_type)),
        cpp_mapped_elem_type(std::move(new_cpp_mapped_elem_type)),
        stdlib_container_header(stdlib_container_header),
        params(std::move(new_params))
    {
        if (params.is_map > !cpp_mapped_elem_type.IsEmpty())
            throw std::logic_error("Internal error: Bad usage: Trying to bind a map-like container, but the mapped type is not specified.");
        if (params.is_map < !cpp_mapped_elem_type.IsEmpty())
            throw std::logic_error("Internal error: Bad usage: Trying to bind a non-map-like container, but the mapped type is still specified.");
        if (params.is_set && params.is_map)
            throw std::logic_error("Internal error: Bad usage: Binding a container that has both `is_set` and `is_map` flags set.");
        if (params.is_multi && !params.is_set && !params.is_map)
            throw std::logic_error("Internal error: Bad usage: Binding a container that has the `is_multi` flag set, but no `is_set` and no `is_map`.");

        class_binder = HeapAllocatedClassBinder::ForCustomType(generator, cpp_container_type);

        // `bindable_elem_type.traits` is required to never be null, so if `.value()` throws here, this is an internal error.
        elem_traits = generator.FindTypeTraits(cpp_elem_type);
        mapped_elem_traits = params.is_map ? generator.FindTypeTraits(cpp_mapped_elem_type) : elem_traits;

        class_binder.traits.emplace();
        class_binder.traits->is_default_constructible = true;
        class_binder.traits->is_copy_constructible = elem_traits.is_copy_constructible && mapped_elem_traits.is_copy_constructible;
        class_binder.traits->is_move_constructible = true;
        class_binder.traits->is_copy_assignable = elem_traits.is_copy_assignable && mapped_elem_traits.is_copy_assignable;
        class_binder.traits->is_move_assignable = true;
        class_binder.traits->is_destructible = true;
        // All `is_trivial_...` traits are false.
        class_binder.traits->is_any_constructible = true;

        basic_output_file_name = generator.CppdeclToIdentifier(cpp_container_type);

        if (!params.is_map)
        {
            // This is fairly conservative, should be good enough for now. We can allow more types later.
            supports_range_assignment = generator.FieldTypeUsableInSameLayoutStruct(cpp_elem_type);
        }

        // Create the iterator binders.
        // Notably different standard containers can have overlapping iterator types, so we have to be really careful here.
        // What we do is we force specific underlying type name for the iterators, IF their normal name is known to be an alternative spelling of something else.
        // If not, then we let the underlying name match the public one.
        cppdecl::QualifiedName iterator_name = cpp_container_type;
        iterator_name.parts.emplace_back("iterator");
        auto iter = generator.type_alt_spelling_to_canonical.find(generator.CppdeclToCode(iterator_name));
        iterator_binder_mutable = HeapAllocatedClassBinder::ForCustomType(generator, iterator_name, {}, iter != generator.type_alt_spelling_to_canonical.end() ? generator.CppdeclToIdentifier(iter->second) : "");
        iterator_binder_mutable.traits = Generator::TypeTraits::CopyableNonTrivialButCheap{};
        iterator_name.parts.back().var = "const_iterator";
        iter = generator.type_alt_spelling_to_canonical.find(generator.CppdeclToCode(iterator_name));
        iterator_binder_const = HeapAllocatedClassBinder::ForCustomType(generator, iterator_name, {}, iter != generator.type_alt_spelling_to_canonical.end() ? generator.CppdeclToIdentifier(iter->second) : "");
        iterator_binder_const.traits = Generator::TypeTraits::CopyableNonTrivialButCheap{};
    }

    Generator::BindableType ContainerBinder::MakeBinding(Generator &generator)
    {
        Generator::BindableType ret;
        class_binder.FillCommonParams(generator, ret);

        // Gotta copy the entire `*this` here because the lambda can outlive this instance (unless we force the user to be very careful about its lifetime, but that sounds too annoying).
        ret.bindable_with_same_address.declared_in_file = [*this, &generator]() -> auto & {return GetImplementationFile(generator);};

        return ret;
    }

    Generator::BindableType ContainerBinder::MakeIteratorBinding(Generator &generator, bool is_const)
    {
        Generator::BindableType ret;

        auto &binder = is_const ? iterator_binder_const : iterator_binder_mutable;
        binder.FillCommonParams(generator, ret);

        ret.bindable_with_same_address.declared_in_file = [*this, &generator]() -> auto & {return GetImplementationFile(generator);};

        return ret;
    }

    Generator::OutputFile &ContainerBinder::GetImplementationFile(Generator &generator) const
    {
        bool is_new = false;

        assert(!basic_output_file_name.empty());
        Generator::OutputFile &file = *generator.GetPublicHelperFile(basic_output_file_name, &is_new);

        if (is_new)
        {
            if (!stdlib_container_header.empty())
                file.source.stdlib_headers.insert(stdlib_container_header);

            generator.TryFindHeadersForCppTypeForSourceFile(cppdecl::Type::FromQualifiedName(cpp_container_type)).InsertToFile(file);

            class_binder.EmitForwardDeclaration(generator, file, "/// Generated from C++ container `" + generator.CppdeclToCodeForComments(cpp_container_type) + "`.\n");
            iterator_binder_const.EmitForwardDeclaration(generator, file, "/// Read-only iterator for `" + class_binder.c_type_name + "`.\n");
            if (params.has_mutable_iterators)
                iterator_binder_mutable.EmitForwardDeclaration(generator, file, "/// Mutable iterator for `" + class_binder.c_type_name + "`.\n");

            // The special member functions:
            class_binder.EmitSpecialMemberFunctions(generator, file);

            // All the custom functions:

            { // The container itself.
                if (supports_range_assignment)
                {
                    { // Construct from range
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Construct from a range of elements.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "ConstructFromRange", CInterop::MethodKinds::Constructor{});
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name);
                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{}),
                        });
                        emit.params.push_back({
                            .name = "size",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });
                        emit.cpp_called_func = generator.CppdeclToCode(class_binder.cpp_type_name) + "(@1@, @1@ + @2@)";
                        generator.EmitFunction(file, emit);
                    }

                    { // Assign from range
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Assign from a range of elements, overwriting previous contents.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "AssignFromRange", CInterop::MethodKinds::Operator{.token = "="});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{}),
                        });
                        emit.params.push_back({
                            .name = "size",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });
                        // Not all containers have the `.assign()` method, so instead use the normal assignment.
                        emit.cpp_called_func = "@this@ = " + generator.CppdeclToCode(class_binder.cpp_type_name) + "(@1@, @1@ + @2@)";
                        generator.EmitFunction(file, emit);
                    }
                }

                { // size
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The number of elements.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "Size");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "size";
                    generator.EmitFunction(file, emit);
                }

                { // empty
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns true if the size is zero.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "IsEmpty");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "empty";
                    generator.EmitFunction(file, emit);
                }

                // resize
                if (params.has_resize && elem_traits.is_default_constructible)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Resizes the container. The new elements if any are zeroed.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "Resize");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_size",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });
                    emit.cpp_called_func = "resize";
                    generator.EmitFunction(file, emit);
                }

                // resize with default value
                if (
                    params.has_resize && elem_traits.is_copy_constructible &&
                    // libstdc++ (last tested on 15) is bugged and requires the element type to be assignable for this function, for vectors: https://gcc.gnu.org/bugzilla/show_bug.cgi?id=121348
                    (params.insert_requires_assignment <= elem_traits.is_move_assignable)
                )
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Resizes the container. The new elements if any are set to the specified value.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "ResizeWithDefaultValue");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);

                    emit.params.push_back({
                        .name = "new_size",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });

                    emit.params.push_back({
                        .name = "value",
                        .cpp_type = cppdecl::Type(cpp_elem_type),
                    });
                    // If the type looks expensive to pass, pass it by a const ref instead of by value.
                    if (!generator.IsSimplyBindableDirectCast(cpp_elem_type))
                        emit.params.back().cpp_type.AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{});

                    emit.cpp_called_func = "resize";
                    generator.EmitFunction(file, emit);
                }

                { // clear
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Removes all elements from the container.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "Clear");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "clear";
                    emit.lifetimes.OverwritesObject();
                    generator.EmitFunction(file, emit);
                }

                // Capacity-related functions.
                if (params.has_capacity)
                {
                    { // capacity
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The memory capacity, measued in the number of elements.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Capacity");
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "capacity";
                        generator.EmitFunction(file, emit);
                    }

                    { // reserve
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Reserves memory for a certain number of elements. Never shrinks the memory.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Reserve");
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
                        emit.name = class_binder.MakeMemberFuncName(generator, "ShrinkToFit");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "shrink_to_fit";
                        generator.EmitFunction(file, emit);
                    }
                }

                // Index access.
                if (params.iter_category >= IteratorCategory::random_access)
                {
                    // Here we only bind the throwing versions, i.e. `.at()`.
                    // For no particualr reason. This feels nicer.

                    { // [] const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The element at a specific index, read-only.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "At", CInterop::MethodKinds::Operator{.token = "[]"});
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{});
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
                        emit.name = class_binder.MakeMemberFuncName(generator, "MutableAt", CInterop::MethodKinds::Operator{.token = "[]"});
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Reference{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "i",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });
                        emit.cpp_called_func = "at";
                        generator.EmitFunction(file, emit);
                    }
                }

                // Map element access. Note that multimaps don't have a subscript operator.
                if (params.is_map && !params.is_multi)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "FindOrConstructElem");
                    emit.lifetimes.ReturnsReferenceToThis();
                    emit.cpp_return_type = cppdecl::Type(cpp_mapped_elem_type).AddModifier(cppdecl::Reference{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "key",
                        .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
                    });
                    emit.cpp_called_func = "@this@[@1@]";
                    generator.EmitFunction(file, emit);
                }

                // Common map and set operations.
                if (params.is_map || params.is_set)
                {
                    { // contains or count
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Checks if the contain contains this key.";
                        emit.name = class_binder.MakeMemberFuncName(generator, (params.is_multi ? "Count" : "Contains"));
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord(params.is_multi ? "size_t" : "bool");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.params.push_back({
                            .name = "key",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
                        });
                        emit.cpp_called_func = params.is_multi ? "count" : "contains";
                        generator.EmitFunction(file, emit);
                    }

                    { // find, const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Find");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(iterator_binder_const.cpp_type_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.params.push_back({
                            .name = "key",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
                            .reference_returned = true,
                        });
                        emit.cpp_called_func = "find";
                        generator.EmitFunction(file, emit);
                    }

                    // find, mutable
                    if (params.has_mutable_iterators)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "FindMutable", "Find");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(iterator_binder_mutable.cpp_type_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "key",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
                            .reference_returned = true,
                        });
                        emit.cpp_called_func = "find";
                        generator.EmitFunction(file, emit);
                    }
                }

                // Front and back accessors.
                if (params.has_front_back)
                {
                    { // front const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The first element or null if empty, read-only.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Front");
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "@this@.empty() ? nullptr : &@this@.front()";
                        generator.EmitFunction(file, emit);
                    }

                    { // front mutable
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The first element or null if empty, mutable.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "MutableFront", "Front");
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@.empty() ? nullptr : &@this@.front()";
                        generator.EmitFunction(file, emit);
                    }

                    { // back const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The last element or null if empty, read-only.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Back");
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "@this@.empty() ? nullptr : &@this@.back()";
                        generator.EmitFunction(file, emit);
                    }

                    { // back mutable
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The last element or null if empty, mutable.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "MutableBack", "Back");
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@.empty() ? nullptr : &@this@.back()";
                        generator.EmitFunction(file, emit);
                    }
                }

                // The data pointer.
                if (params.iter_category >= IteratorCategory::contiguous && (!params.is_map && generator.FindSameSizeAndAlignmentOpt(cpp_elem_type)))
                {
                    { // data const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, read-only.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Data");
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                        emit.mark_as_returning_pointer_to_array = true;
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "data";
                        generator.EmitFunction(file, emit);
                    }

                    { // data mutable
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, mutable.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "MutableData", "Data");
                        emit.lifetimes.ReturnsReferenceToThis();
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
                        emit.mark_as_returning_pointer_to_array = true;
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "data";
                        generator.EmitFunction(file, emit);
                    }
                }

                // `{push,pop}_{back,front}`
                for (bool is_front : {false, true})
                {
                    if (!(is_front ? params.has_push_front : params.has_push_back))
                        continue;

                    // Check assignability requirements.
                    if ((is_front ? params.push_front_requires_assignment : params.push_back_requires_assignment) && !elem_traits.is_move_assignable)
                        continue;

                    const std::string end_or_beginning = is_front ? "beginning" : "end";
                    const std::string back_or_front_in_c_name = is_front ? "Front" : "Back";
                    const std::string back_or_front_in_cpp_name = is_front ? "front" : "back";

                    { // push_back, push_front
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Inserts a new element at the " + end_or_beginning + ".";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Push" + back_or_front_in_c_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "new_elem",
                            .cpp_type = cpp_elem_type,
                            .reference_appended = true,
                        });
                        emit.cpp_called_func = "push_" + back_or_front_in_cpp_name;
                        generator.EmitFunction(file, emit);
                    }

                    { // pop_back, pop_front
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Removes one element from the " + end_or_beginning + ".";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Pop" + back_or_front_in_c_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "pop_" + back_or_front_in_cpp_name;
                        generator.EmitFunction(file, emit);
                    }
                }

                // insert, without the iterator parameter
                // Checking `insert_requires_assignment` here for consistency, but I don't think it matters right now.
                if (params.is_set && !params.is_map && (params.insert_requires_assignment <= elem_traits.is_move_assignable))
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Inserts a new element.";
                    emit.name = class_binder.MakeMemberFuncName(generator, "Insert");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_elem",
                        .cpp_type = cpp_elem_type,
                        .reference_appended = true,
                    });
                    emit.cpp_called_func = "insert";
                    generator.EmitFunction(file, emit);
                }

                // insert and erase at index
                if (params.iter_category >= IteratorCategory::random_access && (params.insert_requires_assignment <= elem_traits.is_move_assignable))
                {
                    { // insert
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Inserts a new element right before the specified position.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Insert");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "position",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });
                        emit.params.push_back({
                            .name = "new_elem",
                            .cpp_type = cpp_elem_type,
                            .reference_appended = true,
                        });
                        emit.cpp_called_func = "@this@.insert(@this@.begin() + ptrdiff_t(@1@), @2@)";
                        generator.EmitFunction(file, emit);
                    }

                    { // erase
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Erases the element at the specified position.";
                        emit.name = class_binder.MakeMemberFuncName(generator, "Erase");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "position",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });
                        emit.cpp_called_func = "@this@.erase(@this@.begin() + ptrdiff_t(@1@))";
                        generator.EmitFunction(file, emit);
                    }
                }

                // insert and erase at iterator
                // We could omit those when dealing with random-access containers, but let's keep them for consistency with other containers.
                // We also disable them for maps, because for maps we hide the underlying pairs.
                // And we also disable them for sets, because there the iterator acts merely as an insertion hint, and we don't expose those hints to C.
                if (!params.is_set && !params.is_map && (params.insert_requires_assignment <= elem_traits.is_move_assignable))
                {
                    for (bool is_const_iter : {false, true})
                    {
                        if (!is_const_iter && !params.has_mutable_iterators)
                            continue;

                        const std::string mut_or_const_str = is_const_iter ? "const" : "mutable";
                        const std::string at_str = is_const_iter ? "Iter" : "MutableIter";
                        const std::string constness_disclaimer = is_const_iter ? " This version takes the position in form of a const iterator, that's the only difference." : "";
                        auto &this_iter_binder = is_const_iter ? iterator_binder_const : iterator_binder_mutable;

                        { // insert
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Inserts a new element right before the specified position." + constness_disclaimer;
                            emit.name = class_binder.MakeMemberFuncName(generator, "InsertAt" + at_str);
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "position",
                                .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name),
                            });
                            emit.params.push_back({
                                .name = "new_elem",
                                .cpp_type = cpp_elem_type,
                                .reference_appended = true,
                            });
                            emit.cpp_called_func = "insert";
                            generator.EmitFunction(file, emit);
                        }

                        { // erase
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Erases the element at the specified position." + constness_disclaimer;
                            emit.name = class_binder.MakeMemberFuncName(generator, "EraseAt" + at_str);
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "position",
                                .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name),
                            });
                            emit.cpp_called_func = "erase";
                            generator.EmitFunction(file, emit);
                        }
                    }
                }

                // Obtaining begin/end iterators:
                for (bool is_end : {false, true})
                {
                    std::string begin_or_end_str = is_end ? "end" : "begin";
                    std::string begin_or_end_method_name = is_end ? "End" : "Begin";

                    for (bool is_const_iter : {true, false})
                    {
                        if (!is_const_iter && !params.has_mutable_iterators)
                            continue;

                        const std::string mut_or_const_str = is_const_iter ? "const" : "mutable";
                        const std::string mut_or_const_name = is_const_iter ? "" : "Mutable";
                        const std::string c_or_empty = is_const_iter ? "c" : "";
                        auto &this_iter_binder = is_const_iter ? iterator_binder_const : iterator_binder_mutable;

                        { // get
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// The " + begin_or_end_str + " iterator, " + mut_or_const_str + ".";
                            emit.name = class_binder.MakeMemberFuncName(generator, mut_or_const_name + begin_or_end_method_name, begin_or_end_method_name);
                            emit.lifetimes.ReturnsReferenceToThis();
                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name);
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), is_const_iter);
                            emit.cpp_called_func = c_or_empty + begin_or_end_str;
                            generator.EmitFunction(file, emit);
                        }

                        { // compare
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Tests whether a " + mut_or_const_str + " iterator is the " + begin_or_end_str + " iterator.";
                            emit.name = class_binder.MakeMemberFuncName(generator, "Is" + mut_or_const_name + begin_or_end_method_name, "Is" + begin_or_end_method_name);
                            emit.lifetimes.ReturnsReferenceToThis();
                            emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), is_const_iter);
                            emit.params.push_back({
                                .name = "iter",
                                .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
                            });
                            emit.cpp_called_func = "@this@." + c_or_empty + begin_or_end_str + "() == @1@";
                            generator.EmitFunction(file, emit);
                        }
                    }
                }

                // iterator to index
                if (params.iter_category >= IteratorCategory::random_access)
                {
                    for (bool is_const_iter : {true, false})
                    {
                        if (!is_const_iter && !params.has_mutable_iterators)
                            continue;

                        const std::string mut_or_const_str = is_const_iter ? "const" : "mutable";
                        auto &this_iter_binder = is_const_iter ? iterator_binder_const : iterator_binder_mutable;

                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Convert a " + mut_or_const_str + " iterator to an index.";
                        emit.name = class_binder.MakeMemberFuncName(generator, std::string(is_const_iter ? "" : "Mutable") + "ToIndex", "ToIndex");
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("ptrdiff_t");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.params.push_back({
                            .name = "iter",
                            .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name)
                        });
                        emit.cpp_called_func = "@1@ - @this@." + std::string(is_const_iter ? "c" : "") + "begin()";
                        generator.EmitFunction(file, emit);
                    }
                }
            }

            { // Iterators
                iterator_binder_const.EmitSpecialMemberFunctions(generator, file);

                if (params.has_mutable_iterators)
                {
                    { // Construct the const iterator from a mutable one.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Makes a const iterator from a mutable one.";
                        emit.name = iterator_binder_const.MakeMemberFuncName(generator, "FromMutable", CInterop::MethodKinds::Constructor{});
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(iterator_binder_const.cpp_type_name);
                        emit.params.push_back({
                            .name = "iter",
                            .cpp_type = cppdecl::Type::FromQualifiedName(iterator_binder_mutable.cpp_type_name),
                        });
                        emit.cpp_called_func = generator.CppdeclToCode(iterator_binder_mutable.cpp_type_name);
                        generator.EmitFunction(file, emit);
                    }

                    iterator_binder_mutable.EmitSpecialMemberFunctions(generator, file);
                }

                for (bool is_const_iter : {true, false})
                {
                    if (!is_const_iter && !params.has_mutable_iterators)
                        continue;

                    const std::string mut_or_const_str = is_const_iter ? "const" : "mutable";
                    auto &this_iter_binder = is_const_iter ? iterator_binder_const : iterator_binder_mutable;


                    // dereference
                    if (!params.is_map)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Dereferences a " + mut_or_const_str + " iterator.";
                        emit.name = this_iter_binder.MakeMemberFuncName(generator, "Deref");
                        emit.lifetimes.ReturnsReferenceToTargetOfThis(); // The iterator keeps the container alive, and we want to keep it alive too.
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_ * is_const_iter).AddModifier(cppdecl::Reference{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), true);
                        emit.cpp_called_func = "*@this@";
                        generator.EmitFunction(file, emit);
                    }

                    // dereference, separately to a key and a value
                    if (params.is_map)
                    {
                        { // key
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Dereferences a " + mut_or_const_str + " iterator, returning the key.";
                            emit.name = this_iter_binder.MakeMemberFuncName(generator, "DerefKey");
                            emit.lifetimes.ReturnsReferenceToTargetOfThis(); // The iterator keeps the container alive, and we want to keep it alive too.
                            emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{});
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), true);
                            emit.cpp_called_func = "@this@->first";
                            generator.EmitFunction(file, emit);
                        }

                        { // value
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Dereferences a " + mut_or_const_str + " iterator, returning the mapped value.";
                            emit.name = this_iter_binder.MakeMemberFuncName(generator, "DerefValue");
                            emit.lifetimes.ReturnsReferenceToTargetOfThis(); // The iterator keeps the container alive, and we want to keep it alive too.
                            emit.cpp_return_type = cppdecl::Type(cpp_mapped_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_ * is_const_iter).AddModifier(cppdecl::Reference{});
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), true);
                            emit.cpp_called_func = "@this@->second";
                            generator.EmitFunction(file, emit);
                        }
                    }

                    { // increment
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Increments a " + mut_or_const_str + " iterator.";
                        emit.name = this_iter_binder.MakeMemberFuncName(generator, "Incr");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), false);
                        emit.cpp_called_func = "++@this@";
                        generator.EmitFunction(file, emit);
                    }

                    // decrement
                    if (params.iter_category >= IteratorCategory::bidirectional)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Decrements a " + mut_or_const_str + " iterator.";
                        emit.name = this_iter_binder.MakeMemberFuncName(generator, "Decr");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), false);
                        emit.cpp_called_func = "--@this@";
                        generator.EmitFunction(file, emit);
                    }

                    // add number
                    if (params.iter_category >= IteratorCategory::random_access)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Increments or decrements a " + mut_or_const_str + " iterator by the specific amount. Completes in constant time.";
                        emit.name = this_iter_binder.MakeMemberFuncName(generator, "OffsetBy");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "delta",
                            .cpp_type = cppdecl::Type::FromSingleWord("ptrdiff_t"),
                        });
                        emit.cpp_called_func = "@this@ += @1@";
                        generator.EmitFunction(file, emit);
                    }

                    // subtract two iterators
                    if (params.iter_category >= IteratorCategory::random_access)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Computes the signed difference between two " + mut_or_const_str + " iterators. Completes in constant time.";
                        emit.name = this_iter_binder.MakeMemberFuncName(generator, "Distance");
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("ptrdiff_t");
                        // Add a dummy parameter to indicate to the interop that this is effectively a static member function.
                        emit.params.push_back({
                            .name = "",
                            .kind = Generator::EmitFuncParams::Param::Kind::static_,
                            .omit_from_call = true,
                            .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name),
                        });
                        emit.params.push_back({
                            .name = "a",
                            .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name),
                        });
                        emit.params.push_back({
                            .name = "b",
                            .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name),
                        });
                        emit.cpp_called_func = "@2@ - @1@";
                        generator.EmitFunction(file, emit);
                    }
                }
            }
        }

        return file;
    }

    std::optional<Generator::BindableType> MetaContainerBinder::MakeBinding(Generator &generator, const cppdecl::Type &type_to_bind)
    {
        if (!type_to_bind.IsOnlyQualifiedName())
            return {};

        // Try all known names.
        // The first matching one is used.
        for (const Target &target : targets)
        {
            const cppdecl::QualifiedName *target_name = nullptr;
            for (const cppdecl::QualifiedName &possible_target_name : target.generic_cpp_container_names)
            {
                if (type_to_bind.simple_type.name.Equals(possible_target_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target | cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target))
                {
                    target_name = &possible_target_name;
                    break;
                }
            }
            if (!target_name)
                continue;

            const bool is_container  =                                                                    type_to_bind.simple_type.name.parts.size() == target_name->parts.size();
            const bool is_const_iter = !is_container &&                                                   type_to_bind.simple_type.name.parts.size() == target_name->parts.size() + 1 && type_to_bind.simple_type.name.parts.back().AsSingleWord() == "const_iterator";
            const bool is_mut_iter   = !is_container && !is_const_iter && params.has_mutable_iterators && type_to_bind.simple_type.name.parts.size() == target_name->parts.size() + 1 && type_to_bind.simple_type.name.parts.back().AsSingleWord() == "iterator";

            if (!is_container && !is_const_iter && !is_mut_iter)
                return {}; // This is some member type of our container, but not an iterator, so we don't know what to do with it.

            // Figure out the container type.
            const cppdecl::QualifiedName *container_name = nullptr;
            cppdecl::QualifiedName container_name_storage;
            if (is_container)
            {
                container_name = &type_to_bind.simple_type.name;
            }
            else
            {
                // Remove the unwanted trailing parts from `type_to_bind` to leave only the container name.
                container_name_storage = type_to_bind.simple_type.name;
                container_name_storage.parts.resize(target_name->parts.size());
                container_name = &container_name_storage;
            }

            // Figure out the element type.
            // This can throw if the element type fails to parse as a type and instead parses as the pseudo-expression. Throwing here is fine by me.
            const cppdecl::Type &elem_type = std::get<cppdecl::Type>(container_name->parts.back().template_args.value().args.at(0).var);
            const cppdecl::Type *mapped_elem_type = params.is_map ? &std::get<cppdecl::Type>(container_name->parts.back().template_args.value().args.at(1).var) : nullptr;

            ContainerBinder binder(generator, *container_name, elem_type, mapped_elem_type ? *mapped_elem_type : cppdecl::Type{}, target.stdlib_container_header, params);

            if (is_container)
                return binder.MakeBinding(generator);
            else
                return binder.MakeIteratorBinding(generator, is_const_iter);
        }

        // No names matched.
        return {};
    }
}
