// The C++ namespace `MR::Phmap`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_Phmap_foo_phmap_flat_hash_set_int32_t as foo_phmap_flat_hash_set_int32_t } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_flat_hash_map_int32_t_float as foo_phmap_flat_hash_map_int32_t_float } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_node_hash_set_int32_t as foo_phmap_node_hash_set_int32_t } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_node_hash_map_int32_t_float as foo_phmap_node_hash_map_int32_t_float } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_parallel_flat_hash_set_int32_t as foo_phmap_parallel_flat_hash_set_int32_t } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_parallel_flat_hash_map_int32_t_float as foo_phmap_parallel_flat_hash_map_int32_t_float } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_parallel_node_hash_set_int32_t as foo_phmap_parallel_node_hash_set_int32_t } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_parallel_node_hash_map_int32_t_float as foo_phmap_parallel_node_hash_map_int32_t_float } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_btree_set_int32_t as foo_phmap_btree_set_int32_t } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_btree_map_int32_t_float as foo_phmap_btree_map_int32_t_float } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_btree_multiset_int32_t as foo_phmap_btree_multiset_int32_t } from "../../lib/_all.mjs";
export { MR_Phmap_foo_phmap_btree_multimap_int32_t_float as foo_phmap_btree_multimap_int32_t_float } from "../../lib/_all.mjs";

export function foo(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_flat_hash_set_int32_t))
        return L.MR_Phmap_foo_phmap_flat_hash_set_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_flat_hash_map_int32_t_float))
        return L.MR_Phmap_foo_phmap_flat_hash_map_int32_t_float(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_node_hash_set_int32_t))
        return L.MR_Phmap_foo_phmap_node_hash_set_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_node_hash_map_int32_t_float))
        return L.MR_Phmap_foo_phmap_node_hash_map_int32_t_float(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_parallel_flat_hash_set_int32_t))
        return L.MR_Phmap_foo_phmap_parallel_flat_hash_set_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_parallel_flat_hash_map_int32_t_float))
        return L.MR_Phmap_foo_phmap_parallel_flat_hash_map_int32_t_float(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_parallel_node_hash_set_int32_t))
        return L.MR_Phmap_foo_phmap_parallel_node_hash_set_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_parallel_node_hash_map_int32_t_float))
        return L.MR_Phmap_foo_phmap_parallel_node_hash_map_int32_t_float(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_btree_set_int32_t))
        return L.MR_Phmap_foo_phmap_btree_set_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_btree_map_int32_t_float))
        return L.MR_Phmap_foo_phmap_btree_map_int32_t_float(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_btree_multiset_int32_t))
        return L.MR_Phmap_foo_phmap_btree_multiset_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_phmap_btree_multimap_int32_t_float))
        return L.MR_Phmap_foo_phmap_btree_multimap_int32_t_float(args[0]);
    throw new TypeError("No overload of `foo` accepts these arguments.");
}

