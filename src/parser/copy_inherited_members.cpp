#include "copy_inherited_members.h"

#include <stdexcept>
#include <unordered_map>
#include <unordered_set>
#include <map>

namespace mrbind
{
    void CopyInheritedMembers(ParsedFile &file)
    {
        // Here we need to handle all classes, but the base classes must be handled first. We also need the name-to-class mapping for the bases.
        // So we first collect all known classes into a map, and then handle every class in it.
        // But we also recurse into the bases immediately, because we need them to be handled first. That's why we need the `done` bool.

        struct ClassEntry
        {
            ClassEntity *cl = nullptr;
            bool done = false;

            // All base classes, including indirect ones.
            std::unordered_set<std::string> recursive_bases;
        };
        // Maps every class name to its parsed entity.
        std::unordered_map<std::string, ClassEntry> class_entries;

        // Populate `class_entries`.
        auto VisitContainer = [&](auto &self, EntityContainer &c) -> void
        {
            for (Entity &e : c.nested)
            {
                // Handle classes.
                std::visit(Overload{
                    [&](ClassEntity &cl)
                    {
                        if (!class_entries.try_emplace(cl.full_type, ClassEntry{.cl = &cl, .recursive_bases = {}}).second)
                            throw std::logic_error("Internal error: Duplicate class name: " + cl.full_type);
                    },
                    [](auto &) {}
                }, *e.variant);

                // Recurse into containers.
                std::visit([&]<typename T>(T &elem)
                {
                    if constexpr (std::is_base_of_v<EntityContainer, T>)
                        self(self, elem);
                }, *e.variant);
            }
        };
        VisitContainer(VisitContainer, file.entities);

        // Now visit the classes.

        struct MemberEntry
        {
            // The algorithm descibed in https://eel.is/c++draft/class.member.lookup requires maintaining a SET of the base classes that something comes from.
            // But it's unclear to me when this set can have more than one element (while at the same time not making the member ambiguous),
            //   so for now this always has only one base.
            // If it becomes necessary to add more, they probably need to be added to `DeclInheritedFrom`.
            DeclInheritedFrom inherited_from;

            bool is_ambiguous = true;

            // This is incremental, for sorting purposes.
            int member_id = 0;

            // Having those as pointers is fine, because those only point to the base class methods, and we're already done modifying the base classes.
            std::vector<std::variant<const ClassMethod *, const ClassConvOp *, const ClassField *>> members;
        };
        // This is here to reuse the memory between iterations. In reality, this is per class.
        std::vector<const MemberEntry *> members_to_emit;

        auto VisitClass = [&](auto &self, ClassEntry &e) -> void
        {
            if (e.done)
                return; // Already was handled.
            e.done = true; // Set this immediately, just in case.

            int member_id_counter = 0; // This only needs to be unique per-class, unlike `class_id_counter`.

            // Mark all member functions this class has as shadowed.
            std::unordered_map<std::string, MemberEntry> inherited_methods;
            std::unordered_map<std::string, MemberEntry> inherited_conv_ops;
            std::unordered_map<std::string, MemberEntry> inherited_fields;

            for (const auto &member : e.cl->members)
            {
                std::visit(Overload{
                    [&](const ClassMethod &elem)
                    {
                        // The name is intentionally without the template arguments.
                        // We don't care about the duplicate names here.
                        // We also don't care about `member_id_counter`, because those entries won't be emitted anyway.
                        inherited_methods.try_emplace(elem.name, MemberEntry{});
                    },
                    [&](const ClassConvOp &elem)
                    {
                        inherited_conv_ops.try_emplace(elem.return_type.canonical, MemberEntry{});
                    },
                    [&](const ClassField &elem)
                    {
                        // The name is intentionally without the template arguments.
                        inherited_fields.try_emplace(elem.name, MemberEntry{});
                    },
                    [&](const ClassCtor &) {},
                    [&](const ClassDtor &) {},
                }, member);
            }

            // Recurse into the bases.
            // `e.cl->bases` only stores direct bases (even when they are virtual), but this is fine in this case.
            for (const auto &base : e.cl->bases)
            {
                auto class_iter = class_entries.find(base.type.canonical);
                if (class_iter == class_entries.end())
                    continue; // Silently ignore unknown bases. The language-specific generator should report those anyway.

                // Recursively handle the base first.
                self(self, class_iter->second);

                // Add this base and all its bases to our own list of bases.
                e.recursive_bases.insert(base.type.canonical);
                e.recursive_bases.insert(class_iter->second.recursive_bases.begin(), class_iter->second.recursive_bases.end());

                for (const auto &member : class_iter->second.cl->members)
                {
                    auto HandleMember = [&](const auto &elem, const std::string &name, auto &map)
                    {
                        // Figure out where this method is originally inherited from. Or is it directly from this base?
                        DeclInheritedFrom member_inherited_from;
                        if (elem.inherited_from)
                        {
                            // If the member we're inheriting was itself inherited from something else, reuse that inheritance information.
                            member_inherited_from = *elem.inherited_from;

                            // But also if this is the first virtual base in the chain, remember this fact.
                            if (!member_inherited_from.virtual_base && base.is_virtual)
                                member_inherited_from.virtual_base = base.type.canonical;
                        }
                        else
                        {
                            // Otherwise fill it from this base.
                            member_inherited_from.base = base.type.canonical;
                            if (base.is_virtual)
                                member_inherited_from.virtual_base = base.type.canonical;
                        }

                        // Now merge it into the map!

                        auto [method_iter, is_new] = map.try_emplace(name);
                        if (is_new)
                        {
                            method_iter->second.inherited_from = member_inherited_from;
                            method_iter->second.member_id = member_id_counter++;
                            method_iter->second.is_ambiguous = false;
                        }
                        else
                        {
                            if (method_iter->second.is_ambiguous)
                                return; // Already ambiguous, nothing to do.

                            // Is this the same base type?
                            // This also checks that both virtual bases are the same, or both are unset.
                            if (method_iter->second.inherited_from == member_inherited_from)
                            {
                                if (!member_inherited_from.virtual_base)
                                {
                                    method_iter->second.is_ambiguous = true;
                                    return;
                                }

                                // Otherwise this is legal, but this member should already be in the list, so stop now.
                                return;
                            }
                            else
                            {
                                // Is dominance involved?

                                if (!both_virtual_path)
                                {
                                    // If at least one base isn't on a virtual path,
                                }
                                else if (
                                    const auto &existing_base = class_entries.at(method_iter->second.inherited_from.base);
                                    existing_base.recursive_bases.contains(member_inherited_from.base)
                                )
                                {
                                    // Existing base dominates the new one, nothing to do.
                                    return;
                                }
                                else if (
                                    const auto &new_base = class_entries.at(member_inherited_from.base);
                                    new_base.recursive_bases.contains(method_iter->second.inherited_from.base)
                                )
                                {
                                    // The new base dominates the existing one.

                                    // Destroy the existing contents.
                                    method_iter->second.members.clear();

                                    // Replace the inheritance information.
                                    method_iter->second.inherited_from = member_inherited_from;

                                    // Continue normally to add the new member.
                                }
                                else
                                {
                                    // Neither dominates the other, this is an ambiguity.

                                    method_iter->second.is_ambiguous = true;
                                    return;
                                }
                            }
                        }

                        // Store the method!
                        method_iter->second.members.push_back(&elem);
                    };

                    std::visit(Overload{
                        [&](const ClassMethod &elem)
                        {
                            // The name is intentionally without the template arguments.
                            HandleMember(elem, elem.name, inherited_methods);
                        },
                        [&](const ClassConvOp &elem)
                        {
                            HandleMember(elem, elem.return_type.canonical, inherited_conv_ops);
                        },
                        [&](const ClassField &elem)
                        {
                            // The name is intentionally without the template arguments.
                            HandleMember(elem, elem.name, inherited_fields);
                        },
                        [&](const ClassCtor &) {},
                        [&](const ClassDtor &) {},
                    }, member);
                }
            }

            // Get the list of methods to emit, and sort them by their incremental IDs.
            members_to_emit.clear(); // Reusing the memory!
            members_to_emit.reserve(inherited_methods.size());

            for (const auto &elem : inherited_methods)
            {
                if (!elem.second.is_ambiguous)
                    members_to_emit.push_back(&elem.second);
            }
            for (const auto &elem : inherited_conv_ops)
            {
                if (!elem.second.is_ambiguous)
                    members_to_emit.push_back(&elem.second);
            }
            for (const auto &elem : inherited_fields)
            {
                if (!elem.second.is_ambiguous)
                    members_to_emit.push_back(&elem.second);
            }

            std::sort(members_to_emit.begin(), members_to_emit.end(), [](const MemberEntry *a, const MemberEntry *b){return a->member_id < b->member_id;});

            // Now actually add the methods to the class.
            e.cl->members.reserve(e.cl->members.size() + members_to_emit.size());
            for (const MemberEntry *entry : members_to_emit)
            {
                assert(!entry->is_ambiguous);
                for (const auto &member : entry->members)
                {
                    std::visit([&]<typename T>(const T *elem)
                    {
                        e.cl->members.emplace_back().emplace<T>(*elem).inherited_from = entry->inherited_from;
                    }, member);
                }
            }
        };

        // Finally, visit all the classes.
        for (auto &elem : class_entries)
            VisitClass(VisitClass, elem.second);
    }
}
