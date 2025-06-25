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
            },
        };

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;
            if (auto ret = binder_vector            .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_deque             .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_list              .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_set               .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_multiset          .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_unordered_set     .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_unordered_multiset.MakeBinding(generator, type)) return ret;
            if (auto ret = binder_map               .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_multimap          .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_unordered_map     .MakeBinding(generator, type)) return ret;
            if (auto ret = binder_unordered_multimap.MakeBinding(generator, type)) return ret;

            return {};
        }
    };
}
