// The C++ namespace `MR::TestSizeT`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_TestSizeT_A_uint64_t as A_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_uint64_t as foo_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_uint64_t_ptr as foo_uint64_t_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_uint64_t as foo_std_vector_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_int64_t as foo_int64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_int64_t_ptr as foo_int64_t_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_int64_t as foo_std_vector_int64_t } from "../../lib/_all.mjs";

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_uint64_t()`.
 */
export declare function foo(_1: number | bigint): bigint;
/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_uint64_t_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function foo(_1: number): number;
/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_uint64_t()`.
 */
export declare function foo(_1: L.MR_C_std_vector_uint64_t): L.MR_C_std_vector_uint64_t;
/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_int64_t()`.
 */
export declare function foo(_1: L.MR_C_std_vector_int64_t): L.MR_C_std_vector_int64_t;
/** The overloads of `foo` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
