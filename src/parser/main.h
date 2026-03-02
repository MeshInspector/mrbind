#pragma once

#include "pre_include_clang.h"
#include <clang/AST/ASTConsumer.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Tooling/CompilationDatabase.h>
#include <clang/Tooling/Tooling.h>
#include "post_include_clang.h"

#include <string>

// We need this header for a very obscure reason: to support using libclang compiled without RTTI, while our own code is compiled with RTTI.
// This causes issues at least on a self-built Clang 22 on Arch, perhaps elsewhere too.
// Apparently the only solution to this (to selectively disable RTTI for individual classes) is to give them an extra virtual function each,
//   and implement it in a separate TU that has RTTI disabled. You'd think we'd have a class attribute to disable RTTI, but apparently that doesn't exist.

namespace mrbind
{
    struct VisitorParams;

    struct ClangAstConsumer : clang::ASTConsumer
    {
        virtual void DisableRtti();

        std::string input_filename;
        clang::CompilerInstance *ci = nullptr;
        const VisitorParams *params = nullptr;

        explicit ClangAstConsumer(std::string input_filename, clang::CompilerInstance &ci, const VisitorParams &params);
        void HandleTranslationUnit(clang::ASTContext &ctx) override;
    };

    struct ClangFrontendAction : clang::ASTFrontendAction
    {
        virtual void DisableRtti();

        const VisitorParams *params = nullptr;

        ClangFrontendAction(const VisitorParams &params);

        std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance &CI, llvm::StringRef InFile) override;
    };

    struct ClangFrontendActionFactory : clang::tooling::FrontendActionFactory
    {
        virtual void DisableRtti();

        const VisitorParams *params = nullptr;

        std::unique_ptr<clang::FrontendAction> create() override;
    };

    // Wraps the default compilation database, to adjust some flags.
    // Can hold at most one file at a time.
    struct ClangAdjustedCompilationDatabase : clang::tooling::CompilationDatabase
    {
        virtual void DisableRtti();

        clang::tooling::CompilationDatabase *underlying = nullptr;

        bool remove_pch_flags = false;

        ClangAdjustedCompilationDatabase(clang::tooling::CompilationDatabase &underlying, bool remove_pch_flags);

        void AdjustCommand(clang::tooling::CompileCommand &command) const;

        std::vector<clang::tooling::CompileCommand> getCompileCommands(clang::StringRef FilePath) const override;

        std::vector<std::string> getAllFiles() const override;

        std::vector<clang::tooling::CompileCommand> getAllCompileCommands() const override;
    };
}
