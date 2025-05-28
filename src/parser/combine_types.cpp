#include "combine_types.h"
#include "cppdecl/declarations/parse.h"
#include "cppdecl/declarations/to_string.h"

#include <string>
#include <string_view>

namespace mrbind
{
    void CombineSimilarTypes(ParsedFile &file, AdjustTypeNameFunc adjust_type_name)
    {
        decltype(file.type_info) new_parts;

        for (auto outer_it = file.type_info.begin(); outer_it != file.type_info.end();)
        {
            const auto &outer_name = outer_it->first;
            auto &nested_map = outer_it->second;

            for (auto it = nested_map.begin(); it != nested_map.end();)
            {
                std::string new_name = adjust_type_name(it->first);
                if (new_name != outer_name)
                {
                    new_parts.try_emplace(std::move(new_name)).first->second.insert(nested_map.extract(it++));
                    continue;
                }

                ++it;
            }

            if (nested_map.empty())
                outer_it = file.type_info.erase(outer_it);
            else
                ++outer_it;
        }

        // Merge into the original type map.
        while (!new_parts.empty())
        {
            auto result = file.type_info.insert(new_parts.extract(new_parts.begin()));
            if (result.inserted)
                continue;

            // Failed to move the whole entry. Move the elements individually.
            result.position->second.insert(std::make_move_iterator(result.node.mapped().begin()), std::make_move_iterator(result.node.mapped().end()));
        }

        // Merge (logical or) the `has_custom_canonical_name` in every submap.
        for (auto &submap : file.type_info)
        {
            bool value = false;
            for (const auto &elem : submap.second)
            {
                if (elem.second.has_custom_canonical_name)
                {
                    value = true;
                    break;
                }
            }

            if (value)
            {
                for (auto &elem : submap.second)
                    elem.second.has_custom_canonical_name = true;
            }
        }
    }

    AdjustTypeNameFunc MakeAdjustTypeNameFunc(AdjustTypeNameFlags flags)
    {
        return [flags](std::string_view name) -> std::string
        {
            const std::string_view original_name = name;
            auto result = cppdecl::ParseType(name);
            if (auto error = std::get_if<cppdecl::ParseError>(&result))
                throw std::runtime_error("While combining types, cppdecl failed to parse type `" + std::string(name) + "`, error at offset " + std::to_string(name.data() - original_name.data()) + ": " + error->message + " Please report a bug to `https://github.com/MeshInspector/cppdecl` with this type name. Pass `--no-simplify-canonical-type-names` to disable the simplification to work around this.");
            if (!name.empty())
                throw std::runtime_error("While combining types, cppdecl failed to parse type `" + std::string(name) + "`, junk starting at offset " + std::to_string(name.data() - original_name.data()) + ". Please report a bug to `https://github.com/MeshInspector/cppdecl` with this type name. Pass `--no-simplify-canonical-type-names` to disable the simplification to work around this.");

            cppdecl::Type &type = std::get<cppdecl::Type>(result);

            while (true)
            {
                bool progress = false;

                if (bool(flags & AdjustTypeNameFlags::remove_ptr) && type.Is<cppdecl::Pointer>())
                {
                    type.RemoveModifier();
                    progress = true;
                }

                if (bool(flags & AdjustTypeNameFlags::remove_ref) && type.Is<cppdecl::Reference>())
                {
                    type.RemoveModifier();
                    progress = true;
                }

                if (bool(flags & AdjustTypeNameFlags::remove_smart_ptr))
                {
                    if (
                        type.IsOnlyQualifiedName(cppdecl::SingleWordFlags::ignore_template_args) &&
                        type.simple_type.name.parts.size() == 2 &&
                        type.simple_type.name.parts.at(0).AsSingleWord() == "std" &&
                        (
                            type.simple_type.name.parts.at(1).AsSingleWord(cppdecl::SingleWordFlags::ignore_template_args) == "shared_ptr" ||
                            type.simple_type.name.parts.at(1).AsSingleWord(cppdecl::SingleWordFlags::ignore_template_args) == "unique_ptr"
                        ) &&
                        type.simple_type.name.parts.at(1).template_args &&
                        type.simple_type.name.parts.at(1).template_args->args.size() >= 1 && // Here we do allow custom deleters by using `>=`. Not entirely sure if we should continue doing so, we probably should.
                        std::holds_alternative<cppdecl::Type>(type.simple_type.name.parts.at(1).template_args->args.front().var)
                    )
                    {
                        // Move the type into a temporary variable, because moving directly to the parent sounds unsafe.
                        cppdecl::Type elem_type = std::move(std::get<cppdecl::Type>(type.simple_type.name.parts.at(1).template_args->args.front().var));
                        type = std::move(elem_type);
                        progress = true;
                    }
                }

                if (!progress)
                    break;
            }

            return cppdecl::ToCode(type, {});
        };
    }

    AdjustTypeNameFunc MakeAdjustTypeNameFuncLegacyWithoutCppdecl(AdjustTypeNameFlags flags)
    {
        return [flags](std::string_view name) -> std::string
        {
            std::string_view ret = name;

            auto RemovePrefix = [](std::string_view &target, std::string_view prefix) -> bool
            {
                if (target.starts_with(prefix))
                {
                    target.remove_prefix(prefix.size());
                    return true;
                }
                return false;
            };
            auto RemoveSuffix = [](std::string_view &target, std::string_view suffix) -> bool
            {
                if (target.ends_with(suffix))
                {
                    target.remove_suffix(suffix.size());
                    return true;
                }
                return false;
            };

            while (true)
            {
                if (bool(flags & AdjustTypeNameFlags::remove_cv))
                {
                    // This way we can handle both `const`, `volatile`, `const volatile`, and `volatile const`.
                    if (RemovePrefix(ret, "const "))
                        RemovePrefix(ret, "volatile ");
                    if (RemovePrefix(ret, "volatile "))
                        RemovePrefix(ret, "const ");
                }

                if (bool(flags & AdjustTypeNameFlags::remove_ptr))
                {
                    std::string_view ret_copy = ret;
                    if (RemoveSuffix(ret_copy, "const"))
                        RemoveSuffix(ret_copy, "volatile ");
                    if (RemoveSuffix(ret_copy, "volatile"))
                        RemoveSuffix(ret_copy, "const ");
                    while (ret_copy.ends_with(' '))
                        ret_copy.remove_suffix(1);

                    if (ret_copy.ends_with('*'))
                    {
                        ret = ret_copy;
                        ret.remove_suffix(1);
                        while (ret.ends_with(' '))
                            ret.remove_suffix(1);
                    }
                }

                if (bool(flags & AdjustTypeNameFlags::remove_ref))
                {
                    if (RemoveSuffix(ret, "&"))
                    {
                        RemoveSuffix(ret, "&"); // For rvalue references.
                        while (ret.ends_with(' '))
                            ret.remove_suffix(1);
                    }
                }

                // Smart pointers should be stripped LAST, because only they can require looping again.
                if (bool(flags & AdjustTypeNameFlags::remove_smart_ptr))
                {
                    if (ret.ends_with('>'))
                    {
                        if (RemovePrefix(ret, "std::shared_ptr<") || RemovePrefix(ret, "std::unique_ptr<"))
                        {
                            ret.remove_suffix(1);
                            while (ret.ends_with(' '))
                                ret.remove_suffix(1);

                            continue; // Restart the loop! We need this to adjust the template argument in the same way.
                        }
                    }
                }

                break; // We're done.
            }

            return std::string(ret);
        };
    }

    AdjustTypeNameFlags ParseAdjustTypeNameFlags(std::string_view view, char sep)
    {
        if (view.empty())
            throw std::runtime_error("A flag list can't be an empty string.");

        AdjustTypeNameFlags ret{};

        do
        {
            auto TryFlag = [&](AdjustTypeNameFlags bit, std::string_view name)
            {
                if (view.starts_with(name))
                {
                    bool last = view.size() == name.size();
                    if (last || view[name.size()] == sep)
                    {
                        if (bool(ret & bit))
                            throw std::runtime_error("Duplicate flag: " + std::string(name));
                        ret |= bit;
                        view.remove_prefix(name.size() + !last);
                        return true;
                    }
                }
                return false;
            };

            bool ok =
                TryFlag(AdjustTypeNameFlags::remove_cv, "cv") ||
                TryFlag(AdjustTypeNameFlags::remove_ref, "ref") ||
                TryFlag(AdjustTypeNameFlags::remove_ptr, "ptr") ||
                TryFlag(AdjustTypeNameFlags::remove_smart_ptr, "smart_ptr");
            if (!ok)
                throw std::runtime_error("Failed to parse the flag list: " + std::string(view));
        }
        while (!view.empty());

        return ret;
    }
}
