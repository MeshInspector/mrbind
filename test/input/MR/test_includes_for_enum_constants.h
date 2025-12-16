#pragma once

#include "test_includes_for_enum_constants_2.h"
#include "test_includes_for_enum_constants_3.h"

// This is a rather obscure test case, but this has happened to us in practice, so gotta fix it.

namespace MR::IncludesForEnumConstants
{
    // Make sure that the `.cpp` implementation file includes the header for `E` correctly.
    inline A<E::e1> foo() {return {};}
}
