#include "main.h"

#if defined(__GNUC__) && defined(__cpp_rtti)
#error This file must be built with RTTI disabled. Fix your build system.
#endif

namespace mrbind
{
    void ClangAstConsumer::DisableRtti() {}
    void ClangFrontendAction::DisableRtti() {}
    void ClangFrontendActionFactory::DisableRtti() {}
    void ClangAdjustedCompilationDatabase::DisableRtti() {}
}
