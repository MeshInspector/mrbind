// The C++ namespace `MR::OverloadSuffix`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_OverloadSuffix_A as A } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_B as B } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_C as C } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_a_1_int as foo_a_1_int } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_a_1_float as foo_a_1_float } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_a_2 as foo_a_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_a_int as bar_a } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_a_float as bar_a_float } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_a_1 as baz_a_1 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_a_2 as baz_a_2 } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadSuffix_A_ref as opPos_MR_OverloadSuffix_A_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadSuffix_A_ref as opPos_const_MR_OverloadSuffix_A_ref } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_b as foo_b_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_b_1 as foo_b_1 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_b_2 as foo_b_2_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_b as bar_b } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_b_float as bar_b_float } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_b as baz_b_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_b_int as baz_b_int } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadSuffix_B_ref as opPos_MR_OverloadSuffix_B_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadSuffix_B_ref as opPos_const_MR_OverloadSuffix_B_ref } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_c_blah as foo_c_blah } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_c_1 as foo_c_1 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_c_2 as foo_c_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_c_blah as bar_c } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_c as bar_c_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_c_blah as baz_c_blah } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_c as baz_c_2 } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadSuffix_C_ref as opPos_MR_OverloadSuffix_C_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadSuffix_C_ref as opPos_const_MR_OverloadSuffix_C_ref } from "../../lib/_all.mjs";

/**
 * Just normal stuff with no annotations:
 * Generated from function `MR::OverloadSuffix::foo_a`.
 *
 * Calls `MR_OverloadSuffix_foo_a_1_int()`.
 */
export declare function foo_a(_1: number): void;
/**
 * Generated from function `MR::OverloadSuffix::foo_a`.
 *
 * Calls `MR_OverloadSuffix_foo_a_2()`.
 */
export declare function foo_a(_1: number, _2: number): void;
/** The overloads of `foo_a` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * Generated from function `MR::OverloadSuffix::baz_a`.
 *
 * Calls `MR_OverloadSuffix_baz_a_1()`.
 */
export declare function baz_a(_1: number): void;
/**
 * Generated from function `MR::OverloadSuffix::baz_a`.
 *
 * Calls `MR_OverloadSuffix_baz_a_2()`.
 */
export declare function baz_a(_1: number, _2: number): void;
/** The overloads of `baz_a` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadSuffix_A_ref()`.
 */
export declare function opAdd(_1: L.MR_OverloadSuffix_A): void;
/**
 * Currently has no effect on those.
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadSuffix_B_ref()`.
 */
export declare function opAdd(_1: L.MR_OverloadSuffix_B): void;
/**
 * Currently has no effect on those.
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadSuffix_C_ref()`.
 */
export declare function opAdd(_1: L.MR_OverloadSuffix_C): void;
/** The overloads of `opAdd` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * With empty suffix:
 * Generated from function `MR::OverloadSuffix::foo_b`.
 *
 * Calls `MR_OverloadSuffix_foo_b()`.
 */
export declare function foo_b(_1: number): void;
/**
 * Generated from function `MR::OverloadSuffix::foo_b`.
 *
 * Calls `MR_OverloadSuffix_foo_b_2()`.
 */
export declare function foo_b(_1: number, _2: number): void;
/** The overloads of `foo_b` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * Generated from function `MR::OverloadSuffix::baz_b`.
 *
 * Calls `MR_OverloadSuffix_baz_b()`.
 */
export declare function baz_b(_1: number): void;
/**
 * Generated from function `MR::OverloadSuffix::baz_b`.
 *
 * Calls `MR_OverloadSuffix_baz_b_int()`.
 */
export declare function baz_b(_1: number, _2: number): void;
/** The overloads of `baz_b` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * With custom suffix:
 * Generated from function `MR::OverloadSuffix::foo_c`.
 *
 * Calls `MR_OverloadSuffix_foo_c_blah()`.
 */
export declare function foo_c(_1: number): void;
/**
 * Generated from function `MR::OverloadSuffix::foo_c`.
 *
 * Calls `MR_OverloadSuffix_foo_c_2()`.
 */
export declare function foo_c(_1: number, _2: number): void;
/** The overloads of `foo_c` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * Generated from function `MR::OverloadSuffix::baz_c`.
 *
 * Calls `MR_OverloadSuffix_baz_c_blah()`.
 */
export declare function baz_c(_1: number): void;
/**
 * Generated from function `MR::OverloadSuffix::baz_c`.
 *
 * Calls `MR_OverloadSuffix_baz_c()`.
 */
export declare function baz_c(_1: number, _2: number): void;
/** The overloads of `baz_c` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
