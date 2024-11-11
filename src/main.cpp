#include "data_to_json.h"
#include "data_to_macros.h"
#include "multiplex_data.h"
#include "parsed_data.h"

#include "pre_include_clang.h"
#include <clang/AST/DeclBase.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Sema/Sema.h>
#include <clang/Sema/SemaConcept.h>
#include <clang/Sema/Template.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/CommandLine.h>
#include "post_include_clang.h"

#include <array>
#include <cstring>
#include <exception>
#include <filesystem>
#include <fstream>
#include <map>
#include <regex>
#include <set>
#include <stdexcept>
#include <string_view>
#include <string>
#include <vector>

namespace mrbind
{
    namespace PpDirDumper
    {
        // Given a header name, guess the respective .cpp file name. Returns empty string on failure.
        // Doesn't check if the returned file actually exists.
        std::string GuessImplementationFileName(std::string_view header_name)
        {
            for (std::string_view suffix : {".h", ".hpp"})
            {
                if (header_name.ends_with(suffix))
                    return std::string(header_name.substr(0, header_name.size() - suffix.size())) + ".cpp";
            }

            return ""; // Didn't guess anything.
        }

        enum class DumpResult
        {
            ok,
            filename_not_specified,
            no_such_file,
            no_pp_directives,
        };

        // Attempts to dump includes from `filename` to `out`.
        // Currently just dumps all preprocessor directives, to not miss anything (we DO theoretically need the defines, pragmas, etc).
        // If `filename` is empty or doesn't exist, returns false.
        DumpResult DumpPreprocessorDirectivesFromFile(const std::string &filename, llvm::raw_ostream &out)
        {
            // Doing all this manually is a bit dumb, but I couldn't find an easy way to hook into the preprocessor to get this information.
            // The closest option I found is to run a lexing loop (`clang/lib/Frontend/FrontendActions.cpp` -> `DumpTokensAction::ExecuteAction()`) (also see implementation of `clang_getInclusions()`)
            // and inspect the filename for each token (using the `SourceManager`). But that doesn't give us the correct defines, pragmas, etc. Whatever.

            if (filename.empty())
                return DumpResult::filename_not_specified; // Empty filename.
            std::ifstream in(filename);
            if (!in)
                return DumpResult::no_such_file;

            std::string line;
            bool at_least_one_line_written = false;
            bool escaped_newline = false;
            while (std::getline(in, line))
            {
                if (escaped_newline)
                {
                    escaped_newline = false;
                }
                else
                {
                    // Try to guess if this is a preprocessor directive. This is not entirely accurate, e.g. we don't handle embedded /*...*/ comments.
                    const char *cur = line.c_str();

                    // Skip whitespace.
                    while (std::isspace((unsigned char)*cur))
                        cur++;

                    // Check for `#`.
                    if (*cur != '#')
                        continue;
                }

                out << line << '\n';
                at_least_one_line_written = true;

                if (!line.empty() && line.back() == '\\')
                    escaped_newline = true;
            }

            return at_least_one_line_written ? DumpResult::ok : DumpResult::no_pp_directives;
        }
    }

    enum class OutputFormat
    {
        unselected,
        json,
        macros,
    };

    class StringFilter
    {
        std::set<std::string, std::less<>> exact;

        struct Regex
        {
            std::regex regex;
            std::string value;

            Regex(std::string value) : regex(value.begin(), value.end()), value(std::move(value)) {}

            friend bool operator==(const Regex &a, const Regex &b) {return a.value == b.value;}
            friend auto operator<=>(const Regex &a, const Regex &b) {return a.value <=> b.value;}
        };
        std::set<Regex> regexes;

      public:
        StringFilter() {}

        void Insert(std::string value)
        {
            if (value.size() > 2 && value.starts_with('/') && value.ends_with('/'))
            {
                value.pop_back();
                value.erase(value.begin());
                regexes.insert(std::move(value));
            }
            else
            {
                exact.insert(std::move(value));
            }
        }

        [[nodiscard]] bool Contains(std::string_view value) const
        {
            if (exact.contains(value))
                return true;

            for (const Regex &r : regexes)
            {
                if (std::regex_match(value.begin(), value.end(), r.regex))
                    return true;
            }

            return false;
        }
    };

    struct VisitorParams
    {
        StringFilter blacklisted_entities;
        StringFilter whitelisted_entities;

        // Don't list those base classes.
        StringFilter skipped_bases;

        mutable std::vector<char/*bool*/> rejected_namespace_stack;

        // Stores null for rejected classes.
        // Class addresses are stable because of `std::unique_ptr` in `mrbind::Entity`.
        mutable std::vector<ClassEntity *> nonrejected_class_stack;

        mutable ParsedFile parsed_result;
        mutable std::vector<EntityContainer *> container_stack;

        OutputFormat output_format = OutputFormat::unselected;
        std::vector<std::string> output_filenames;
    };

    struct PrintingPolicies
    {
        clang::PrintingPolicy normal;

        PrintingPolicies(const clang::PrintingPolicy &base)
            : normal(base)
        {
            for (auto *p : {&normal})
            {
                // Not adding `PrintCanonicalTypes = true`, because that expands typedefs which prevents the bindings from being portable.
                p->SuppressElaboration = true; // Add qualifiers! (Sic!!!!!)
                p->FullyQualifiedName = true; // Add qualifiers when printing declarations, to the names being declared. Currently we don't use this (I think?), but still nice to have.
                p->SuppressUnwrittenScope = true; // Disable printing `::(anonymous namespace)::` weirdness.
                p->SuppressInlineNamespace = true; // Suppress printing inline namespaces, if it doesn't introduce ambiguity.
                p->SuppressDefaultTemplateArgs = true; // Don't print redundant default template arguments.
                p->MSVCFormatting = false; // Unsure what this changes, just in case.
                p->PolishForDeclaration = true; // Unsure what this changes, just in case.

                p->UsePreferredNames = true; // Respect `preferred_name` attribute.

                // We use `.getCanonicalType()` instead of a separate printing policy with this set to true,
                // because `.getCanonicalType()` doesn't interfere with `SuppressDefaultTemplateArgs` (and other stuff?).
                p->PrintCanonicalTypes = false;
            }
        }
    };

    // Returns false if the name contains non-machine-readable stuff that shouldn't appear in the bindings,
    // such as `(lambda at ...)`.
    bool NameSpellingIsLegal(std::string_view name)
    {
        // Reject templates that have lambdas as template arguments, because they can't be spelled properly.
        // I guess this also covers lambda types used for other purposes.
        if (name.find("(lambda at ") != name.npos)
            return false;

        return true;
    }

    // This attribute completely removes the entity from the parser output.
    [[nodiscard]] bool HasIgnoreAttribute(const clang::Decl &decl)
    {
        for (const clang::AnnotateAttr *attr : decl.specific_attrs<clang::AnnotateAttr>())
        {
            if (attr->getAnnotation() == "mrbind::ignore")
                return true;
        }
        return false;
    }

    // This attribute hides the entity from the parser output, but still emits the types related to it
    //   (function return type and parameter types, typedef target type (but not the typedef itself), and so on).
    // This is very rarely needed. Normally to force-instantiate a template you would just `[extern] template class A<...>;` it.
    // But this doesn't work with classes with custom bindings (such as standard containers).
    // For those you need this attribute.
    [[nodiscard]] bool HasInstantiateOnlyAttribute(const clang::Decl &decl)
    {
        for (const clang::AnnotateAttr *attr : decl.specific_attrs<clang::AnnotateAttr>())
        {
            if (attr->getAnnotation() == "mrbind::instantiate_only")
                return true;
        }
        return false;
    }

    // Whether we should skip this declaration when traversing the AST.
    // Includes some non-contentious stuff like rejecting header contents, template declarations there weren't instantiated yet, function-local declarations.
    // `params` is optional.
    // NOTE: If `out_ignore` is specified, will write true to it INSTEAD of the rejecting the declaration ONLY IF the rejection is caused
    //   by a blacklisted name or the `mrbind::ignore` attribute.
    [[nodiscard]] bool ShouldRejectDeclaration(const clang::ASTContext &ctx, const clang::NamedDecl &decl, const VisitorParams *params, const PrintingPolicies &printing_policies, bool *out_ignore = nullptr)
    {
        (void)ctx;

        if (out_ignore)
            *out_ignore = false; // Default to false...

        if (decl.isTemplated())
            return true; // This is a template, reject. Specific specializations will be given to us separately.

        if (decl.getParentFunctionOrMethod())
            return true; // Reject function-local declarations.

        if (HasIgnoreAttribute(decl))
        {
            // Ignore declarations with attribute `annotate("mrbind::ignore")`.
            if (out_ignore)
                *out_ignore = true;
            else
                return true;
        }

        std::string name;
        llvm::raw_string_ostream ss(name);
        decl.printQualifiedName(ss);
        std::string name_without_template_args = name;
        if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(&decl))
            clang::printTemplateArgumentList(ss, templ->getTemplateArgs().asArray(), printing_policies.normal, templ->getSpecializedTemplate()->getTemplateParameters());
        else if (auto templ = llvm::dyn_cast<clang::VarTemplateSpecializationDecl>(&decl))
            clang::printTemplateArgumentList(ss, templ->getTemplateArgs().asArray(), printing_policies.normal, templ->getSpecializedTemplate()->getTemplateParameters());
        // If you're wondering, no, enums can't be templated, so they're not mentioned here.
        else if (auto templ = llvm::dyn_cast<clang::FunctionDecl>(&decl))
        {
            if (auto args = templ->getTemplateSpecializationArgs())
                clang::printTemplateArgumentList(ss, args->asArray(), printing_policies.normal, templ->getPrimaryTemplate()->getTemplateParameters());
        }

        // Make sure the name doesn't contain unspellable stuff, such as lambda types.
        if (!NameSpellingIsLegal(name))
            return true;

        // if (auto t = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(&decl); t && ctx.getFullLoc(t->getPointOfInstantiation()).getFileID() == ctx.getSourceManager().getMainFileID())
        //     ; // This is instantiated in the main file, accept it.
        // else if (ctx.getFullLoc(decl.getBeginLoc()).getFileID() != ctx.getSourceManager().getMainFileID())
        //     return true; // Reject declarations in the headers.

        // Check against the name blacklist.
        if (params)
        {
            // Check the name both with and without template arguments.
            if (params->blacklisted_entities.Contains(name_without_template_args) || params->blacklisted_entities.Contains(name))
            {
                // This entity is blacklisted.
                if (out_ignore)
                    *out_ignore = true;
                else
                    return true;
            }

            if (!params->rejected_namespace_stack.empty() && params->rejected_namespace_stack.back() && !params->whitelisted_entities.Contains(name_without_template_args) && !params->whitelisted_entities.Contains(name))
            {
                // This entity is blacklisted because its enclosing entity is blacklisted, and it itself is not whitelisted.
                if (out_ignore)
                    *out_ignore = true;
                else
                    return true;
            }
        }

        return false;
    }

    // Returns a comment string associated with a declaration, or null if none.
    // You might want to process it with `EscapeQuoteString` for output.
    [[nodiscard]] std::optional<std::string> GetCommentString(const clang::ASTContext &ctx, const clang::Decl &decl)
    {
        const clang::RawComment *comment = ctx.getRawCommentForAnyRedecl(&decl);
        if (!comment)
            return {};
        return comment->getFormattedText(ctx.getSourceManager(), ctx.getDiagnostics());
    }

    // Returns the default argument value as a string, or empty if none.
    [[nodiscard]] std::string GetDefaultArgumentString(const clang::ParmVarDecl &param, const clang::PrintingPolicy &printing_policy)
    {
        auto fixed_printing_policy = printing_policy;

        // We need to reset this because otherwise libclang 18 converts `std::size_t(1)` to `unsigned long(1)`, which is illegal (only MSVC accepts this).
        fixed_printing_policy.PrintCanonicalTypes = false;

        std::string ret;
        if (auto default_arg = param.getDefaultArg())
        {
            llvm::raw_string_ostream ss(ret);
            default_arg->printPretty(ss, nullptr, fixed_printing_policy);

            // Adjust `{...}` to add an explicit type.
            if (ret.starts_with('{'))
                ret = param.getType().getNonReferenceType().getUnqualifiedType().getAsString(fixed_printing_policy) + std::move(ret);
        }
        return ret;
    }

    // Returns function name, or a placeholder if it's an overloaded operator.
    [[nodiscard]] std::string GetAdjustedFuncName(const clang::FunctionDecl &func)
    {
        if (func.getDeclName().isIdentifier())
        {
            return std::string(func.getName());
        }
        else if (func.isOverloadedOperator())
        {
            clang::OverloadedOperatorKind op_kind = func.getOverloadedOperator();
            switch (op_kind)
            {
            case clang::OverloadedOperatorKind::OO_None:
            case clang::OverloadedOperatorKind::NUM_OVERLOADED_OPERATORS:
                throw std::runtime_error("Not a valid overloaded operator");
                #define OVERLOADED_OPERATOR(Name,Spelling,Token,Unary,Binary,MemberOnly) \
                    case clang::OverloadedOperatorKind::OO_##Name: return "_" #Name; // Can't use `#Token` because it's not defined for `[]`.
                #include "clang/Basic/OperatorKinds.def"
                #undef OVERLOADED_OPERATOR
            }
        }
        else
        {
            throw std::runtime_error("Unknown function kind.");
        }
    }

    // Returns true if the type is publicly accessible.
    // Can have false positives.
    [[nodiscard]] bool TypeLooksAccessible(const clang::Type &type)
    {
        // TODO should we recursively visit all enclosing classes here? To check all of them.

        auto AccessIsOk = [](clang::AccessSpecifier ac)
        {
            return ac == clang::AccessSpecifier::AS_public || ac == clang::AccessSpecifier::AS_none;
        };

        auto TemplateArgIsOk = [&](const clang::TemplateArgument &arg)
        {
            if (arg.getKind() == clang::TemplateArgument::ArgKind::Type)
            {
                if (auto decl = arg.getAsType()->getAsTagDecl(); decl && !AccessIsOk(decl->getAccess()))
                    return false;
            }

            return true;
        };

        // Strip reference-ness. `Type` (as opposed to `QualType`) apprently can't have cv-qualifiers.
        const clang::Type *fixed_type = &type;
        if (auto ref = llvm::dyn_cast<clang::ReferenceType>(&type))
            fixed_type = ref->getPointeeType().getTypePtr();

        // This is based on `clang_getTypeDeclaration()`.

        if (auto t = llvm::dyn_cast<clang::TypedefType>(fixed_type))
            return AccessIsOk(t->getDecl()->getAccess());
        if (auto t = llvm::dyn_cast<clang::TagType>(fixed_type))
        {
            if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(t->getDecl()))
            {
                for (const auto &arg : templ->getTemplateArgs().asArray())
                {
                    if (!TemplateArgIsOk(arg))
                        return false;
                }
            }

            return AccessIsOk(t->getDecl()->getAccess());
        }
        if (auto t = llvm::dyn_cast<clang::TemplateSpecializationType>(fixed_type))
        {
            if (!AccessIsOk(t->getTemplateName().getAsTemplateDecl()->getAccess()))
                return false;

            // Check template arguments. I'm not sure when exactly this can run, class template specializations are processed above.
            for (const auto &arg : t->template_arguments())
            {
                if (!TemplateArgIsOk(arg))
                    return false;
            }

            return true;
        }
        if (auto t = llvm::dyn_cast<clang::DeducedType>(fixed_type))
        {
            if (auto dt = t->getDeducedType().getTypePtrOrNull())
                return TypeLooksAccessible(*dt);
            else
                return true;
        }
        if (auto t = llvm::dyn_cast<clang::InjectedClassNameType>(fixed_type))
            return AccessIsOk(t->getDecl()->getAccess());
        if (auto t = llvm::dyn_cast<clang::ElaboratedType>(fixed_type))
        {
            if (auto dt = t->getNamedType().getTypePtrOrNull())
                return TypeLooksAccessible(*dt);
            else
                return true;
        }
        return true;
    }

    // Returns true if all types in the function signature are publicly accessible.
    // Can have false positives.
    [[nodiscard]] bool FuncLooksLikeItHasAccessibleSignatureTypes(const clang::FunctionDecl &func)
    {
        if (!llvm::isa<clang::CXXConstructorDecl>(func) && !TypeLooksAccessible(*func.getReturnType()))
            return false;

        for (const clang::ParmVarDecl *p : func.parameters())
        {
            if (!TypeLooksAccessible(*p->getType()))
                return false;
        }

        return true;
    }

    // Returns true on success.
    template <typename Visitor = std::nullptr_t>
    bool TryInstantiateClass(clang::CompilerInstance &ci, clang::TagDecl *decl, clang::SourceLocation loc)
    {
        if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(decl))
        {
            // Don't try to define if there's no body.
            bool body_exists = bool(templ->getSpecializedTemplate()->getTemplatedDecl()->getDefinition());

            // Important! Check that it wasn't already instantiated.
            // Otherwise Clang will emit a runtime error.
            if (body_exists && !decl->getDefinition())
            {
                ci.getSema().InstantiateClassTemplateSpecialization(loc, templ, clang::TemplateSpecializationKind::TSK_ImplicitInstantiation);
                // if constexpr (!std::is_null_pointer_v<Visitor>)
                //     vis->TraverseClassTemplateSpecializationDecl(templ); // Recurse into this template.
                return true;
            }
        }
        else
        {
            // Alternative instantiation method, unsure when/if this is necessary.

            if (!decl->isCompleteDefinition())
            {
                if (auto cxxdecl = llvm::dyn_cast<clang::CXXRecordDecl>(decl))
                {
                    // This rejects non-templates.
                    if (auto pat = cxxdecl->getTemplateInstantiationPattern())
                    {
                        // This rejects templates that are declared but not defined.
                        if (pat->isCompleteDefinition())
                        {
                            ci.getSema().InstantiateClass(decl->getSourceRange().getBegin(), cxxdecl, pat, ci.getSema().getTemplateInstantiationArgs(cxxdecl), clang::TSK_ImplicitInstantiation);
                            // if constexpr (!std::is_null_pointer_v<Visitor>)
                            //     // How do I recurse here?
                            return true;
                        }
                    }
                }
            }
        }

        return false;
    }

    // The main visitor, generates most of our code.
    struct ClangAstVisitor : clang::RecursiveASTVisitor<ClangAstVisitor>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitor>;

        clang::ASTContext *ctx = nullptr;
        clang::CompilerInstance *ci = nullptr;

        PrintingPolicies printing_policies;

        const VisitorParams *params = nullptr;

        std::unordered_map<std::string, std::string> types_to_preferred_names;

        [[nodiscard]] std::string GetCanonicalTypeName(const clang::QualType &type)
        {
            return type.getCanonicalType().getAsString(printing_policies.normal);
        }

        // If `reason` is zero, the function does nothing.
        void RegisterTypeSpelling(const std::string &canonical, const std::string &pretty, TypeUses reason)
        {
            if (reason == TypeUses{})
                return;

            TypeInformation &info = params->parsed_result.type_info[canonical];
            info.uses |= reason & ~TypeUses::_poisoned;

            auto &spelling = info.alt_spellings.try_emplace(pretty).first->second;
            if (bool(reason & TypeUses::_poisoned))
                spelling.poisoned = true;
        }

        // Returns the string representations of a type.
        // Also registers a type alias if we haven't seen this spelling before.
        // If `reason` zero, doesn't register anything.
        [[nodiscard]] Type GetTypeStrings(const clang::QualType &type, TypeUses reason)
        {
            Type ret;
            ret.pretty = type.getAsString(printing_policies.normal);
            ret.canonical = GetCanonicalTypeName(type);

            RegisterTypeSpelling(ret.canonical, ret.pretty, reason);

            return ret;
        }

        [[nodiscard]] std::vector<FuncParam> GetFuncParams(const clang::FunctionDecl &decl)
        {
            std::vector<FuncParam> ret;
            for (const clang::ParmVarDecl *p : decl.parameters())
            {
                FuncParam &new_param = ret.emplace_back();
                new_param.name = p->getName();
                new_param.type = GetTypeStrings(p->getType(), TypeUses::parameter);
                new_param.default_argument = GetDefaultArgumentString(*p, printing_policies.normal);
            }
            return ret;
        }


        ClangAstVisitor(clang::ASTContext &ctx, clang::CompilerInstance &ci, const VisitorParams &params)
            : ctx(&ctx), ci(&ci),
            printing_policies(ctx.getPrintingPolicy()),
            params(&params)
        {
            params.container_stack.push_back(&params.parsed_result.entities);
        }

        // Visit template specializations almost as if they were normal code.
        bool shouldVisitTemplateInstantiations() const // CRTP override
        {
            return true;
        }

        bool VisitFunctionDecl(clang::FunctionDecl *decl) // CRTP override
        {
            if (decl->getDeclName().getNameKind() == clang::DeclarationName::CXXLiteralOperatorName)
                return true; // Reject user-defined literals.

            // Skip deduction guides.
            // We don't seem to need to check this separately for class members, since they count as non-member functions, just like friend functions.
            if (llvm::isa<clang::CXXDeductionGuideDecl>(decl))
                return true;

            if (ShouldRejectDeclaration(*ctx, *decl, params, printing_policies))
                return true;

            if (!FuncLooksLikeItHasAccessibleSignatureTypes(*decl))
                return true;

            if (decl->isDeleted())
                return true; // Skip deleted.

            // Custom handling for class methods.
            if (decl->isCXXClassMember())
            {
                // The `nonrejected_class_stack` should never be empty here.
                if (params->nonrejected_class_stack.empty() || !params->nonrejected_class_stack.back())
                    return true; // Reject methods of rejected classes.

                if (decl->getAccess() != clang::AS_public)
                    return true; // Reject non-public methods.
                if (llvm::isa<clang::CXXDestructorDecl>(decl))
                    return true; // Reject destructors.

                clang::CXXMethodDecl *method = clang::dyn_cast<clang::CXXMethodDecl>(decl);
                if (!method)
                    return true; // Unsure when this can happen, but anyway.

                if (method->getRefQualifier() == clang::RefQualifierKind::RQ_RValue)
                    return true; // Skip rvalue-qualified methods, with the assumption that they're going to have lvalue-ref-qualified versions too.

                // Check the requires-clause, if any. Why doesn't libclang do this automatically?
                // I *THINK* we don't need this for non-members?
                if (method->getTrailingRequiresClause())
                {
                    clang::ConstraintSatisfaction sat;
                    if (ci->getSema().CheckFunctionConstraints(method, sat))
                        throw std::runtime_error("Unable to evaluate the constraints for the method." );
                    if (!sat.IsSatisfied)
                        return true; // Constraints are false.
                }

                ClassEntity &target_class = *params->nonrejected_class_stack.back();

                BasicFunc *basic_func = nullptr;

                if (auto ctor = llvm::dyn_cast<clang::CXXConstructorDecl>(method))
                {
                    ClassCtor &new_ctor = target_class.members.emplace_back().emplace<ClassCtor>();
                    new_ctor.is_explicit = ctor->isExplicit();
                    new_ctor.kind = ctor->isCopyConstructor() ? CopyMoveKind::copy : ctor->isMoveConstructor() ? CopyMoveKind::move : CopyMoveKind::none;
                    basic_func = &new_ctor;
                }
                else
                {
                    BasicReturningClassFunc *basic_ret_class_func = nullptr;

                    if (llvm::isa<clang::CXXConversionDecl>(method))
                    {
                        ClassConvOp &new_conv_op = target_class.members.emplace_back().emplace<ClassConvOp>();
                        basic_ret_class_func = &new_conv_op;
                    }
                    else
                    {
                        ClassMethod &new_method = target_class.members.emplace_back().emplace<ClassMethod>();
                        basic_ret_class_func = &new_method;
                        // Copy&swap assignment gets reported as "copy" (and no, `isMoveAssignmentOperator()` returns false for it, I've checked).
                        new_method.assignment_kind = method->isCopyAssignmentOperator() ? CopyMoveKind::copy : method->isMoveAssignmentOperator() ? CopyMoveKind::move : CopyMoveKind::none;
                        new_method.name = method->getDeclName().getAsString();
                        new_method.simple_name = GetAdjustedFuncName(*method);

                        new_method.full_name = new_method.simple_name;
                        // Add the template arguments, if any.
                        if (auto args = method->getTemplateSpecializationArgs())
                        {
                            llvm::raw_string_ostream ss(new_method.full_name);
                            clang::printTemplateArgumentList(ss, args->asArray(), printing_policies.normal, method->getTemplateSpecializationInfo()->getTemplate()->getTemplateParameters());
                        }

                        new_method.is_static = method->isStatic();
                    }

                    basic_func = basic_ret_class_func;

                    basic_ret_class_func->is_const = method->isConst();

                    // Force instantiate body to know the true return type rather than `auto`.
                    if (method->getReturnType()->isUndeducedAutoType())
                        ci->getSema().InstantiateFunctionDefinition(method->getBeginLoc(), method);

                    basic_ret_class_func->return_type = GetTypeStrings(method->getReturnType(), TypeUses::returned);
                }

                basic_func->comment = GetCommentString(*ctx, *method);
                basic_func->params = GetFuncParams(*method);
                return true; // Done processing member function, the rest is for non-members.
            }

            // Force instantiate body to know the true return type rather than `auto`.
            if (decl->getReturnType()->isUndeducedAutoType())
                ci->getSema().InstantiateFunctionDefinition(decl->getBeginLoc(), decl);

            if (HasInstantiateOnlyAttribute(*decl))
            {
                // Just register the types.
                (void)GetFuncParams(*decl);
                (void)GetTypeStrings(decl->getReturnType(), TypeUses::returned);
                return true;
            }

            FuncEntity &new_func = params->container_stack.back()->nested.emplace_back().emplace<FuncEntity>();

            { // Full name.
                llvm::raw_string_ostream qual_name_ss(new_func.full_qual_name);
                decl->printQualifiedName(qual_name_ss, printing_policies.normal);
                new_func.qual_name = new_func.full_qual_name; // Make a copy before adding template arguments.
                // Add template arguments, if any.
                if (auto template_args = decl->getTemplateSpecializationArgs())
                    clang::printTemplateArgumentList(qual_name_ss, template_args->asArray(), printing_policies.normal, decl->getPrimaryTemplate()->getTemplateParameters());
            }

            new_func.name = decl->getDeclName().getAsString();
            new_func.simple_name = GetAdjustedFuncName(*decl);
            new_func.return_type = GetTypeStrings(decl->getReturnType(), TypeUses::returned);
            new_func.comment = GetCommentString(*ctx, *decl);
            new_func.params = GetFuncParams(*decl);

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        bool ProcessRecord(clang::RecordDecl *decl)
        {
            params->nonrejected_class_stack.push_back(nullptr);

            if (ShouldRejectDeclaration(*ctx, *decl, params, printing_policies))
                return false;

            if (decl->isAnonymousStructOrUnion())
                return false; // Reject anonymous structs/unions.

            if (!decl->isCompleteDefinition())
                return false;

            if (!TypeLooksAccessible(*decl->getTypeForDecl()))
                return false; // Inaccessible type.

            ClassEntity &new_class = params->container_stack.back()->nested.emplace_back().emplace<ClassEntity>();
            params->nonrejected_class_stack.back() = &new_class;
            params->container_stack.push_back(&new_class);

            new_class.name = decl->getName();
            new_class.comment = GetCommentString(*ctx, *decl);
            new_class.kind = decl->isClass() ? ClassKind::class_ : decl->isStruct() ? ClassKind::struct_ : decl->isUnion() ? ClassKind::union_ : throw std::runtime_error("Unable to classify the class-like type `" + new_class.full_type + "`.");
            // Remove non-canonical template arguments, since I don't know how to do this with a printing policy.
            // Testcase: `namespace MR{ template <E> struct X {}; template <> struct X<E::e2> {}; using F = X<MR::E::e1>; using G = X<MR::E::e2>; }`.
            // Without this, this incorrectly prints `E::e2` without `MR::` (REGARDLESS of how the full specialization is spelled!).
            // WARNING: This for some reason seems to crash `GetCommentString()`, so we do it after. Weird but ok.
            if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(decl))
                templ->setTypeAsWritten(nullptr);
            new_class.full_type = GetCanonicalTypeName(ctx->getRecordType(decl));

            // Register the class type, just in case. AFTER `setTypeAsWritten()`.
            (void)GetTypeStrings(ctx->getRecordType(decl), TypeUses::parsed);

            auto cxxdecl = llvm::dyn_cast<clang::CXXRecordDecl>(decl);

            // Bases.
            if (cxxdecl)
            {
                for (const clang::CXXBaseSpecifier &base : cxxdecl->bases())
                {
                    if (base.getAccessSpecifier() != clang::AS_public)
                        continue; // Reject non-public bases.

                    { // Check against the blacklist.
                        std::string qual_name_without_template_args;
                        llvm::raw_string_ostream ss(qual_name_without_template_args);
                        base.getType()->getAsCXXRecordDecl()->printQualifiedName(ss);
                        if (params->skipped_bases.Contains(qual_name_without_template_args))
                            continue; // In the base skip list.
                    }

                    ClassBase &new_base = new_class.bases.emplace_back();
                    new_base.type = GetTypeStrings(base.getType(), TypeUses::base);
                    new_base.is_virtual = base.isVirtual();
                }
            }

            // Members:

            { // -- Static data members.
                clang::DeclContext::specific_decl_iterator<clang::VarDecl> iter(decl->decls_begin());
                for (const clang::VarDecl *var : llvm::iterator_range(iter, decltype(iter){}))
                {
                    if (var->getAccess() != clang::AS_public)
                        continue; // Reject non-public members.

                    if (HasIgnoreAttribute(*var))
                        continue; // Reject disabled members.

                    std::string full_name(var->getName());
                    // Add template arguments for variable templates to the name.
                    if (auto templ = llvm::dyn_cast<clang::VarTemplateSpecializationDecl>(var))
                    {
                        llvm::raw_string_ostream ss(full_name);
                        clang::printTemplateArgumentList(ss, templ->getTemplateArgs().asArray(), printing_policies.normal, templ->getSpecializedTemplate()->getTemplateParameters());

                        if (!NameSpellingIsLegal(full_name))
                            continue; // Has unspellable template arguments.
                    }

                    ClassField &new_field = new_class.members.emplace_back().emplace<ClassField>();
                    new_field.comment = GetCommentString(*ctx, *var);
                    new_field.is_static = true;
                    new_field.name = var->getName();
                    new_field.full_name = std::move(full_name);
                    new_field.type = GetTypeStrings(var->getType(), TypeUses::static_data_member);
                }
            }

            // -- Non-static data members.
            for (const clang::FieldDecl *field : decl->fields())
            {
                if (field->isBitField() || field->isAnonymousStructOrUnion())
                    continue; // Reject weird stuff.

                if (field->getAccess() != clang::AS_public)
                    continue; // Reject non-public fields.

                if (HasIgnoreAttribute(*field))
                    continue; // Reject disabled fields.

                ClassField &new_field = new_class.members.emplace_back().emplace<ClassField>();
                new_field.comment = GetCommentString(*ctx, *field);
                new_field.is_static = false;
                new_field.name = field->getName();
                new_field.full_name = field->getName();
                new_field.type = GetTypeStrings(field->getType(), TypeUses::nonstatic_data_member);
            }

            // -- Constructors and methods.

            // ... We used to extract methods and constructors here, but we no longer do it, because template instantiations don't arrive here
            // for some reason?! Instead we do that in `VisitFunctionDecl()`, which does get them. Hmm.

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        void FinishRecord(clang::RecordDecl *decl)
        {
            (void)decl;
            params->container_stack.pop_back();
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        void FinishRecordEvenIfRejected(clang::RecordDecl *decl)
        {
            (void)decl;
            params->nonrejected_class_stack.pop_back();
        }

        bool TraverseRecordDecl(clang::RecordDecl *decl) // CRTP override
        {
            bool ret = true;
            if (ProcessRecord(decl))
            {
                ret = Base::TraverseRecordDecl(decl);
                FinishRecord(decl);
            }
            FinishRecordEvenIfRejected(decl);
            return ret;
        }

        bool TraverseCXXRecordDecl(clang::CXXRecordDecl *decl) // CRTP override
        {
            // Unlike `Visit...`, `Traverse...` only handles exact matches, so we need this in addition to `TraverseRecordDecl()`
            //   to process classes (including structs in C++ mode).

            bool ret = true;
            if (ProcessRecord(decl))
            {
                ret = Base::TraverseCXXRecordDecl(decl);
                FinishRecord(decl);
            }
            FinishRecordEvenIfRejected(decl);
            return ret;
        }

        bool TraverseClassTemplateSpecializationDecl(clang::ClassTemplateSpecializationDecl *decl) // CRTP override
        {
            // Unlike `Visit...`, `Traverse...` only handles exact matches, so we need this in addition to `TraverseRecordDecl()`
            //   to process class template specializations.
            // There's also a `...PartialSpecializationDecl` version, which we don't care about.

            bool ret = true;
            if (ProcessRecord(decl))
            {
                ret = Base::TraverseClassTemplateSpecializationDecl(decl);
                FinishRecord(decl);
            }
            FinishRecordEvenIfRejected(decl);
            return ret;
        }

        bool VisitEnumDecl(clang::EnumDecl *decl) // CRTP override
        {
            if (ShouldRejectDeclaration(*ctx, *decl, params, printing_policies))
                return true;

            if (!TypeLooksAccessible(*decl->getTypeForDecl()))
                return true; // Inaccessible type.

            if (!decl->isCompleteDefinition())
                return false;

            EnumEntity &new_enum = params->container_stack.back()->nested.emplace_back().emplace<EnumEntity>();

            // Register the type, just in case.
            (void)GetTypeStrings(ctx->getEnumType(decl), TypeUses::parsed);

            new_enum.name = decl->getName();
            new_enum.is_scoped = decl->isScoped();
            new_enum.comment = GetCommentString(*ctx, *decl);
            new_enum.full_type = GetCanonicalTypeName(ctx->getEnumType(decl));
            new_enum.canonical_underlying_type = GetCanonicalTypeName(decl->getIntegerType());
            new_enum.is_signed = decl->getIntegerType()->isSignedIntegerType();

            for (const clang::EnumConstantDecl *elem : decl->enumerators())
            {
                EnumElem &new_elem = new_enum.elems.emplace_back();

                new_elem.name = elem->getName();
                new_elem.comment = GetCommentString(*ctx, *elem);

                if (new_enum.is_signed)
                {
                    auto opt = elem->getValue().trySExtValue();
                    if (!opt)
                        throw std::runtime_error("Enum element value doesn't fit into 64 bits.");
                    new_elem.raw_value = std::uint64_t(*opt);
                }
                else
                {
                    auto opt = elem->getValue().tryZExtValue();
                    if (!opt)
                        throw std::runtime_error("Enum element value doesn't fit into 64 bits.");
                    new_elem.raw_value = *opt;
                }
            }

            return true;
        }

        bool VisitTypedefNameDecl(clang::TypedefNameDecl *decl) // CRTP override
        {
            bool should_poison = false;
            if (ShouldRejectDeclaration(*ctx, *decl, params, printing_policies, &should_poison))
                return true;

            if (auto type = decl->getTypeForDecl()) // For some reason this can be null (for typedefs/aliases, but not for other entities?).
            {
                if (!TypeLooksAccessible(*type))
                    return true; // Inaccessible type.
            }

            if (HasInstantiateOnlyAttribute(*decl))
            {
                (void)GetTypeStrings(decl->getUnderlyingType(), TypeUses::typedef_target); // Register the type.
                return true;
            }

            std::string full_name = ctx->getTypedefType(decl).getAsString(printing_policies.normal);
            // Here we don't register the typedef TARGET TYPE SPELLING if we're going to poison the target type.
            auto type_strings = GetTypeStrings(decl->getUnderlyingType(), TypeUses::typedef_target * !should_poison);
            if (should_poison)
            {
                // We do register the TYPEDEF SPELLING itself to poison it though.
                RegisterTypeSpelling(type_strings.canonical, full_name, TypeUses::_poisoned);
                return true;
            }

            TypedefEntity &new_typedef = params->container_stack.back()->nested.emplace_back().emplace<TypedefEntity>();

            new_typedef.name = decl->getName();
            new_typedef.full_name = std::move(full_name);
            new_typedef.comment = GetCommentString(*ctx, *decl);
            new_typedef.type = std::move(type_strings);
            RegisterTypeSpelling(new_typedef.type.canonical, new_typedef.full_name, TypeUses::typedef_target);

            return true;
        }

        bool TraverseNamespaceDecl(clang::NamespaceDecl *decl) // CRTP override
        {
            bool reject = ShouldRejectDeclaration(*ctx, *decl, params, printing_policies);

            { // Insert the namespace.
                NamespaceEntity &new_ns = params->container_stack.back()->nested.emplace_back().emplace<NamespaceEntity>();
                params->container_stack.push_back(&new_ns);
                new_ns.name = decl->getName();
                new_ns.comment = GetCommentString(*ctx, *decl);
                new_ns.is_inline = decl->isInlineNamespace();
            }

            params->rejected_namespace_stack.push_back(reject);
            // Must traverse unconditionally, in case some elements are whitelisted on their own.
            bool ret = Base::TraverseNamespaceDecl(decl);
            params->rejected_namespace_stack.pop_back();

            // If the namespace is empty, prune it.
            if (params->container_stack.back()->nested.empty())
                params->container_stack[params->container_stack.size() - 2]->nested.pop_back();
            params->container_stack.pop_back();

            return ret;
        }
    };

    // Instantiates templates referred to by typedefs.
    struct ClangAstVisitorInstTypes : clang::RecursiveASTVisitor<ClangAstVisitorInstTypes>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitorInstTypes>;

        clang::ASTContext *ctx = nullptr;
        clang::CompilerInstance *ci = nullptr;

        PrintingPolicies printing_policies;

        const VisitorParams *params = nullptr;

        bool instantiated_some = false;

        ClangAstVisitorInstTypes(clang::ASTContext &ctx, clang::CompilerInstance &ci, const VisitorParams &params)
            : ctx(&ctx), ci(&ci),
            printing_policies(ctx.getPrintingPolicy()),
            params(&params)
        {}

        // Visit template specializations almost as if they were normal code.
        bool shouldVisitTemplateInstantiations() const // CRTP override
        {
            return true;
        }

        bool VisitTypedefNameDecl(clang::TypedefNameDecl *d) // CRTP override
        {
            clang::QualType type = ctx->getTypedefType(d);
            if (!TypeLooksAccessible(*type))
                return true; // Type is inaccessible.

            if (params->rejected_namespace_stack.back())
                return true; // The namespace is rejected, don't instantiate things here.

            if (auto decl = type->getAsTagDecl())
            {
                if (TryInstantiateClass(*ci, decl, d->getSourceRange().getBegin()))
                    instantiated_some = true;
            }

            return true;
        }

        bool VisitEnumDecl(clang::EnumDecl *decl) // CRTP override
        {
            if (ShouldRejectDeclaration(*ctx, *decl, params, printing_policies))
                return true;

            if (!TypeLooksAccessible(*decl->getTypeForDecl()))
                return true; // Inaccessible type.

            if (!decl->isCompleteDefinition())
            {
                // This rejects non-templates.
                if (auto pat = decl->getTemplateInstantiationPattern())
                {
                    // This rejects templates that are declared but not defined.
                    if (pat->isCompleteDefinition())
                    {
                        ci->getSema().InstantiateEnum(decl->getSourceRange().getBegin(), decl, pat, ci->getSema().getTemplateInstantiationArgs(decl), clang::TSK_ImplicitInstantiation);
                        instantiated_some = true;
                    }
                }
            }

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        bool ProcessRecord(clang::RecordDecl *decl)
        {
            params->nonrejected_class_stack.push_back(nullptr);

            if (ShouldRejectDeclaration(*ctx, *decl, params, printing_policies))
                return false;

            if (decl->isAnonymousStructOrUnion())
                return false; // Reject anonymous structs/unions.

            if (TryInstantiateClass(*ci, decl, decl->getSourceRange().getBegin()))
                instantiated_some = true;

            params->nonrejected_class_stack.back() = (ClassEntity *)sizeof(ClassEntity); // Push some non-zero pointer to allow boolean testing.

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        void FinishRecordEvenIfRejected(clang::RecordDecl *decl)
        {
            (void)decl;
            params->nonrejected_class_stack.pop_back();
        }

        bool TraverseRecordDecl(clang::RecordDecl *decl) // CRTP override
        {
            bool ret = true;
            if (ProcessRecord(decl))
                ret = Base::TraverseRecordDecl(decl);
            FinishRecordEvenIfRejected(decl);
            return ret;
        }

        bool TraverseCXXRecordDecl(clang::CXXRecordDecl *decl) // CRTP override
        {
            // Unlike `Visit...`, `Traverse...` only handles exact matches, so we need this in addition to `TraverseRecordDecl()`
            //   to process classes (including structs in C++ mode).

            bool ret = true;
            if (ProcessRecord(decl))
                ret = Base::TraverseCXXRecordDecl(decl);
            FinishRecordEvenIfRejected(decl);
            return ret;
        }

        bool TraverseClassTemplateSpecializationDecl(clang::ClassTemplateSpecializationDecl *decl)
        {
            // Unlike `Visit...`, `Traverse...` only handles exact matches, so we need this in addition to `TraverseRecordDecl()`
            //   to process class template specializations.
            // There's also a `...PartialSpecializationDecl` version, which we don't care about.

            bool ret = true;
            if (ProcessRecord(decl))
                ret = Base::TraverseClassTemplateSpecializationDecl(decl);
            FinishRecordEvenIfRejected(decl);
            return ret;
        }

        bool TraverseNamespaceDecl(clang::NamespaceDecl *decl) // CRTP override
        {
            bool reject = ShouldRejectDeclaration(*ctx, *decl, params, printing_policies);

            params->rejected_namespace_stack.push_back(reject);
            bool ret = Base::TraverseNamespaceDecl(decl);
            params->rejected_namespace_stack.pop_back();

            return ret;
        }
    };

    struct ClangAstConsumer : clang::ASTConsumer
    {
        std::string input_filename;
        clang::CompilerInstance *ci = nullptr;
        const VisitorParams *params = nullptr;

        explicit ClangAstConsumer(std::string input_filename, clang::CompilerInstance &ci, const VisitorParams &params)
            : input_filename(std::move(input_filename)), ci(&ci), params(&params)
        {}

        void HandleTranslationUnit(clang::ASTContext &ctx) override
        {
            if (params->output_format == OutputFormat::unselected)
                throw std::runtime_error("Must select the output format using `--format=...`, see `--help`.");

            params->parsed_result.original_file = input_filename;

            { // Dump the headers from the .cpp file.
                llvm::raw_string_ostream ss(params->parsed_result.impl_file_preprocessor_directives);

                params->parsed_result.guessed_impl_file = PpDirDumper::GuessImplementationFileName(input_filename);
                PpDirDumper::DumpResult result = PpDirDumper::DumpPreprocessorDirectivesFromFile(params->parsed_result.guessed_impl_file, ss);
                switch (result)
                {
                  case PpDirDumper::DumpResult::ok:
                    // Nothing.
                    break;
                  case PpDirDumper::DumpResult::filename_not_specified:
                    ss << "// Unable to guess the implementation file name from the input file name.\n";
                    break;
                  case PpDirDumper::DumpResult::no_such_file:
                    ss << "// Implementation file doesn't exist: " << params->parsed_result.guessed_impl_file << '\n';
                    break;
                  case PpDirDumper::DumpResult::no_pp_directives:
                    ss << "// Implementation file doesn't contain preprocessing directives: " << params->parsed_result.guessed_impl_file << '\n';
                    break;
                }
            }

            params->rejected_namespace_stack.push_back(params->blacklisted_entities.Contains("::"));

            // Instantiate templates referred to by typedefs.
            for (int i = 0;; i++)
            {
                if (i == 1000)
                    throw std::runtime_error("Too many template instantiation loops.");

                ClangAstVisitorInstTypes vis(ctx, *ci, *params);
                vis.TraverseDecl(ctx.getTranslationUnitDecl());
                if (!vis.instantiated_some)
                {
                    if (i > 1)
                        llvm::errs() << "mrbind: Used " << i+1 << " iterations to instantiate all templates.\n";
                    break;
                }
            }

            // Gather the bulk of the information.

            ClangAstVisitor vis(ctx, *ci, *params);
            vis.TraverseDecl(ctx.getTranslationUnitDecl());

            params->rejected_namespace_stack.pop_back();

            { // Remove identities from "alt type spellings".
                // We intentionally don't remove the empty lists after erasure, because we use this map to know all types we need to bind.
                for (auto &[type, info] : params->parsed_result.type_info)
                    info.alt_spellings.erase(type);
            }

            { // Remove types that don't have any "uses" bits set. This can happen if they were poisoned by poisonous typedefs and weren't used elsewhere.
                std::erase_if(
                    params->parsed_result.type_info,
                    [](const std::pair<const std::string, TypeInformation> &p)
                    {
                        return p.second.uses == TypeUses{};
                    }
                );
            }


            // Multiplex the output between several files, if needed.
            std::vector<ParsedFile> multiplexed_data = MultiplexData(std::move(params->parsed_result), params->output_filenames.size());

            // Write the output.
            for (std::size_t i = 0; i < multiplexed_data.size(); i++)
            {
                std::error_code ec;
                llvm::raw_fd_stream out(params->output_filenames.at(i), ec);
                if (ec)
                    throw std::runtime_error("Unable to open output file: " + ec.message());

                switch (params->output_format)
                {
                  case OutputFormat::unselected:
                    // This should be unreachable.
                    throw std::logic_error("Finsihed parsing, but no output format is selected.");
                    break;
                  case OutputFormat::json:
                    mrbind::ParsedFileToJson(multiplexed_data[i], out);
                    break;
                  case OutputFormat::macros:
                    mrbind::ParsedFileToMacros(multiplexed_data[i], out);
                    break;
                }
            }
        }
    };

    struct ClangFrontendAction : clang::ASTFrontendAction
    {
        const VisitorParams *params = nullptr;

        ClangFrontendAction(const VisitorParams &params) : params(&params) {}

        std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance &CI, llvm::StringRef InFile) override
        {
            (void)InFile;
            return std::make_unique<ClangAstConsumer>(std::string(InFile), CI, *params);
        }
    };

    struct ClangFrontendActionFactory : clang::tooling::FrontendActionFactory
    {
        const VisitorParams *params = nullptr;

        std::unique_ptr<clang::FrontendAction> create() override
        {
            return std::make_unique<ClangFrontendAction>(*params);
        }
    };

    // Wraps the default compilation database, to adjust some flags.
    // Can hold at most one file at a time.
    struct ClangAdjustedCompilationDatabase : clang::tooling::CompilationDatabase
    {
        clang::tooling::CompilationDatabase *underlying = nullptr;

        bool remove_pch_flags = false;

        ClangAdjustedCompilationDatabase(clang::tooling::CompilationDatabase &underlying, bool remove_pch_flags)
            : underlying(&underlying), remove_pch_flags(remove_pch_flags)
        {}

        void AdjustCommand(clang::tooling::CompileCommand &command) const
        {
            auto RemoveFlags = [&](const auto &... patterns)
            {
                auto iter = command.CommandLine.begin();

                std::array<std::regex, sizeof...(patterns)> pattern_regexes = {std::regex(patterns)...};

                while (true)
                {
                    iter = std::search(command.CommandLine.begin(), command.CommandLine.end(), pattern_regexes.begin(), pattern_regexes.end(),
                        [](const std::string &a, const std::regex &b)
                        {
                            return std::regex_match(a, b);
                        }
                    );
                    if (iter == command.CommandLine.end())
                        break;
                    command.CommandLine.erase(iter, iter + std::ptrdiff_t(pattern_regexes.size()));
                }
            };

            // PCH inclusion, because their Clang version might not match.
            if (remove_pch_flags)
                RemoveFlags("-Xclang", "-include-pch", "-Xclang", ".*");
        }

        std::vector<clang::tooling::CompileCommand> getCompileCommands(clang::StringRef FilePath) const override
        {
            auto ret = underlying->getCompileCommands(FilePath);
            for (auto &elem : ret)
                AdjustCommand(elem);
            return ret;
        }

        std::vector<std::string> getAllFiles() const override
        {
            return underlying->getAllFiles();
        }

        std::vector<clang::tooling::CompileCommand> getAllCompileCommands() const override
        {
            auto ret = underlying->getAllCompileCommands();
            for (auto &elem : ret)
                AdjustCommand(elem);
            return ret;
        }
    };
}

int main(int argc, char **argv)
{
    try
    {
        #ifdef _WIN32
        std::setlocale(LC_ALL, ".UTF-8"); // Hopefully enable UTF-8 support for `std::filesystem::path` on Windows.
        #endif

        std::string dump_command_to_file;
        bool dump_command_with_null_separators = false;
        bool remove_pch_flags = false;

        mrbind::VisitorParams params;



        { // Extract custom options from argc/argv.
            int modified_argc = 1;
            bool seen_double_dash = false;

            for (int i = 1; i < argc; i++)
            {
                if (!seen_double_dash)
                {
                    std::string_view this_arg = argv[i];
                    if (this_arg == "--")
                        seen_double_dash = true; // Don't continue after `--`, those are Clang options.

                    if (!seen_double_dash)
                    {
                        // --dump-command

                        bool dump_command = false;
                        if (this_arg == "--dump-command")
                        {
                            dump_command = true;
                            dump_command_with_null_separators = false;
                        }
                        else if (this_arg == "--dump-command0")
                        {
                            dump_command = true;
                            dump_command_with_null_separators = true;
                        }

                        if (dump_command)
                        {
                            if (i == argc - 1 || std::strcmp(argv[i + 1], "--") == 0)
                                throw std::runtime_error("Expected a filename after `" + std::string(this_arg) + "`.");

                            dump_command_to_file = argv[++i];
                            continue;
                        }

                        // ----

                        if (this_arg == "-o")
                        {
                            if (i == argc - 1 || std::strcmp(argv[i + 1], "--") == 0)
                                throw std::runtime_error("Expected a file name after `" + std::string(this_arg) + "`.");
                            params.output_filenames.emplace_back(argv[++i]);
                            continue;
                        }

                        if (this_arg == "--ignore-pch-flags")
                        {
                            remove_pch_flags = true;
                            continue;
                        }

                        if (this_arg == "--ignore")
                        {
                            if (i == argc - 1 || std::strcmp(argv[i + 1], "--") == 0)
                                throw std::runtime_error("Expected a type name after `" + std::string(this_arg) + "`.");

                            params.blacklisted_entities.Insert(argv[++i]);
                            continue;
                        }

                        if (this_arg == "--allow")
                        {
                            if (i == argc - 1 || std::strcmp(argv[i + 1], "--") == 0)
                                throw std::runtime_error("Expected a type name after `" + std::string(this_arg) + "`.");

                            params.whitelisted_entities.Insert(argv[++i]);
                            continue;
                        }

                        if (this_arg == "--skip-base")
                        {
                            if (i == argc - 1 || std::strcmp(argv[i + 1], "--") == 0)
                                throw std::runtime_error("Expected a type name after `" + std::string(this_arg) + "`.");

                            params.skipped_bases.Insert(argv[++i]);
                            continue;
                        }

                        if (this_arg == "--format=json")
                        {
                            params.output_format = mrbind::OutputFormat::json;
                            continue;
                        }
                        if (this_arg == "--format=macros")
                        {
                            params.output_format = mrbind::OutputFormat::macros;
                            continue;
                        }
                    }
                }

                argv[modified_argc++] = argv[i];
            }

            if (modified_argc < argc)
                argv[modified_argc] = nullptr;
            argc = modified_argc;

            // Adjust the options:

            if (params.output_filenames.empty())
                params.output_filenames.push_back("-");
        }

        llvm::cl::OptionCategory options_category("Standard Clang tooling options");
        auto option_parser_ex = clang::tooling::CommonOptionsParser::create(argc, const_cast<const char **>(argv), options_category, llvm::cl::OneOrMore,
            "\n\n"
            "In addition to the stock Clang options explained below, we also support:\n"
            "  -o output.cpp               - Redirect the output to a file. Specifying this flag multiple times multiplexes the output between several files which can be compiled in parallel, or sequentally for a lower RAM usage.\n"
            "  --dump-command output.txt   - Dump the resulting compilation command to the specified file, one argument per line. The first argument is always the compiler name, and there's no trailing newline.\n"
            "  --dump-command0 output.txt  - Same, but separate the arguments with zero bytes instead of newlines.\n"
            "  --ignore-pch-flags          - Try to ignore PCH inclusion flags mentioned in the `compile_commands.json`. This is useful if the PCH was generated using a different Clang version.\n"
            "  --ignore T                  - Don't emit bindings for a specific entity. "
                                             "Use the flag several times to ban several entities. "
                                             "Use a fully qualified name, but without template arguments after the last name. "
                                             "Use `::` to reject the global namespace. "
                                             "Enclose in slashes to match a regex. "
                                             "Also note that you can annotate declarations that you want to ignore with `[[clang::annotate(\"mrbind::ignore\")]]\n"
            "  --allow T                   - Unban a subentity of something that was banned with `--ignore`.\n"
            "  --skip-base T               - Don't show that classes inherits from `T`. You might also want to `--ignore T`.\n"
            "  --format=json               - Output in JSON format.\n"
            "  --format=macros             - Output in C/C++ macros format.\n"
        );
        if (!option_parser_ex)
        {
            llvm::errs() << option_parser_ex.takeError();
            return 1;
        }

        clang::tooling::CommonOptionsParser &option_parser = option_parser_ex.get();
        if (option_parser.getSourcePathList().size() != 1)
            throw std::runtime_error("Must specify exactly one source file."); // By default libtooling accepts >= 1 files, but I don't want to deal with splitting the output.

        mrbind::ClangAdjustedCompilationDatabase adjusted_db(option_parser.getCompilations(), remove_pch_flags);

        // Dump compilation command if requested.
        if (!dump_command_to_file.empty())
        {
            std::ofstream out_file(dump_command_to_file);

            auto commands_vec = adjusted_db.getCompileCommands(option_parser.getSourcePathList().front());
            if (commands_vec.size() < 1)
                throw std::runtime_error("Unable to dump the compilation command: Clang doesn't know a command for this source file.");
            if (commands_vec.size() > 1)
                throw std::runtime_error("Unable to dump the compilation command: Clang reported multiple commands for this source file.");

            const clang::tooling::CompileCommand &command = commands_vec.front();

            bool first = true;
            bool found_filename = false;
            for (const std::string &elem : command.CommandLine)
            {
                if (command.Filename == elem)
                {
                    found_filename = true;
                    continue;
                }

                if (first)
                    first = false;
                else
                    out_file << "\n"[dump_command_with_null_separators];

                out_file << elem;
            }
            if (!found_filename)
                throw std::runtime_error("Unable to dump the compilation command: Tried to strip the input filename from it, but was unable to find it.");
        }

        clang::tooling::ClangTool tool(adjusted_db, option_parser.getSourcePathList());

        mrbind::ClangFrontendActionFactory factory;
        factory.params = &params;

        return tool.run(&factory);
    }
    catch (std::exception &e)
    {
        llvm::errs() << "Exception: " << e.what() << '\n';
        return 1;
    }
}
