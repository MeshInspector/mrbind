// The wrappers of the C bindings file `MR/test_arrays_of_incomplete_types_2`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Can't use an opaque struct as an array element, because, well, it's opaque. But a enum should work.
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_IncompleteArrayElemType_E
{
}

/**
 * Generated from function `MR::IncompleteArrayElemType::bar`.
 *
 * Calls `MR_IncompleteArrayElemType_bar()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_IncompleteArrayElemType_bar(_1: number): void;

