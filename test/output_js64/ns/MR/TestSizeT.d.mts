// The C++ namespace `MR::TestSizeT`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_TestSizeT_A_unsigned_long as A_unsigned_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_unsigned_long as foo_unsigned_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_unsigned_long_ptr as foo_unsigned_long_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_unsigned_long as foo_std_vector_unsigned_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_long as foo_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_long_ptr as foo_long_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_long as foo_std_vector_long } from "../../lib/_all.mjs";

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_unsigned_long()`.
 */
export declare function foo(_1: number): number;
/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_unsigned_long()`.
 */
export declare function foo(_1: L.MR_C_std_vector_unsigned_long): L.MR_C_std_vector_unsigned_long;
/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_long()`.
 */
export declare function foo(_1: L.MR_C_std_vector_long): L.MR_C_std_vector_long;
/** The overloads of `foo` are resolved at runtime by the argument types; the first declared match wins. */
