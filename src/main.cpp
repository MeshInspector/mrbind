#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wconversion"
#pragma clang diagnostic ignored "-Wextra-semi"
#endif

#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/CommandLine.h>

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include <cstring>
#include <exception>
#include <fstream>
#include <stdexcept>
#include <string_view>
#include <string>

namespace MRBind
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

    // Wrap the string in double quotes and escape any weird characters..
    [[nodiscard]] std::string EscapeQuoteString(std::string_view str)
    {
        std::string ret;
        ret.reserve(str.size() + 2);
        ret += '"';
        for (char ch : str)
        {
            if (ch == '\r')
                continue; // Strip CR completely, only keep LF.

            if (ch == '\n')
            {
                ret += "\\n";
                continue;
            }

            if (ch == '"' || ch == '\\')
                ret += '\\';
            ret += ch;
        }
        ret += '"';
        return ret;
    }

    // Whether we should skip this declaration when traversing the AST.
    // Includes some non-contentious stuff like rejecting header contents, template declarations there weren't instantiated yet, function-local declarations.
    [[nodiscard]] bool ShouldRejectDeclaration(const clang::ASTContext &ctx, const clang::Decl &decl)
    {
        if (ctx.getFullLoc(decl.getBeginLoc()).getFileID() != ctx.getSourceManager().getMainFileID())
            return true; // Reject declarations in the headers.

        if (decl.isTemplated())
            return true; // This is a template, reject. Specific specializations will be given to us separately.

        if (decl.getParentFunctionOrMethod())
            return true; // Reject function-local declarations.

        return false;
    }

    // Adjusts a printing policy to make it sane.
    void FixPrintingPolicy(clang::PrintingPolicy &printing_policy)
    {
        printing_policy.PrintCanonicalTypes = true; // Add qualifiers.
        printing_policy.FullyQualifiedName = true; // Add qualifiers when printing declarations, to the names being declared. Currently we don't use this (I think?), but still nice to have.
        printing_policy.SuppressUnwrittenScope = true; // Disable printing `::(anonymous namespace)::` weirdness.
        printing_policy.SuppressInlineNamespace = true; // Suppress printing inline namespaces, if it doesn't introduce ambiguity.
        printing_policy.MSVCFormatting = false; // Unsure what this changes, just in case.
        printing_policy.PolishForDeclaration = true; // Unsure what this changes, just in case.
    }

    // Returns a comment string associated with a declaration, or empty if none.
    // You might want to process it with `EscapeQuoteString` for output.
    [[nodiscard]] std::string GetCommentString(const clang::ASTContext &ctx, const clang::Decl &decl)
    {
        const clang::RawComment *comment = ctx.getRawCommentForAnyRedecl(&decl);
        if (!comment)
            return "";
        return comment->getFormattedText(ctx.getSourceManager(), ctx.getDiagnostics());
    }

    // Adds quotes to the output of `GetCommentString()`, or returns a placeholder /*...*/ comment (unquoted).
    [[nodiscard]] std::string GetQuotedCommentStringOrPlaceholder(const clang::ASTContext &ctx, const clang::Decl &decl)
    {
        std::string comment = GetCommentString(ctx, decl);
        if (comment.empty())
            return "/*no comment*/";
        else
            return EscapeQuoteString(comment);
    }

    // Returns the default argument value as a string, or empty if none.
    // You likely want to set `printing_policy.PrintCanonicalTypes = true`.
    [[nodiscard]] std::string GetDefaultArgumentString(const clang::ParmVarDecl &param, const clang::PrintingPolicy &printing_policy)
    {
        std::string ret;
        if (auto default_arg = param.getDefaultArg())
        {
            llvm::raw_string_ostream ss(ret);
            default_arg->printPretty(ss, nullptr, printing_policy);

            // Adjust `{...}` to add an explicit type.
            if (ret.starts_with('{'))
                ret = param.getType().getNonReferenceType().getUnqualifiedType().getAsString(printing_policy) + std::move(ret);
        }
        return ret;
    }
    // Returns either the parenthesized default argument, or a comment if none.
    [[nodiscard]] std::string GetParenDefaultArgumentStringOrPlaceholder(const clang::ParmVarDecl &param, const clang::PrintingPolicy &printing_policy)
    {
        std::string ret = GetDefaultArgumentString(param, printing_policy);
        if (!ret.empty())
            return "(" + ret + ")";
        else
            return "/*no default arg*/";
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
        auto AccessIsOk = [](clang::AccessSpecifier ac)
        {
            return ac == clang::AccessSpecifier::AS_public || ac == clang::AccessSpecifier::AS_none;
        };

        // Strip reference-ness. `Type` (as opposed to `QualType`) apprently can't have cv-qualifiers.
        const clang::Type *fixed_type = &type;
        if (auto ref = llvm::dyn_cast<clang::ReferenceType>(&type))
            fixed_type = ref->getPointeeType().getTypePtr();

        // This is based on `clang_getTypeDeclaration()`.
        if (auto t = llvm::dyn_cast<clang::TypedefType>(fixed_type))
            return AccessIsOk(t->getDecl()->getAccess());
        if (auto t = llvm::dyn_cast<clang::TagType>(fixed_type))
            return AccessIsOk(t->getDecl()->getAccess());
        if (auto t = llvm::dyn_cast<clang::TemplateSpecializationType>(fixed_type))
            return AccessIsOk(t->getTemplateName().getAsTemplateDecl()->getAccess());
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

    // The main visitor, generates most of our code.
    struct ClangAstVisitor : clang::RecursiveASTVisitor<ClangAstVisitor>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitor>;

        clang::ASTContext *ctx = nullptr;

        clang::PrintingPolicy printing_policy;

        ClangAstVisitor(clang::ASTContext &ctx)
            : ctx(&ctx),
            printing_policy(ctx.getPrintingPolicy())
        {
            FixPrintingPolicy(printing_policy);
        }

        // Visit template specializations almost as if they were normal code.
        bool shouldVisitTemplateInstantiations() const // CRTP override
        {
            return true;
        }

        bool VisitFunctionDecl(const clang::FunctionDecl *decl) // CRTP override
        {
            if (decl->isCXXClassMember())
                return true; // Reject member functions.
            if (decl->getDeclName().getNameKind() == clang::DeclarationName::CXXLiteralOperatorName)
                return true; // Reject user-defined literals.

            if (ShouldRejectDeclaration(*ctx, *decl))
                return true;

            if (!FuncLooksLikeItHasAccessibleSignatureTypes(*decl))
                return true;

            std::string qual_name;
            llvm::raw_string_ostream qual_name_ss(qual_name);
            decl->printQualifiedName(qual_name_ss, printing_policy);
            // Print template arguments, if any.
            if (auto template_args = decl->getTemplateSpecializationArgs())
                clang::printTemplateArgumentList(qual_name_ss, template_args->asArray(), printing_policy);

            llvm::outs() << "MB_FUNC("
                // Return type.
                << "(" << decl->getReturnType().getAsString(printing_policy) << "), "
                // Name.
                << GetAdjustedFuncName(*decl) << ", "
                // Qualified name.
                << "(" << qual_name << "), "
                // Comment.
                << GetQuotedCommentStringOrPlaceholder(*ctx, *decl) << ",";

            bool have_any_params = false;
            for (const clang::ParmVarDecl *p : decl->parameters())
            {
                if (!have_any_params)
                {
                    have_any_params = true;
                    llvm::outs() << " /*params:*/\n";
                }
                llvm::outs() << "    ("
                    // Type.
                    << "(" << p->getType().getAsString(printing_policy) << "), "
                    // Name.
                    << p->getName() << ", "
                    // Default argument.
                    << GetParenDefaultArgumentStringOrPlaceholder(*p, printing_policy)
                    << ")\n";
            }
            if (!have_any_params)
                llvm::outs() << " /*no params*/";
            llvm::outs() << ")\n";

            return true;
        }

        // Note, this is not a CRTP override, and here we do return false when refusing to visit the class.
        bool ProcessRecord(const clang::RecordDecl *decl)
        {
            if (ShouldRejectDeclaration(*ctx, *decl))
                return false;

            if (decl->isAnonymousStructOrUnion())
                return false; // Reject anonymous structs/unions.

            if (!decl->isCompleteDefinition())
                return false; // Reject forward declarations.

            if (!TypeLooksAccessible(*decl->getTypeForDecl()))
                return false; // Inaccessible type.

            auto cxxdecl = llvm::dyn_cast<clang::CXXRecordDecl>(decl);

            std::string qual_type_str = ctx->getRecordType(decl).getAsString(printing_policy);

            llvm::outs() << "MB_CLASS("
                // Kind.
                << (decl->isClass() ? "class" : decl->isStruct() ? "struct" : decl->isUnion() ? "union" : throw std::runtime_error("Unable to classify the class-like type `" + qual_type_str + "`.")) << ", "
                // Short name.
                << decl->getName() << ", "
                // Qualified name.
                << "(" << qual_type_str << ")" << ", "
                // Comment.
                << GetQuotedCommentStringOrPlaceholder(*ctx, *decl);

            // Bases.
            bool have_any_bases = false;
            if (cxxdecl)
            {
                for (const clang::CXXBaseSpecifier &base : cxxdecl->bases())
                {
                    if (base.getAccessSpecifier() != clang::AS_public)
                        continue; // Reject non-public bases.

                    if (!have_any_bases)
                    {
                        have_any_bases = true;
                        llvm::outs() << "\n    ,/*bases:*/";
                    }

                    llvm::outs() << "\n    ("
                        << "(" << base.getType().getAsString(printing_policy) << "), "
                        << (base.isVirtual() ? "virtual" : "/*non-virtual*/")
                        << ")";
                }
            }
            if (!have_any_bases)
                llvm::outs() << ", /*no bases*/";

            // Members:

            bool have_any_members = false;
            auto PreOutputMember = [&]
            {
                if (!have_any_members)
                {
                    have_any_members = true;
                    llvm::outs() << "\n    ,/*members:*/\n";
                }
            };

            // -- Data members.
            for (const clang::FieldDecl *field : decl->fields())
            {
                if (field->isBitField() || field->isAnonymousStructOrUnion())
                    continue; // Reject weird stuff.

                if (field->getAccess() != clang::AS_public)
                    continue; // Reject non-public fields.

                PreOutputMember();

                llvm::outs() << "    (field, "
                    << "(" << field->getType().getAsString(printing_policy) << "), "
                    << field->getName() << ", "
                    << GetQuotedCommentStringOrPlaceholder(*ctx, *field) << ")\n";
            }

            // -- Constructors and methods.
            if (cxxdecl)
            {
                for (const clang::CXXMethodDecl *method : cxxdecl->methods())
                {
                    if (method->getAccess() != clang::AS_public)
                        continue; // Reject non-public methods.
                    if (method->isCopyAssignmentOperator() || method->isMoveAssignmentOperator() || llvm::isa<clang::CXXDestructorDecl>(method))
                        continue; // Reject copy/move assignment operators and destructors. Constructors don't arrive here in the first place.
                    if (!FuncLooksLikeItHasAccessibleSignatureTypes(*method))
                        continue; // Inaccessible types in the signature.

                    PreOutputMember();

                    std::string name;
                    bool is_ctor = false;
                    bool is_conv_op = false;

                    if (auto ctor = llvm::dyn_cast<clang::CXXConstructorDecl>(method))
                    {
                        if (ctor->isCopyOrMoveConstructor())
                            continue; // Reject copy/move constructors.
                        is_ctor = true;
                    }
                    else if (llvm::isa<clang::CXXConversionDecl>(method))
                    {
                        is_conv_op = true;
                    }
                    else
                    {
                        name = GetAdjustedFuncName(*method);
                    }

                    llvm::outs() << "    (" << (is_ctor ? "ctor" : is_conv_op ? "conv_op" : "method") << ", ";
                    if (!is_ctor)
                    {
                        if (!is_conv_op)
                        {
                            // Static?
                            llvm::outs() << (method->isStatic() ? "static" : "/*non-static*/") << ", ";
                        }
                        // Return type.
                        llvm::outs() << "(" << method->getReturnType().getAsString(printing_policy) << "), ";
                        if (!is_conv_op)
                        {
                            llvm::outs()
                                // Name.
                                << method->getDeclName().getAsString() << ", "
                                // Simple name.
                                << name << ", ";
                        }
                        // Constness.
                        llvm::outs() << (method->isConst() ? "const" : "/*non-const*/") << ", ";
                    }

                    // Comment.
                    llvm::outs() << GetQuotedCommentStringOrPlaceholder(*ctx, *method);

                    // Params.
                    if (!is_conv_op)
                    {
                        llvm::outs() << ",";

                        bool have_any_params = false;
                        for (const clang::ParmVarDecl *p : method->parameters())
                        {
                            if (!have_any_params)
                            {
                                have_any_params = true;
                                llvm::outs() << " /*params:*/\n";
                            }
                            llvm::outs() << "        ("
                                // Type.
                                << "(" << p->getType().getAsString(printing_policy) << "), "
                                // Name.
                                << p->getName() << ", "
                                // Default argument.
                                << GetParenDefaultArgumentStringOrPlaceholder(*p, printing_policy)
                                << ")\n";
                        }
                        if (have_any_params)
                            llvm::outs() << "    ";
                        else
                            llvm::outs() << " /*no params*/";
                    }

                    llvm::outs() << ")\n";
                }
            }

            if (!have_any_members)
            {
                llvm::outs() << (have_any_bases ? "\n    ," : ", ") << "/*no members*/";
                if (have_any_bases)
                    llvm::outs() << "\n";
            }

            llvm::outs() << ")\n";

            return true;
        }

        bool TraverseRecordDecl(clang::RecordDecl *decl) // CRTP override
        {
            bool ret = true;
            if (ProcessRecord(decl))
            {
                bool ret = Base::TraverseRecordDecl(decl);
                llvm::outs() << "MB_END_CLASS(" << decl->getDeclName() << ")\n";
                return ret;
            }
            return ret;
        }

        bool TraverseCXXRecordDecl(clang::CXXRecordDecl *decl) // CRTP override
        {
            // Unlike `Visit...`, `Traverse...` only handles exact matches, so we need this in addition to `TraverseRecordDecl()`
            //   to process classes (including structs in C++ mode).

            bool ret = true;
            if (ProcessRecord(decl))
            {
                bool ret = Base::TraverseCXXRecordDecl(decl);
                llvm::outs() << "MB_END_CLASS(" << decl->getDeclName() << ")\n";
                return ret;
            }
            return ret;
        }

        bool TraverseClassTemplateSpecializationDecl(clang::ClassTemplateSpecializationDecl *decl)
        {
            // Unlike `Visit...`, `Traverse...` only handles exact matches, so we need this in addition to `TraverseRecordDecl()`
            //   to process class template specializations.
            // There's also a `...PartialSpecializationDecl` version, which we don't care about.

            bool ret = true;
            if (ProcessRecord(decl))
            {
                bool ret = Base::TraverseCXXRecordDecl(decl);
                llvm::outs() << "MB_END_CLASS(" << decl->getDeclName() << ")\n";
                return ret;
            }
            return ret;
        }

        bool VisitEnumDecl(const clang::EnumDecl *decl) // CRTP override
        {
            if (!decl->isCompleteDefinition())
                return true; // Reject enum declarations without the element list.

            if (ShouldRejectDeclaration(*ctx, *decl))
                return true;

            if (!TypeLooksAccessible(*decl->getTypeForDecl()))
                return true; // Inaccessible type.

            llvm::outs() << "MB_ENUM("
                // Scoped or non-scoped?
                << (decl->isScoped() ? "class" : "/*not enum-class*/") << ", "
                // Short name.
                << decl->getName() << ", "
                // Qualified name.
                << "(" << ctx->getEnumType(decl).getAsString(printing_policy) << "), "
                // Underyling type.
                << decl->getIntegerType().getAsString(printing_policy) << ", "
                // Comment.
                << GetQuotedCommentStringOrPlaceholder(*ctx, *decl) << ",";
            bool is_signed = decl->getIntegerType()->isSignedIntegerType();
            bool at_least_one_elem = false;
            for (const clang::EnumConstantDecl *elem : decl->enumerators())
            {
                at_least_one_elem = true;

                // Print the name.
                llvm::outs() << "\n    (" << elem->getName() << ", ";

                // Print the value.
                if (is_signed)
                {
                    auto opt = elem->getValue().trySExtValue();
                    if (!opt)
                        throw std::runtime_error("Enum element value doesn't fit into 64 bits.");
                    llvm::outs() << *opt;
                }
                else
                {
                    auto opt = elem->getValue().tryZExtValue();
                    if (!opt)
                        throw std::runtime_error("Enum element value doesn't fit into 64 bits.");
                    llvm::outs() << *opt;
                }
                llvm::outs() << ", ";

                // Print the comment.
                llvm::outs() << GetQuotedCommentStringOrPlaceholder(*ctx, *elem) << ")";
            }
            if (at_least_one_elem)
                llvm::outs() << "\n";
            else
                llvm::outs() << " /*no elements*/";
            llvm::outs() << ")\n";

            return true;
        }

        bool TraverseNamespaceDecl(clang::NamespaceDecl *decl) // CRTP override
        {
            if (ShouldRejectDeclaration(*ctx, *decl))
                return true; // We don't only don't print the rejected namespaces, but also don't recurse into them for speed.

            std::string name_str(decl->getName());
            llvm::outs() << "MB_NAMESPACE("
                << (!name_str.empty() ? name_str : "/*unnamed*/") << ", "
                << (decl->isInlineNamespace() ? "inline" : "/*not inline*/") << ", "
                << GetQuotedCommentStringOrPlaceholder(*ctx, *decl)
                << ")\n";

            bool ret = Base::TraverseNamespaceDecl(decl);

            llvm::outs() << "MB_END_NAMESPACE(" << decl->getName() << ")\n";

            return ret;
        }
    };

    // Produces declarations for all friends in this file, so we can form pointers to them.
    struct ClangAstVisitorFriendDeclDumper : clang::RecursiveASTVisitor<ClangAstVisitorFriendDeclDumper>
    {
        using Base = clang::RecursiveASTVisitor<ClangAstVisitor>;

        clang::ASTContext *ctx = nullptr;

        clang::PrintingPolicy printing_policy;

        bool first = true;

        ClangAstVisitorFriendDeclDumper(clang::ASTContext &ctx)
            : ctx(&ctx),
            printing_policy(ctx.getPrintingPolicy())
        {
            FixPrintingPolicy(printing_policy);
        }

        // Visit template specializations almost as if they were normal code.
        bool shouldVisitTemplateInstantiations() const // CRTP override
        {
            return true;
        }

        bool VisitFunctionDecl(const clang::FunctionDecl *decl) // CRTP override
        {
            if (!(decl->getIdentifierNamespace() & clang::Decl::IDNS_OrdinaryFriend))
                return true; // This is not a friend.

            if (decl->isCXXClassMember())
                return true; // Reject member functions.
            if (decl->getDeclName().getNameKind() == clang::DeclarationName::CXXLiteralOperatorName)
                return true; // Reject user-defined literals.

            if (ShouldRejectDeclaration(*ctx, *decl))
                return true;

            if (!FuncLooksLikeItHasAccessibleSignatureTypes(*decl))
                return true; // Inaccessible signature types.

            if (first)
            {
                first = false;
                llvm::outs() << "\n// Declare friends to allow forming pointers-to-members to them.\n";
            }

            // Print the declaration.
            // I wanted to use `decl->print()`, but it wants to print the function bodies, and I'm unsure how to disable that.

            std::string qual_name;
            llvm::raw_string_ostream qual_name_ss(qual_name);
            decl->printQualifiedName(qual_name_ss, printing_policy);

            if (decl->isConstexpr())
                llvm::outs() << "constexpr ";
            if (decl->isConsteval())
                llvm::outs() << "consteval ";

            decl->getType().print(llvm::outs(), printing_policy, qual_name);
            llvm::outs() << ";\n";
            return true;
        }
    };

    struct ClangAstConsumer : clang::ASTConsumer
    {
        std::string input_filename;

        explicit ClangAstConsumer(std::string input_filename)
            : input_filename(std::move(input_filename))
        {}

        void HandleTranslationUnit(clang::ASTContext &ctx) override
        {
            llvm::outs()
                << "// Automatically generated by mrbind, do not edit.\n"
                << "\n"
                << "#include MRBIND_HEADER\n"
                << "\n"
                << "#if MB_INCLUDE_ORIGINAL_HEADER\n"
                << "#include " << EscapeQuoteString(input_filename) << "\n"
                << "#if MB_INCLUDE_ORIGINAL_HEADER >= 2 // Headers from the corresponding implementation file.\n";
            { // Dump the headers from the .cpp file.
                std::string impl_filename = PpDirDumper::GuessImplementationFileName(input_filename);
                PpDirDumper::DumpResult result = PpDirDumper::DumpPreprocessorDirectivesFromFile(impl_filename, llvm::outs());
                switch (result)
                {
                  case PpDirDumper::DumpResult::ok:
                    // Nothing.
                    break;
                  case PpDirDumper::DumpResult::filename_not_specified:
                    llvm::outs() << "// Unable to guess the implementation file name from the input file name.\n";
                    break;
                  case PpDirDumper::DumpResult::no_such_file:
                    llvm::outs() << "// Implementation file doesn't exist: " << impl_filename << '\n';
                    break;
                  case PpDirDumper::DumpResult::no_pp_directives:
                    llvm::outs() << "// Implementation file doesn't contain preprocessing directives: " << impl_filename << '\n';
                    break;
                }
            }
            llvm::outs()
                << "#endif\n"
                << "#endif\n";

            // Declare all the friends, to allow us to form pointers to them.
            ClangAstVisitorFriendDeclDumper(ctx).TraverseDecl(ctx.getTranslationUnitDecl());
            llvm::outs()
                << "\n"
                << "MB_FILE\n"
                << "\n";

            // Generate the bulk of the code.
            ClangAstVisitor(ctx).TraverseDecl(ctx.getTranslationUnitDecl());

            llvm::outs() << "\nMB_END_FILE\n";
        }
    };

    struct ClangFrontendAction : clang::ASTFrontendAction
    {
        std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance &CI, llvm::StringRef InFile) override
        {
            (void)CI;
            (void)InFile;
            return std::make_unique<ClangAstConsumer>(std::string(InFile));
        }
    };
}

int main(int argc, char **argv)
{
    try
    {
        std::string dump_command_to_file;
        bool dump_command_with_null_separators = false;

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
                    }
                }

                argv[modified_argc++] = argv[i];
            }

            if (modified_argc < argc)
                argv[modified_argc] = nullptr;
            argc = modified_argc;
        }

        llvm::cl::OptionCategory options_category("Standard Clang tooling options");
        auto option_parser_ex = clang::tooling::CommonOptionsParser::create(argc, const_cast<const char **>(argv), options_category, llvm::cl::OneOrMore,
            "\n\n"
            "In addition to the stock Clang options explained below, we also support:\n"
            "  --dump-command output.txt   - Dump the resulting compilation command to the specified file, one argument per line. The first argument is always the compiler name, and there's no trailing newline.\n"
            "  --dump-command0 output.txt  - Same, but separate the arguments with zero bytes instead of newlines.\n"
        );
        if (!option_parser_ex)
        {
            llvm::errs() << option_parser_ex.takeError();
            return 1;
        }

        clang::tooling::CommonOptionsParser &option_parser = option_parser_ex.get();
        if (option_parser.getSourcePathList().size() != 1)
            throw std::runtime_error("Must specify exactly one source file."); // By default libtooling accepts >= 1 files, but I don't want to deal with splitting the output.

        // Dump compilation command if requested.
        if (!dump_command_to_file.empty())
        {
            std::ofstream out_file(dump_command_to_file);

            auto commands_vec = option_parser.getCompilations().getCompileCommands(option_parser.getSourcePathList().front());
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

        clang::tooling::ClangTool tool(option_parser.getCompilations(), option_parser.getSourcePathList());

        return tool.run(clang::tooling::newFrontendActionFactory<MRBind::ClangFrontendAction>().get());
    }
    catch (std::exception &e)
    {
        llvm::errs() << "Exception: " << e.what() << '\n';
        return 1;
    }
}
