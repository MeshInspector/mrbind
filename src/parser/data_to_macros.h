#pragma once

#include "common/parsed_data.h"

#include <fstream>

namespace mrbind
{
    // `enable_cppdecl` - Can we use cppdecl to parse types? Usually true, unless disabled by the user (e.g. because it fails to parse some type).
    // `pretty_type_spelling` - In most places, do we prefer the pretty type spellings or the canonical ones? Canonical ones can omit namespace/class qualifiers, so the might not be valid C++ types,
    //   e.g. if a class template takes `auto &` and is given a global variable, the namespace on that variable will be omitted. Tested on Clang 18, 22.
    void ParsedFileToMacros(const ParsedFile &file, std::ostream &out, bool enable_cppdecl /*= true*/, bool pretty_type_spelling /*= false*/);
}
