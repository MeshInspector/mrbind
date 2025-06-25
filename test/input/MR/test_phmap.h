#pragma once

#include <parallel_hashmap/phmap.h>
#include <parallel_hashmap/btree.h>

namespace MR::Phmap
{
    inline void foo(phmap::flat_hash_set<int>) {}
    inline void foo(phmap::flat_hash_map<int, float>) {}
    inline void foo(phmap::node_hash_set<int>) {}
    inline void foo(phmap::node_hash_map<int, float>) {}
    inline void foo(phmap::parallel_flat_hash_set<int>) {}
    inline void foo(phmap::parallel_flat_hash_map<int, float>) {}
    inline void foo(phmap::parallel_node_hash_set<int>) {}
    inline void foo(phmap::parallel_node_hash_map<int, float>) {}
    inline void foo(phmap::btree_set<int>) {}
    inline void foo(phmap::btree_map<int, float>) {}
    inline void foo(phmap::btree_multiset<int>) {}
    inline void foo(phmap::btree_multimap<int, float>) {}
}
