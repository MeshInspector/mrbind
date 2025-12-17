#include "c_output_desc.h"

namespace mrbind::CInterop
{
    bool InheritanceInfo::HaveAnyIndirect(bool derived) const
    {
        return derived ? !derived_indirect.empty() : !bases_indirect.Vec().empty();
    }

    bool InheritanceInfo::HaveIndirectOfKind(bool derived, Kind kind) const
    {
        if (derived)
            return std::any_of(derived_indirect.begin(), derived_indirect.end(), [&](const auto &elem){return elem.second == kind;});
        else
            return std::any_of(bases_indirect.Map().begin(), bases_indirect.Map().end(), [&](const auto &elem){return elem.second == kind;});
    }

    // Do we have a direct base/derived with this name?
    bool InheritanceInfo::HaveDirectNonVirtualNamed(bool derived, std::string_view name) const
    {
        if (derived)
        {
            return derived_direct_nonvirtual.contains(name);
        }
        else
        {
            auto iter = bases_direct_combined.Map().find(name);
            return iter != bases_direct_combined.Map().end() && !iter->second;
        }
    }
}
