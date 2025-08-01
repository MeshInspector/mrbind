#include "generators/c/binding_containers.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdVector : DeriveModule<StdVector>
    {
        MetaContainerBinder binder_vector = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("vector")},
                    .stdlib_container_header = "vector",
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::contiguous,
                .has_mutable_iterators = true,
                .has_resize = true,
                .has_capacity = true,
                .has_front_back = true,
                .has_push_back = true,
                .push_front_requires_assignment = true,
                .insert_requires_assignment = true,
            },
        };

        MetaContainerBinder binder_deque = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("deque")},
                    .stdlib_container_header = "deque",
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::random_access,
                .has_mutable_iterators = true,
                .has_resize = true,
                .has_front_back = true,
                .has_push_back = true,
                .has_push_front = true,
                .insert_requires_assignment = true,
            },
        };

        // Only `std::list`. No `std::forward_list` support for now because the interface is way too different.
        MetaContainerBinder binder_list = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("list")},
                    .stdlib_container_header = "list",
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::bidirectional,
                .has_mutable_iterators = true,
                .has_resize = true,
                .has_front_back = true,
                .has_push_back = true,
                .has_push_front = true,
            },
        };

        MetaContainerBinder binder_set = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("set")},
                    .stdlib_container_header = "set",
                },
                {
                    .generic_cpp_container_names = {
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("btree_set"),
                    },
                    .stdlib_container_header = "parallel_hashmap/btree.h", // Don't have a separate category for third-party headers yet, so this goes into the standard headers. Oh well.
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::bidirectional,
                .is_set = true,
            },
        };

        MetaContainerBinder binder_multiset = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("multiset")},
                    .stdlib_container_header = "set",
                },
                {
                    .generic_cpp_container_names = {
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("btree_multiset"),
                    },
                    .stdlib_container_header = "parallel_hashmap/btree.h", // Don't have a separate category for third-party headers yet, so this goes into the standard headers. Oh well.
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::bidirectional,
                .is_set = true,
                .is_multi = true,
            },
        };

        MetaContainerBinder binder_unordered_set = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("unordered_set")},
                    .stdlib_container_header = "unordered_set",
                },
                {
                    .generic_cpp_container_names = {
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("flat_hash_set"),
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("node_hash_set"),
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("parallel_flat_hash_set"),
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("parallel_node_hash_set"),
                    },
                    .stdlib_container_header = "parallel_hashmap/phmap.h", // Don't have a separate category for third-party headers yet, so this goes into the standard headers. Oh well.
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::forward, // Unordered sets have forward iterators, while the normal sets have bidirectional ones. Interesting!
                .is_set = true,
                .insert_requires_assignment = true, // Huh!
            },
        };

        MetaContainerBinder binder_unordered_multiset = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("unordered_multiset")},
                    .stdlib_container_header = "unordered_set",
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::forward, // Unordered sets have forward iterators, while the normal sets have bidirectional ones. Interesting!
                .is_set = true,
                .is_multi = true,
                .insert_requires_assignment = true, // Huh!
            },
        };

        MetaContainerBinder binder_map = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("map")},
                    .stdlib_container_header = "map",
                },
                {
                    .generic_cpp_container_names = {
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("btree_map"),
                    },
                    .stdlib_container_header = "parallel_hashmap/btree.h", // Don't have a separate category for third-party headers yet, so this goes into the standard headers. Oh well.
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::bidirectional,
                .is_map = true,
                .has_mutable_iterators = true,
            },
        };

        MetaContainerBinder binder_multimap = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("multimap")},
                    .stdlib_container_header = "map",
                },
                {
                    .generic_cpp_container_names = {
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("btree_multimap"),
                    },
                    .stdlib_container_header = "parallel_hashmap/btree.h", // Don't have a separate category for third-party headers yet, so this goes into the standard headers. Oh well.
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::bidirectional,
                .is_map = true,
                .is_multi = true,
                .has_mutable_iterators = true,
            },
        };

        MetaContainerBinder binder_unordered_map = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("unordered_map")},
                    .stdlib_container_header = "unordered_map",
                },
                {
                    .generic_cpp_container_names = {
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("flat_hash_map"),
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("node_hash_map"),
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("parallel_flat_hash_map"),
                        cppdecl::QualifiedName{}.AddPart("phmap").AddPart("parallel_node_hash_map"),
                    },
                    .stdlib_container_header = "parallel_hashmap/phmap.h", // Don't have a separate category for third-party headers yet, so this goes into the standard headers. Oh well.
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::forward,
                .is_map = true,
                .has_mutable_iterators = true,
                .insert_requires_assignment = true, // Huh!
            },
        };

        MetaContainerBinder binder_unordered_multimap = {
            .targets = {
                {
                    .generic_cpp_container_names = {cppdecl::QualifiedName{}.AddPart("std").AddPart("unordered_multimap")},
                    .stdlib_container_header = "unordered_map",
                },
            },
            .params = {
                .iter_category = ContainerBinder::IteratorCategory::forward,
                .is_map = true,
                .is_multi = true,
                .has_mutable_iterators = true,
                .insert_requires_assignment = true, // Huh!
            },
        };

        bool ForEachBinder(auto &&func)
        {
            if (func(binder_vector            )) return true;
            if (func(binder_deque             )) return true;
            if (func(binder_list              )) return true;
            if (func(binder_set               )) return true;
            if (func(binder_multiset          )) return true;
            if (func(binder_unordered_set     )) return true;
            if (func(binder_unordered_multiset)) return true;
            if (func(binder_map               )) return true;
            if (func(binder_multimap          )) return true;
            if (func(binder_unordered_map     )) return true;
            if (func(binder_unordered_multimap)) return true;
            return false;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;
            ForEachBinder([&](MetaContainerBinder &binder){ret = binder.MakeBinding(generator, type); return bool(ret);});

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;

            std::optional<std::string> ret;

            ForEachBinder([&](MetaContainerBinder &binder)
            {
                for (const auto &target : binder.targets)
                {
                    bool found = false;
                    for (const auto &target_name : target.generic_cpp_container_names)
                    {
                        if (name.Equals(target_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                        {
                            found = true;
                            break;
                        }
                    }

                    if (found)
                    {
                        ret = target.stdlib_container_header;
                        return true;
                    }
                }

                return false;
            });

            return ret;
        }
    };
}
