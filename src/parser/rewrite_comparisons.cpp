#include "rewrite_comparisons.h"

#include "parser/cppdecl_helpers.h"

#include <cppdecl/declarations/to_string.h>

#include <tuple>

namespace mrbind
{
    namespace
    {
        struct ComparisonRewriter
        {
            struct OperatorSignature
            {
                std::string token; // One of: ==, !=, <, <=, >, >=

                // Only storing the canonical types.
                std::string lhs_type;
                std::string rhs_type;

                bool is_three_way = false;

                // We need to know this, because those also spawn `==`, unlike the custom three-way comparions.
                bool is_defaulted_three_way = false;

                // If set, we can't rewrite this function into something else,
                //   but it still occupies the signature and other functions can't rewritten into this one.
                // This is used when the return type is wrong.
                bool is_invalid = false;

                // A little hacky, but whatever.
                auto TieForComparison() const
                {
                    return std::tie(token, lhs_type, rhs_type);
                }

                [[maybe_unused]] friend bool operator==(const OperatorSignature &a, const OperatorSignature &b)
                {
                    return a.TieForComparison() == b.TieForComparison();
                }
                friend auto operator<=>(const OperatorSignature &a, const OperatorSignature &b)
                {
                    return a.TieForComparison() <=> b.TieForComparison();
                }
            };

            using OriginalEntity = std::variant<FuncEntity, ClassMethod>;

            // Maps operator signatures to their original entities.
            std::map<OperatorSignature, OriginalEntity> existing_ops;

            // Extracts an operator signature from a function, or null if not an operator that can be rewritten or produced by rewrite.
            // `class_for_method` must be non-null when `func` is a method.
            [[nodiscard]] std::optional<OperatorSignature> FuncToSignature(std::variant<const FuncEntity *, const ClassMethod *> func, const ClassEntity *class_for_method)
            {
                OperatorSignature ret;
                if (std::visit([&]<typename T>(const T *elem)
                {
                    if (!elem->IsOverloadedOperator())
                        return false;

                    std::string_view token = elem->GetOverloadedOperatorToken();
                    if (!((ret.is_three_way = token == "<=>") || token == "==" || token == "!=" || token == "<" || token == "<=" || token == ">" || token == ">="))
                        return false;

                    // Check the return type.
                    // Instead of returning, we set `is_invalid = false` to prevent other functions from rewriting into this one and causing conflicts.
                    if (
                        ret.is_three_way
                        // For `<=>` just do a minimal sanity check.
                        // We could check for three standard types, but `int` and other integral types work fine too. Checking for all the integral types feels wrong.
                        // `void` comes up in tests, so I check for it here.
                        ? elem->return_type.canonical == "void"
                        : elem->return_type.canonical != "bool"
                    )
                    {
                        ret.is_invalid = true;
                    }

                    ret.token = token;

                    if constexpr (std::is_same_v<T, FuncEntity>)
                    {
                        if (elem->params.size() != 2)
                        {
                            throw std::runtime_error("While rewriting comparison operators, found an operator that should have two arguments but doesn't: `" + elem->full_qual_name + "`.");
                        }

                        ret.lhs_type = elem->params.at(0).type.canonical;
                        ret.rhs_type = elem->params.at(1).type.canonical;
                    }
                    else
                    {
                        if (elem->params.size() != 1)
                        {
                            throw std::runtime_error("While rewriting comparison operators, found an operator that should have two arguments (including `this`) but doesn't: `" + elem->full_name + "` in class `" + class_for_method->full_type + "`.");
                        }

                        cppdecl::Type lhs_cppdecl_type = cppdecl::Type::FromQualifiedName(ParseQualifiedNameWithCppdecl(class_for_method->full_type));
                        if (elem->is_const)
                            lhs_cppdecl_type.AddQualifiers(cppdecl::CvQualifiers::const_);

                        // Here we don't distinguish between ref-unqualfied member functions and `&`-qualified ones. Not a big deal.
                        // TODO: Support by-value parameters (once we add the support everywhere else too).
                        lhs_cppdecl_type.AddModifier(cppdecl::Reference{.kind = elem->ref_qualifier == RefQualifier::rvalue ? cppdecl::RefQualifier::rvalue : cppdecl::RefQualifier::lvalue});

                        ret.lhs_type = cppdecl::ToCode(lhs_cppdecl_type, {}); // Same lack of flags as in `main.cpp` of the parser.

                        ret.rhs_type = elem->params.at(0).type.canonical;
                    }

                    ret.is_defaulted_three_way = ret.is_three_way && elem->is_implicit_or_defaulted;

                    return true;
                }, func))
                {
                    return ret;
                }
                else
                {
                    return {};
                }
            }

            // Inserts the function into `existing_ops` if it's an operator that can be rewritten or produced by rewrite.
            // `class_for_method` must be non-null when `func` is a method.
            void AddParsedFunc(std::variant<const FuncEntity *, const ClassMethod *> func, const ClassEntity *class_for_method)
            {
                if (auto sig = FuncToSignature(func, class_for_method))
                {
                    auto [iter, is_new] = existing_ops.try_emplace(*sig);

                    if (!is_new)
                        throw std::runtime_error("While rewriting comparisons, more than one comparison resolved to the same signature: token=`" + iter->first.token + "`, lhs=`" + iter->first.lhs_type + "`, rhs=`" + iter->first.rhs_type + "`.");

                    std::visit([&](const auto *elem){iter->second = *elem;}, func);
                }
            }

            // Generates a new function from `func`, replacing its operator token with `new_token`. The parameter order stays the same, we don't support mirroring operators right now.
            // `sig` must be the signature of `func` per `FuncToSignature()`.
            [[nodiscard]] std::pair<OperatorSignature, OriginalEntity> GenerateFunc(const OperatorSignature &sig, std::variant<const FuncEntity *, const ClassMethod *> func, std::string_view new_token)
            {
                std::pair<OperatorSignature, OriginalEntity> ret;

                ret.first = sig;
                ret.first.token = new_token;
                ret.first.is_three_way = false;
                ret.first.is_defaulted_three_way = false;

                // Copy the LLVM names.
                std::string_view simple_op_name;
                if (new_token == "<=>")
                    simple_op_name = "_Spaceship";
                else if (new_token == "==")
                    simple_op_name = "_EqualEqual";
                else if (new_token == "!=")
                    simple_op_name = "_ExclaimEqual";
                else if (new_token == "<")
                    simple_op_name = "_Less";
                else if (new_token == "<=")
                    simple_op_name = "_LessEqual";
                else if (new_token == ">")
                    simple_op_name = "_Greater";
                else if (new_token == ">=")
                    simple_op_name = "_GreaterEqual";

                ret.second = std::visit(Overload{
                    [&](const FuncEntity *func) -> OriginalEntity
                    {
                        FuncEntity new_func = *func;

                        // Set `new_func.qual_name`.
                        cppdecl::QualifiedName cppdecl_qual_name = ParseQualifiedNameWithCppdecl(new_func.qual_name);
                        cppdecl_qual_name.parts.back() = cppdecl::UnqualifiedName(cppdecl::OverloadedOperator{.token = std::string(new_token)});
                        new_func.qual_name = cppdecl::ToCode(cppdecl_qual_name, {});

                        // Set `new_func.full_qual_name`.
                        new_func.full_qual_name = new_func.qual_name;
                        new_func.full_qual_name += func->TemplateArguments();

                        // Set `new_func.name`.
                        assert(new_func.name.starts_with("operator"));
                        new_func.name = cppdecl::ToCode(cppdecl_qual_name.parts.back(), {});

                        // Set `new_func.simple_name`.
                        new_func.simple_name = simple_op_name;

                        new_func.is_implicit_or_defaulted = false;
                        new_func.is_rewritten_comparison = true;

                        // If the original function was `<=>`, replace the return type with `bool`.
                        if (sig.is_three_way)
                            new_func.return_type.canonical = new_func.return_type.pretty = "bool";

                        return new_func;
                    },
                    [&](const ClassMethod *method) -> OriginalEntity
                    {
                        ClassMethod new_method = *method;

                        new_method.name = "operator" + std::string(new_token);
                        new_method.simple_name = simple_op_name;

                        new_method.full_name = new_method.name;
                        new_method.full_name += method->TemplateArguments();

                        new_method.is_implicit_or_defaulted = false;
                        new_method.is_rewritten_comparison = true;

                        // If the original function was `<=>`, replace the return type with `bool`.
                        if (sig.is_three_way)
                            new_method.return_type.canonical = new_method.return_type.pretty = "bool";

                        return new_method;
                    },
                }, func);

                return ret;
            }

            // Same as `GenerateFunc()`, but also appends the function to `target` if it's not already listed in `existing_ops`. Also appends it to `existing_ops`.
            void GenerateAndAppendFunc(const OperatorSignature &sig, std::variant<const FuncEntity *, const ClassMethod *> func, std::variant<EntityContainer *, ClassEntity *> target, std::string_view new_token)
            {
                auto new_func = GenerateFunc(sig, func, new_token);
                if (!existing_ops.insert(new_func).second)
                    return; // A function already exists with this signature.

                std::visit(Overload{
                    [&](FuncEntity &elem)
                    {
                        Entity e;
                        e.emplace<FuncEntity>(std::move(elem));
                        std::get<EntityContainer *>(target)->nested.push_back(std::move(e));
                    },
                    [&](ClassMethod &elem)
                    {
                        std::get<ClassEntity *>(target)->members.push_back(std::move(elem));
                    },
                }, new_func.second);
            }

            // Append rewritten fuctions derived from `func` to the end of `target`, if any are needed.
            // Consults `existing_ops` to avoid duplicates.
            // NOTE! `func` must not be a member of `target`, since the insertion would invalidate it.
            void AppendRewrittenFuncs(std::variant<const FuncEntity *, const ClassMethod *> func, std::variant<EntityContainer *, ClassEntity *> target)
            {
                std::optional<OperatorSignature> sig = FuncToSignature(func, std::holds_alternative<const ClassMethod *>(func) ? std::get<ClassEntity *>(target) : nullptr);
                if (!sig || sig->is_invalid)
                    return;

                if (sig->token == "==")
                {
                    GenerateAndAppendFunc(*sig, func, target, "!=");
                }
                else if (sig->token == "<=>")
                {
                    if (sig->is_defaulted_three_way)
                    {
                        GenerateAndAppendFunc(*sig, func, target, "==");
                        GenerateAndAppendFunc(*sig, func, target, "!="); // Doing this here instead of visiting the newly added `==` is a bit easier.
                    }

                    GenerateAndAppendFunc(*sig, func, target, "<");
                    GenerateAndAppendFunc(*sig, func, target, ">");
                    GenerateAndAppendFunc(*sig, func, target, "<=");
                    GenerateAndAppendFunc(*sig, func, target, ">=");
                }
            }
        };
    }

    static void RewriteFreeFuncComparisons(EntityContainer &cont)
    {
        ComparisonRewriter rewriter;
        for (const Entity &entity : cont.nested)
        {
            if (auto method = std::get_if<FuncEntity>(&*entity.variant))
                rewriter.AddParsedFunc(method, nullptr);
        }

        auto old_nested = std::move(cont.nested);
        cont.nested.reserve(old_nested.size());

        for (Entity &entity : old_nested)
        {
            std::size_t index = cont.nested.size();
            cont.nested.emplace_back(); // Placeholder to move the entity in later. Doing it this way to avoid it being invalidated inside of `AppendRewrittenFuncs()` below.

            if (auto method = std::get_if<FuncEntity>(&*entity.variant))
                rewriter.AppendRewrittenFuncs(method, &cont);

            cont.nested.at(index) = std::move(entity);
        }
    }

    static void RewriteClassMemberComparisons(ClassEntity &cl)
    {
        ComparisonRewriter rewriter;
        for (const ClassMemberVariant &member : cl.members)
        {
            if (auto method = std::get_if<ClassMethod>(&member))
                rewriter.AddParsedFunc(method, &cl);
        }

        auto old_members = std::move(cl.members);
        cl.members.reserve(old_members.size());

        for (ClassMemberVariant &member : old_members)
        {
            std::size_t index = cl.members.size();
            cl.members.emplace_back(); // Placeholder to move the methor in later. Doing it this way to avoid it being invalidated inside of `AppendRewrittenFuncs()` below.

            if (auto method = std::get_if<ClassMethod>(&member))
                rewriter.AppendRewrittenFuncs(method, &cl);

            cl.members.at(index) = std::move(member);
        }
    }

    static void VisitEntityContainer(EntityContainer &cont)
    {
        for (Entity &entity : cont.nested)
        {
            std::visit([]<typename T>(T &elem)
            {
                if constexpr (std::is_base_of_v<EntityContainer, T>)
                {
                    RewriteFreeFuncComparisons(elem);
                    VisitEntityContainer(elem);
                }
            }, *entity.variant);

            if (auto cl = std::get_if<ClassEntity>(&*entity.variant))
            {
                RewriteClassMemberComparisons(*cl);
            }
        }
    }

    void RewriteComparisons(ParsedFile &data)
    {
        VisitEntityContainer(data.entities);
    }
}
