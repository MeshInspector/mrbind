#pragma once

#include "parsed_data.h"

#include "pre_include_clang.h"
#include <llvm/Support/raw_ostream.h>
#include "post_include_clang.h"

namespace mrbind
{
    void ParsedFileToJson(const ParsedFile &file, llvm::raw_ostream &out);
}
