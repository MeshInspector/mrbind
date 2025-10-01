#pragma once

#include "common/parsed_data.h"

namespace mrbind
{
    // Copy member functions from the base classes to the derived classes.
    // Doesn't apply to the constructors. The normal shadowing rules apply.
    void CopyInheritedMembers(ParsedFile &file);
}
