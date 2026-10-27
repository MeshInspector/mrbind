// The wrappers of the C bindings file `MR/test_variant`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::StdVariant::foo`.
 *
 * Calls `MR_StdVariant_foo()`.
 */
export declare function MR_StdVariant_foo(): L.MR_C_std_variant_int32_t_float;

/**
 * Generated from function `MR::StdVariant::bar`.
 *
 * Calls `MR_StdVariant_bar()`.
 */
export declare function MR_StdVariant_bar(_1: L.MR_C_std_variant_int32_t_float_float): void;

/**
 * Generated from function `MR::StdVariant::baz`.
 *
 * Calls `MR_StdVariant_baz()`.
 */
export declare function MR_StdVariant_baz(_1: L.MR_C_std_variant_int32_t_float_std_string): void;

/**
 * Generated from function `MR::StdVariant::blah`.
 *
 * Calls `MR_StdVariant_blah()`.
 */
export declare function MR_StdVariant_blah(): L.MR_C_std_variant_std_monostate_int32_t_float;

