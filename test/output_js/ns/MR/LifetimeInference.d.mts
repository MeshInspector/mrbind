// The C++ namespace `MR::LifetimeInference`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_LifetimeInference_A as A } from "../../lib/_all.mjs";
export { MR_LifetimeInference_B as B } from "../../lib/_all.mjs";
export { MR_LifetimeInference_C as C } from "../../lib/_all.mjs";
export { MR_LifetimeInference_begin_MR_LifetimeInference_A as begin_MR_LifetimeInference_A } from "../../lib/_all.mjs";
export { MR_LifetimeInference_end_MR_LifetimeInference_A as end_MR_LifetimeInference_A } from "../../lib/_all.mjs";
export { MR_LifetimeInference_begin_MR_LifetimeInference_B as begin_MR_LifetimeInference_B } from "../../lib/_all.mjs";
export { MR_LifetimeInference_end_MR_LifetimeInference_B as end_MR_LifetimeInference_B } from "../../lib/_all.mjs";

/**
 * Generated from function `MR::LifetimeInference::begin`.
 * The reference to the parameter `a` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_begin_MR_LifetimeInference_A()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function begin(a: L.MR_LifetimeInference_A): number;
/**
 * Generated from function `MR::LifetimeInference::begin`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_begin_MR_LifetimeInference_B()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function begin(b: L.MR_LifetimeInference_B): number;
/** The overloads of `begin` are resolved at runtime by the argument types; the first declared match wins. */
/**
 * Generated from function `MR::LifetimeInference::end`.
 * The reference to the parameter `a` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_end_MR_LifetimeInference_A()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function end(a: L.MR_LifetimeInference_A): number;
/**
 * Generated from function `MR::LifetimeInference::end`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_end_MR_LifetimeInference_B()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function end(b: L.MR_LifetimeInference_B): number;
/** The overloads of `end` are resolved at runtime by the argument types; the first declared match wins. */
