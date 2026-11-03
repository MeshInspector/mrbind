#include "c_output_desc.h"

#include <algorithm>

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

    void RemoveSplitLibrary(OutputDesc &desc, std::string_view group)
    {
        OrderedMap<std::string, TypeDesc> kept_types;
        for (const std::string &name : desc.cpp_types.Vec())
        {
            TypeDesc &type = desc.cpp_types.FindMutable(name)->second;
            const OutputFile *file = nullptr;
            if (auto e = std::get_if<TypeKinds::Enum>(&type.var))
                file = &e->output_file;
            else if (auto c = std::get_if<TypeKinds::Class>(&type.var))
                file = &c->output_file;
            if (!file || file->group != group)
                kept_types.TryEmplace(name, std::move(type));
        }
        desc.cpp_types = std::move(kept_types);

        std::erase_if(desc.functions, [&](const Function &f){return f.output_file.group == group;});
        std::erase_if(desc.typedefs, [&](const Typedef &t){return t.output_file.group == group;});
    }
}
