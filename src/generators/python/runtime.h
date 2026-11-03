#pragma once

#include <string>

namespace mrbind::Python
{
    // The runtime header that the generated extension module includes, written to the output directory as `mrbind_py_runtime.h`.
    extern const std::string runtime_header;
}
