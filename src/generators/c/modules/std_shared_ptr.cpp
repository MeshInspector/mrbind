#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdSharedPtr : DeriveModule<StdSharedPtr>
    {
        // Here I try to support all of: `std::shared_ptr<T>`, `std::shared_ptr<T[]>`, and `std::shared_ptr<T[N]>`.
        // `` has no special logic in the standard library, and is pretty rare in general, so I don't have special handling for it.

        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            const cppdecl::Type &cpp_elem_type = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);

            const bool is_array = cpp_elem_type.Is<cppdecl::Array>();
            const bool is_array_of_unknown_bound = is_array && cpp_elem_type.As<cppdecl::Array>()->size.IsEmpty();

            const cppdecl::Type cpp_elem_type_minus_array = is_array ? cppdecl::Type(cpp_elem_type).RemoveModifier() : cpp_elem_type;

            // Same as `cpp_elem_type`, but if it's an array, here the size is made empty.
            cppdecl::Type cpp_elem_type_force_unknown_bound = cpp_elem_type;
            if (auto arr = cpp_elem_type_force_unknown_bound.As<cppdecl::Array>())
                arr->size = {};


            // The underlying plain pointer type.
            const cppdecl::Type underlying_ptr_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{});

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);
            binder.traits = Generator::TypeTraits::CopyableNonTrivial{}; // Not using `CopyableNonTrivialButCheap`, because refcount increments are not necessarily cheap, I assume?

            auto get_output_file = [
                type,
                type_str,
                cpp_elem_type,
                cpp_elem_type_minus_array,
                cpp_elem_type_force_unknown_bound,
                binder,
                underlying_ptr_type,
                is_array,
                is_array_of_unknown_bound
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = generator.GetPublicHelperFile(cppdecl::ToString(type, cppdecl::ToStringFlags::identifier), &is_new);

                if (is_new)
                {
                    file.source.stdlib_headers.insert("memory");

                    TryIncludeHeadersForCppTypeInSourceFile(generator, file, type);

                    if (is_array)
                    {
                        file.header.contents +=
                            "\n"
                            "/// Wraps a pointer to a shared reference-counted heap-allocated array of type `" + cppdecl::ToCode(cpp_elem_type_minus_array, cppdecl::ToCodeFlags::canonical_c_style) + "`, " + (is_array_of_unknown_bound ? "of an unspecified size" : "of size " + cppdecl::ToCode(cpp_elem_type.As<cppdecl::Array>()->size, cppdecl::ToCodeFlags::canonical_c_style)) + ".\n";

                        if (is_array_of_unknown_bound)
                            file.header.contents += "/// Doesn't store the size, it has to be obtained separately.\n";
                    }
                    else
                    {
                        file.header.contents += "\n/// Wraps a pointer to a single shared reference-counted heap-allocated `" + cppdecl::ToCode(cpp_elem_type, cppdecl::ToCodeFlags::canonical_c_style) + "`.\n";
                    }
                    binder.EmitForwardDeclaration(generator, file);

                    // The special member functions.
                    binder.EmitSpecialMemberFunctions(generator, file);


                    // Some custom functions:

                    // We don't provide an `operator bool` check because the dereferencing function (that returns a pointer) already acts as one.
                    // We don't provide "set value" and "reset" functions because the sugared copy/move constructor and assignment already do the same thing.

                    std::string func_name_get = binder.MakeMemberFuncName("Get");

                    { // Get pointer. Doesn't propagate const, since `std::shared_ptr` doesn't too.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the stored pointer, possibly null.";
                        emit.c_name = func_name_get;

                        emit.cpp_return_type = underlying_ptr_type;

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);

                        emit.cpp_called_func = "get";

                        generator.EmitFunction(file, emit);
                    }

                    // Indexing, if this is an array. Doesn't propagate const, since `std::shared_ptr` doesn't too.
                    if (is_array_of_unknown_bound)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns an element from the stored array. The stored pointer must not be null.";
                        emit.c_name = binder.MakeMemberFuncName("At");

                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Reference{});

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                        emit.params.push_back({
                            .name = "i",
                            .cpp_type = cppdecl::Type::FromSingleWord("ptrdiff_t"), // Fun fact: this uses `std::ptrdiff_t`, whereas in `std::unique_ptr` the same operator uses `std::size_t`. Not sure why the difference.
                        });

                        emit.cpp_called_func = "@this@[@1@]";

                        generator.EmitFunction(file, emit);
                    }

                    { // Use count.
                        Generator::EmitFuncParams emit;
                        emit.c_comment =
                            "/// How many shared pointers share the managed object. Zero if no object is being managed.\n"
                            "/// This being zero usually conincides with `" + func_name_get + "()` returning null, but is ultimately orthogonal.\n"
                            "/// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.";
                        emit.c_name = binder.MakeMemberFuncName("UseCount");

                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("long"); // Why does `.use_count()` return `long`?!?!

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);

                        emit.cpp_called_func = "use_count";

                        generator.EmitFunction(file, emit);
                    }

                    std::string construct_from_unique_ptr = type_str;
                    if (is_array && !is_array_of_unknown_bound)
                        construct_from_unique_ptr += "(@1@.release())"; // Arrays of fixed bound need special care.

                    { // Construct from a pointer.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Create a new instance, taking ownership of an existing pointer.";
                        emit.c_name = binder.MakeMemberFuncName("Construct");

                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("unique_ptr").AddTemplateArgument(cpp_elem_type_force_unknown_bound)),
                        });

                        emit.cpp_called_func = construct_from_unique_ptr;

                        generator.EmitFunction(file, emit);
                    }

                    { // Assign from a pointer.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.";
                        emit.c_name = binder.MakeMemberFuncName("Assign");

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("unique_ptr").AddTemplateArgument(cpp_elem_type_force_unknown_bound)),
                        });

                        emit.cpp_called_func = "@this@ = " + construct_from_unique_ptr;

                        generator.EmitFunction(file, emit);
                    }
                }

                return file;
            };

            Generator::BindableType &new_type = ret.emplace();

            binder.FillCommonParams(generator, new_type);
            new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};

            return ret;
        }
    };
}
