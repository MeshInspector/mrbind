#include "common/filesystem.h"
#include "common/parsed_data.h"
#include "common/set_error_handlers.h"
#include "parser/combine_types.h"
#include "parser/cppdecl_helpers.h"
#include "parser/data_to_json.h"
#include "parser/data_to_macros.h"
#include "parser/multiplex_data.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/simplify.h>
#include <cppdecl/declarations/to_string.h>

#include "pre_include_clang.h"
#include <clang/AST/DeclBase.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Basic/Version.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Sema/Sema.h>
#include <clang/Sema/SemaConcept.h>
#include <clang/Sema/Template.h>
#include <clang/Sema/TemplateDeduction.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/CommandLine.h>
#include "post_include_clang.h"

#include <array>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <regex>
#include <set>
#include <stdexcept>
#include <string_view>
#include <string>
#include <unordered_map>
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

        AdjustTypeNameFlags adjust_type_name_flags{};

        // Simplify canonical type names using our `cppdecl` library.
        bool enable_cppdecl_processing = true;
    };

    struct PrintingPolicies
    {
        clang::PrintingPolicy normal;
        clang::PrintingPolicy without_preferred_names;

        PrintingPolicies(const clang::PrintingPolicy &base)
            : normal(base), without_preferred_names(base)
        {
            for (auto *p : {&normal, &without_preferred_names})
            {
                // Not adding `PrintCanonicalTypes = true`, because that expands typedefs which prevents the bindings from being portable.
                p->SuppressElaboration = true; // Add qualifiers! (Sic!!!!!)
                p->FullyQualifiedName = true; // Add qualifiers when printing declarations, to the names being declared. Currently we don't use this (I think?), but still nice to have.
                p->SuppressUnwrittenScope = true; // Disable printing `::(anonymous namespace)::` weirdness.
                p->SuppressInlineNamespace = // Suppress printing inline namespaces, if it doesn't introduce ambiguity.
                    #if CLANG_VERSION_MAJOR >= 20
                    // This became a enum in commit:  https://github.com/llvm/llvm-project/commit/bd12729a828c653da53f7182dda29982123913db
                    // This specific enum constant has the value `1`, which matches the old behavior of `true`, likely for compatibility.
                    // But we're still switching to a enum, because it shows the intent better.
                    clang::PrintingPolicy::Redundant;
                    #else
                    true;
                    #endif
                p->SuppressDefaultTemplateArgs = true; // Don't print redundant default template arguments.
                p->MSVCFormatting = false; // Unsure what this changes, just in case.
                p->PolishForDeclaration = true; // Unsure what this changes, just in case.

                p->UsePreferredNames = p != &without_preferred_names; // Respect `preferred_name` attribute, but only in the main policy.

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
        // Check the actual attributes.
        for (const clang::AnnotateAttr *attr : decl.specific_attrs<clang::AnnotateAttr>())
        {
            if (attr->getAnnotation() == "mrbind::ignore")
                return true;
        }

        // For typedefs, also check the target type.
        if (auto tdef = llvm::dyn_cast<clang::TypedefNameDecl>(&decl))
        {
            if (auto subdecl = tdef->getUnderlyingType()->getAsTagDecl())
            {
                if (HasIgnoreAttribute(*subdecl))
                    return true;
            }
        }

        // For class templates, check the primary template.
        if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(&decl))
        {
            if (HasIgnoreAttribute(*templ->getSpecializedTemplate()->getTemplatedDecl()))
            return true;
        }

        // For function templates, check the primary template.
        if (auto func = llvm::dyn_cast<clang::FunctionDecl>(&decl))
        {
            if (auto templ = func->getPrimaryTemplate())
            {
                if (HasIgnoreAttribute(*templ))
                    return true;
            }
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

    enum class ShouldRejectFlags
    {
        // Normally we don't allow templates (only their specific instantiations).
        // This flag allows the templates too.
        allow_uninstantiated_templates = 1 << 0,
    };
    MRBIND_FLAG_OPERATORS(ShouldRejectFlags)

    // Whether we should skip this declaration when traversing the AST.
    // Includes some non-contentious stuff like rejecting header contents, template declarations there weren't instantiated yet, function-local declarations.
    // `params` is optional.
    // NOTE: If `out_ignore` is specified, will write true to it INSTEAD of the rejecting the declaration ONLY IF the rejection is caused
    //   by a blacklisted name or the `mrbind::ignore` attribute.
    [[nodiscard]] bool ShouldRejectDeclaration(const clang::NamedDecl &decl, const clang::ASTContext &ctx, const VisitorParams *params, const PrintingPolicies &printing_policies, ShouldRejectFlags flags = {}, bool *out_ignore = nullptr)
    {
        (void)ctx;

        if (out_ignore)
            *out_ignore = false; // Default to false...

        bool is_templated = decl.isTemplated();

        if (!bool(flags & ShouldRejectFlags::allow_uninstantiated_templates) && is_templated)
            return true; // This is a template, reject. Specific specializations will be given to us separately.

        if (decl.getParentFunctionOrMethod())
            return true; // Reject function-local declarations.

        // This is kinda lame, but hear me out.
        // Class member functions that are defined out-of-line, but in a header, were tripping the parser,
        //   because when they are visited for the second time (the definition), we're not currently in a class.
        // This caused a segfault for non-nested classes, so it's hard to miss.
        // Simply checking `decl.isOutOfLine()` isn't enough, because that also rejects friend functions.
        // Adding `decl.isCXXInstanceMember()` helps with the friend functions, but it breaks for TEMPLATE member functions
        //   defined out of line. Because they are for some reason only visited once (only their definition is visited, not the declaration),
        //   so this was erasing them completely. But also when they are visited, this happens when the recursion is INSIDE the respective class,
        //   which is good for us, but makes little sense since the definition is actually outside.
        // I'm not sure what's up with all this crap, but `!func->isTemplateInstantiation()` is the straightforward fix that lets the templates
        //   through while rejecting the rest.
        // NOTE: If you decide to simplify this condition, here's your testcase: two classes, one template and another non-template,
        //   and in each add a friend definition (inside of the class) and a non-static member function (defined outside of the class in the header).
        // I guess also add member functions defined inside the class, for completeness.
        if (decl.isOutOfLine() && decl.isCXXInstanceMember())
        {
            if (auto func = llvm::dyn_cast<clang::FunctionDecl>(&decl))
            {
                if (!func->isTemplateInstantiation())
                    return true;
            }
        }
        // llvm::dyn_cast<clang::FunctionDecl>(decl).isThisDeclarationInstantiatedFromAFriendDefinition()

        if (HasIgnoreAttribute(decl))
        {
            // Ignore declarations with attribute `annotate("mrbind::ignore")`.
            if (out_ignore)
                *out_ignore = true;
            else
                return true;
        }

        // Check if we're inside a blacklisted class.
        if (!params->nonrejected_class_stack.empty() && !params->nonrejected_class_stack.back())
            return true;

        // Check the name (if not templated).
        std::string name;
        std::string name_without_template_args;
        if (!is_templated)
        {
            llvm::raw_string_ostream ss(name);
            decl.printQualifiedName(ss);
            name_without_template_args = name;
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
        }

        // if (auto t = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(&decl); t && ctx.getFullLoc(t->getPointOfInstantiation()).getFileID() == ctx.getSourceManager().getMainFileID())
        //     ; // This is instantiated in the main file, accept it.
        // else if (ctx.getFullLoc(decl.getBeginLoc()).getFileID() != ctx.getSourceManager().getMainFileID())
        //     return true; // Reject declarations in the headers.

        // Check against the name blacklist.
        if (params && !is_templated)
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
        else
        {
            if (!params->rejected_namespace_stack.empty() && params->rejected_namespace_stack.back())
            {
                // This entity is blacklisted because its enclosing entity is blacklisted.
                // We don't know the name of this entity here, so we can't check the whitelist.
                if (out_ignore)
                    *out_ignore = true;
                else
                    return true;
            }
        }

        return false;
    }

    // Returns a comment string associated with a declaration, or null if none.
    [[nodiscard]] std::optional<Comment> GetCommentString(const clang::ASTContext &ctx, const clang::Decl &decl)
    {
        // I'd really like to have a bool for documentation comments here, but for some reason everything
        //   that `getRawCommentForAnyRedecl()` returns has the type set to `merged` (instead of `normal` or `documentation`).
        // So instead we provide a second string with original slashes preserved. That's better than nothing.

        const clang::RawComment *comment = ctx.getRawCommentForAnyRedecl(&decl);
        std::optional<Comment> ret;
        if (!comment)
            return ret;
        ret.emplace();
        ret->text = comment->getFormattedText(ctx.getSourceManager(), ctx.getDiagnostics());

        // Get the raw version with slashes.
        // But also remove the leading whitespace on each line (before the slashes).
        std::string raw_text(comment->getRawText(ctx.getSourceManager()));
        bool beginning_of_line = true; // Not sure if we can get whitespace before the first slashes, but checking doesn't hurt.
        for (char ch : raw_text)
        {
            if (beginning_of_line)
            {
                if (ch == ' ' || ch == '\t')
                    continue;
                beginning_of_line = false;
            }
            ret->text_with_slashes += ch;
            if (ch == '\n')
                beginning_of_line = true;
        }

        return ret;
    }

    // Obtains the default argument value as a string, or empty if none.
    // `out_arg` is the argument as written, while `out_arg_cpp` is slightly adjusted to be viable as a C++ expression (i.e. `{...}` has a its type prepended to it).
    void GetDefaultArgumentStrings(std::optional<DefaultArgument> &out_arg, const clang::ParmVarDecl &param, const clang::PrintingPolicy &printing_policy)
    {
        if (auto default_arg = param.getDefaultArg())
        {
            out_arg.emplace();

            llvm::raw_string_ostream ss(out_arg->original_spelling);
            default_arg->printPretty(ss, nullptr, printing_policy);

            // Adjust `{...}` to add an explicit type.
            if (out_arg->original_spelling.starts_with('{'))
            {
                auto type = param.getType().getNonReferenceType().getUnqualifiedType().getAsString(printing_policy);
                bool type_is_simple = std::all_of(type.begin(), type.end(), [](unsigned char ch){return std::isalnum(ch) || ch == '_' || ch == ':';});
                if (type_is_simple)
                    out_arg->as_cpp_expression = type + out_arg->original_spelling;
                else
                    out_arg->as_cpp_expression = "std::type_identity_t<" + type + ">" + out_arg->original_spelling;
            }
            else
            {
                out_arg->as_cpp_expression = out_arg->original_spelling;
            }
        }
        else
        {
            out_arg.reset();
        }
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
    [[nodiscard]] bool TryInstantiateClass(clang::CompilerInstance &ci, clang::CXXRecordDecl &decl, clang::SourceLocation loc)
    {
        if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(&decl))
        {
            // Don't try to define if there's no body.

            // This rejects templates that are declared but not defined.
            bool body_exists = false;
            if (auto pat = decl.getTemplateInstantiationPattern())
                body_exists = pat->isCompleteDefinition();
            else
                body_exists = true; // ??? This is to catch the nested template usecase below. I have no idea why it is like this, looks busted.

            // This version has worked decently for a long time, but it chokes on this example, incorrectly returning `false` for the inner class `AA`.
            //     template <typename T>
            //     struct A
            //     {
            //         template <typename TT> struct AA {};
            //     };
            //     using A0 = A<int>::AA<float>;
            // bool body_exists = bool(templ->getSpecializedTemplate()->getTemplatedDecl()->getDefinition());

            if (body_exists)
            {
                bool any_instantiated = false;

                // Important! Check that it wasn't already instantiated.
                // Otherwise Clang will emit a runtime error.
                if (!decl.getDefinition())
                {
                    any_instantiated = true;

                    ci.getSema().InstantiateClassTemplateSpecialization(
                        loc, templ, clang::TemplateSpecializationKind::TSK_ImplicitInstantiation
                    #if CLANG_VERSION_MAJOR >= 20
                        ,
                        // Compain = true, I guess?
                        true,
                        // This one is weird, but I think it only needs to be `true` in some rare internal contexts.
                        // Consult:
                        //   https://github.com/llvm/llvm-project/commit/28ad8978ee2054298d4198bf10c8cb68730af037
                        //   https://github.com/llvm/llvm-project/commit/c94d930a212248d7102822ca7d0e37e72fd38cb3
                        //   https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2024/p3310r5.html
                        false
                    #endif
                    );
                }
                // vis->TraverseClassTemplateSpecializationDecl(templ); // Recurse into this template.

                for (auto &subdecl : decl.decls())
                {
                    if (auto record = llvm::dyn_cast<clang::CXXRecordDecl>(subdecl))
                    {
                        if (record->isInjectedClassName() || record->getPreviousDecl() || record->isLambda())
                            continue; // Straight from: https://github.com/llvm/llvm-project/blob/95b5b6801ce4c08e1bc92616321cd4127e7c0957/clang/lib/Sema/SemaTemplateInstantiate.cpp#L4317C6-L4319C18

                        if (TryInstantiateClass(ci, *record, loc))
                            any_instantiated = true;
                    }
                }

                return any_instantiated;
            }
        }
        else
        {
            // Alternative instantiation method, unsure when/if this is necessary.

            if (!decl.isCompleteDefinition())
            {
                // This rejects non-templates.
                if (auto pat = decl.getTemplateInstantiationPattern())
                {
                    // This rejects templates that are declared but not defined.
                    if (pat->isCompleteDefinition())
                    {
                        ci.getSema().InstantiateClass(decl.getSourceRange().getBegin(), &decl, pat, ci.getSema().getTemplateInstantiationArgs(&decl), clang::TSK_ImplicitInstantiation);
                        // if constexpr (!std::is_null_pointer_v<Visitor>)
                        //     // How do I recurse here?
                        return true;
                    }
                }
            }
        }

        return false;
    }

    // See `GetUnderlyingClassOrEnumType()`.
    void GetUnderlyingClassOrEnumType_Low(clang::CompilerInstance &ci, const clang::QualType &type, std::function<void(clang::TagDecl *decl)> func)
    {
        // I'm not sure if I need to recurisevely canonicalize subtypes. Probably not?

        if (type->isRecordType()) // NOTE! Not `isClassType()`, because that rejects structs and probably something else too.
        {
            func(type->getAsRecordDecl());
        }
        else if (type->isEnumeralType())
        {
            func(llvm::dyn_cast<clang::EnumDecl>(type->getAsTagDecl()));
        }
        else if (type->isPointerType())
        {
            GetUnderlyingClassOrEnumType_Low(ci, type->getPointeeType(), std::move(func));
        }
        else if (type->isReferenceType())
        {
            GetUnderlyingClassOrEnumType_Low(ci, type.getNonReferenceType(), std::move(func));
        }
        else if (type->isArrayType())
        {
            GetUnderlyingClassOrEnumType_Low(ci, llvm::dyn_cast<clang::ArrayType>(type)->getElementType(), std::move(func));
        }
    }
    // Strips cvref/ptr/array-qualifiers from a type, and if that's a type, call `func()` on it. Otherwise do nothing.
    void GetUnderlyingClassOrEnumType(clang::CompilerInstance &ci, const clang::QualType &type, std::function<void(clang::TagDecl *decl)> func)
    {
        return GetUnderlyingClassOrEnumType_Low(ci, type.getCanonicalType(), std::move(func));
    }

    // If this function returns `auto` that wasn't deduced yet, replace it with the correct return type.
    [[nodiscard]] bool InstantiateReturnTypeIfNeeded(clang::CompilerInstance &ci, clang::FunctionDecl &decl)
    {
        if (decl.getReturnType()->isUndeducedAutoType())
        {
            ci.getSema().InstantiateFunctionDefinition(decl.getBeginLoc(), &decl);
            if (decl.getReturnType()->isUndeducedAutoType())
                return false; // Instantiation failed? This fixes infinite instantiation loops...
            return true;
        }

        return false;
    }

    // Passing non-const decl here because `Sema::CheckInstantiatedFunctionTemplateConstraints()` needs that.
    bool ShouldRejectFunction(clang::FunctionDecl &decl, const clang::ASTContext &ctx, const clang::CompilerInstance &ci, const VisitorParams *params, const PrintingPolicies &printing_policies, ShouldRejectFlags flags = {})
    {
        if (decl.getDeclName().getNameKind() == clang::DeclarationName::CXXLiteralOperatorName)
            return true; // Reject user-defined literals.

        if (ShouldRejectDeclaration(decl, ctx, params, printing_policies, flags))
            return true;

        // Skip deduction guides.
        // We don't seem to need to check this separately for class members, since they count as non-member functions, just like friend functions.
        if (llvm::isa<clang::CXXDeductionGuideDecl>(decl))
            return true;

        if (decl.isDeleted())
            return true; // Skip deleted.

        // If we reached here and din't stop at `ShouldRejectDeclaration()`, it means `flags` contains `allow_uninstantiated_templates`.
        bool is_templated = decl.isTemplated();

        if (!is_templated && !FuncLooksLikeItHasAccessibleSignatureTypes(decl))
            return true;

        // Custom handling for class methods.
        if (decl.isCXXClassMember())
        {
            if (decl.getAccess() != clang::AS_public)
                return true; // Reject non-public methods.

            const clang::CXXMethodDecl *method = clang::dyn_cast<clang::CXXMethodDecl>(&decl);
            if (!method)
                return true; // Unsure when this can happen, but anyway.

            // if (method->getRefQualifier() == clang::RefQualifierKind::RQ_RValue)
            //     return true; // Skip rvalue-qualified methods, with the assumption that they're going to have lvalue-ref-qualified versions too.
        }

        // Check the requires-clause, if any. Why doesn't libclang do this automatically?
        // Note the condition! It means we're checking it for the INSTANTIATIONS, not for the base template.
        if (!is_templated)
        {
            // We need two calls to check the constraints properly, not entirey sure why. My best guess so far is that the first one is
            //   for non-template members of templates, and the second is for actual templates.

            // Approach 1.
            if (decl.getTrailingRequiresClause())
            {
                clang::ConstraintSatisfaction sat;
                if (ci.getSema().CheckFunctionConstraints(&decl, sat))
                    throw std::runtime_error("Unable to evaluate the constraints for the method." );
                if (!sat.IsSatisfied)
                    return true; // Constraints are false.
            }

            // Approach 2.
            if (auto args = decl.getTemplateSpecializationArgs())
            {
                clang::ConstraintSatisfaction sat;
                if (ci.getSema().CheckInstantiatedFunctionTemplateConstraints(decl.getSourceRange().getBegin(), &decl, args->asArray(), sat))
                    throw std::runtime_error("Unable to evaluate the constraints for the function." );
                if (!sat.IsSatisfied)
                    return true; // Constraints are false.
            }
        }

        return false;
    }

    bool ShouldRejectRecord(const clang::RecordDecl &decl, const clang::ASTContext &ctx, const VisitorParams *params, const PrintingPolicies &printing_policies)
    {
        if (ShouldRejectDeclaration(decl, ctx, params, printing_policies))
            return true;

        if (decl.isAnonymousStructOrUnion())
            return true; // Reject anonymous structs/unions.

        if (!TypeLooksAccessible(*decl.getTypeForDecl()))
            return true; // Inaccessible type.

        return false;
    }

    bool ShouldRejectEnum(const clang::EnumDecl &decl, const clang::ASTContext &ctx, const VisitorParams *params, const PrintingPolicies &printing_policies)
    {
        if (ShouldRejectDeclaration(decl, ctx, params, printing_policies))
            return true;

        if (!TypeLooksAccessible(*decl.getTypeForDecl()))
            return true; // Inaccessible type.

        return false;
    }

    bool ShouldRejectTypedef(const clang::TypedefNameDecl &decl, const clang::ASTContext &ctx, const VisitorParams *params, const PrintingPolicies &printing_policies, bool *should_poison)
    {
        if (ShouldRejectDeclaration(decl, ctx, params, printing_policies, {}, should_poison))
            return true;

        if (auto type = decl.getTypeForDecl()) // For some reason this can be null (for typedefs/aliases, but not for other entities?).
        {
            if (!TypeLooksAccessible(*type))
                return true; // Inaccessible type.
        }

        return false;
    }

    bool ShouldRejectRecordField(const clang::FieldDecl &decl)
    {
        // We don't check `ShouldRejectDeclaration()` here. Should we? I doubt there's anything useful there...

        if (decl.isBitField() || decl.isAnonymousStructOrUnion())
            return true; // Reject weird stuff.

        if (decl.getAccess() != clang::AS_public)
            return true; // Reject non-public fields.

        if (HasIgnoreAttribute(decl))
            return true; // Reject disabled fields.

        return false;
    }

    bool ShouldRejectRecordStaticDataMember(const clang::VarDecl &decl)
    {
        // We don't check `ShouldRejectDeclaration()` here. Should we? I doubt there's anything useful there...

        if (decl.getAccess() != clang::AS_public)
            return true; // Reject non-public fields.

        if (HasIgnoreAttribute(decl))
            return true; // Reject disabled fields.

        return false;
    }

    // The main visitor, generates most of our code.
    struct ClangAstVisitor_Final : clang::RecursiveASTVisitor<ClangAstVisitor_Final>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitor_Final>;

        clang::ASTContext *ctx = nullptr;
        clang::CompilerInstance *ci = nullptr;

        PrintingPolicies printing_policies;

        const VisitorParams *params = nullptr;

        std::unordered_map<std::string, std::string> types_to_preferred_names;

        // This roundtrips the type name through cppdecl.
        // We need this because we'll end up adjusting SOME of them anyway (e.g. to fix the stuff in `test_typedefs_in_templates.h`), and we want the consistent style everywhere, e.g. to avoid redundant type registration.
        // Note that `GetCanonicalTypeName()` does this automatically.
        [[nodiscard]] std::string RoundtripTypeNameThroughCppdecl(std::string name)
        {
            if (params->enable_cppdecl_processing)
                return cppdecl::ToCode(ParseTypeWithCppdecl(name), {}); // No canonicalization here.
            else
                return name;
        }
        // Same, but for qualified names.
        [[nodiscard]] std::string RoundtripQualifiedNameThroughCppdecl(std::string name)
        {
            if (params->enable_cppdecl_processing)
                return cppdecl::ToCode(ParseQualifiedNameWithCppdecl(name), {}); // No canonicalization here.
            else
                return name;
        }

        [[nodiscard]] std::string GetCanonicalTypeName(const clang::QualType &type, clang::PrintingPolicy PrintingPolicies::* policy = &PrintingPolicies::normal)
        {
            std::string ret = type.getCanonicalType().getAsString(printing_policies.*policy);

            if (params->enable_cppdecl_processing)
            {
                cppdecl::Type type = ParseTypeWithCppdecl(ret);
                cppdecl::Simplify(cppdecl::SimplifyFlags::native, type);
                ret = cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_cpp_style); // Not sure if additional canonicalization would do anything here. Just in case.
            }

            return ret;
        }

        // If `reason` is zero, the function does nothing.
        void RegisterTypeSpelling(const clang::QualType &type, const std::string &pretty, TypeUses reason)
        {
            if (reason == TypeUses{})
                return;

            std::string canonical = GetCanonicalTypeName(type);

            auto &outer_map = params->parsed_result.type_info[canonical];
            bool is_new_type = outer_map.empty();

            TypeInformation &info = outer_map[canonical]; // Sic! The same key again.
            info.uses |= reason & TypeUses::_valid_bits;

            if (is_new_type)
                info.has_custom_canonical_name = canonical != GetCanonicalTypeName(type, &PrintingPolicies::without_preferred_names);

            auto &spelling = info.alt_spellings.try_emplace(pretty).first->second;
            if (bool(reason & TypeUses::_poisoned))
                spelling.poisoned = true;

            spelling.uses |= reason & TypeUses::_valid_bits_spelling;
        }

        // Returns the string representations of a type.
        // Also registers a type alias if we haven't seen this spelling before.
        // If `reason` zero, doesn't register anything.
        [[nodiscard]] Type GetTypeStrings(const clang::QualType &type, TypeUses reason)
        {
            Type ret;

            // Here the roundtrip is handled by `GetCanonicalTypeName`.
            ret.canonical = GetCanonicalTypeName(type);

            ret.pretty = type.getAsString(printing_policies.normal);
            // If the type is spelled with `decltype`, force replace it with the canonical.
            // This is needed if we e.g. `decltype` the function parameters.
            if (ret.pretty.find("decltype(") != std::string::npos)
            {
                ret.pretty = ret.canonical;
            }
            else
            {
                // Only roundtrip if we DIDN't replace the type with the canonical.
                // Because at the moment `cppdecl` chokes on `decltype(...)`, and as an optimization too.

                ret.pretty = RoundtripTypeNameThroughCppdecl(std::move(ret.pretty));
                if (params->enable_cppdecl_processing)
                    ret.pretty = cppdecl::ToCode(ParseTypeWithCppdecl(ret.pretty), {}); // No canonicalization flags here.
            }

            RegisterTypeSpelling(type, ret.pretty, reason);

            return ret;
        }

        [[nodiscard]] std::vector<FuncParam> GetFuncParams(const clang::FunctionDecl &decl)
        {
            std::vector<FuncParam> ret;
            for (const clang::ParmVarDecl *p : decl.parameters())
            {
                FuncParam &new_param = ret.emplace_back();
                if (auto name = p->getName(); !name.empty())
                    new_param.name = name; // Since `new_param.name` is optional, we don't want to fill it if the parameter name is empty.
                new_param.type = GetTypeStrings(p->getType(), TypeUses::parameter);
                GetDefaultArgumentStrings(new_param.default_argument, *p, printing_policies.normal);
            }
            return ret;
        }

        [[nodiscard]] DeclFileName GetDefinitionLocationFile(const clang::Decl &decl, const std::string &name_for_errors)
        {
            std::string ret;

            const clang::Decl *fixed_decl = &decl;

            // Adjust class and function template specializations to point to the primary template.
            if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(fixed_decl))
                fixed_decl = templ->getSpecializedTemplate()->getTemplatedDecl();
            else if (auto func = llvm::dyn_cast<clang::FunctionDecl>(fixed_decl))
            {
                if (auto templ = func->getPrimaryTemplate())
                    fixed_decl = templ;
            }

            // `getExpansionLoc` is needed when the declaration is created by a macro expansion. Without it we get an empty string.
            // It also seems that it canonicalizes the filename. Therefore we canonicalize it ourselves AGAIN
            //   just in case, and don't preserve the original returned path, because it shouldn't have any important
            //   differences anyway.
            ret = ctx->getSourceManager().getFilename(ctx->getSourceManager().getExpansionLoc(fixed_decl->getLocation()));
            if (ret.empty())
                throw std::runtime_error("Unable to determine the file path where this was declared: `" + name_for_errors + "`.");
            ret = PathToString(std::filesystem::weakly_canonical(MakePath(ret)));
            return {.canonical = ret};
        }


        ClangAstVisitor_Final(clang::ASTContext &ctx, clang::CompilerInstance &ci, const VisitorParams &params)
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
            if (ShouldRejectFunction(*decl, *ctx, *ci, params, printing_policies))
                return true;

            // Custom handling for class methods.
            if (decl->isCXXClassMember())
            {
                clang::CXXMethodDecl *method = clang::dyn_cast<clang::CXXMethodDecl>(decl);
                if (!method)
                    return true; // Unsure when this can happen, but anyway.

                ClassEntity &target_class = *params->nonrejected_class_stack.back();

                if (auto dtor = llvm::dyn_cast<clang::CXXDestructorDecl>(decl))
                {
                    ClassDtor &new_dtor = target_class.members.emplace_back().emplace<ClassDtor>();
                    new_dtor.comment = GetCommentString(*ctx, *method);
                    new_dtor.is_trivial = dtor->isTrivial();
                    return true; // Done processing the destructor. The rest is only for other kinds of members.
                }

                BasicFunc *basic_func = nullptr;

                if (auto ctor = llvm::dyn_cast<clang::CXXConstructorDecl>(method))
                {
                    ClassCtor &new_ctor = target_class.members.emplace_back().emplace<ClassCtor>();
                    new_ctor.is_explicit = ctor->isExplicit();
                    new_ctor.is_trivial = ctor->isTrivial();
                    new_ctor.kind = ctor->isCopyConstructor() ? CopyMoveKind::copy : ctor->isMoveConstructor() ? CopyMoveKind::move : CopyMoveKind::none;
                    basic_func = &new_ctor;

                    // Template arguments?
                    if (auto targs = ctor->getTemplateSpecializationArgs())
                    {
                        llvm::raw_string_ostream ss(new_ctor.template_args.emplace());
                        clang::printTemplateArgumentList(ss, targs->asArray(), printing_policies.normal, method->getTemplateSpecializationInfo()->getTemplate()->getTemplateParameters());
                    }
                }
                else
                {
                    BasicReturningClassFunc *basic_ret_class_func = nullptr;

                    if (auto conv_op = llvm::dyn_cast<clang::CXXConversionDecl>(method))
                    {
                        ClassConvOp &new_conv_op = target_class.members.emplace_back().emplace<ClassConvOp>();
                        new_conv_op.is_explicit = conv_op->isExplicit();

                        basic_ret_class_func = &new_conv_op;
                    }
                    else
                    {
                        ClassMethod &new_method = target_class.members.emplace_back().emplace<ClassMethod>();
                        basic_ret_class_func = &new_method;

                        // For a copy&swap assignment, `isCopyAssignmentOperator()` returns true and `isMoveAssignmentOperator()` returns false, for some reason.
                        new_method.assignment_kind =
                            method->isCopyAssignmentOperator()
                            ? (
                                method->parameters().front()->getType()->isReferenceType()
                                ? CopyMoveKind::copy
                                : CopyMoveKind::by_value_assignment
                            )
                            : (
                                method->isMoveAssignmentOperator()
                                ? CopyMoveKind::move
                                : CopyMoveKind::none
                            );

                        new_method.name = method->getDeclName().getAsString();
                        new_method.simple_name = GetAdjustedFuncName(*method);

                        new_method.full_name = new_method.name;
                        // Add the template arguments, if any.
                        if (auto args = method->getTemplateSpecializationArgs())
                        {
                            llvm::raw_string_ostream ss(new_method.full_name);
                            clang::printTemplateArgumentList(ss, args->asArray(), printing_policies.normal, method->getTemplateSpecializationInfo()->getTemplate()->getTemplateParameters());

                            new_method.full_name = RoundtripQualifiedNameThroughCppdecl(std::move(new_method.full_name));
                        }

                        new_method.is_static = method->isStatic();

                        new_method.is_trivial_assignment = method->isTrivial();
                    }

                    basic_func = basic_ret_class_func;

                    basic_ret_class_func->is_const = method->isConst();
                    switch (method->getRefQualifier())
                    {
                        case clang::RQ_None:   basic_ret_class_func->ref_qualifier = RefQualifier::none;   break;
                        case clang::RQ_LValue: basic_ret_class_func->ref_qualifier = RefQualifier::lvalue; break;
                        case clang::RQ_RValue: basic_ret_class_func->ref_qualifier = RefQualifier::rvalue; break;
                    }

                    // Force instantiate body to know the true return type rather than `auto`.
                    (void)InstantiateReturnTypeIfNeeded(*ci, *decl);

                    basic_ret_class_func->return_type = GetTypeStrings(method->getReturnType(), TypeUses::returned);
                }

                basic_func->comment = GetCommentString(*ctx, *method);
                basic_func->params = GetFuncParams(*method);
                return true; // Done processing member function, the rest is for non-members.
            }

            // Force instantiate body to know the true return type rather than `auto`.
            (void)InstantiateReturnTypeIfNeeded(*ci, *decl);

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
                new_func.qual_name = RoundtripQualifiedNameThroughCppdecl(new_func.full_qual_name); // Make a copy before adding template arguments.
                // Add template arguments, if any.
                if (auto template_args = decl->getTemplateSpecializationArgs())
                {
                    clang::printTemplateArgumentList(qual_name_ss, template_args->asArray(), printing_policies.normal, decl->getPrimaryTemplate()->getTemplateParameters());
                    new_func.full_qual_name = RoundtripQualifiedNameThroughCppdecl(std::move(new_func.full_qual_name));
                }
            }

            new_func.name = decl->getDeclName().getAsString();
            new_func.simple_name = GetAdjustedFuncName(*decl);
            new_func.return_type = GetTypeStrings(decl->getReturnType(), TypeUses::returned);
            new_func.comment = GetCommentString(*ctx, *decl);
            new_func.params = GetFuncParams(*decl);
            new_func.declared_in_file = GetDefinitionLocationFile(*decl, new_func.name);

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        bool ProcessRecord(clang::RecordDecl *decl)
        {
            if (ShouldRejectRecord(*decl, *ctx, params, printing_policies))
            {
                params->nonrejected_class_stack.push_back(nullptr);
                return false;
            }

            // Reject non-instantiated templates. This is here rather than in `ShouldRejectRecord()` because that is also used by the instantiating visitor.
            if (!decl->isCompleteDefinition())
            {
                params->nonrejected_class_stack.push_back(nullptr);
                return false;
            }

            ClassEntity &new_class = params->container_stack.back()->nested.emplace_back().emplace<ClassEntity>();
            params->nonrejected_class_stack.push_back(&new_class);
            params->container_stack.push_back(&new_class);

            new_class.name = decl->getName();
            new_class.comment = GetCommentString(*ctx, *decl);
            new_class.kind = decl->isClass() ? ClassKind::class_ : decl->isStruct() ? ClassKind::struct_ : decl->isUnion() ? ClassKind::union_ : throw std::runtime_error("Unable to classify the class-like type `" + new_class.full_type + "`.");
            new_class.is_aggregate = ctx->getRecordType(decl)->isAggregateType();
            new_class.declared_in_file = GetDefinitionLocationFile(*decl, new_class.name);
            // Remove non-canonical template arguments, since I don't know how to do this with a printing policy.
            // Testcase: `namespace MR{ template <E> struct X {}; template <> struct X<E::e2> {}; using F = X<MR::E::e1>; using G = X<MR::E::e2>; }`.
            // Without this, this incorrectly prints `E::e2` without `MR::` (REGARDLESS of how the full specialization is spelled!).
            // WARNING: This for some reason seems to crash `GetCommentString()` (last tested on Clang 18), so we do it after. Weird but ok.
            if (auto templ = llvm::dyn_cast<clang::ClassTemplateSpecializationDecl>(decl))
            {
                #if CLANG_VERSION_MAJOR == 18
                templ->setTypeAsWritten(nullptr); // This function got removed in Clang 19.
                #else // CLANG_VERSION_MAJOR >= 19
                templ->setTemplateArgsAsWritten(nullptr);
                #endif
            }
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
                    if (ShouldRejectRecordStaticDataMember(*var))
                        continue;

                    std::string full_name(var->getName());
                    // Add template arguments for variable templates to the name.
                    if (auto templ = llvm::dyn_cast<clang::VarTemplateSpecializationDecl>(var))
                    {
                        llvm::raw_string_ostream ss(full_name);
                        clang::printTemplateArgumentList(ss, templ->getTemplateArgs().asArray(), printing_policies.normal, templ->getSpecializedTemplate()->getTemplateParameters());

                        if (!NameSpellingIsLegal(full_name))
                            continue; // Has unspellable template arguments.

                        full_name = RoundtripQualifiedNameThroughCppdecl(std::move(full_name));
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
                if (ShouldRejectRecordField(*field))
                    continue;

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

            // But! We do manually visit the implicit special members here, since otherwise they don't get emitted for some reason.
            // Last tested on Clang 18. If they get duplicated, remove this code.
            {
                // First, instantiate them. This is needed if they are implicitly declared.
                // This doesn't seem to expose them to the visitor, so we still need the loop below.
                // We COULD do this earlier in the template instantiation visitor, but why bother? Works here too, and it's nice to keep
                //   this hack grouped in one place. It's not like this could recursively require any additional instantiations.
                ci->getSema().ForceDeclarationOfImplicitMembers(cxxdecl);

                // Constructors: default, copy and move.
                for (clang::CXXConstructorDecl *ctor : cxxdecl->ctors())
                {
                    if ((ctor->isDefaultConstructor() || ctor->isCopyOrMoveConstructor()) && ctor->isImplicit())
                    {
                        VisitFunctionDecl(ctor);
                        continue;
                    }
                }

                // Assignment operators.
                for (clang::CXXMethodDecl *method : cxxdecl->methods())
                {
                    if ((method->isCopyAssignmentOperator() || method->isMoveAssignmentOperator()) && method->isImplicit())
                    {
                        VisitFunctionDecl(method);
                        continue;
                    }

                    if (auto dtor = llvm::dyn_cast<clang::CXXDestructorDecl>(method); dtor && dtor->isImplicit())
                    {
                        VisitFunctionDecl(dtor);
                        continue;
                    }
                }
            }

            return true;
        }

        // Note, this is not a CRTP override.
        void FinishRecord(clang::RecordDecl *decl)
        {
            (void)decl;

            // Fix up broken typedef names in the members of this class. See `test_typedefs_in_templates.h` for the context.
            if (params->enable_cppdecl_processing)
            {
                EntityContainer *container = params->container_stack.back();

                std::vector<cppdecl::QualifiedName> typedef_names;

                for (Entity &e : container->nested)
                {
                    // If we have a typedef at the top level...
                    // Note that it only seems to be necessary to visit top-level typedefs.
                    // Those buggy typedefs don't affect things outside of their directly enclosing classes, or so it seems.
                    if (auto tdef = std::get_if<TypedefEntity>(&*e.variant))
                        typedef_names.push_back(ParseQualifiedNameWithCppdecl(tdef->full_name));
                }

                // Now if we have at least one typedef, visit every name in the enclosing class recursively.
                if (!typedef_names.empty())
                {
                    std::unordered_map<std::string, std::string> type_name_replacements;

                    container->VisitTypes([&](Type &visited_type_struct)
                    {
                        // Should we process the `pretty` types too? I think we should.
                        for (std::string *visited_type_string : {&visited_type_struct.canonical, &visited_type_struct.pretty})
                        {
                            cppdecl::Type visited_type = ParseTypeWithCppdecl(*visited_type_string);
                            bool any_type_changes = false;

                            visited_type.VisitEachComponent<cppdecl::QualifiedName>({}, [&](cppdecl::QualifiedName &visited_name)
                            {
                                for (const cppdecl::QualifiedName &typedef_name : typedef_names)
                                {
                                    if (typedef_name.parts.size() > visited_name.parts.size())
                                        continue; // The visited name is too short, it can't possibly match.

                                    bool match = true;
                                    bool any_missing_targs = false;

                                    for (std::size_t i = 0; i < typedef_name.parts.size(); i++)
                                    {
                                        const auto &typedef_part = typedef_name.parts[i];
                                        const auto &visited_part = visited_name.parts[i];

                                        if (!typedef_part.Equals(visited_part, cppdecl::UnqualifiedName::EqualsFlags::allow_missing_template_args_in_target))
                                        {
                                            match = false;
                                            break;
                                        }

                                        if (typedef_part.template_args && !visited_part.template_args)
                                            any_missing_targs = true;
                                    }

                                    // If we're sure this name is bugged...
                                    if (match && any_missing_targs)
                                    {
                                        any_type_changes = true;

                                        for (std::size_t i = 0; i < typedef_name.parts.size(); i++)
                                        {
                                            const auto &typedef_part = typedef_name.parts[i];
                                            auto &visited_part = visited_name.parts[i];

                                            if (typedef_part.template_args && !visited_part.template_args)
                                                visited_part.template_args = typedef_part.template_args;
                                        }

                                        // We don't search for more matches in this name, it should be impossible.
                                        // Note that the other recursive branches might still find something interesting.
                                        break;
                                    }
                                }

                                return false;
                            });

                            // If we've made any changes to the type, re-serialzie it.
                            if (any_type_changes)
                            {
                                std::string new_name = cppdecl::ToCode(visited_type, {});
                                type_name_replacements.try_emplace(*visited_type_string, new_name);
                                *visited_type_string = std::move(new_name);
                            }
                        }
                    });

                    // Now adjust the names in the type registration list.
                    // We're doing this a bit backwards, because of iterator stability difficulties in loops.
                    for (const auto &replacement : type_name_replacements)
                    {
                        // Adjust the outer name.
                        if (auto iter = params->parsed_result.type_info.find(replacement.first); iter != params->parsed_result.type_info.end())
                        {
                            auto node = params->parsed_result.type_info.extract(iter);
                            node.key() = replacement.second;
                            params->parsed_result.type_info.insert(std::move(node));
                        }

                        for (auto &elem : params->parsed_result.type_info)
                        {
                            // Adjust the inner name.
                            if (auto iter = elem.second.find(replacement.first); iter != elem.second.end())
                            {
                                auto node = elem.second.extract(iter);
                                node.key() = replacement.second;
                                elem.second.insert(std::move(node));
                            }
                        }
                    }
                }
            }

            params->container_stack.pop_back();
        }

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
            if (ShouldRejectEnum(*decl, *ctx, params, printing_policies))
                return true;

            // This is not in `ShouldRejectEnum()` because it is false before instantiation.
            if (!decl->isCompleteDefinition())
                return true;

            EnumEntity &new_enum = params->container_stack.back()->nested.emplace_back().emplace<EnumEntity>();

            // Register the type, just in case.
            (void)GetTypeStrings(ctx->getEnumType(decl), TypeUses::parsed);

            new_enum.name = decl->getName();
            new_enum.is_scoped = decl->isScoped();
            new_enum.comment = GetCommentString(*ctx, *decl);
            new_enum.full_type = GetCanonicalTypeName(ctx->getEnumType(decl));
            new_enum.canonical_underlying_type = GetCanonicalTypeName(decl->getIntegerType());
            new_enum.is_signed = decl->getIntegerType()->isSignedIntegerType();
            new_enum.declared_in_file = GetDefinitionLocationFile(*decl, new_enum.full_type);

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
                    new_elem.unsigned_value = std::uint64_t(*opt);
                }
                else
                {
                    auto opt = elem->getValue().tryZExtValue();
                    if (!opt)
                        throw std::runtime_error("Enum element value doesn't fit into 64 bits.");
                    new_elem.unsigned_value = *opt;
                }
            }

            return true;
        }

        bool VisitTypedefNameDecl(clang::TypedefNameDecl *decl) // CRTP override
        {
            bool should_poison = false;
            if (ShouldRejectTypedef(*decl, *ctx, params, printing_policies, &should_poison))
                return true;

            if (HasInstantiateOnlyAttribute(*decl))
            {
                (void)GetTypeStrings(decl->getUnderlyingType(), TypeUses::typedef_target); // Register the type.
                return true;
            }

            std::string full_name = RoundtripQualifiedNameThroughCppdecl(ctx->getTypedefType(decl).getAsString(printing_policies.normal));
            // Here we don't register the typedef TARGET TYPE SPELLING if we're going to poison the target type.
            auto type_strings = GetTypeStrings(decl->getUnderlyingType(), TypeUses::typedef_target * !should_poison);
            if (should_poison)
            {
                // We do register the TYPEDEF SPELLING itself to poison it though.
                RegisterTypeSpelling(decl->getUnderlyingType(), full_name, TypeUses::_poisoned);
                return true;
            }

            TypedefEntity &new_typedef = params->container_stack.back()->nested.emplace_back().emplace<TypedefEntity>();

            new_typedef.name = decl->getName();
            new_typedef.full_name = std::move(full_name);
            new_typedef.comment = GetCommentString(*ctx, *decl);
            new_typedef.type = std::move(type_strings);
            new_typedef.declared_in_file = GetDefinitionLocationFile(*decl, new_typedef.full_name);
            RegisterTypeSpelling(decl->getUnderlyingType(), new_typedef.full_name, TypeUses::typedef_name);

            return true;
        }

        bool TraverseNamespaceDecl(clang::NamespaceDecl *decl) // CRTP override
        {
            bool reject = ShouldRejectDeclaration(*decl, *ctx, params, printing_policies);

            { // Insert the namespace.
                NamespaceEntity &new_ns = params->container_stack.back()->nested.emplace_back().emplace<NamespaceEntity>();
                params->container_stack.push_back(&new_ns);
                if (!decl->isAnonymousNamespace())
                    new_ns.name = decl->getName();
                new_ns.comment = GetCommentString(*ctx, *decl);
                new_ns.is_inline = decl->isInlineNamespace();
                new_ns.declared_in_file = GetDefinitionLocationFile(*decl, new_ns.name ? *new_ns.name : "(anonymous namespace)");
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

    // Mark all the classes and enums it sees as needing complete definitions.
    struct ClangAstVisitor_CollectKnownTypes : clang::RecursiveASTVisitor<ClangAstVisitor_CollectKnownTypes>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitor_CollectKnownTypes>;

        clang::ASTContext *ctx = nullptr;
        clang::CompilerInstance *ci = nullptr;

        PrintingPolicies printing_policies;

        const VisitorParams *params = nullptr;

        ClangAstVisitor_CollectKnownTypes(clang::ASTContext &ctx, clang::CompilerInstance &ci, const VisitorParams &params)
            : ctx(&ctx), ci(&ci),
            printing_policies(ctx.getPrintingPolicy()),
            params(&params)
        {}

        // Visit template specializations almost as if they were normal code.
        bool shouldVisitTemplateInstantiations() const // CRTP override
        {
            return true;
        }



        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        bool ProcessRecord(clang::RecordDecl *decl)
        {
            if (ShouldRejectRecord(*decl, *ctx, params, printing_policies))
            {
                params->nonrejected_class_stack.push_back(nullptr);
                return false;
            }

            decl->setCompleteDefinitionRequired(true);

            params->nonrejected_class_stack.push_back((ClassEntity *)sizeof(ClassEntity)); // Push some non-zero pointer to allow boolean testing.

            return true;
        }

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

        bool VisitEnumDecl(clang::EnumDecl *decl) // CRTP override
        {
            if (ShouldRejectEnum(*decl, *ctx, params, printing_policies))
                return true;

            // This rejects non-templates.
            if (auto pat = decl->getTemplateInstantiationPattern())
            {
                // This rejects templates that are declared but not defined.
                if (pat->isCompleteDefinition())
                    decl->setCompleteDefinitionRequired(true);
            }

            return true;
        }

        bool TraverseNamespaceDecl(clang::NamespaceDecl *decl) // CRTP override
        {
            bool reject = ShouldRejectDeclaration(*decl, *ctx, params, printing_policies);

            params->rejected_namespace_stack.push_back(reject);
            bool ret = Base::TraverseNamespaceDecl(decl);
            params->rejected_namespace_stack.pop_back();

            return ret;
        }
    };

    // Instantiates templates referred to by typedefs.
    struct ClangAstVisitor_InstTypesAndCollectNewTypes : clang::RecursiveASTVisitor<ClangAstVisitor_InstTypesAndCollectNewTypes>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitor_InstTypesAndCollectNewTypes>;

        clang::ASTContext *ctx = nullptr;
        clang::CompilerInstance *ci = nullptr;

        PrintingPolicies printing_policies;

        const VisitorParams *params = nullptr;

        // We set this to true when we instantiate something or find a new type.
        bool need_another_iteration = false;

        ClangAstVisitor_InstTypesAndCollectNewTypes(clang::ASTContext &ctx, clang::CompilerInstance &ci, const VisitorParams &params)
            : ctx(&ctx), ci(&ci),
            printing_policies(ctx.getPrintingPolicy()),
            params(&params)
        {}

        // Visit template specializations almost as if they were normal code.
        bool shouldVisitTemplateInstantiations() const // CRTP override
        {
            return true;
        }

        bool VisitFunctionDecl(clang::FunctionDecl *decl) // CRTP override
        {
            if (ShouldRejectFunction(*decl, *ctx, *ci, params, printing_policies, ShouldRejectFlags::allow_uninstantiated_templates))
                return true;

            // If this is a template, try instantiating it.
            if (decl->isTemplated())
            {
                // Among other things, we visit the function declarations to instantiate their default arguments,
                //   which apparently doesn't happen otherwise. This is only needed for free function templates.
                // Something else already instantiates them for the class member functions.
                if (auto templ = decl->getDescribedTemplate())
                {
                    auto func_templ = llvm::dyn_cast<clang::FunctionTemplateDecl>(templ);

                    const clang::TemplateParameterList &tparams = *templ->getTemplateParameters();

                    // Can't use `tparams.getMinRequiredArguments()` because that apparently can return 0 when
                    //   the template arguments are deducible from the function parameters, or something like that.
                    bool all_params_have_default_args = std::all_of(tparams.begin(), tparams.end(),
                        [](const clang::NamedDecl *tparam)
                        {
                            if (tparam->isParameterPack())
                                return true;
                            else if (auto ttp = llvm::dyn_cast<clang::TemplateTypeParmDecl>(tparam))
                                return ttp->hasDefaultArgument();
                            else if (auto nttp = llvm::dyn_cast<clang::NonTypeTemplateParmDecl>(tparam))
                                return nttp->hasDefaultArgument();
                            else if (auto tetp = llvm::dyn_cast<clang::TemplateTemplateParmDecl>(tparam))
                                return tetp->hasDefaultArgument();
                            else
                                return false;
                        }
                    );

                    if (all_params_have_default_args)
                    {
                        // Cook up a list of all default template arguments.
                        // Apparently just using an empty list doesn't work. It runs, but then the parser spits out `type-parameter-0-0` instead of the correct type name.
                        std::vector<clang::TemplateArgument> targs_vec(tparams.size());
                        for (unsigned i = 0; i < tparams.size(); i++)
                        {
                            const clang::NamedDecl *tparam = tparams.getParam(i);

                            // Here we MUST canonicalize the arguments somehow, because `FunctionTemplateDecl::findSpecialization()` returns
                            //   false negatives if you give it non-canonical types.
                            // But I can't find where this is documented, and I'm not sure if it's the correct approach to canonicalization,
                            //   or whether I need to also somehow canonicalize non-type and template-template parameters.
                            // Failing to do this correctly leads to silent errors where the parser emits multiple equivalent instantiations
                            //   with different spellings. Beware.

                            if (tparam->isParameterPack())
                            {
                                targs_vec[i] = clang::TemplateArgument::getEmptyPack(); // Empty pack is its own thing!
                            }
                            else if (auto ttp = llvm::dyn_cast<clang::TemplateTypeParmDecl>(tparam))
                            {
                                #if CLANG_VERSION_MAJOR == 18
                                targs_vec[i] = ttp->getDefaultArgument().getCanonicalType(); // NOTE! This is important. See above.
                                #else // 19+
                                targs_vec[i] = ttp->getDefaultArgument().getArgument().getAsType().getCanonicalType(); // NOTE! This is important. See above.
                                #endif
                            }
                            else if (auto nttp = llvm::dyn_cast<clang::NonTypeTemplateParmDecl>(tparam))
                            {
                                #if CLANG_VERSION_MAJOR == 18
                                targs_vec[i] = nttp->getDefaultArgument();
                                #else // 19+
                                targs_vec[i] = nttp->getDefaultArgument().getArgument();
                                #endif
                            }
                            else if (auto tetp = llvm::dyn_cast<clang::TemplateTemplateParmDecl>(tparam))
                            {
                                targs_vec[i] = tetp->getDefaultArgument().getArgument(); // Hmm.
                            }
                            else
                            {
                                throw std::logic_error("What is this template argument?");
                            }
                        }

                        // For some reason this segfaults?! But it looks completely reasonable to me. Weird.
                        //   clang::MultiLevelTemplateArgumentList ml_targs = ci->getSema().getTemplateInstantiationArgs(func_templ, nullptr, false, targs_vec);
                        // So we do this instead:
                        clang::MultiLevelTemplateArgumentList ml_targs(func_templ, targs_vec, false);

                        // Check if already instantiated...
                        // There's also `Sema::FindInstantiatedDecl()`, but I coundn't figure out how it's supposed to be used, of it's applicable here at all or not.
                        // I'm not sure if I should be calling it in `decl` or `templ`, and it never returned null pointers for me, so whatever.
                        [[maybe_unused]] void *unused_insertion_point = nullptr;
                        if (!func_templ->findSpecialization(ml_targs.getInnermost(), unused_insertion_point))
                        {
                            // This doesn't crash if already instantiated, and looks like it's a no-op in that case, but I'm not entirely sure.
                            // It doesn't matter anyway, because it doesn't seem to indicate to the caller whether it's already instantiated or not,
                            //   and we need that information to set `need_another_iteration`.

                            // I WOULD use `ci->getSema().InstantiateFunctionDeclaration(...)` here, but that's annoying to use because it requires
                            //   a `clang::TemplateArgumentList` rather than `clang::MultiLevelTemplateArgumentList`, which I now (since Clang 19) can't get
                            //   without heap-allocating it (so I'd need to manually cache those). And all that function does is LITERALLY construct
                            //   a `clang::MultiLevelTemplateArgumentList` again, which I can trivially get myself as shown above.

                            // auto new_decl = ci->getSema().InstantiateFunctionDeclaration(func_templ, targs, decl->getSourceRange().getBegin());

                            { // Inspired by `sema::InstantiateFunctionDeclaration()`.
                                auto loc = decl->getSourceRange().getBegin();

                                // Which one to pick? This one looks kinda relevant.
                                auto csc = clang::Sema::CodeSynthesisContext::ExplicitTemplateArgumentSubstitution;

                                clang::sema::TemplateDeductionInfo Info(loc);
                                clang::Sema::InstantiatingTemplate Inst(ci->getSema(), loc, func_templ, ml_targs.getInnermost(), csc, Info);
                                if (!Inst.isInvalid())
                                {
                                    auto templated_decl = func_templ->getTemplatedDecl();
                                    clang::Sema::ContextRAII SavedContext(ci->getSema(), templated_decl);
                                    auto ret = cast_or_null<clang::FunctionDecl>(ci->getSema().SubstDecl(templated_decl, templated_decl->getParent(), ml_targs));
                                    if (ret)
                                    {
                                        // `new_decl` CAN be null if the function failed to instantiate because of a SFINAE error.
                                        // But this apparently doesn't happen for `requires` constraints?
                                        // NOTE! Even if it's non-null, you must also check `Sema::CheckInstantiatedFunctionTemplateConstraints()`
                                        //   before actually using the function.
                                        need_another_iteration = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }

            // For each parameter...
            for (clang::ParmVarDecl *p : decl->parameters())
            {
                // Instantiate the default arguments and the underlying parameter types.
                //
                if (p->hasUninstantiatedDefaultArg())
                {
                    ci->getSema().InstantiateDefaultArgument(decl->getSourceRange().getBegin(), decl, p);
                    need_another_iteration = true; // Do we need this? Better be safe.
                }

                // Mark the parameter type.
                GetUnderlyingClassOrEnumType(*ci, p->getType(), [&](clang::TagDecl *subdecl)
                {
                    if (!subdecl->isCompleteDefinitionRequired())
                    {
                        subdecl->setCompleteDefinitionRequired(true);
                        need_another_iteration = true;
                    }
                });
            }

            // Deduce the return type if it's `auto`.
            if (InstantiateReturnTypeIfNeeded(*ci, *decl))
                need_another_iteration = true;

            // Mark the return type.
            GetUnderlyingClassOrEnumType(*ci, decl->getReturnType(), [&](clang::TagDecl *subdecl)
            {
                if (!subdecl->isCompleteDefinitionRequired())
                {
                    subdecl->setCompleteDefinitionRequired(true);
                    need_another_iteration = true;
                }
            });

            return true;
        }

        bool VisitTypedefNameDecl(clang::TypedefNameDecl *decl) // CRTP overridecle
        {
            if (ShouldRejectTypedef(*decl, *ctx, params, printing_policies, nullptr))
                return true;

            if (params->rejected_namespace_stack.back())
                return true; // The namespace is rejected, don't instantiate things here.

            // Mark the target.
            GetUnderlyingClassOrEnumType(*ci, decl->getUnderlyingType(), [&](clang::TagDecl *subdecl)
            {
                if (!subdecl->isCompleteDefinitionRequired())
                {
                    subdecl->setCompleteDefinitionRequired(true);
                    need_another_iteration = true;
                }
            });

            return true;
        }

        bool VisitEnumDecl(clang::EnumDecl *decl) // CRTP override
        {
            if (ShouldRejectEnum(*decl, *ctx, params, printing_policies))
                return true;

            // This rejects non-templates.
            if (auto pat = decl->getTemplateInstantiationPattern())
            {
                if (
                    // Make sure we're not already instantiated. Not checking this leads to weird behavior (duplicate enumerators in the output).
                    !decl->getDefinition() &&
                    // This rejects templates that are declared but not defined.
                    pat->isCompleteDefinition() &&
                    // This rejects templates that WE don't want to instantiate, because they were visited for a useless reason,
                    //   such as being return types of SFINAE-rejected functions.
                    decl->isCompleteDefinitionRequired()
                )
                {
                    // TODO should we rewrite this using `RequireCompleteEnumDecl`? And a similar thing exists for classes.
                    ci->getSema().InstantiateEnum(decl->getSourceRange().getBegin(), decl, pat, ci->getSema().getTemplateInstantiationArgs(decl), clang::TSK_ImplicitInstantiation);
                    // DO NOT ask for another iteration, because instantiating this shouldn't give us any new types?
                    // need_another_iteration = true;
                }
            }

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        bool ProcessRecord(clang::RecordDecl *decl)
        {
            if (ShouldRejectRecord(*decl, *ctx, params, printing_policies))
            {
                params->nonrejected_class_stack.push_back(nullptr);
                return false;
            }

            if (
                // If nobody asked for this class to be instantiated, reject it. Unless...
                !decl->isCompleteDefinitionRequired() &&
                // If we're inside a class that we're instantiating, allow it anyway.
                !(!params->nonrejected_class_stack.empty() && bool(params->nonrejected_class_stack.back()))
            )
            {
                params->nonrejected_class_stack.push_back(nullptr);
                return false;
            }

            params->nonrejected_class_stack.push_back((ClassEntity *)sizeof(ClassEntity)); // Push some non-zero pointer to allow boolean testing.

            // This can be false at this point only if we're a member class, and the parent class is marked as having its definition required.
            decl->setCompleteDefinitionRequired(true);

            // Instantiate this class.
            // Here `decl->isCompleteDefinitionRequired()` rejects templates that WE don't want to instantiate,
            //   because they were visited for a useless reason, uch as being return types of SFINAE-rejected functions.
            if (auto cxxdecl = llvm::dyn_cast<clang::CXXRecordDecl>(decl))
            {
                if (TryInstantiateClass(*ci, *cxxdecl, decl->getSourceRange().getBegin()))
                    need_another_iteration = true;
            }

            // Mark non-static data members as needing instantiation.
            // Normally they get instantiated automatically, but not if they are e.g. pointers.
            for (const clang::FieldDecl *field : decl->fields())
            {
                if (ShouldRejectRecordField(*field))
                    continue;

                GetUnderlyingClassOrEnumType(*ci, field->getType(), [&](clang::TagDecl *subdecl)
                {
                    if (!subdecl->isCompleteDefinitionRequired())
                    {
                        subdecl->setCompleteDefinitionRequired(true);
                        need_another_iteration = true;
                    }
                });
            }

            // Same for static data members.
            clang::DeclContext::specific_decl_iterator<clang::VarDecl> iter(decl->decls_begin());
            for (const clang::VarDecl *var : llvm::iterator_range(iter, decltype(iter){}))
            {
                if (ShouldRejectRecordStaticDataMember(*var))
                    continue;

                GetUnderlyingClassOrEnumType(*ci, var->getType(), [&](clang::TagDecl *subdecl)
                {
                    if (!subdecl->isCompleteDefinitionRequired())
                    {
                        subdecl->setCompleteDefinitionRequired(true);
                        need_another_iteration = true;
                    }
                });
            }

            return true;
        }

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
            bool reject = ShouldRejectDeclaration(*decl, *ctx, params, printing_policies);

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

            auto VerifyStacks = [&]
            {
                if (params->rejected_namespace_stack.size() != 1)
                    throw std::logic_error("Internal error: The visitor didn't clean the namespace stack after itself.");
                if (!params->nonrejected_class_stack.empty())
                    throw std::logic_error("Internal error: The visitor didn't clean the class stack after itself.");
            };
            VerifyStacks();

            { // Collect the initial set of target types.
                ClangAstVisitor_CollectKnownTypes vis(ctx, *ci, *params);
                vis.TraverseDecl(ctx.getTranslationUnitDecl());
                VerifyStacks();
            }

            // Instantiate templates.
            for (int i = 0;; i++)
            {
                if (i == 1000)
                    throw std::runtime_error("Too many template instantiation iterations!");

                ClangAstVisitor_InstTypesAndCollectNewTypes vis(ctx, *ci, *params);
                vis.TraverseDecl(ctx.getTranslationUnitDecl());
                VerifyStacks();
                if (!vis.need_another_iteration)
                {
                    if (i > 1)
                        llvm::errs() << "mrbind: Used " << i+1 << " iterations to instantiate all templates.\n";
                    break;
                }
            }

            // Gather the bulk of the information.

            ClangAstVisitor_Final vis(ctx, *ci, *params);
            vis.TraverseDecl(ctx.getTranslationUnitDecl());
            VerifyStacks();

            params->rejected_namespace_stack.pop_back();

            { // Remove identities from "alt type spellings".
                // We intentionally don't remove the empty lists after erasure, because we use this map to know all types we need to bind.
                for (auto &inner : params->parsed_result.type_info)
                {
                    for (auto &[type, info] : inner.second)
                        info.alt_spellings.erase(type);
                }
            }

            { // Remove the spellings with the `poisoned` bool set.
                // I intentionally don't remove the empty lists after erasure, but I'm not sure if can even in this case at all.
                // And if it can, not sure if the empty lists should be erased or not.
                for (auto &inner : params->parsed_result.type_info)
                {
                    for (auto &info : inner.second)
                    {
                        std::erase_if(info.second.alt_spellings, [](const auto &elem)
                        {
                            return elem.second.poisoned;
                        });
                    }
                }
            }

            { // Remove types that don't have any "uses" bits set. This can happen if they were poisoned by poisonous typedefs and weren't used elsewhere.
                std::erase_if(
                    params->parsed_result.type_info,
                    [](const std::pair<const std::string, std::map<std::string, TypeInformation>> &p)
                    {
                        if (p.second.size() != 1)
                            throw std::logic_error("Expected exactly one subtype at this point.");
                        return p.second.begin()->second.uses == TypeUses{};
                    }
                );
            }

            // Combine together similar types, if needed.
            if (bool(params->adjust_type_name_flags))
            {
                CombineSimilarTypes(params->parsed_result, params->enable_cppdecl_processing ? MakeAdjustTypeNameFunc(params->adjust_type_name_flags) : MakeAdjustTypeNameFuncLegacyWithoutCppdecl(params->adjust_type_name_flags));
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
    mrbind::SetErrorHandlers();

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

                    const std::string_view combine_types_flag = "--combine-types=";
                    if (this_arg.starts_with(combine_types_flag))
                    {
                        params.adjust_type_name_flags = mrbind::ParseAdjustTypeNameFlags(this_arg.substr(combine_types_flag.size()));
                        continue;
                    }

                    if (this_arg == "--no-cppdecl")
                    {
                        params.enable_cppdecl_processing = false;
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
        "\n"
        "\n"
        "Usage:\n"
        "  mrbind [mrbind_flags]\n"
        "  mrbind [mrbind_flags] -- [clang_flags]\n"
        "\n"
        "`[clang_flags]` are the usual compiler flags. They can be empty, which isn't the same thing as omitting `--` entirely.\n"
        "If no `--` is passed, the compiler flags are guessed from a `compile_commands.json`.\n"
        "\n"
        "`[mrbind_flags]` are following:\n"
        "  -o output.cpp               - Redirect the output to a file. Specifying this flag multiple times multiplexes the output between several files which can be compiled in parallel, or sequentally for a lower RAM usage.\n"
        "  --format=...                - The output format, either `json` or `macros`.\n"
        "  --ignore T                  - Don't emit bindings for a specific entity. "
                                         "Use the flag several times to ban several entities. "
                                         "Use a fully qualified name. The final template arguments can be omitted, then any arguments match. "
                                         "Use `::` to reject the global namespace. "
                                         "Enclose in slashes to match a regex. "
                                         "Also note that you can annotate declarations that you want to ignore with `[[clang::annotate(\"mrbind::ignore\")]]\n"
        "  --allow T                   - Unban a subentity of something that was banned with `--ignore`. Same syntax.\n"
        "  --skip-base T               - Don't show that classes inherits from `T`. You might also want to `--ignore T`.\n"
        "  --combine-types=...         - Merge type registration info for certain types. This can improve the build times, but depends on the target backend. "
                                         "`...` is a comma-separated list of: `cv`, `ref` (both lvalue and rvalue references), `ptr` (includes cv-qualified pointers), and `smart_ptr` (both `std::unique_ptr` and `std::shared_ptr`).\n"
        "  --no-cppdecl                - Do not attempt to postprocess the type names using our cppdecl library. There's typically no reason to, unless the library ends up being bugged. This can break many non-trivial usecases.\n"
        "  --dump-command output.txt   - Dump the resulting compilation command to the specified file, one argument per line. The first argument is always the compiler name, and there's no trailing newline. This is useful for extracting commands from a `compile_commands.json`.\n"
        "  --dump-command0 output.txt  - Same, but separate the arguments with zero bytes instead of newlines.\n"
        "  --ignore-pch-flags          - Try to ignore PCH inclusion flags mentioned in the `compile_commands.json`. This is useful if the PCH was generated using a different compiler.\n"
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
