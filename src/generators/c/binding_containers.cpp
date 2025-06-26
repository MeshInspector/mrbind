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
        elem_traits = generator.FindBindableType(cpp_elem_type).traits.value();
        mapped_elem_traits = params.is_map ? generator.FindBindableType(cpp_mapped_elem_type).traits.value() : elem_traits;

        class_binder.traits.emplace();
        class_binder.traits->is_default_constructible = true;
        class_binder.traits->is_copy_constructible = elem_traits.is_copy_constructible && mapped_elem_traits.is_copy_constructible;
        class_binder.traits->is_move_constructible = true;
        class_binder.traits->is_copy_assignable = elem_traits.is_copy_assignable && mapped_elem_traits.is_copy_assignable;
        class_binder.traits->is_move_assignable = true;
        class_binder.traits->is_destructible = true;
        // All `is_trivial_...` traits are false.
        class_binder.traits->is_any_constructible = true;

        basic_output_file_name = cppdecl::ToString(cpp_container_type, cppdecl::ToStringFlags::identifier);


        // Create the iterator binders.
        // Notably different standard containers can have overlapping iterator types, so we have to be really careful here.
        // What we do is we force specific underlying type name for the iterators, IF their normal name is known to be an alternative spelling of something else.
        // If not, then we let the underlying name match the public one.
        cppdecl::QualifiedName iterator_name = cpp_container_type;
        iterator_name.parts.emplace_back("iterator");
        auto iter = generator.type_alt_spelling_to_canonical.find(cppdecl::ToCode(iterator_name, cppdecl::ToCodeFlags::canonical_c_style));
        iterator_binder_mutable = HeapAllocatedClassBinder::ForCustomType(generator, iterator_name, {}, iter != generator.type_alt_spelling_to_canonical.end() ? cppdecl::ToString(iter->second, cppdecl::ToStringFlags::identifier) : "");
        iterator_binder_mutable.traits = Generator::TypeTraits::CopyableNonTrivialButCheap{};
        iterator_name.parts.back().var = "const_iterator";
        iter = generator.type_alt_spelling_to_canonical.find(cppdecl::ToCode(iterator_name, cppdecl::ToCodeFlags::canonical_c_style));
        iterator_binder_const = HeapAllocatedClassBinder::ForCustomType(generator, iterator_name, {}, iter != generator.type_alt_spelling_to_canonical.end() ? cppdecl::ToString(iter->second, cppdecl::ToStringFlags::identifier) : "");
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
        Generator::OutputFile &file = generator.GetPublicHelperFile(basic_output_file_name, &is_new);

        if (is_new)
        {
            if (!stdlib_container_header.empty())
                file.source.stdlib_headers.insert(stdlib_container_header);

            TryIncludeHeadersForCppTypeInSourceFile(generator, file, cppdecl::Type::FromQualifiedName(cpp_container_type));

            file.header.contents += "\n/// Generated from C++ container `" + cppdecl::ToCode(cpp_container_type, cppdecl::ToCodeFlags::canonical_c_style) + "`.\n";
            class_binder.EmitForwardDeclaration(generator, file);
            file.header.contents += "\n/// Read-only iterator for `" + class_binder.c_type_name + "`.\n";
            iterator_binder_const.EmitForwardDeclaration(generator, file);
            if (params.has_mutable_iterators)
            {
                file.header.contents += "\n/// Mutable iterator for `" + class_binder.c_type_name + "`.\n";
                iterator_binder_mutable.EmitForwardDeclaration(generator, file);
            }

            // The special member functions:
            class_binder.EmitSpecialMemberFunctions(generator, file);

            // All the custom functions:

            { // The container itself.
                { // size
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The number of elements.";
                    emit.c_name = class_binder.MakeMemberFuncName("Size");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "size";
                    generator.EmitFunction(file, emit);
                }

                { // empty
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns true if the size is zero.";
                    emit.c_name = class_binder.MakeMemberFuncName("IsEmpty");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                    emit.cpp_called_func = "empty";
                    generator.EmitFunction(file, emit);
                }

                // resize
                if (params.has_resize)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Resizes the container. The new elements if any are zeroed.";
                    emit.c_name = class_binder.MakeMemberFuncName("Resize");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_size",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });
                    emit.cpp_called_func = "resize";
                    generator.EmitFunction(file, emit);
                }

                { // clear
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Removes all elements from the container.";
                    emit.c_name = class_binder.MakeMemberFuncName("Clear");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.cpp_called_func = "clear";
                    generator.EmitFunction(file, emit);
                }

                // Capacity-related functions.
                if (params.has_capacity)
                {
                    { // capacity
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The memory capacity, measued in the number of elements.";
                        emit.c_name = class_binder.MakeMemberFuncName("Capacity");
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "capacity";
                        generator.EmitFunction(file, emit);
                    }

                    { // reserve
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Reserves memory for a certain number of elements. Never shrinks the memory.";
                        emit.c_name = class_binder.MakeMemberFuncName("Reserve");
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
                        emit.c_name = class_binder.MakeMemberFuncName("ShrinkToFit");
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
                        emit.c_name = class_binder.MakeMemberFuncName("At");
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
                        emit.c_name = class_binder.MakeMemberFuncName("MutableAt");
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
                    emit.c_name = class_binder.MakeMemberFuncName("FindOrConstructElem");
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
                        emit.c_name = class_binder.MakeMemberFuncName((params.is_multi ? "Count" : "Contains"));
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
                        emit.c_name = class_binder.MakeMemberFuncName("Find");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(iterator_binder_const.cpp_type_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.params.push_back({
                            .name = "key",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
                        });
                        emit.cpp_called_func = "find";
                        generator.EmitFunction(file, emit);
                    }

                    // find, mutable
                    if (params.has_mutable_iterators)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.";
                        emit.c_name = class_binder.MakeMemberFuncName("FindMutable");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(iterator_binder_mutable.cpp_type_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "key",
                            .cpp_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
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
                        emit.c_name = class_binder.MakeMemberFuncName("Front");
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "@this@.empty() ? &@this@.front() : nullptr";
                        generator.EmitFunction(file, emit);
                    }

                    { // front mutable
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The first element or null if empty, mutable.";
                        emit.c_name = class_binder.MakeMemberFuncName("MutableFront");
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@.empty() ? &@this@.front() : nullptr";
                        generator.EmitFunction(file, emit);
                    }

                    { // back const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The last element or null if empty, read-only.";
                        emit.c_name = class_binder.MakeMemberFuncName("Back");
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "@this@.empty() ? &@this@.back() : nullptr";
                        generator.EmitFunction(file, emit);
                    }

                    { // back mutable
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The last element or null if empty, mutable.";
                        emit.c_name = class_binder.MakeMemberFuncName("MutableBack");
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@.empty() ? &@this@.back() : nullptr";
                        generator.EmitFunction(file, emit);
                    }
                }

                // The data pointer.
                if (params.iter_category >= IteratorCategory::contiguous && (!params.is_map && elem_traits.same_size_in_c_and_cpp))
                {
                    { // data const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, read-only.";
                        emit.c_name = class_binder.MakeMemberFuncName("Data");
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), true);
                        emit.cpp_called_func = "data";
                        generator.EmitFunction(file, emit);
                    }

                    { // data mutable
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, mutable.";
                        emit.c_name = class_binder.MakeMemberFuncName("MutableData");
                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
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

                    const std::string end_or_beginning = is_front ? "beginning" : "end";
                    const std::string back_or_front_in_c_name = is_front ? "Front" : "Back";
                    const std::string back_or_front_in_cpp_name = is_front ? "front" : "back";

                    { // push_back, push_front
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Inserts a new element at the " + end_or_beginning + ".";
                        emit.c_name = class_binder.MakeMemberFuncName("Push" + back_or_front_in_c_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "new_elem",
                            .cpp_type = cpp_elem_type,
                        });
                        emit.cpp_called_func = "push_" + back_or_front_in_cpp_name;
                        generator.EmitFunction(file, emit);
                    }

                    { // pop_back, pop_front
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Removes one element from the " + end_or_beginning + ".";
                        emit.c_name = class_binder.MakeMemberFuncName("Pop" + back_or_front_in_c_name);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.cpp_called_func = "pop_" + back_or_front_in_cpp_name;
                        generator.EmitFunction(file, emit);
                    }
                }

                // insert, without the iterator parameter
                if (params.is_set && !params.is_map)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Inserts a new element.";
                    emit.c_name = class_binder.MakeMemberFuncName("Insert");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                    emit.params.push_back({
                        .name = "new_elem",
                        .cpp_type = cpp_elem_type,
                    });
                    emit.cpp_called_func = "insert";
                    generator.EmitFunction(file, emit);
                }

                // insert and erase at index
                if (params.iter_category >= IteratorCategory::random_access)
                {
                    { // insert
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Inserts a new element right before the specified position.";
                        emit.c_name = class_binder.MakeMemberFuncName("Insert");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "position",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });
                        emit.params.push_back({
                            .name = "new_elem",
                            .cpp_type = cpp_elem_type,
                        });
                        emit.cpp_called_func = "@this@.insert(@this@.begin() + ptrdiff_t(@1@), @2@)";
                        generator.EmitFunction(file, emit);
                    }

                    { // erase
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Erases the element at the specified position.";
                        emit.c_name = class_binder.MakeMemberFuncName("Erase");
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
                if (!params.is_set && !params.is_map)
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
                            emit.c_name = class_binder.MakeMemberFuncName("InsertAt" + at_str);
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "position",
                                .cpp_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name),
                            });
                            emit.params.push_back({
                                .name = "new_elem",
                                .cpp_type = cpp_elem_type,
                            });
                            emit.cpp_called_func = "insert";
                            generator.EmitFunction(file, emit);
                        }

                        { // erase
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Erases the element at the specified position." + constness_disclaimer;
                            emit.c_name = class_binder.MakeMemberFuncName("EraseAt" + at_str);
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
                            emit.c_name = class_binder.MakeMemberFuncName(mut_or_const_name + begin_or_end_method_name);
                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name);
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(class_binder.cpp_type_name), is_const_iter);
                            emit.cpp_called_func = c_or_empty + begin_or_end_str;
                            generator.EmitFunction(file, emit);
                        }

                        { // compare
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Tests whether a " + mut_or_const_str + " iterator is the " + begin_or_end_str + " iterator.";
                            emit.c_name = class_binder.MakeMemberFuncName("Is" + mut_or_const_name + begin_or_end_method_name);
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
                        emit.c_name = class_binder.MakeMemberFuncName(std::string(is_const_iter ? "" : "Mutable") + "ToIndex");
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
                        emit.c_name = iterator_binder_const.MakeMemberFuncName("FromMutable");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(iterator_binder_const.cpp_type_name);
                        emit.params.push_back({
                            .name = "iter",
                            .cpp_type = cppdecl::Type::FromQualifiedName(iterator_binder_mutable.cpp_type_name),
                        });
                        emit.cpp_called_func = cppdecl::ToCode(iterator_binder_mutable.cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);
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
                        emit.c_name = this_iter_binder.MakeMemberFuncName("Deref");
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
                            emit.c_name = this_iter_binder.MakeMemberFuncName("DerefKey");
                            emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{});
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), true);
                            emit.cpp_called_func = "@this@->first";
                            generator.EmitFunction(file, emit);
                        }

                        { // value
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Dereferences a " + mut_or_const_str + " iterator, returning the mapped value.";
                            emit.c_name = this_iter_binder.MakeMemberFuncName("DerefValue");
                            emit.cpp_return_type = cppdecl::Type(cpp_mapped_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_ * is_const_iter).AddModifier(cppdecl::Reference{});
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), true);
                            emit.cpp_called_func = "@this@->second";
                            generator.EmitFunction(file, emit);
                        }
                    }

                    { // increment
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Increments a " + mut_or_const_str + " iterator.";
                        emit.c_name = this_iter_binder.MakeMemberFuncName("Incr");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), false);
                        emit.cpp_called_func = "++@this@";
                        generator.EmitFunction(file, emit);
                    }

                    // increment
                    if (params.iter_category >= IteratorCategory::bidirectional)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Decrements a " + mut_or_const_str + " iterator.";
                        emit.c_name = this_iter_binder.MakeMemberFuncName("Decr");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(this_iter_binder.cpp_type_name), false);
                        emit.cpp_called_func = "--@this@";
                        generator.EmitFunction(file, emit);
                    }

                    // add number
                    if (params.iter_category >= IteratorCategory::random_access)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Increments or decrements a " + mut_or_const_str + " iterator by the specific amount. Completes in constant time.";
                        emit.c_name = this_iter_binder.MakeMemberFuncName("OffsetBy");
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
                        emit.c_name = this_iter_binder.MakeMemberFuncName("Distance");
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("ptrdiff_t");
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
