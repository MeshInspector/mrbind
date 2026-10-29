#pragma once

#include <string_view>

namespace mrbind::Python
{
    // The runtime header that the generated extension module includes, written to the output directory as `mrbind_py_runtime.h`.
    extern const std::string_view runtime_header;
}
