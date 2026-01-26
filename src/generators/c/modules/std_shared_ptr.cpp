#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdSharedPtr : DeriveModule<StdSharedPtr>
    {
        // Here I try to support all of: `std::shared_ptr<T>`, `std::shared_ptr<T[]>`, and `std::shared_ptr<T[N]>`.

        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr");

        // If true, also bind shared pointers for all base classes and derived classes.
        bool viral_bindings = false;

        void ConsumeFlag(FlagInterface &in) override
        {
            // This behavior is made specifically for our C# bindings. So we can't remove anything from this, but can add more implied bindings later.
            // We also require `std::shared_ptr<const T>` implying `std::shared_ptr<T>`, but right now this happens automatically,
            //   because we have a ctor and an assignment from the non-const variant.
            if (in.FlagNameMatches("--bind-shared-ptr-virally", "", "If enabled, when encountering `std::shared_ptr` with a class as a template parameter, we will additionally generate `std::shared_ptr` bindings for all its base and derived classes, recursively."))
            {
                if (viral_bindings)
                    throw std::runtime_error("Duplicate flag `--bind-shared-ptr-virally`.");
                viral_bindings = true;
            }
        }

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
            const bool is_void = cpp_elem_type.AsSingleWord(cppdecl::SingleWordFlags::ignore_const) == "void";

            const cppdecl::Type cpp_elem_type_minus_array = is_array ? cppdecl::Type(cpp_elem_type).RemoveModifier() : cpp_elem_type;
            const bool is_const = cpp_elem_type_minus_array.IsConst();

            const cppdecl::Type cpp_elem_type_minus_const = cppdecl::Type(cpp_elem_type).RemoveQualifiers(cppdecl::CvQualifiers::const_, is_array);

            // Same as `cpp_elem_type`, but if it's an array, here the size is made empty.
            cppdecl::Type cpp_elem_type_force_unknown_bound = cpp_elem_type;
            if (auto arr = cpp_elem_type_force_unknown_bound.As<cppdecl::Array>())
                arr->size = {};


            // The underlying plain pointer type.
            const cppdecl::Type underlying_ptr_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{});

            static constexpr auto MakeSharedPtrBinder = [&](Generator &generator, const cppdecl::QualifiedName &shared_ptr_name) -> HeapAllocatedClassBinder
            {
                HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, shared_ptr_name);
                binder.traits = Generator::TypeTraits::CopyableNonTrivial{}; // Not using `CopyableNonTrivialButCheap`, because refcount increments are not necessarily cheap, I assume?
                return binder;
            };
            const HeapAllocatedClassBinder binder = MakeSharedPtrBinder(generator, type.simple_type.name);

            auto get_output_file = [
                this,
                type,
                type_str,
                cpp_elem_type,
                cpp_elem_type_minus_array,
                is_const,
                cpp_elem_type_minus_const,
                cpp_elem_type_force_unknown_bound,
                binder,
                underlying_ptr_type,
                is_array,
                is_array_of_unknown_bound,
                is_void
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                if (is_new)
                {
                    // Virally recurse into similar types.
                    if (viral_bindings)
                    {
                        auto MakeOtherBinding = [&](const cppdecl::Type &new_cpp_elem_type)
                        {
                            cppdecl::QualifiedName new_cpp_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr").AddTemplateArgument(new_cpp_elem_type);

                            // Poke that binding a little, to make it generate the file.
                            generator.FindTypeBindableWithSameAddress(new_cpp_name).declared_in_file();
                        };

                        // If we're const, we'll automatically generate the non-const variant, because we have a ctor and an assignment taking that.
                        // And then that will in turn recurse into the base/derived classes.
                        if (!cpp_elem_type.IsConst())
                        {
                            // Recurse into bases and derived classes.

                            auto iter = generator.parsed_class_inheritance_info.find(generator.CppdeclToCode(cpp_elem_type));
                            if (iter != generator.parsed_class_inheritance_info.end())
                            {
                                // Here we iterate over all base/derived classes, even ambiguous ones. There is no point in skipping them,
                                //   since recursion would visit them sooner or later anyway.
                                for (const auto &elem : iter->second.bases_indirect.Vec())
                                    MakeOtherBinding(generator.ParseTypeOrThrow(elem));
                                for (const auto &elem : iter->second.derived_indirect)
                                    MakeOtherBinding(generator.ParseTypeOrThrow(elem.first));
                            }
                        }
                    }

                    std::string comment;
                    if (is_array)
                    {
                        comment +=
                            "/// Wraps a pointer to a shared reference-counted heap-allocated array of type `" + generator.CppdeclToCodeForComments(cpp_elem_type_minus_array) + "`, " + (is_array_of_unknown_bound ? "of an unspecified size" : "of size " + generator.CppdeclToCodeForComments(cpp_elem_type.As<cppdecl::Array>()->size)) + ".\n";

                        if (is_array_of_unknown_bound)
                            comment += "/// Doesn't store the size, it has to be obtained separately.\n";
                    }
                    else
                    {
                        comment += "/// Wraps a pointer to a single shared reference-counted heap-allocated `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "`.\n";
                    }
                    binder.EmitForwardDeclaration(generator, file, std::move(comment));

                    // The special member functions.
                    binder.EmitSpecialMemberFunctions(generator, file);


                    // Some custom functions:

                    // We don't provide an `operator bool` check because the dereferencing function (that returns a pointer) already acts as one.
                    // We don't provide "set value" and "reset" functions because the sugared copy/move constructor and assignment already do the same thing.

                    auto func_name_get = binder.MakeMemberFuncName(generator, "Get");

                    { // Get pointer. Doesn't propagate const, since `std::shared_ptr` doesn't too.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the stored pointer, possibly null.";
                        emit.name = func_name_get;

                        emit.lifetimes.ReturnsReferenceToSubobject();
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
                        emit.name = binder.MakeMemberFuncName(generator, "At", CInterop::MethodKinds::Operator{.token = "[]"});

                        emit.lifetimes.ReturnsReferenceToSubobject();
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
                            "/// This being zero usually conincides with `" + func_name_get.c + "()` returning null, but is ultimately orthogonal.\n"
                            "/// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.";
                        emit.name = binder.MakeMemberFuncName(generator, "UseCount");

                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("int");

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);

                        // This originally returns `long`, but this is problematic for us because our `--canonicalize-to-fixed-size-typedefs` plus `--reject-long-and-long-long`
                        //   ban `long`. Therefore we cast this to `int`. This is probably saner for the user too.
                        emit.cpp_called_func = "int(@this@.use_count())";

                        generator.EmitFunction(file, emit);
                    }

                    std::string construct_from_unique_ptr = type_str;
                    if (is_array && !is_array_of_unknown_bound)
                        construct_from_unique_ptr += "(@1@.release())"; // Arrays of fixed bound need special care.

                    // Construct from a pointer.
                    // This ctor is disabled in `std::shared_ptr<void>`. We don't really need it, since the user should just use a typed pointer instead.
                    if (!is_void)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Create a new instance, taking ownership of an existing pointer.";
                        // This needs to be explicit for sure.
                        emit.name = binder.MakeMemberFuncName(generator, "Construct", CInterop::MethodKinds::Constructor{.is_explicit = true});

                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);

                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("unique_ptr").AddTemplateArgument(cpp_elem_type_force_unknown_bound)),
                            // No `reference_assigned`, since this takes ownership.
                        });

                        emit.cpp_called_func = construct_from_unique_ptr;

                        generator.EmitFunction(file, emit);
                    }

                    // Assign from a pointer.
                    // This ctor is disabled in `std::shared_ptr<void>`. We don't really need it, since the user should just use a typed pointer instead.
                    if (!is_void)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.";
                        emit.name = binder.MakeMemberFuncName(generator, "Assign", CInterop::MethodKinds::Operator{.token = "="});

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("unique_ptr").AddTemplateArgument(cpp_elem_type_force_unknown_bound)),
                            // No `reference_assigned`, since this takes ownership.
                        });

                        emit.cpp_called_func = "@this@ = " + construct_from_unique_ptr;

                        generator.EmitFunction(file, emit);
                    }

                    { // Construct from a non-owning pointer.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Create a new instance, storing a non-owning pointer.";
                        // This doesn't HAVE to be explicit, but I think explicit looks better here.
                        emit.name = binder.MakeMemberFuncName(generator, "ConstructNonOwning", CInterop::MethodKinds::Constructor{.is_explicit = true});

                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);

                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{}),
                            .reference_assigned = true,
                        });

                        emit.cpp_called_func = type_str + "(std::shared_ptr<void>{}, @1@)";

                        generator.EmitFunction(file, emit);
                    }

                    { // Assign a non-owning pointer.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.";
                        emit.name = binder.MakeMemberFuncName(generator, "AssignNonOwning", CInterop::MethodKinds::Operator{.token = "="});

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "ptr",
                            .cpp_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{}),
                            .reference_assigned = true,
                        });

                        emit.cpp_called_func = "@this@ = " + type_str + "(std::shared_ptr<void>{}, @1@)";

                        generator.EmitFunction(file, emit);
                    }

                    // From a non-const shared pointer to the same type.
                    if (is_const)
                    {
                        // Same type as self, but without constness in the element type.
                        const cppdecl::Type sharedptr_nonconst_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr").AddTemplateArgument(cpp_elem_type_minus_const));

                        { // Constructor.
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Create a new instance from a non-const pointer to the same type.";
                            emit.name = binder.MakeMemberFuncName(generator, "ConstructFromMutable", CInterop::MethodKinds::Constructor{});

                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);

                            emit.params.push_back({
                                .name = "ptr",
                                .cpp_type = sharedptr_nonconst_type,
                            });

                            emit.cpp_called_func = type_str;

                            generator.EmitFunction(file, emit);
                        }

                        { // Assignment.
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Overwrite the existing instance with a non-const pointer to the same type.";
                            emit.name = binder.MakeMemberFuncName(generator, "AssignFromMutable", CInterop::MethodKinds::Operator{.token = "="});

                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "ptr",
                                .cpp_type = sharedptr_nonconst_type,
                            });

                            emit.cpp_called_func = "@this@ = @1@";

                            generator.EmitFunction(file, emit);
                        }
                    }

                    { // The aliasing constructor and assignment, from unrelated shared and raw pointers.
                        // This one always has `const void` as the element type, for max compatibility.
                        static const cppdecl::Type sharedptr_constvoid_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr").AddTemplateArgument(cppdecl::Type::FromSingleWord("void").AddQualifiers(cppdecl::CvQualifiers::const_)));

                        { // The aliasing constructor.
                            Generator::EmitFuncParams emit;
                            emit.c_comment =
                                "/// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.\n"
                                "/// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.";
                            emit.name = binder.MakeMemberFuncName(generator, "ConstructAliasing", CInterop::MethodKinds::Constructor{});

                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);

                            emit.params.push_back({
                                .name = "ownership",
                                .cpp_type = sharedptr_constvoid_type,
                            });
                            emit.params.push_back({
                                .name = "ptr",
                                .cpp_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{}),
                                .reference_assigned = true, // Hmm.
                            });

                            emit.cpp_called_func = type_str;

                            generator.EmitFunction(file, emit);
                        }

                        { // The aliasing assignment.
                            Generator::EmitFuncParams emit;
                            emit.c_comment =
                                "/// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.\n"
                                "/// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.";
                            emit.name = binder.MakeMemberFuncName(generator, "AssignAliasing"); // Not marking this as assignment due to multiple parameters.

                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "ownership",
                                .cpp_type = sharedptr_constvoid_type,
                            });
                            emit.params.push_back({
                                .name = "ptr",
                                .cpp_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{}),
                                .reference_assigned = true, // Hmm.
                            });

                            emit.cpp_called_func = "@this@ = " + type_str;

                            generator.EmitFunction(file, emit);
                        }
                    }

                    // Interop with `std::shared_ptr<void>`:
                    if (!is_void)
                    {
                        // The element type here has the same constness as that in the input.
                        const cppdecl::Type sharedptr_void_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr").AddTemplateArgument(cppdecl::Type::FromSingleWord("void").AddQualifiers(cppdecl::CvQualifiers::const_ * is_const)));

                        // Here we boldly inject constructors and assignments into `std::shared_ptr<[const] void>`.
                        const HeapAllocatedClassBinder void_binder = MakeSharedPtrBinder(generator, sharedptr_void_type.simple_type.name);

                        { // Construct `std::shared_ptr<void>`.
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.";

                            // We could use either the template parameter name or the full shared pointer name here.
                            // I guess it's more consistent to use the full type, even though it's uglier.
                            // And similarly for the assignment operator below.
                            emit.name = void_binder.MakeMemberFuncName(generator, "ConstructFrom_" + binder.c_type_name, CInterop::MethodKinds::Constructor{});

                            emit.cpp_return_type = sharedptr_void_type;

                            emit.params.push_back({
                                .name = "_other",
                                .cpp_type = type,
                            });

                            emit.cpp_called_func = generator.CppdeclToCode(sharedptr_void_type);

                            generator.EmitFunction(file, emit);
                        }

                        { // Copy-assign to an existing `std::shared_ptr<void>`.
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.";

                            // See the comment in the similar constructor above for how we chose this name.
                            emit.name = void_binder.MakeMemberFuncName(generator, "AssignFrom_" + binder.c_type_name, CInterop::MethodKinds::Operator{.token = "="});

                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(void_binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "_other",
                                .cpp_type = type,
                            });

                            emit.cpp_called_func = "@this@ = @1@";

                            generator.EmitFunction(file, emit);
                        }
                    }
                }

                return file;
            };

            Generator::BindableType &new_type = ret.emplace();

            binder.FillCommonParams(generator, new_type);
            new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "memory";
            return {};
        }
    };
}
